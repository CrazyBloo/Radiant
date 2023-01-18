#pragma once
#include <Windows.h>
#include <TlHelp32.h>
#include <filesystem>
#include <fstream>



namespace Utils
{
    //size_t cSize = 260;
    //std::wstring wc( cSize, L'#' );
    
    const char* dllName = "Radiant-Core.dll";
    
    DWORD GetProcId()
    {
        DWORD procId = 0;
        //Captures all running processes
        HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

        //If our capture is valid, we enumerate all process and return the game process
        if (hSnap != INVALID_HANDLE_VALUE)
        {
            PROCESSENTRY32 procEntry;
            procEntry.dwSize = sizeof(procEntry);
            if (Process32First(hSnap, &procEntry))
            {
                do
                {
                    if (!_wcsicmp(procEntry.szExeFile, L"IntoTheRadius-Win64-Shipping.exe"))
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
    std::string _GetCurrentDirectory()
    {
        const unsigned long maxDir = 260;
        char currentDir[maxDir];
        GetCurrentDirectoryA(maxDir, currentDir);
        return std::string(currentDir);
    }
    

    bool Inject(DWORD procId)
    {
        HANDLE hProc = OpenProcess(PROCESS_ALL_ACCESS, 0, procId);

        if (hProc && hProc != INVALID_HANDLE_VALUE)
        {
            //Allocate memory in game process
            void* loc = VirtualAllocEx(hProc, 0, MAX_PATH, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);

            //dllCombined = CurrentDirectory/Radiant-Core.dll
            const char* dllCombined = (_GetCurrentDirectory() + "\\" + std::string(dllName)).c_str();
            
            //Write the path to our dll to the memory reserved in the game process
            if (loc)
            {
                WriteProcessMemory(hProc, loc, dllCombined, strlen(dllCombined) +1, 0);
            } else
            {
                return false;
            }
            
            //Start a thread to our dll (Radiant-Core)
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

            return true;
            
        }
        return false;
        
    }
    
}
