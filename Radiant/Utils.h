#pragma once
#include <Windows.h>
#include <TlHelp32.h>
#include <filesystem>
#include <fstream>

#include "Utils.h"


namespace Utils
{
    size_t cSize = 260;
    std::wstring wc( cSize, L'#' );
    
    DWORD GetProcId(const wchar_t* procName)
    {
        DWORD procId = 0;
        HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

        if (hSnap != INVALID_HANDLE_VALUE)
        {
            PROCESSENTRY32 procEntry;
            procEntry.dwSize = sizeof(procEntry);
            char* procNameArr;
            if (Process32First(hSnap, &procEntry))
            {
                do
                {
                    if (!_wcsicmp(procEntry.szExeFile, procName))
                    {
                        procId = procEntry.th32ProcessID;
                        break;
                    }
                } while (Process32Next(hSnap, &procEntry));
            }
        }
        CloseHandle(hSnap);
        return procId;
    }

    //Some shit i found on stackoverflow seriously dont get why this is so much easier in c#
    std::string getCurrentDirectoryOnWindows()
    {
        const unsigned long maxDir = 260;
        char currentDir[maxDir];
        GetCurrentDirectoryA(maxDir, currentDir);
        return std::string(currentDir);
    }
    

    void Inject(const char* dllName, DWORD procId)
    {
        HANDLE hProc = OpenProcess(PROCESS_ALL_ACCESS, 0, procId);

        if (hProc && hProc != INVALID_HANDLE_VALUE)
        {
            //Allocate memory for our dll in game process
            void* loc = VirtualAllocEx(hProc, 0, MAX_PATH, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);

            const char* dllCombined = (getCurrentDirectoryOnWindows() + "\\" + std::string(dllName)).c_str();

            //Write the path to our dll to the memory reserved in the game process
            WriteProcessMemory(hProc, loc, dllCombined, strlen(dllCombined) +1, 0);
            //Start a thread to our dll
            HANDLE hThread = CreateRemoteThread(hProc, 0, 0, (LPTHREAD_START_ROUTINE)LoadLibraryA, loc, 0, 0);

            //Cleanup
            if (hThread)
            {
                CloseHandle(hThread);
            }
            
            if (hProc)
            {
                CloseHandle(hProc);
            }
        }
        
    }
    
}
