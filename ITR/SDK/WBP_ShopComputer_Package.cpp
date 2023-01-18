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
	 * 		Name   -> Function WBP_ShopComputer.WBP_ShopComputer_C.BndEvt__WBP_ShopComputer_BTN_Warning_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ShopComputer_C::BndEvt__WBP_ShopComputer_BTN_Warning_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ShopComputer.WBP_ShopComputer_C.BndEvt__WBP_ShopComputer_BTN_Warning_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_ShopComputer_C_BndEvt__WBP_ShopComputer_BTN_Warning_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopComputer.WBP_ShopComputer_C.SetWarningVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsVisible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ShopComputer_C::SetWarningVisible(bool bIsVisible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ShopComputer.WBP_ShopComputer_C.SetWarningVisible");
		
		UWBP_ShopComputer_C_SetWarningVisible_Params params {};
		params.bIsVisible = bIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShopComputer.WBP_ShopComputer_C.ExecuteUbergraph_WBP_ShopComputer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ShopComputer_C::ExecuteUbergraph_WBP_ShopComputer(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ShopComputer.WBP_ShopComputer_C.ExecuteUbergraph_WBP_ShopComputer");
		
		UWBP_ShopComputer_C_ExecuteUbergraph_WBP_ShopComputer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ShopComputer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ShopComputer_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ShopComputer.WBP_ShopComputer_C");
		return ptr;
	}

}


