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
	 * 		Name   -> Function BP_Anomaly_Eyes.BP_Anomaly_Eyes_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Eyes_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Eyes.BP_Anomaly_Eyes_C.UserConstructionScript");
		
		ABP_Anomaly_Eyes_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Eyes.BP_Anomaly_Eyes_C.OnSetupEvent
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Eyes_C::OnSetupEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Eyes.BP_Anomaly_Eyes_C.OnSetupEvent");
		
		ABP_Anomaly_Eyes_C_OnSetupEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Eyes.BP_Anomaly_Eyes_C.AnomalyTriggered
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Eyes_C::AnomalyTriggered()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Eyes.BP_Anomaly_Eyes_C.AnomalyTriggered");
		
		ABP_Anomaly_Eyes_C_AnomalyTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Eyes.BP_Anomaly_Eyes_C.ExecuteUbergraph_BP_Anomaly_Eyes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Eyes_C::ExecuteUbergraph_BP_Anomaly_Eyes(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Eyes.BP_Anomaly_Eyes_C.ExecuteUbergraph_BP_Anomaly_Eyes");
		
		ABP_Anomaly_Eyes_C_ExecuteUbergraph_BP_Anomaly_Eyes_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Anomaly_Eyes_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Anomaly_Eyes_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Anomaly_Eyes.BP_Anomaly_Eyes_C");
		return ptr;
	}

}


