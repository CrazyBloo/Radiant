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
	 * 		Name   -> Function WBP_TutorMCPage_Briefing.WBP_TutorMCPage_Briefing_C.PageTick
	 * 		Flags  -> ()
	 */
	void UWBP_TutorMCPage_Briefing_C::PageTick()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TutorMCPage_Briefing.WBP_TutorMCPage_Briefing_C.PageTick");
		
		UWBP_TutorMCPage_Briefing_C_PageTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_TutorMCPage_Briefing.WBP_TutorMCPage_Briefing_C.ShowPage
	 * 		Flags  -> ()
	 */
	void UWBP_TutorMCPage_Briefing_C::ShowPage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TutorMCPage_Briefing.WBP_TutorMCPage_Briefing_C.ShowPage");
		
		UWBP_TutorMCPage_Briefing_C_ShowPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_TutorMCPage_Briefing.WBP_TutorMCPage_Briefing_C.BndEvt__WBP_TutorMCPage_Briefing_Button_Activate_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_TutorMCPage_Briefing_C::BndEvt__WBP_TutorMCPage_Briefing_Button_Activate_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TutorMCPage_Briefing.WBP_TutorMCPage_Briefing_C.BndEvt__WBP_TutorMCPage_Briefing_Button_Activate_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
		UWBP_TutorMCPage_Briefing_C_BndEvt__WBP_TutorMCPage_Briefing_Button_Activate_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_TutorMCPage_Briefing.WBP_TutorMCPage_Briefing_C.ExecuteUbergraph_WBP_TutorMCPage_Briefing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_TutorMCPage_Briefing_C::ExecuteUbergraph_WBP_TutorMCPage_Briefing(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TutorMCPage_Briefing.WBP_TutorMCPage_Briefing_C.ExecuteUbergraph_WBP_TutorMCPage_Briefing");
		
		UWBP_TutorMCPage_Briefing_C_ExecuteUbergraph_WBP_TutorMCPage_Briefing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_TutorMCPage_Briefing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_TutorMCPage_Briefing_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TutorMCPage_Briefing.WBP_TutorMCPage_Briefing_C");
		return ptr;
	}

}


