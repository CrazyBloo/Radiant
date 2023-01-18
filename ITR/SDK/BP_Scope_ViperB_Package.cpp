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
	 * 		Name   -> PredefinedFunction ABP_Scope_ViperB_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Scope_ViperB_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Scope_ViperB.BP_Scope_ViperB_C");
		return ptr;
	}

}


