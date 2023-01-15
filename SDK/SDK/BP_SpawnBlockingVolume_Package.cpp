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
	 * 		Name   -> Function BP_SpawnBlockingVolume.BP_SpawnBlockingVolume_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_SpawnBlockingVolume_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnBlockingVolume.BP_SpawnBlockingVolume_C.UserConstructionScript");
		
		ABP_SpawnBlockingVolume_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SpawnBlockingVolume_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SpawnBlockingVolume_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpawnBlockingVolume.BP_SpawnBlockingVolume_C");
		return ptr;
	}

}


