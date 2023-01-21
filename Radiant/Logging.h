#pragma once
#include <chrono>
#include <iostream>
#include <string>
#include "color.hpp"

class Logging final
{
    
public:
    
    static void Info(std::string str)
    {
        
        time_t _time = time(NULL);
        tm* pTime = localtime(&_time);
        
        std::cout << "[" << std::to_string(pTime->tm_hour) + ":" + std::to_string(pTime->tm_min) + ":" + std::to_string(pTime->tm_sec) << "]" << dye::aqua("[INFO] ") << str << std::endl;
    }

    static void Error(std::string str)
    {
        time_t _time = time(NULL);
        tm* pTime = localtime(&_time);
        
        std::cout << "[" << std::to_string(pTime->tm_hour) + ":" + std::to_string(pTime->tm_min) + ":" + std::to_string(pTime->tm_sec) << "]" << dye::red("[ERROR] ") << str << std::endl;
    }
    
};
