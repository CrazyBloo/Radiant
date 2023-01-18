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
	 * 		Name   -> PredefinedFunction ABP_Dictophone_Mission_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Dictophone_Mission_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Dictophone_Mission.BP_Dictophone_Mission_C");
		return ptr;
	}

}


