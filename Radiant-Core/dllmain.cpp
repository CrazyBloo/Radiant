#include <future>
#include <stdio.h>
#include <windows.h>

#include "Hooks.h"
#include "MinHook.h"
#include "../Radiant/Logging.h"
#include "../ITR/SDK.h"
#include "Memory.h"
#include "Patterns.h"

#include "../ITR/SDK/AssetRegistry_Package.cpp"

#pragma comment(lib, "MinHook.x64.lib")

bool init = false;

void StartSdk()
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
    
    UObject::GObjects = reinterpret_cast<TUObjectArray*>(gObjAddr + 0x10);
    FName::GNames = reinterpret_cast<FNamePool*>((DWORD*)gNameAddr);
    UWorld::GWorld = reinterpret_cast<UWorld**>(gWorldAddr);
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
    StartSdk();
    Logging::Info("SDK Initialized");

    //Hook Process Event, this gets called everytime a bluprint function is ran
    auto processEventAddr = Memory::PatternScan(Patterns::ProcessEventSig);
    if (Memory::Hook(processEventAddr, &Hooks::hkProcessEvent,  reinterpret_cast<LPVOID*>(&Hooks::OProcessEvent))) Logging::Info("Hooked Process Event");

    //Hook Engine Tick, called every frame
    auto engineTickAddr = Memory::PatternScan(Patterns::EngineTickSig);
    if (Memory::Hook(engineTickAddr, &Hooks::hkEngineTick,  reinterpret_cast<LPVOID*>(&Hooks::OEngineTick))) Logging::Info("Hooked Engine Tick");

    //Scan for StaticLoadObject, we use this to load custom assets
    auto staticLoadObjectAddr = Memory::PatternScan(Patterns::StaticLoadObjectSig);
    staticLoadObjectAddr += 0x7;
    Hooks::StaticLoadObjectAddr = (DWORD64)Memory::GetAddressPTR(staticLoadObjectAddr, 0x1, 0x5);
    
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

