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
	 * 		Name   -> Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.IsHelpShown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               helpShown                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemInfo_Simple_C::IsHelpShown(bool* helpShown)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.IsHelpShown");
		
		UWBP_ItemInfo_Simple_C_IsHelpShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (helpShown != nullptr)
			*helpShown = params.helpShown;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.ChangeTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemInfo_Simple_C::ChangeTextColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.ChangeTextColor");
		
		UWBP_ItemInfo_Simple_C_ChangeTextColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.BndEvt__Btn_Lock_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemInfo_Simple_C::BndEvt__Btn_Lock_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.BndEvt__Btn_Lock_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_ItemInfo_Simple_C_BndEvt__Btn_Lock_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.BndEvt__Btn_Unlock_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemInfo_Simple_C::BndEvt__Btn_Unlock_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.BndEvt__Btn_Unlock_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_ItemInfo_Simple_C_BndEvt__Btn_Unlock_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.BndEvt__Btn_Help_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemInfo_Simple_C::BndEvt__Btn_Help_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.BndEvt__Btn_Help_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_ItemInfo_Simple_C_BndEvt__Btn_Help_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.ShowHelp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemInfo_Simple_C::ShowHelp(bool Show)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.ShowHelp");
		
		UWBP_ItemInfo_Simple_C_ShowHelp_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.BndEvt__Btn_Back_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemInfo_Simple_C::BndEvt__Btn_Back_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.BndEvt__Btn_Back_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_ItemInfo_Simple_C_BndEvt__Btn_Back_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.Fill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemInfo_Simple_C::Fill(class UInventoryItem* Item)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.Fill");
		
		UWBP_ItemInfo_Simple_C_Fill_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.UpdateDurability
	 * 		Flags  -> ()
	 */
	void UWBP_ItemInfo_Simple_C::UpdateDurability()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.UpdateDurability");
		
		UWBP_ItemInfo_Simple_C_UpdateDurability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.ExecuteUbergraph_WBP_ItemInfo_Simple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemInfo_Simple_C::ExecuteUbergraph_WBP_ItemInfo_Simple(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.ExecuteUbergraph_WBP_ItemInfo_Simple");
		
		UWBP_ItemInfo_Simple_C_ExecuteUbergraph_WBP_ItemInfo_Simple_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.OnHelp__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemInfo_Simple_C::OnHelp__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.OnHelp__DelegateSignature");
		
		UWBP_ItemInfo_Simple_C_OnHelp__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.OnUnlock__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemInfo_Simple_C::OnUnlock__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.OnUnlock__DelegateSignature");
		
		UWBP_ItemInfo_Simple_C_OnUnlock__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.OnLock__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemInfo_Simple_C::OnLock__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.OnLock__DelegateSignature");
		
		UWBP_ItemInfo_Simple_C_OnLock__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ItemInfo_Simple_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ItemInfo_Simple_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C");
		return ptr;
	}

}


