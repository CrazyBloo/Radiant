#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "Logging.h"
#include "Utils.h"

DWORD procId = 0;
void Startup()
{
    
    //Do some inital UI stuff, print welcome message
    SetWindowTextW(GetConsoleWindow(), L"Radiant v0.1");
    Logging::Info("Radiant, a mod loader for Into the Radius");
    Logging::Info("Searching for game process... (Open your game)");

    //Search for game process at intervals of 100ms
    while (procId == 0)
    {
        procId = Utils::GetProcId();
        Sleep(100);
    }

    Logging::Info("Found Game! Injecting...");
    
    //We sleep for a while here because we don't want to inject right at game startup
    Sleep(5000);

    if (Utils::Inject(procId)) Logging::Info("Injecting complete");
    else Logging::Error("Injection failed");
    
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
