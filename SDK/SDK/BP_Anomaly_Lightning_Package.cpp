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
	 * 		Name   -> Function BP_Anomaly_Lightning.BP_Anomaly_Lightning_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Lightning_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Lightning.BP_Anomaly_Lightning_C.UserConstructionScript");
		
		ABP_Anomaly_Lightning_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Lightning.BP_Anomaly_Lightning_C.OnGameStarted
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Lightning_C::OnGameStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Lightning.BP_Anomaly_Lightning_C.OnGameStarted");
		
		ABP_Anomaly_Lightning_C_OnGameStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Lightning.BP_Anomaly_Lightning_C.OnOverlapTimer
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Lightning_C::OnOverlapTimer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Lightning.BP_Anomaly_Lightning_C.OnOverlapTimer");
		
		ABP_Anomaly_Lightning_C_OnOverlapTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Lightning.BP_Anomaly_Lightning_C.OnSetupEvent
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Lightning_C::OnSetupEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Lightning.BP_Anomaly_Lightning_C.OnSetupEvent");
		
		ABP_Anomaly_Lightning_C_OnSetupEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Lightning.BP_Anomaly_Lightning_C.AnomalyTriggered
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Lightning_C::AnomalyTriggered()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Lightning.BP_Anomaly_Lightning_C.AnomalyTriggered");
		
		ABP_Anomaly_Lightning_C_AnomalyTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Lightning.BP_Anomaly_Lightning_C.ExecuteUbergraph_BP_Anomaly_Lightning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Lightning_C::ExecuteUbergraph_BP_Anomaly_Lightning(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Lightning.BP_Anomaly_Lightning_C.ExecuteUbergraph_BP_Anomaly_Lightning");
		
		ABP_Anomaly_Lightning_C_ExecuteUbergraph_BP_Anomaly_Lightning_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Anomaly_Lightning_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Anomaly_Lightning_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Anomaly_Lightning.BP_Anomaly_Lightning_C");
		return ptr;
	}

}


