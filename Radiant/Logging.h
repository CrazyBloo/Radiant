#pragma once
#include <iostream>
#include <string>

class Logging final
{
    
public:
    
    static void Info(std::string str)
    {
        std::cout << str << std::endl;
    }

    static void Error(std::string str)
    {
        std::cout << str << std::endl;
    }
    
};
