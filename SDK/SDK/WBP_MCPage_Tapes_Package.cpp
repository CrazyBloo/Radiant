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
	 * 		Name   -> Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.SetButtonsEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MCPage_Tapes_C::SetButtonsEnable(bool enable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.SetButtonsEnable");
		
		UWBP_MCPage_Tapes_C_SetButtonsEnable_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Tapes_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.Construct");
		
		UWBP_MCPage_Tapes_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.ShowPage
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Tapes_C::ShowPage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.ShowPage");
		
		UWBP_MCPage_Tapes_C_ShowPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Tapes_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_MCPage_Tapes_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Tapes_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_MCPage_Tapes_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Tapes_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_MCPage_Tapes_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.PlayRecord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDialogue                                   Record                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 */
	void UWBP_MCPage_Tapes_C::PlayRecord(const struct FDialogue& Record)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.PlayRecord");
		
		UWBP_MCPage_Tapes_C_PlayRecord_Params params {};
		params.Record = Record;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.OnRecordFinished
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Tapes_C::OnRecordFinished()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.OnRecordFinished");
		
		UWBP_MCPage_Tapes_C_OnRecordFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.BeginProfileOnLevel
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Tapes_C::BeginProfileOnLevel()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.BeginProfileOnLevel");
		
		UWBP_MCPage_Tapes_C_BeginProfileOnLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.OnRecordPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                recordTag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MCPage_Tapes_C::OnRecordPressed(const struct FGameplayTag& recordTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.OnRecordPressed");
		
		UWBP_MCPage_Tapes_C_OnRecordPressed_Params params {};
		params.recordTag = recordTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.ExecuteUbergraph_WBP_MCPage_Tapes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MCPage_Tapes_C::ExecuteUbergraph_WBP_MCPage_Tapes(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.ExecuteUbergraph_WBP_MCPage_Tapes");
		
		UWBP_MCPage_Tapes_C_ExecuteUbergraph_WBP_MCPage_Tapes_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MCPage_Tapes_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MCPage_Tapes_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MCPage_Tapes.WBP_MCPage_Tapes_C");
		return ptr;
	}

}


