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
	 * 		Name   -> PredefinedFunction ADBP_Step_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADBP_Step_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DBP_Step.DBP_Step_C");
		return ptr;
	}

}


