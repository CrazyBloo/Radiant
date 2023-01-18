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
	 * 		Name   -> Function BP_Ammo_9x18SS.BP_Ammo_9x18SS_C.GetPhysicsRootComponent
	 * 		Flags  -> ()
	 */
	class UPrimitiveComponent* ABP_Ammo_9x18SS_C::GetPhysicsRootComponent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Ammo_9x18SS.BP_Ammo_9x18SS_C.GetPhysicsRootComponent");
		
		ABP_Ammo_9x18SS_C_GetPhysicsRootComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Ammo_9x18SS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Ammo_9x18SS_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ammo_9x18SS.BP_Ammo_9x18SS_C");
		return ptr;
	}

}


