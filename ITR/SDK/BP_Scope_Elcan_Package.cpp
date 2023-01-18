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
	 * 		Name   -> Function BP_Scope_Elcan.BP_Scope_Elcan_C.BndEvt__BP_Scope_Elcan_VRLever_K2Node_ComponentBoundEvent_0_VRLeverStateChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LeverStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EVRInteractibleLeverEventType                      LeverStatusType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LeverAngleAtTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FullLeverAngleAtTime                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Scope_Elcan_C::BndEvt__BP_Scope_Elcan_VRLever_K2Node_ComponentBoundEvent_0_VRLeverStateChangedSignature__DelegateSignature(bool LeverStatus, EVRInteractibleLeverEventType LeverStatusType, float LeverAngleAtTime, float FullLeverAngleAtTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scope_Elcan.BP_Scope_Elcan_C.BndEvt__BP_Scope_Elcan_VRLever_K2Node_ComponentBoundEvent_0_VRLeverStateChangedSignature__DelegateSignature");
		
		ABP_Scope_Elcan_C_BndEvt__BP_Scope_Elcan_VRLever_K2Node_ComponentBoundEvent_0_VRLeverStateChangedSignature__DelegateSignature_Params params {};
		params.LeverStatus = LeverStatus;
		params.LeverStatusType = LeverStatusType;
		params.LeverAngleAtTime = LeverAngleAtTime;
		params.FullLeverAngleAtTime = FullLeverAngleAtTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Scope_Elcan.BP_Scope_Elcan_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_Scope_Elcan_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scope_Elcan.BP_Scope_Elcan_C.OnReconfigure");
		
		ABP_Scope_Elcan_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Scope_Elcan.BP_Scope_Elcan_C.UpdateFov
	 * 		Flags  -> ()
	 */
	void ABP_Scope_Elcan_C::UpdateFov()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scope_Elcan.BP_Scope_Elcan_C.UpdateFov");
		
		ABP_Scope_Elcan_C_UpdateFov_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Scope_Elcan.BP_Scope_Elcan_C.ExecuteUbergraph_BP_Scope_Elcan
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Scope_Elcan_C::ExecuteUbergraph_BP_Scope_Elcan(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Scope_Elcan.BP_Scope_Elcan_C.ExecuteUbergraph_BP_Scope_Elcan");
		
		ABP_Scope_Elcan_C_ExecuteUbergraph_BP_Scope_Elcan_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Scope_Elcan_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Scope_Elcan_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Scope_Elcan.BP_Scope_Elcan_C");
		return ptr;
	}

}


