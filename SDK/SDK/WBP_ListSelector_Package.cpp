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
	 * 		Name   -> Function WBP_ListSelector.WBP_ListSelector_C.GetMaxIndex
	 * 		Flags  -> ()
	 */
	int32_t UWBP_ListSelector_C::GetMaxIndex()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ListSelector.WBP_ListSelector_C.GetMaxIndex");
		
		UWBP_ListSelector_C_GetMaxIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ListSelector.WBP_ListSelector_C.GetMinIndex
	 * 		Flags  -> ()
	 */
	int32_t UWBP_ListSelector_C::GetMinIndex()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ListSelector.WBP_ListSelector_C.GetMinIndex");
		
		UWBP_ListSelector_C_GetMinIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ListSelector.WBP_ListSelector_C.SetupSelector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FText>                                Variants                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    IndexesOverride                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ListSelector_C::SetupSelector(TArray<class FText>* Variants, TArray<int32_t>* IndexesOverride, int32_t Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ListSelector.WBP_ListSelector_C.SetupSelector");
		
		UWBP_ListSelector_C_SetupSelector_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Variants != nullptr)
			*Variants = params.Variants;
		if (IndexesOverride != nullptr)
			*IndexesOverride = params.IndexesOverride;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ListSelector.WBP_ListSelector_C.SetSelectorIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ListSelector_C::SetSelectorIndex(int32_t Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ListSelector.WBP_ListSelector_C.SetSelectorIndex");
		
		UWBP_ListSelector_C_SetSelectorIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ListSelector.WBP_ListSelector_C.GetSelectorIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ListSelector_C::GetSelectorIndex(int32_t* Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ListSelector.WBP_ListSelector_C.GetSelectorIndex");
		
		UWBP_ListSelector_C_GetSelectorIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ListSelector.WBP_ListSelector_C.UpdateButtons
	 * 		Flags  -> ()
	 */
	void UWBP_ListSelector_C::UpdateButtons()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ListSelector.WBP_ListSelector_C.UpdateButtons");
		
		UWBP_ListSelector_C_UpdateButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ListSelector.WBP_ListSelector_C.UpdateText
	 * 		Flags  -> ()
	 */
	void UWBP_ListSelector_C::UpdateText()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ListSelector.WBP_ListSelector_C.UpdateText");
		
		UWBP_ListSelector_C_UpdateText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ListSelector.WBP_ListSelector_C.SetSelectorEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ListSelector_C::SetSelectorEnabled(bool Enabled)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ListSelector.WBP_ListSelector_C.SetSelectorEnabled");
		
		UWBP_ListSelector_C_SetSelectorEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ListSelector.WBP_ListSelector_C.IsSelectorEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               return_value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ListSelector_C::IsSelectorEnabled(bool* return_value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ListSelector.WBP_ListSelector_C.IsSelectorEnabled");
		
		UWBP_ListSelector_C_IsSelectorEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (return_value != nullptr)
			*return_value = params.return_value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ListSelector.WBP_ListSelector_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_ListSelector_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ListSelector.WBP_ListSelector_C.Construct");
		
		UWBP_ListSelector_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ListSelector.WBP_ListSelector_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ListSelector_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ListSelector.WBP_ListSelector_C.PreConstruct");
		
		UWBP_ListSelector_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ListSelector.WBP_ListSelector_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ListSelector_C::BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ListSelector.WBP_ListSelector_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_ListSelector_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ListSelector.WBP_ListSelector_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ListSelector_C::BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ListSelector.WBP_ListSelector_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_ListSelector_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ListSelector.WBP_ListSelector_C.ExecuteUbergraph_WBP_ListSelector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ListSelector_C::ExecuteUbergraph_WBP_ListSelector(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ListSelector.WBP_ListSelector_C.ExecuteUbergraph_WBP_ListSelector");
		
		UWBP_ListSelector_C_ExecuteUbergraph_WBP_ListSelector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ListSelector.WBP_ListSelector_C.OnChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ListSelector_C::OnChanged__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ListSelector.WBP_ListSelector_C.OnChanged__DelegateSignature");
		
		UWBP_ListSelector_C_OnChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ListSelector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ListSelector_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ListSelector.WBP_ListSelector_C");
		return ptr;
	}

}


