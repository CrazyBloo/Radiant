#pragma once

#include "Memory.h"
#include "../Radiant/Logging.h"
#include "../ITR/SDK.h"

using namespace CG;

namespace Hooks
{

#pragma region Engine Functions
    
    DWORD64 StaticLoadObjectAddr;
    DWORD64 SpawnActorAddress;

    DWORD64 CallFunctionAddr;
    
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

#pragma region Process Event Hook

    typedef void (__thiscall *tProcessEvent)(UObject*, UFunction*, void*);
    tProcessEvent OProcessEvent = nullptr;

    void hkProcessEvent(UObject* pCallObject, UFunction* pUFunc, void* pParms)
    {
        OProcessEvent(pCallObject, pUFunc, pParms);
    }

#pragma endregion 
    
#pragma region Engine Tick Hook
    
    typedef void (__thiscall *tEngineTick)(UGameEngine*, float, bool);
    tEngineTick OEngineTick = nullptr;

    int tickCount;
    bool loadedAssets;
    void hkEngineTick(UGameEngine* self, float unk_float, bool unk_bool)
    {
        if (!loadedAssets)
        {
            tickCount++;

            //We wait some ticks here so we dont load right at startup
            if (tickCount >= 200)
            {
                auto testobj = LoadClassFromPath(L"/Game/Radiant-Mod.Radiant-Mod_C");
                if (testobj != nullptr)
                {

                    printf("\n");
                    
                    Logging::Info("Loaded Asset : " + testobj->GetFullName());
                    auto gworld = *UWorld::GWorld;

                    FTransform spawnTransform = FTransform();

                    auto gameplayStats = UObject::FindObject<UGameplayStatics>("GameplayStatics Engine.Default__GameplayStatics");

                    auto testactor = gameplayStats->BeginSpawningActorFromClass(gworld, testobj, spawnTransform, true, NULL);
                    
                    if (testactor != nullptr)
                    {
                        Logging::Info("Spawned object : " + testactor->GetFullName());
                        if (testactor->CallFunctionByNameWithArguments(L"OnModLoaded", nullptr, NULL, true)) Logging::Info("Called Radiant-Mod : On Mod Loaded");
                        else Logging::Error("Couldnt call mod loaded");
                    }
                    else Logging::Error("Couldnt spawn mod actor");
                    
                }
                else Logging::Info("Couldnt load mod actor");
                loadedAssets = true;
            }
            
        }
        
        
        OEngineTick(self, unk_float, unk_bool);
    }

#pragma endregion

};
