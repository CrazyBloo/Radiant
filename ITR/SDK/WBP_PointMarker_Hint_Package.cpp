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
	 * 		Name   -> Function WBP_PointMarker_Hint.WBP_PointMarker_Hint_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_PointMarker_Hint_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PointMarker_Hint.WBP_PointMarker_Hint_C.Construct");
		
		UWBP_PointMarker_Hint_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PointMarker_Hint.WBP_PointMarker_Hint_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_PointMarker_Hint_C::SetText(const class FText& InText)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PointMarker_Hint.WBP_PointMarker_Hint_C.SetText");
		
		UWBP_PointMarker_Hint_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PointMarker_Hint.WBP_PointMarker_Hint_C.SetCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Completed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_PointMarker_Hint_C::SetCompleted(bool Completed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PointMarker_Hint.WBP_PointMarker_Hint_C.SetCompleted");
		
		UWBP_PointMarker_Hint_C_SetCompleted_Params params {};
		params.Completed = Completed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PointMarker_Hint.WBP_PointMarker_Hint_C.ExecuteUbergraph_WBP_PointMarker_Hint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PointMarker_Hint_C::ExecuteUbergraph_WBP_PointMarker_Hint(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PointMarker_Hint.WBP_PointMarker_Hint_C.ExecuteUbergraph_WBP_PointMarker_Hint");
		
		UWBP_PointMarker_Hint_C_ExecuteUbergraph_WBP_PointMarker_Hint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_PointMarker_Hint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_PointMarker_Hint_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PointMarker_Hint.WBP_PointMarker_Hint_C");
		return ptr;
	}

}


