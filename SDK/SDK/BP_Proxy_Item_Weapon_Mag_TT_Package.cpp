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
	 * 		Name   -> PredefinedFunction ABP_Proxy_Item_Weapon_Mag_TT_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Proxy_Item_Weapon_Mag_TT_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Proxy_Item_Weapon_Mag_TT.BP_Proxy_Item_Weapon_Mag_TT_C");
		return ptr;
	}

}

