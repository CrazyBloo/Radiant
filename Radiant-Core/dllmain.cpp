#include <stdio.h>
#include <windows.h>

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_THREAD_ATTACH:
        //Allocate a console for debugging
        AllocConsole();
        FILE *fDummy;
        freopen_s(&fDummy, "CONOUT$", "w", stdout);
    }
	
    return TRUE;
}

