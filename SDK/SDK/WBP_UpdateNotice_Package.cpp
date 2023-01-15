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
	 * 		Name   -> Function WBP_UpdateNotice.WBP_UpdateNotice_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_UpdateNotice_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_UpdateNotice.WBP_UpdateNotice_C.Construct");
		
		UWBP_UpdateNotice_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_UpdateNotice.WBP_UpdateNotice_C.BndEvt__Button_Continue_P2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_UpdateNotice_C::BndEvt__Button_Continue_P2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_UpdateNotice.WBP_UpdateNotice_C.BndEvt__Button_Continue_P2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_UpdateNotice_C_BndEvt__Button_Continue_P2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_UpdateNotice.WBP_UpdateNotice_C.ReInit
	 * 		Flags  -> ()
	 */
	void UWBP_UpdateNotice_C::ReInit()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_UpdateNotice.WBP_UpdateNotice_C.ReInit");
		
		UWBP_UpdateNotice_C_ReInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_UpdateNotice.WBP_UpdateNotice_C.ExecuteUbergraph_WBP_UpdateNotice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_UpdateNotice_C::ExecuteUbergraph_WBP_UpdateNotice(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_UpdateNotice.WBP_UpdateNotice_C.ExecuteUbergraph_WBP_UpdateNotice");
		
		UWBP_UpdateNotice_C_ExecuteUbergraph_WBP_UpdateNotice_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_UpdateNotice.WBP_UpdateNotice_C.RequestDestroy__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_UpdateNotice_C::RequestDestroy__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_UpdateNotice.WBP_UpdateNotice_C.RequestDestroy__DelegateSignature");
		
		UWBP_UpdateNotice_C_RequestDestroy__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_UpdateNotice.WBP_UpdateNotice_C.ButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               doNotShowAgain                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_UpdateNotice_C::ButtonClicked__DelegateSignature(bool doNotShowAgain)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_UpdateNotice.WBP_UpdateNotice_C.ButtonClicked__DelegateSignature");
		
		UWBP_UpdateNotice_C_ButtonClicked__DelegateSignature_Params params {};
		params.doNotShowAgain = doNotShowAgain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_UpdateNotice_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_UpdateNotice_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_UpdateNotice.WBP_UpdateNotice_C");
		return ptr;
	}

}


