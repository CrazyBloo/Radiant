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
	 * 		Name   -> PredefinedFunction UDT_AnomalyEnvironment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDT_AnomalyEnvironment_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DT_AnomalyEnvironment.DT_AnomalyEnvironment_C");
		return ptr;
	}

}


