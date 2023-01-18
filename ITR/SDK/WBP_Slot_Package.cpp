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
	 * 		Name   -> Function WBP_Slot.WBP_Slot_C.UpdateTitle
	 * 		Flags  -> ()
	 */
	void UWBP_Slot_C::UpdateTitle()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slot.WBP_Slot_C.UpdateTitle");
		
		UWBP_Slot_C_UpdateTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slot.WBP_Slot_C.UpdateText
	 * 		Flags  -> ()
	 */
	void UWBP_Slot_C::UpdateText()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slot.WBP_Slot_C.UpdateText");
		
		UWBP_Slot_C_UpdateText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slot.WBP_Slot_C.UpdateStyles
	 * 		Flags  -> ()
	 */
	void UWBP_Slot_C::UpdateStyles()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slot.WBP_Slot_C.UpdateStyles");
		
		UWBP_Slot_C_UpdateStyles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slot.WBP_Slot_C.GetCurrentColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Slot_C::GetCurrentColor(struct FLinearColor* Color)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slot.WBP_Slot_C.GetCurrentColor");
		
		UWBP_Slot_C_GetCurrentColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slot.WBP_Slot_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               _selected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Slot_C::SetSelected(bool _selected)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slot.WBP_Slot_C.SetSelected");
		
		UWBP_Slot_C_SetSelected_Params params {};
		params._selected = _selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slot.WBP_Slot_C.SetEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Slot_C::SetEnabled(bool Enabled)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slot.WBP_Slot_C.SetEnabled");
		
		UWBP_Slot_C_SetEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slot.WBP_Slot_C.IsSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               selected                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Slot_C::IsSelected(bool* selected)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slot.WBP_Slot_C.IsSelected");
		
		UWBP_Slot_C_IsSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (selected != nullptr)
			*selected = params.selected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slot.WBP_Slot_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Slot_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slot.WBP_Slot_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_Slot_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slot.WBP_Slot_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Slot_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slot.WBP_Slot_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UWBP_Slot_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slot.WBP_Slot_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Slot_C::BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slot.WBP_Slot_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_Slot_C_BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slot.WBP_Slot_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Slot_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slot.WBP_Slot_C.Construct");
		
		UWBP_Slot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slot.WBP_Slot_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Slot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slot.WBP_Slot_C.PreConstruct");
		
		UWBP_Slot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slot.WBP_Slot_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Slot_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slot.WBP_Slot_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");
		
		UWBP_Slot_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slot.WBP_Slot_C.Link
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSaveSlotInfo                               SlotInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_Slot_C::Link(const struct FSaveSlotInfo& SlotInfo)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slot.WBP_Slot_C.Link");
		
		UWBP_Slot_C_Link_Params params {};
		params.SlotInfo = SlotInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slot.WBP_Slot_C.SetEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Slot_C::SetEmpty(int32_t Num)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slot.WBP_Slot_C.SetEmpty");
		
		UWBP_Slot_C_SetEmpty_Params params {};
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slot.WBP_Slot_C.ExecuteUbergraph_WBP_Slot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Slot_C::ExecuteUbergraph_WBP_Slot(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slot.WBP_Slot_C.ExecuteUbergraph_WBP_Slot");
		
		UWBP_Slot_C_ExecuteUbergraph_WBP_Slot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slot.WBP_Slot_C.OnSlotSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNr                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Slot_C::OnSlotSelected__DelegateSignature(int32_t SlotNr)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slot.WBP_Slot_C.OnSlotSelected__DelegateSignature");
		
		UWBP_Slot_C_OnSlotSelected__DelegateSignature_Params params {};
		params.SlotNr = SlotNr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Slot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Slot_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Slot.WBP_Slot_C");
		return ptr;
	}

}


