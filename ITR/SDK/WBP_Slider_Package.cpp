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
	 * 		Name   -> Function WBP_Slider.WBP_Slider_C.SetupSlider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ranged                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMinMaxFloat                                Range                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		float                                              step                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FloatDigits                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Slider_C::SetupSlider(bool ranged, float Value, const struct FMinMaxFloat& Range, float step, int32_t FloatDigits)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slider.WBP_Slider_C.SetupSlider");
		
		UWBP_Slider_C_SetupSlider_Params params {};
		params.ranged = ranged;
		params.Value = Value;
		params.Range = Range;
		params.step = step;
		params.FloatDigits = FloatDigits;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slider.WBP_Slider_C.SetRangedValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              rangedValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Slider_C::SetRangedValue(float rangedValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slider.WBP_Slider_C.SetRangedValue");
		
		UWBP_Slider_C_SetRangedValue_Params params {};
		params.rangedValue = rangedValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slider.WBP_Slider_C.GetRangedValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              rangedValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Slider_C::GetRangedValue(float* rangedValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slider.WBP_Slider_C.GetRangedValue");
		
		UWBP_Slider_C_GetRangedValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (rangedValue != nullptr)
			*rangedValue = params.rangedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slider.WBP_Slider_C.SetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Slider_C::SetValue(float Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slider.WBP_Slider_C.SetValue");
		
		UWBP_Slider_C_SetValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slider.WBP_Slider_C.GetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Slider_C::GetValue(float* Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slider.WBP_Slider_C.GetValue");
		
		UWBP_Slider_C_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slider.WBP_Slider_C.UpdateSliderValue
	 * 		Flags  -> ()
	 */
	void UWBP_Slider_C::UpdateSliderValue()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slider.WBP_Slider_C.UpdateSliderValue");
		
		UWBP_Slider_C_UpdateSliderValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slider.WBP_Slider_C.UpdateButtons
	 * 		Flags  -> ()
	 */
	void UWBP_Slider_C::UpdateButtons()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slider.WBP_Slider_C.UpdateButtons");
		
		UWBP_Slider_C_UpdateButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slider.WBP_Slider_C.SetEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Slider_C::SetEnabled(bool Enabled)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slider.WBP_Slider_C.SetEnabled");
		
		UWBP_Slider_C_SetEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slider.WBP_Slider_C.IsEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Slider_C::IsEnabled(bool* Enabled)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slider.WBP_Slider_C.IsEnabled");
		
		UWBP_Slider_C_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Enabled != nullptr)
			*Enabled = params.Enabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slider.WBP_Slider_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Slider_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slider.WBP_Slider_C.Construct");
		
		UWBP_Slider_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slider.WBP_Slider_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Slider_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slider.WBP_Slider_C.PreConstruct");
		
		UWBP_Slider_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slider.WBP_Slider_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Slider_C::BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slider.WBP_Slider_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_Slider_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slider.WBP_Slider_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Slider_C::BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slider.WBP_Slider_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_Slider_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slider.WBP_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Slider_C::BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slider.WBP_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");
		
		UWBP_Slider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slider.WBP_Slider_C.ExecuteUbergraph_WBP_Slider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Slider_C::ExecuteUbergraph_WBP_Slider(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slider.WBP_Slider_C.ExecuteUbergraph_WBP_Slider");
		
		UWBP_Slider_C_ExecuteUbergraph_WBP_Slider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Slider.WBP_Slider_C.OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Slider_C::OnValueChanged__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Slider.WBP_Slider_C.OnValueChanged__DelegateSignature");
		
		UWBP_Slider_C_OnValueChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Slider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Slider_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Slider.WBP_Slider_C");
		return ptr;
	}

}


