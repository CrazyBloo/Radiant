#include <stdio.h>
#include <windows.h>

#include "Hooks.h"
#include "MinHook.h"
#include "../Radiant/Logging.h"
#include "../SDK/SDK.h"
#include "Memory.h"
#include "Patterns.h"

#pragma comment(lib, "MinHook.x64.lib")

bool init = false;

void InitSdk()
{
    auto gObjSig = Memory::PatternScan(Patterns::GObjSig);
    auto GObjectOffset = *reinterpret_cast<uint32_t*>(gObjSig + 14);
    DWORD64 gObjAddr = (DWORD64)(gObjSig + 18 + GObjectOffset);
    
    auto gNameSig = Memory::PatternScan(Patterns::GNameSig);
    auto FPoolPatoffset = *reinterpret_cast<uint32_t*>(gNameSig + 5);
    DWORD64 gNameAddr = (DWORD64)(gNameSig + 9 + FPoolPatoffset);
    
    auto gWorldSig = Memory::PatternScan(Patterns::GWorldSig);
    auto GWorldOffset = *reinterpret_cast<uint32_t*>(gWorldSig + 8);
    DWORD64 gWorldAddr = (DWORD64)(gWorldSig + 12 + GWorldOffset);
    
    CG::UObject::GObjects = reinterpret_cast<CG::TUObjectArray*>(gObjAddr + 0x10);
    CG::FName::GNames = reinterpret_cast<CG::FNamePool*>((DWORD*)gNameAddr);
    CG::UWorld::GWorld = reinterpret_cast<CG::UWorld**>(gWorldAddr);
}

void StartCore(HMODULE hMod)
{
    if (init) return;
    
    //Allocate a console for debugging
    AllocConsole();
    FILE *fDummy;
    freopen_s(&fDummy, "CONOUT$", "w", stdout);

    Logging::Info("Initializing Radiant-Core");
    
    //Initialize MinHook
    if (MH_Initialize() != MH_OK)
    {
        Logging::Error("Failed to initialize minhook");
    } else Logging::Info("MinHook Initialized");
    
    init = true;

    //Initialize the SDK
    InitSdk();
    Logging::Info("SDK Initialized");
    
    auto processEventAddr = Memory::PatternScan(Patterns::ProcessEventSig);
    if (Memory::Hook(processEventAddr, &Hooks::hkProcessEvent,  reinterpret_cast<LPVOID*>(&Hooks::OProcessEvent))) Logging::Info("Hooked Process Event");


    
    Logging::Info("Radiant-Core Initialized");
    
}



BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_THREAD_ATTACH:
        StartCore(hModule);
    case DLL_THREAD_DETACH:
        break;
    }
	
    return TRUE;
}

