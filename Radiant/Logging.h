#pragma once
#include <chrono>
#include <codecvt>
#include <iostream>
#include <fstream>
#include <string>
#include "color.hpp"


class Logging final
{

public:

    static inline std::ofstream outfile;

    static void Info(std::string str)
    {
        if (!outfile.is_open()) outfile.open("Radiant-Log.txt", std::ios_base::app);
        time_t _time = time(NULL);
        tm* pTime = localtime(&_time);
        
        std::cout << "[" << std::to_string(pTime->tm_hour) + ":" + std::to_string(pTime->tm_min) + ":" + std::to_string(pTime->tm_sec) << "]" << dye::aqua("[INFO] ") << str << std::endl;
        outfile << "[" << std::to_string(pTime->tm_hour) + ":" + std::to_string(pTime->tm_min) + ":" + std::to_string(pTime->tm_sec) << "]" << dye::aqua("[INFO] ") << str << std::endl;
        outfile.close();
    }
    
    static void Info(std::string str, bool shouldLog)
    {
        if (!outfile.is_open() && shouldLog) outfile.open("Radiant-Log.txt", std::ios_base::app);
        time_t _time = time(NULL);
        tm* pTime = localtime(&_time);
        
        std::cout << "[" << std::to_string(pTime->tm_hour) + ":" + std::to_string(pTime->tm_min) + ":" + std::to_string(pTime->tm_sec) << "]" << dye::aqua("[INFO] ") << str << std::endl;
        if (shouldLog) outfile << "[" << std::to_string(pTime->tm_hour) + ":" + std::to_string(pTime->tm_min) + ":" + std::to_string(pTime->tm_sec) << "]" << dye::aqua("[INFO] ") << str << std::endl;
        outfile.close();
    }

    static void Error(std::string str)
    {
        if (!outfile.is_open()) outfile.open("Radiant-Log.txt", std::ios_base::app);
        time_t _time = time(NULL);
        tm* pTime = localtime(&_time);
        
        std::cout << "[" << std::to_string(pTime->tm_hour) + ":" + std::to_string(pTime->tm_min) + ":" + std::to_string(pTime->tm_sec) << "]" << dye::red("[ERROR] ") << str << std::endl;
        outfile << "[" << std::to_string(pTime->tm_hour) + ":" + std::to_string(pTime->tm_min) + ":" + std::to_string(pTime->tm_sec) << "]" << dye::red("[ERROR] ") << str << std::endl;
        outfile.close();
    }
    
    static void Error(std::string str, bool shouldLog)
    {
        if (!outfile.is_open() && shouldLog) outfile.open("Radiant-Log.txt", std::ios_base::app);
        time_t _time = time(NULL);
        tm* pTime = localtime(&_time);
        
        std::cout << "[" << std::to_string(pTime->tm_hour) + ":" + std::to_string(pTime->tm_min) + ":" + std::to_string(pTime->tm_sec) << "]" << dye::red("[ERROR] ") << str << std::endl;
        if (shouldLog) outfile << "[" << std::to_string(pTime->tm_hour) + ":" + std::to_string(pTime->tm_min) + ":" + std::to_string(pTime->tm_sec) << "]" << dye::red("[ERROR] ") << str << std::endl;
        outfile.close();
    }

    static std::wstring s2ws(const std::string& str)
    {
        using convert_typeX = std::codecvt_utf8<wchar_t>;
        std::wstring_convert<convert_typeX, wchar_t> converterX;

        return converterX.from_bytes(str);
    }

    static std::string ws2s(const std::wstring& wstr)
    {
        using convert_typeX = std::codecvt_utf8<wchar_t>;
        std::wstring_convert<convert_typeX, wchar_t> converterX;

        return converterX.to_bytes(wstr);
    }
    
};
