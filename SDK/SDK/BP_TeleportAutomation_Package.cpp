/**
 * Name: Into_The_Radius_VR
 * Version: 2.4
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
	 * 		Name   -> PredefinedFunction UBP_TeleportAutomation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_TeleportAutomation_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_TeleportAutomation.BP_TeleportAutomation_C");
		return ptr;
	}

}


