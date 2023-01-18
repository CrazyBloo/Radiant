/**
 * Name: Into_The_Radius_VR
 * Version: 2.5.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Scope_PU_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Scope_PU_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Scope_PU.BP_Scope_PU_C");
		return ptr;
	}

}


