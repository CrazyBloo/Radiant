﻿/**
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
	 * 		Name   -> PredefinedFunction ABP_PRPlayerState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PRPlayerState_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PRPlayerState.BP_PRPlayerState_C");
		return ptr;
	}

}


