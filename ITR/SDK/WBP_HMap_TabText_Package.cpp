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
	 * 		Name   -> Function WBP_HMap_TabText.WBP_HMap_TabText_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_HMap_TabText_C::SetText(const class FText& InText)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_TabText.WBP_HMap_TabText_C.SetText");
		
		UWBP_HMap_TabText_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_TabText.WBP_HMap_TabText_C.SetTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HMap_TabText_C::SetTextColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_TabText.WBP_HMap_TabText_C.SetTextColor");
		
		UWBP_HMap_TabText_C_SetTextColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_TabText.WBP_HMap_TabText_C.ExecuteUbergraph_WBP_HMap_TabText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HMap_TabText_C::ExecuteUbergraph_WBP_HMap_TabText(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_TabText.WBP_HMap_TabText_C.ExecuteUbergraph_WBP_HMap_TabText");
		
		UWBP_HMap_TabText_C_ExecuteUbergraph_WBP_HMap_TabText_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_HMap_TabText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_HMap_TabText_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HMap_TabText.WBP_HMap_TabText_C");
		return ptr;
	}

}


