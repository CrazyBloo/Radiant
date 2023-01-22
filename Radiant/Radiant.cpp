#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "Logging.h"
#include "Utils.h"

DWORD procId = 0;
bool injected = false;

void Startup()
{
    //Do some inital UI stuff, print welcome message
    SetWindowTextW(GetConsoleWindow(), L"Radiant v0.1");
    Logging::Info("Radiant, a mod loader for Into the Radius", false);
    Logging::Info("Searching for game process... (Open your game)", false);

    //Search for game process at intervals of 100ms
    while (procId == 0)
    {
        procId = Utils::GetProcId();
        Sleep(100);
    }

    Logging::Info("Found Game! Injecting...", false);
    
    //We sleep for a while here because we don't want to inject right at game startup
    Sleep(5000);

    if (Utils::Inject(procId)) 
    {
        Logging::Info("Injecting complete", false);
        injected = true;
    }
    else Logging::Error("Injection failed", false);
    
}



int main(int argc, char* argv[])
{
    Startup();

    //This should be fine for now
    while (true)
    {
        if (injected)
        {
            Logging::Info("Radiant-Core Loaded! This window will close...", false);
            Sleep(2500);
            return(0);
        }
    }
    
    return 0;
}
