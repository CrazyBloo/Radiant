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
	 * 		Name   -> Function WBP_Page_RepairInProgress.WBP_Page_RepairInProgress_C.UpdateRepairList
	 * 		Flags  -> ()
	 */
	void UWBP_Page_RepairInProgress_C::UpdateRepairList()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_RepairInProgress.WBP_Page_RepairInProgress_C.UpdateRepairList");
		
		UWBP_Page_RepairInProgress_C_UpdateRepairList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_RepairInProgress.WBP_Page_RepairInProgress_C.SetupRepairList
	 * 		Flags  -> ()
	 */
	void UWBP_Page_RepairInProgress_C::SetupRepairList()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_RepairInProgress.WBP_Page_RepairInProgress_C.SetupRepairList");
		
		UWBP_Page_RepairInProgress_C_SetupRepairList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_RepairInProgress.WBP_Page_RepairInProgress_C.ShowPage
	 * 		Flags  -> ()
	 */
	void UWBP_Page_RepairInProgress_C::ShowPage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_RepairInProgress.WBP_Page_RepairInProgress_C.ShowPage");
		
		UWBP_Page_RepairInProgress_C_ShowPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_RepairInProgress.WBP_Page_RepairInProgress_C.HidePage
	 * 		Flags  -> ()
	 */
	void UWBP_Page_RepairInProgress_C::HidePage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_RepairInProgress.WBP_Page_RepairInProgress_C.HidePage");
		
		UWBP_Page_RepairInProgress_C_HidePage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_RepairInProgress.WBP_Page_RepairInProgress_C.PageTick
	 * 		Flags  -> ()
	 */
	void UWBP_Page_RepairInProgress_C::PageTick()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_RepairInProgress.WBP_Page_RepairInProgress_C.PageTick");
		
		UWBP_Page_RepairInProgress_C_PageTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_RepairInProgress.WBP_Page_RepairInProgress_C.ExecuteUbergraph_WBP_Page_RepairInProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Page_RepairInProgress_C::ExecuteUbergraph_WBP_Page_RepairInProgress(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_RepairInProgress.WBP_Page_RepairInProgress_C.ExecuteUbergraph_WBP_Page_RepairInProgress");
		
		UWBP_Page_RepairInProgress_C_ExecuteUbergraph_WBP_Page_RepairInProgress_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Page_RepairInProgress_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Page_RepairInProgress_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Page_RepairInProgress.WBP_Page_RepairInProgress_C");
		return ptr;
	}

}


