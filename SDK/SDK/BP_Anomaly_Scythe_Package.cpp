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
	 * 		Name   -> Function BP_Anomaly_Scythe.BP_Anomaly_Scythe_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Scythe_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Scythe.BP_Anomaly_Scythe_C.Timeline_0__FinishedFunc");
		
		ABP_Anomaly_Scythe_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Scythe.BP_Anomaly_Scythe_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Scythe_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Scythe.BP_Anomaly_Scythe_C.Timeline_0__UpdateFunc");
		
		ABP_Anomaly_Scythe_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Scythe.BP_Anomaly_Scythe_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Scythe_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Scythe.BP_Anomaly_Scythe_C.ReceiveBeginPlay");
		
		ABP_Anomaly_Scythe_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Scythe.BP_Anomaly_Scythe_C.VisualTrigger
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Scythe_C::VisualTrigger()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Scythe.BP_Anomaly_Scythe_C.VisualTrigger");
		
		ABP_Anomaly_Scythe_C_VisualTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Scythe.BP_Anomaly_Scythe_C.TestTrigger
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Scythe_C::TestTrigger()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Scythe.BP_Anomaly_Scythe_C.TestTrigger");
		
		ABP_Anomaly_Scythe_C_TestTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Scythe.BP_Anomaly_Scythe_C.OnOverlapActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Scythe_C::OnOverlapActor(class AActor* OtherActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Scythe.BP_Anomaly_Scythe_C.OnOverlapActor");
		
		ABP_Anomaly_Scythe_C_OnOverlapActor_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Scythe.BP_Anomaly_Scythe_C.ExecuteUbergraph_BP_Anomaly_Scythe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Scythe_C::ExecuteUbergraph_BP_Anomaly_Scythe(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Scythe.BP_Anomaly_Scythe_C.ExecuteUbergraph_BP_Anomaly_Scythe");
		
		ABP_Anomaly_Scythe_C_ExecuteUbergraph_BP_Anomaly_Scythe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Anomaly_Scythe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Anomaly_Scythe_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Anomaly_Scythe.BP_Anomaly_Scythe_C");
		return ptr;
	}

}


