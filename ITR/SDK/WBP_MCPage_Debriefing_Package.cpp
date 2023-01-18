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
	 * 		Name   -> Function WBP_MCPage_Debriefing.WBP_MCPage_Debriefing_C.PageTick
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Debriefing_C::PageTick()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Debriefing.WBP_MCPage_Debriefing_C.PageTick");
		
		UWBP_MCPage_Debriefing_C_PageTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Debriefing.WBP_MCPage_Debriefing_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                MissionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MCPage_Debriefing_C::Update(class UMissionData* MissionData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Debriefing.WBP_MCPage_Debriefing_C.Update");
		
		UWBP_MCPage_Debriefing_C_Update_Params params {};
		params.MissionData = MissionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Debriefing.WBP_MCPage_Debriefing_C.BndEvt__WBP_MCPage_Debriefing_Button_Back_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Debriefing_C::BndEvt__WBP_MCPage_Debriefing_Button_Back_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Debriefing.WBP_MCPage_Debriefing_C.BndEvt__WBP_MCPage_Debriefing_Button_Back_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature");
		
		UWBP_MCPage_Debriefing_C_BndEvt__WBP_MCPage_Debriefing_Button_Back_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Debriefing.WBP_MCPage_Debriefing_C.BndEvt__WBP_MCPage_Debriefing_Button_Accept_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Debriefing_C::BndEvt__WBP_MCPage_Debriefing_Button_Accept_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Debriefing.WBP_MCPage_Debriefing_C.BndEvt__WBP_MCPage_Debriefing_Button_Accept_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature");
		
		UWBP_MCPage_Debriefing_C_BndEvt__WBP_MCPage_Debriefing_Button_Accept_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Debriefing.WBP_MCPage_Debriefing_C.ExecuteUbergraph_WBP_MCPage_Debriefing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MCPage_Debriefing_C::ExecuteUbergraph_WBP_MCPage_Debriefing(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Debriefing.WBP_MCPage_Debriefing_C.ExecuteUbergraph_WBP_MCPage_Debriefing");
		
		UWBP_MCPage_Debriefing_C_ExecuteUbergraph_WBP_MCPage_Debriefing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MCPage_Debriefing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MCPage_Debriefing_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MCPage_Debriefing.WBP_MCPage_Debriefing_C");
		return ptr;
	}

}


