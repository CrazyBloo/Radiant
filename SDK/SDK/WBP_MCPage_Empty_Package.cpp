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
	 * 		Name   -> Function WBP_MCPage_Empty.WBP_MCPage_Empty_C.PageTick
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Empty_C::PageTick()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Empty.WBP_MCPage_Empty_C.PageTick");
		
		UWBP_MCPage_Empty_C_PageTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Empty.WBP_MCPage_Empty_C.BlinkMoney
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_Empty_C::BlinkMoney()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Empty.WBP_MCPage_Empty_C.BlinkMoney");
		
		UWBP_MCPage_Empty_C_BlinkMoney_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_Empty.WBP_MCPage_Empty_C.ExecuteUbergraph_WBP_MCPage_Empty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MCPage_Empty_C::ExecuteUbergraph_WBP_MCPage_Empty(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_Empty.WBP_MCPage_Empty_C.ExecuteUbergraph_WBP_MCPage_Empty");
		
		UWBP_MCPage_Empty_C_ExecuteUbergraph_WBP_MCPage_Empty_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MCPage_Empty_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MCPage_Empty_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MCPage_Empty.WBP_MCPage_Empty_C");
		return ptr;
	}

}


