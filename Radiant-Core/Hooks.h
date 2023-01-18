#pragma once

#include "../Radiant/Logging.h"
#include "../ITR/SDK.h"

namespace Hooks
{
#pragma region Process Event Hook

    typedef void (__thiscall *tProcessEvent)(CG::UObject*, CG::UFunction*, void*);
    tProcessEvent OProcessEvent = nullptr;

    void hkProcessEvent(CG::UObject* pCallObject, CG::UFunction* pUFunc, void* pParms)
    {
        OProcessEvent(pCallObject, pUFunc, pParms);
    }
    

#pragma endregion
    
};
