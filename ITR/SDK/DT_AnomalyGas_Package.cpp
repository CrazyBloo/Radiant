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
	 * 		Name   -> PredefinedFunction UDT_AnomalyGas_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDT_AnomalyGas_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DT_AnomalyGas.DT_AnomalyGas_C");
		return ptr;
	}

}


