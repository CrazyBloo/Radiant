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
	 * 		Name   -> Function BP_ProfilingCameraPlacement.BP_ProfilingCameraPlacement_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ProfilingCameraPlacement_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfilingCameraPlacement.BP_ProfilingCameraPlacement_C.ReceiveBeginPlay");
		
		ABP_ProfilingCameraPlacement_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ProfilingCameraPlacement.BP_ProfilingCameraPlacement_C.ExecuteUbergraph_BP_ProfilingCameraPlacement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ProfilingCameraPlacement_C::ExecuteUbergraph_BP_ProfilingCameraPlacement(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfilingCameraPlacement.BP_ProfilingCameraPlacement_C.ExecuteUbergraph_BP_ProfilingCameraPlacement");
		
		ABP_ProfilingCameraPlacement_C_ExecuteUbergraph_BP_ProfilingCameraPlacement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ProfilingCameraPlacement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ProfilingCameraPlacement_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProfilingCameraPlacement.BP_ProfilingCameraPlacement_C");
		return ptr;
	}

}


