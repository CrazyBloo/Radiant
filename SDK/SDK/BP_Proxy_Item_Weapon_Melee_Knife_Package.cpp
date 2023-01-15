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
	 * 		Name   -> PredefinedFunction ABP_Proxy_Item_Weapon_Melee_Knife_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Proxy_Item_Weapon_Melee_Knife_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Proxy_Item_Weapon_Melee_Knife.BP_Proxy_Item_Weapon_Melee_Knife_C");
		return ptr;
	}

}


