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
	 * 		Name   -> Function WBP_Page_Button.WBP_Page_Button_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ButtonText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Page_Button_C::SetText(const class FText& ButtonText)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_Button.WBP_Page_Button_C.SetText");
		
		UWBP_Page_Button_C_SetText_Params params {};
		params.ButtonText = ButtonText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_Button.WBP_Page_Button_C.UpdateButtonText
	 * 		Flags  -> ()
	 */
	void UWBP_Page_Button_C::UpdateButtonText()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_Button.WBP_Page_Button_C.UpdateButtonText");
		
		UWBP_Page_Button_C_UpdateButtonText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_Button.WBP_Page_Button_C.UpdateButtonStyle
	 * 		Flags  -> ()
	 */
	void UWBP_Page_Button_C::UpdateButtonStyle()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_Button.WBP_Page_Button_C.UpdateButtonStyle");
		
		UWBP_Page_Button_C_UpdateButtonStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_Button.WBP_Page_Button_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               _selected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Page_Button_C::SetSelected(bool _selected)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_Button.WBP_Page_Button_C.SetSelected");
		
		UWBP_Page_Button_C_SetSelected_Params params {};
		params._selected = _selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_Button.WBP_Page_Button_C.IsSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               selected                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Page_Button_C::IsSelected(bool* selected)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_Button.WBP_Page_Button_C.IsSelected");
		
		UWBP_Page_Button_C_IsSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (selected != nullptr)
			*selected = params.selected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_Button.WBP_Page_Button_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Page_Button_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_Button.WBP_Page_Button_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_Page_Button_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_Button.WBP_Page_Button_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Page_Button_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_Button.WBP_Page_Button_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_Page_Button_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_Button.WBP_Page_Button_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Page_Button_C::BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_Button.WBP_Page_Button_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_Page_Button_C_BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_Button.WBP_Page_Button_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Page_Button_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_Button.WBP_Page_Button_C.Construct");
		
		UWBP_Page_Button_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_Button.WBP_Page_Button_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Page_Button_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_Button.WBP_Page_Button_C.PreConstruct");
		
		UWBP_Page_Button_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_Button.WBP_Page_Button_C.ExecuteUbergraph_WBP_Page_Button
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Page_Button_C::ExecuteUbergraph_WBP_Page_Button(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_Button.WBP_Page_Button_C.ExecuteUbergraph_WBP_Page_Button");
		
		UWBP_Page_Button_C_ExecuteUbergraph_WBP_Page_Button_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_Button.WBP_Page_Button_C.OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Page_Button_C::OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_Button.WBP_Page_Button_C.OnPressed__DelegateSignature");
		
		UWBP_Page_Button_C_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Page_Button_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Page_Button_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Page_Button.WBP_Page_Button_C");
		return ptr;
	}

}


