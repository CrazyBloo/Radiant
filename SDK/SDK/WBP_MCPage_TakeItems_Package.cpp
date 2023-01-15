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
	 * 		Name   -> Function WBP_MCPage_TakeItems.WBP_MCPage_TakeItems_C.ShowPage
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_TakeItems_C::ShowPage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_TakeItems.WBP_MCPage_TakeItems_C.ShowPage");
		
		UWBP_MCPage_TakeItems_C_ShowPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_TakeItems.WBP_MCPage_TakeItems_C.HidePage
	 * 		Flags  -> ()
	 */
	void UWBP_MCPage_TakeItems_C::HidePage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_TakeItems.WBP_MCPage_TakeItems_C.HidePage");
		
		UWBP_MCPage_TakeItems_C_HidePage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MCPage_TakeItems.WBP_MCPage_TakeItems_C.ExecuteUbergraph_WBP_MCPage_TakeItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MCPage_TakeItems_C::ExecuteUbergraph_WBP_MCPage_TakeItems(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MCPage_TakeItems.WBP_MCPage_TakeItems_C.ExecuteUbergraph_WBP_MCPage_TakeItems");
		
		UWBP_MCPage_TakeItems_C_ExecuteUbergraph_WBP_MCPage_TakeItems_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MCPage_TakeItems_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MCPage_TakeItems_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MCPage_TakeItems.WBP_MCPage_TakeItems_C");
		return ptr;
	}

}


