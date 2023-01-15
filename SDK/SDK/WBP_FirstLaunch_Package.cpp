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
	 * 		Name   -> Function WBP_FirstLaunch.WBP_FirstLaunch_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_FirstLaunch_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FirstLaunch.WBP_FirstLaunch_C.Construct");
		
		UWBP_FirstLaunch_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FirstLaunch.WBP_FirstLaunch_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_FirstLaunch_C::BndEvt__Button_Continue_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FirstLaunch.WBP_FirstLaunch_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature");
		
		UWBP_FirstLaunch_C_BndEvt__Button_Continue_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_FirstLaunch.WBP_FirstLaunch_C.BndEvt__Block_DifficultySelection_K2Node_ComponentBoundEvent_1_OnDifficultySelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRadiusGameDifficulty                       Difficulty                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               Tutorial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Ironman                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_FirstLaunch_C::BndEvt__Block_DifficultySelection_K2Node_ComponentBoundEvent_1_OnDifficultySelected__DelegateSignature(const struct FRadiusGameDifficulty& Difficulty, bool Tutorial, bool Ironman)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FirstLaunch.WBP_FirstLaunch_C.BndEvt__Block_DifficultySelection_K2Node_ComponentBoundEvent_1_OnDifficultySelected__DelegateSignature");
		
		UWBP_FirstLaunch_C_BndEvt__Block_DifficultySelection_K2Node_ComponentBoundEvent_1_OnDifficultySelected__DelegateSignature_Params params {};
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
	 * 		Name   -> Function WBP_FirstLaunch.WBP_FirstLaunch_C.ExecuteUbergraph_WBP_FirstLaunch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_FirstLaunch_C::ExecuteUbergraph_WBP_FirstLaunch(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FirstLaunch.WBP_FirstLaunch_C.ExecuteUbergraph_WBP_FirstLaunch");
		
		UWBP_FirstLaunch_C_ExecuteUbergraph_WBP_FirstLaunch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_FirstLaunch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_FirstLaunch_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_FirstLaunch.WBP_FirstLaunch_C");
		return ptr;
	}

}


