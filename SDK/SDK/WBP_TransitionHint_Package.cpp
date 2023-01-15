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
	 * 		Name   -> Function WBP_TransitionHint.WBP_TransitionHint_C.Show PSOPercent
	 * 		Flags  -> ()
	 */
	void UWBP_TransitionHint_C::Show_PSOPercent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TransitionHint.WBP_TransitionHint_C.Show PSOPercent");
		
		UWBP_TransitionHint_C_Show_PSOPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_TransitionHint.WBP_TransitionHint_C.ChangeText
	 * 		Flags  -> ()
	 */
	void UWBP_TransitionHint_C::ChangeText()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TransitionHint.WBP_TransitionHint_C.ChangeText");
		
		UWBP_TransitionHint_C_ChangeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_TransitionHint.WBP_TransitionHint_C.OnGameStartedEventDelegate
	 * 		Flags  -> ()
	 */
	void UWBP_TransitionHint_C::OnGameStartedEventDelegate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TransitionHint.WBP_TransitionHint_C.OnGameStartedEventDelegate");
		
		UWBP_TransitionHint_C_OnGameStartedEventDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_TransitionHint.WBP_TransitionHint_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_TransitionHint_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TransitionHint.WBP_TransitionHint_C.Construct");
		
		UWBP_TransitionHint_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_TransitionHint.WBP_TransitionHint_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_TransitionHint_C::Destruct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TransitionHint.WBP_TransitionHint_C.Destruct");
		
		UWBP_TransitionHint_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_TransitionHint.WBP_TransitionHint_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_TransitionHint_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TransitionHint.WBP_TransitionHint_C.Tick");
		
		UWBP_TransitionHint_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_TransitionHint.WBP_TransitionHint_C.ExecuteUbergraph_WBP_TransitionHint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_TransitionHint_C::ExecuteUbergraph_WBP_TransitionHint(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TransitionHint.WBP_TransitionHint_C.ExecuteUbergraph_WBP_TransitionHint");
		
		UWBP_TransitionHint_C_ExecuteUbergraph_WBP_TransitionHint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_TransitionHint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_TransitionHint_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TransitionHint.WBP_TransitionHint_C");
		return ptr;
	}

}


