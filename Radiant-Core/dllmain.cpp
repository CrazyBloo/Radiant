#include <stdio.h>
#include <windows.h>
#include "MinHook.h"
#include "../Radiant/Logging.h"
#include "../SDK/SDK.h"

#pragma comment(lib, "MinHook.x64.lib")

bool init = false;

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

