#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "Logging.h"
#include "Utils.h"

#pragma region Injection Vars

const char* dllName = "Radiant-Core.dll";
const wchar_t* procName = L"IntoTheRadius-Win64-Shipping.exe";
DWORD procId = 0;

#pragma endregion 


void Startup()
{
    
    //Do some inital UI stuff, print welcome message
    SetWindowTextW(GetConsoleWindow(), L"Radiant v0.0.1");
    Logging::Info("Radiant, a mod loader for Into the Radius");
    Logging::Info("Searching for game process... (Open your game)");

    //Search for game process at intervals of 50ms
    while (procId == 0)
    {
        procId = Utils::GetProcId(procName);
        Sleep(50);
    }

    Logging::Info("Found Game! Injecting...");
    
    //We sleep for a while here because we don't want to inject right at game startup
    Sleep(5000);
    Utils::Inject(dllName, procId);

    Logging::Info("Injecting complete!");
    
}



int main(int argc, char* argv[])
{
    Startup();

    //This should be fine for now
    while (true)
    {
        
    }
    
    return 0;
}
