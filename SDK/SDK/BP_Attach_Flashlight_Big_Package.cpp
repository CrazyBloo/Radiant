﻿/**
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
	 * 		Name   -> PredefinedFunction ABP_Attach_Flashlight_Big_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Attach_Flashlight_Big_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Attach_Flashlight_Big.BP_Attach_Flashlight_Big_C");
		return ptr;
	}

}


