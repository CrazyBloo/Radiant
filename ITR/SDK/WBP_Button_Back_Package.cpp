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
	 * 		Name   -> Function WBP_Button_Back.WBP_Button_Back_C.UpdateIcon
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Back_C::UpdateIcon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Button_Back.WBP_Button_Back_C.UpdateIcon");
		
		UWBP_Button_Back_C_UpdateIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Back.WBP_Button_Back_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               _selected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Button_Back_C::SetSelected(bool _selected)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Button_Back.WBP_Button_Back_C.SetSelected");
		
		UWBP_Button_Back_C_SetSelected_Params params {};
		params._selected = _selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Back.WBP_Button_Back_C.SetEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Button_Back_C::SetEnabled(bool Enabled)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Button_Back.WBP_Button_Back_C.SetEnabled");
		
		UWBP_Button_Back_C_SetEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Back.WBP_Button_Back_C.IsSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               selected                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Button_Back_C::IsSelected(bool* selected)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Button_Back.WBP_Button_Back_C.IsSelected");
		
		UWBP_Button_Back_C_IsSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (selected != nullptr)
			*selected = params.selected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Back.WBP_Button_Back_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Back_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Button_Back.WBP_Button_Back_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_Button_Back_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Back.WBP_Button_Back_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Back_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Button_Back.WBP_Button_Back_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_Button_Back_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Back.WBP_Button_Back_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Back_C::BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Button_Back.WBP_Button_Back_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_Button_Back_C_BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Back.WBP_Button_Back_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Back_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Button_Back.WBP_Button_Back_C.Construct");
		
		UWBP_Button_Back_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Back.WBP_Button_Back_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Button_Back_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Button_Back.WBP_Button_Back_C.PreConstruct");
		
		UWBP_Button_Back_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Back.WBP_Button_Back_C.ExecuteUbergraph_WBP_Button_Back
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Button_Back_C::ExecuteUbergraph_WBP_Button_Back(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Button_Back.WBP_Button_Back_C.ExecuteUbergraph_WBP_Button_Back");
		
		UWBP_Button_Back_C_ExecuteUbergraph_WBP_Button_Back_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Button_Back.WBP_Button_Back_C.ButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Button_Back_C::ButtonPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Button_Back.WBP_Button_Back_C.ButtonPressed__DelegateSignature");
		
		UWBP_Button_Back_C_ButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Button_Back_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Button_Back_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Button_Back.WBP_Button_Back_C");
		return ptr;
	}

}


