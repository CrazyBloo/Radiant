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
	 * 		Name   -> Function BP_Anomaly_Cube.BP_Anomaly_Cube_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Cube_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Cube.BP_Anomaly_Cube_C.UserConstructionScript");
		
		ABP_Anomaly_Cube_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Cube.BP_Anomaly_Cube_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Cube_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Cube.BP_Anomaly_Cube_C.ReceiveBeginPlay");
		
		ABP_Anomaly_Cube_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Cube.BP_Anomaly_Cube_C.OnOverlapTimer
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Cube_C::OnOverlapTimer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Cube.BP_Anomaly_Cube_C.OnOverlapTimer");
		
		ABP_Anomaly_Cube_C_OnOverlapTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Cube.BP_Anomaly_Cube_C.ExecuteUbergraph_BP_Anomaly_Cube
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Cube_C::ExecuteUbergraph_BP_Anomaly_Cube(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Cube.BP_Anomaly_Cube_C.ExecuteUbergraph_BP_Anomaly_Cube");
		
		ABP_Anomaly_Cube_C_ExecuteUbergraph_BP_Anomaly_Cube_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Anomaly_Cube_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Anomaly_Cube_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Anomaly_Cube.BP_Anomaly_Cube_C");
		return ptr;
	}

}


