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
	 * 		Name   -> Function BP_Ammo_5-56.BP_Ammo_5-56_C.GetPhysicsRootComponent
	 * 		Flags  -> ()
	 */
	class UPrimitiveComponent* ABP_Ammo_556_C::GetPhysicsRootComponent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Ammo_5-56.BP_Ammo_5-56_C.GetPhysicsRootComponent");
		
		ABP_Ammo_556_C_GetPhysicsRootComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Ammo_556_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Ammo_556_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ammo_5_56.BP_Ammo_5-56_C");
		return ptr;
	}

}


