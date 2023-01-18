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
	 * 		Name   -> Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.GetStartWithTutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWithTutorial                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Block_DifficultySelection_C::GetStartWithTutorial(bool* bWithTutorial)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.GetStartWithTutorial");
		
		UWBP_Block_DifficultySelection_C_GetStartWithTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bWithTutorial != nullptr)
			*bWithTutorial = params.bWithTutorial;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.SelectPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRGameDifficultyPreset                            Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Block_DifficultySelection_C::SelectPreset(EPRGameDifficultyPreset Preset)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.SelectPreset");
		
		UWBP_Block_DifficultySelection_C_SelectPreset_Params params {};
		params.Preset = Preset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Block_DifficultySelection_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.Construct");
		
		UWBP_Block_DifficultySelection_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.BndEvt__Button_Start_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Block_DifficultySelection_C::BndEvt__Button_Start_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.BndEvt__Button_Start_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature");
		
		UWBP_Block_DifficultySelection_C_BndEvt__Button_Start_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Block_DifficultySelection_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.PreConstruct");
		
		UWBP_Block_DifficultySelection_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Custom_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Block_DifficultySelection_C::BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Custom_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Custom_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature");
		
		UWBP_Block_DifficultySelection_C_BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Custom_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Easy_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Block_DifficultySelection_C::BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Easy_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Easy_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature");
		
		UWBP_Block_DifficultySelection_C_BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Easy_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Normal_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Block_DifficultySelection_C::BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Normal_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Normal_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature");
		
		UWBP_Block_DifficultySelection_C_BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Normal_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Realistic_K2Node_ComponentBoundEvent_4_ButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Block_DifficultySelection_C::BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Realistic_K2Node_ComponentBoundEvent_4_ButtonPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Realistic_K2Node_ComponentBoundEvent_4_ButtonPressed__DelegateSignature");
		
		UWBP_Block_DifficultySelection_C_BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Realistic_K2Node_ComponentBoundEvent_4_ButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.BndEvt__WBP_Block_DifficultySelection_Button_Back_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Block_DifficultySelection_C::BndEvt__WBP_Block_DifficultySelection_Button_Back_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.BndEvt__WBP_Block_DifficultySelection_Button_Back_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature");
		
		UWBP_Block_DifficultySelection_C_BndEvt__WBP_Block_DifficultySelection_Button_Back_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.ExecuteUbergraph_WBP_Block_DifficultySelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Block_DifficultySelection_C::ExecuteUbergraph_WBP_Block_DifficultySelection(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.ExecuteUbergraph_WBP_Block_DifficultySelection");
		
		UWBP_Block_DifficultySelection_C_ExecuteUbergraph_WBP_Block_DifficultySelection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.OnDifficultySelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRadiusGameDifficulty                       Difficulty                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               Tutorial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Ironman                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Block_DifficultySelection_C::OnDifficultySelected__DelegateSignature(const struct FRadiusGameDifficulty& Difficulty, bool Tutorial, bool Ironman)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.OnDifficultySelected__DelegateSignature");
		
		UWBP_Block_DifficultySelection_C_OnDifficultySelected__DelegateSignature_Params params {};
		params.Difficulty = Difficulty;
		params.Tutorial = Tutorial;
		params.Ironman = Ironman;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Block_DifficultySelection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Block_DifficultySelection_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C");
		return ptr;
	}

}


