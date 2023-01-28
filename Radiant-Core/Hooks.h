#pragma once

#include "Memory.h"
#include "../Radiant/Logging.h"
#include "../ITR/SDK.h"
#include "../ITR/SDK/VRExpansionPlugin_Package.cpp"

using namespace CG;

namespace Hooks
{

#pragma region Engine Functions
    
    DWORD64 StaticLoadObjectAddr;
    DWORD64 SpawnActorAddress;

    DWORD64 CallFunctionAddr;

    std::vector<std::wstring> modNames;
    std::vector<AActor*> modActors;

    UReplicatedVRCameraComponent* GCamera;
    
    bool CallFunctionByNameWithArguments(UObject* obj, const wchar_t* Str, void* Ar, UObject* Executor, bool bForceCallWithNonExec)
    {
        return reinterpret_cast<bool (*)(UObject*, const wchar_t*, void*, UObject*, bool)>(CallFunctionAddr)(obj, Str, Ar, Executor, bForceCallWithNonExec);
    }
    
    UObject* StaticLoadObject(class UClass* uclass, UObject* InOuter, const wchar_t* InName, const wchar_t* Filename, unsigned int LoadFlags, void* Sandbox, bool bAllowObjectReconciliation)
    {
        return reinterpret_cast<UObject * (__fastcall*)(class UClass*, UObject*, const wchar_t*, const wchar_t*, unsigned int, void*, bool)>(StaticLoadObjectAddr)(uclass, InOuter, InName, Filename, LoadFlags, Sandbox, bAllowObjectReconciliation);
    }

    UClass* LoadClassFromPath(const wchar_t* InName)
    {
        return (UClass*)StaticLoadObject(UClass::StaticClass(), nullptr, InName, nullptr, 0, nullptr, false);
    }

#pragma endregion 

#pragma region Process Function Hook

    typedef void (*tProcessFunction)(UObject*, FFrame*, void*);
    tProcessFunction OProcessFunction;

    struct DebugLogParms
    {
        FString OutString;
    };

    UFunction* GetCameraPosFunc;
    UFunction* GetCameraRotFunc;
    UFunction* GetModMenuNamesFunc;
    
    struct GetCameraPositionParms
    {
        FVector OutputVec;
    };

    struct GetCameraRotationParms
    {
        FRotator OutputRot;
    };

    struct GetModMenuListParms
    {
        FString OutName;
        UClass* widgetClass;
    };
    
    void hkProcessFunction(UObject* contextObj, FFrame* pFunc, void* pPtr)
    {
        if (pFunc->Node->GetName() == "RD-GetCameraPosition")
        {
            GetCameraPositionParms posParms;
            GetCameraRotationParms rotParms;
            
            if (GCamera != nullptr)
            {
                posParms.OutputVec = GCamera->K2_GetComponentLocation();
                rotParms.OutputRot = GCamera->K2_GetComponentRotation();
            }

            if (GetCameraPosFunc && GetCameraRotFunc)
            {
                contextObj->ProcessEvent(GetCameraPosFunc, &posParms);
                contextObj->ProcessEvent(GetCameraRotFunc, &rotParms);
            } else Logging::Error("Couldn't find Radiant-Mod to initialize Mod Menu");
            
        }

        if (pFunc->Node->GetName() == "RD-GetModMenuList")
        {
            for (auto mod_name : modNames)
            {
                auto modconfigname = std::wstring(L"/Game/").append(mod_name).append(L"/ModConfig.ModConfig_C");
                auto modconfig = LoadClassFromPath(modconfigname.c_str());

                if (modconfig != nullptr)
                {
                    GetModMenuListParms nameParms;
                    nameParms.OutName = FString{mod_name.c_str()};
                    nameParms.widgetClass = modconfig;
                    contextObj->ProcessEvent(GetModMenuNamesFunc, &nameParms);
                }
            }
        }

        if (pFunc->Node->GetName() == "RD-PrintToModLoader")
        {
            auto outString = pFunc->GetInputParams<DebugLogParms>();
            Logging::Info(outString->OutString.ToString());
        }

        return OProcessFunction(contextObj, pFunc, pPtr);
        
    }

#pragma endregion 
    
#pragma region Engine Tick Hook
    
    typedef void (__thiscall *tEngineTick)(UGameEngine*, float, bool);
    tEngineTick OEngineTick = nullptr;
    
    int tickCount;
    bool loadedAssets;
    bool foundPlayer;
    void hkEngineTick(UGameEngine* self, float unk_float, bool unk_bool)
    {

        if (!foundPlayer)
        {
            tickCount++;

            if (tickCount >= 600)
            {
                GCamera = UObject::FindObject<UReplicatedVRCameraComponent>("ReplicatedVRCameraComponent L_Common.L_Common.PersistentLevel.RadiusPlayerCharacter.VR Replicated Camera");
                GetCameraPosFunc = UObject::FindObject<UFunction>("Function ModActor.ModActor_C.GetCameraPos");
                GetCameraRotFunc = UObject::FindObject<UFunction>("Function ModActor.ModActor_C.GetCameraRot");
                GetModMenuNamesFunc = UObject::FindObject<UFunction>("Function ModActor.ModActor_C.GetModMenuNames");
                foundPlayer = true;
            }
            
        }
        
        if (!loadedAssets)
        {
            //End line here to seperate the OVR plugin debug output
            if (tickCount == 0) printf("\n");
            
            //We wait some ticks here so we dont load right at startup
            if (tickCount >= 200)
            {
                for (auto mod_name : modNames)
                {
                    auto modclassname = std::wstring(L"/Game/").append(mod_name).append(L"/ModActor.ModActor_C");
                    auto modclass = LoadClassFromPath(modclassname.c_str());

                    if (modclass != nullptr)
                    {
                        auto gworld = *UWorld::GWorld;
                        FTransform spawnTransform = FTransform();

                        auto gameplayStats = UObject::FindObject<UGameplayStatics>("GameplayStatics Engine.Default__GameplayStatics");

                        auto modactor = gameplayStats->BeginSpawningActorFromClass(gworld, modclass, spawnTransform, true, NULL);
                    
                        if (modactor != nullptr)
                        {
                            Logging::Info("Spawned ModActor : " + Logging::ws2s(mod_name));
                            modActors.push_back(modactor);
                            if (modactor->CallFunctionByNameWithArguments(L"OnModLoaded", nullptr, NULL, true)) Logging::Info("Called " + Logging::ws2s(mod_name) + " : On Mod Loaded");
                            else Logging::Error("Couldnt call mod loaded");

                            

                            
                        } else Logging::Error("Couldn't spawn mod actor");
                        
                    } else Logging::Error("Couldn't load mod class");
                    loadedAssets = true;
                }
            }
            
        } else
        {
            for (auto mod_actor : modActors)
            {
                mod_actor->CallFunctionByNameWithArguments(L"EngineTick", nullptr, NULL, true);
            }

            
            
        }
        
        
        OEngineTick(self, unk_float, unk_bool);
    }

#pragma endregion

};
