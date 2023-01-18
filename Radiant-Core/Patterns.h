#pragma once
#include <string>

//I got most of these sigs from https://github.com/RussellJerome/UnrealModLoader/
//If you ever need help unreal modding this guys youtube is great ^

namespace Patterns
{
    static const char* GNameSig = "74 09 48 8D 15 ? ? ? ? EB 16";
    static const char* GObjSig = "8B 46 10 3B 46 3C 75 0F 48 8B D6 48 8D 0D ? ? ? ? E8";
    static const char* GWorldSig = "0F 2E ? 74 ? 48 8B 1D ? ? ? ? 48 85 DB 74";
    
    static const char* ProcessEventSig = "75 0E ? ? ? 48 ? ? 48 ? ? E8 ? ? ? ? 48 8B ? 24 ? 48 8B ? 24 38 48 8B ? 24 40";
    static const char* StaticLoadObjectSig = "48 8B C8 89 5C 24 20 E8 ? ? ? ? 48";
    
    
}
