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
	 * 		Name   -> Function WBP_TutorialText.WBP_TutorialText_C.IsAnimated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_TutorialText_C::IsAnimated(bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TutorialText.WBP_TutorialText_C.IsAnimated");
		
		UWBP_TutorialText_C_IsAnimated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_TutorialText.WBP_TutorialText_C.ScaleDown
	 * 		Flags  -> ()
	 */
	void UWBP_TutorialText_C::ScaleDown()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TutorialText.WBP_TutorialText_C.ScaleDown");
		
		UWBP_TutorialText_C_ScaleDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_TutorialText.WBP_TutorialText_C.ScaleUp
	 * 		Flags  -> ()
	 */
	void UWBP_TutorialText_C::ScaleUp()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TutorialText.WBP_TutorialText_C.ScaleUp");
		
		UWBP_TutorialText_C_ScaleUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_TutorialText.WBP_TutorialText_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_TutorialText_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TutorialText.WBP_TutorialText_C.Construct");
		
		UWBP_TutorialText_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_TutorialText.WBP_TutorialText_C.ExecuteUbergraph_WBP_TutorialText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_TutorialText_C::ExecuteUbergraph_WBP_TutorialText(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TutorialText.WBP_TutorialText_C.ExecuteUbergraph_WBP_TutorialText");
		
		UWBP_TutorialText_C_ExecuteUbergraph_WBP_TutorialText_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_TutorialText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_TutorialText_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TutorialText.WBP_TutorialText_C");
		return ptr;
	}

}


