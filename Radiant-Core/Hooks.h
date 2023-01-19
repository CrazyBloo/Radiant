#pragma once

#include "../Radiant/Logging.h"
#include "../ITR/SDK.h"

using namespace CG;

namespace Hooks
{
    DWORD64 StaticLoadObjectAddr;
    
    UObject* StaticLoadObject(class UClass* uclass, UObject* InOuter, const wchar_t* InName, const wchar_t* Filename, unsigned int LoadFlags, void* Sandbox, bool bAllowObjectReconciliation)
    {
        return reinterpret_cast<UObject * (__fastcall*)(class UClass*, UObject*, const wchar_t*, const wchar_t*, unsigned int, void*, bool)>(StaticLoadObjectAddr)(uclass, InOuter, InName, Filename, LoadFlags, Sandbox, bAllowObjectReconciliation);
    }


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

            if (tickCount >= 500)
            {
                auto testobj = (UClass*)StaticLoadObject(UClass::StaticClass(), nullptr, L"/Game/TestMod.TestMod_C", nullptr, 0, nullptr, false);
                if (testobj != nullptr) printf("\n  Loaded Asset: %s", testobj->GetFullName().c_str());
                else Logging::Info("Couldnt load mod actor");
                loadedAssets = true;
            }
            
        }
        
        
        OEngineTick(self, unk_float, unk_bool);
    }

#pragma endregion

};
