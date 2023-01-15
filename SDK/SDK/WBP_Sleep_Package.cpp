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
	 * 		Name   -> Function WBP_Sleep.WBP_Sleep_C.UpdateTimer
	 * 		Flags  -> ()
	 */
	void UWBP_Sleep_C::UpdateTimer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Sleep.WBP_Sleep_C.UpdateTimer");
		
		UWBP_Sleep_C_UpdateTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sleep.WBP_Sleep_C.HoursUntill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Untill                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Hours                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sleep_C::HoursUntill(float Untill, float* Hours)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Sleep.WBP_Sleep_C.HoursUntill");
		
		UWBP_Sleep_C_HoursUntill_Params params {};
		params.Untill = Untill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hours != nullptr)
			*Hours = params.Hours;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sleep.WBP_Sleep_C.BndEvt__btn_sleep_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sleep_C::BndEvt__btn_sleep_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Sleep.WBP_Sleep_C.BndEvt__btn_sleep_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");
		
		UWBP_Sleep_C_BndEvt__btn_sleep_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sleep.WBP_Sleep_C.BndEvt__btn_Pack_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sleep_C::BndEvt__btn_Pack_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Sleep.WBP_Sleep_C.BndEvt__btn_Pack_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature");
		
		UWBP_Sleep_C_BndEvt__btn_Pack_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sleep.WBP_Sleep_C.BndEvt__btn_Evening_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sleep_C::BndEvt__btn_Evening_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Sleep.WBP_Sleep_C.BndEvt__btn_Evening_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_Sleep_C_BndEvt__btn_Evening_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sleep.WBP_Sleep_C.BndEvt__btn_Midnight_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sleep_C::BndEvt__btn_Midnight_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Sleep.WBP_Sleep_C.BndEvt__btn_Midnight_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_Sleep_C_BndEvt__btn_Midnight_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sleep.WBP_Sleep_C.BndEvt__btn_Morning_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sleep_C::BndEvt__btn_Morning_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Sleep.WBP_Sleep_C.BndEvt__btn_Morning_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_Sleep_C_BndEvt__btn_Morning_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sleep.WBP_Sleep_C.BndEvt__btn_Noon_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sleep_C::BndEvt__btn_Noon_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Sleep.WBP_Sleep_C.BndEvt__btn_Noon_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_Sleep_C_BndEvt__btn_Noon_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sleep.WBP_Sleep_C.BndEvt__btn_pluss_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sleep_C::BndEvt__btn_pluss_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Sleep.WBP_Sleep_C.BndEvt__btn_pluss_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature");
		
		UWBP_Sleep_C_BndEvt__btn_pluss_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sleep.WBP_Sleep_C.BndEvt__btn_minus_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sleep_C::BndEvt__btn_minus_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Sleep.WBP_Sleep_C.BndEvt__btn_minus_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature");
		
		UWBP_Sleep_C_BndEvt__btn_minus_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sleep.WBP_Sleep_C.Update
	 * 		Flags  -> ()
	 */
	void UWBP_Sleep_C::Update()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Sleep.WBP_Sleep_C.Update");
		
		UWBP_Sleep_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sleep.WBP_Sleep_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Sleep_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Sleep.WBP_Sleep_C.Construct");
		
		UWBP_Sleep_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sleep.WBP_Sleep_C.ExecuteUbergraph_WBP_Sleep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sleep_C::ExecuteUbergraph_WBP_Sleep(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Sleep.WBP_Sleep_C.ExecuteUbergraph_WBP_Sleep");
		
		UWBP_Sleep_C_ExecuteUbergraph_WBP_Sleep_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sleep.WBP_Sleep_C.RequestPack__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Sleep_C::RequestPack__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Sleep.WBP_Sleep_C.RequestPack__DelegateSignature");
		
		UWBP_Sleep_C_RequestPack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Sleep.WBP_Sleep_C.SleepFor__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SleepFor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Sleep_C::SleepFor__DelegateSignature(float SleepFor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Sleep.WBP_Sleep_C.SleepFor__DelegateSignature");
		
		UWBP_Sleep_C_SleepFor__DelegateSignature_Params params {};
		params.SleepFor = SleepFor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Sleep_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Sleep_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Sleep.WBP_Sleep_C");
		return ptr;
	}

}


