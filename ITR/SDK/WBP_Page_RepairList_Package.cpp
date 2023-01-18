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
	 * 		Name   -> Function WBP_Page_RepairList.WBP_Page_RepairList_C.ButtonApplyState
	 * 		Flags  -> ()
	 */
	bool UWBP_Page_RepairList_C::ButtonApplyState()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_RepairList.WBP_Page_RepairList_C.ButtonApplyState");
		
		UWBP_Page_RepairList_C_ButtonApplyState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_RepairList.WBP_Page_RepairList_C.UpdateRepairList
	 * 		Flags  -> ()
	 */
	void UWBP_Page_RepairList_C::UpdateRepairList()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_RepairList.WBP_Page_RepairList_C.UpdateRepairList");
		
		UWBP_Page_RepairList_C_UpdateRepairList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_RepairList.WBP_Page_RepairList_C.ShowPage
	 * 		Flags  -> ()
	 */
	void UWBP_Page_RepairList_C::ShowPage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_RepairList.WBP_Page_RepairList_C.ShowPage");
		
		UWBP_Page_RepairList_C_ShowPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_RepairList.WBP_Page_RepairList_C.HidePage
	 * 		Flags  -> ()
	 */
	void UWBP_Page_RepairList_C::HidePage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_RepairList.WBP_Page_RepairList_C.HidePage");
		
		UWBP_Page_RepairList_C_HidePage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_RepairList.WBP_Page_RepairList_C.OnCellContentChanged
	 * 		Flags  -> ()
	 */
	void UWBP_Page_RepairList_C::OnCellContentChanged()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_RepairList.WBP_Page_RepairList_C.OnCellContentChanged");
		
		UWBP_Page_RepairList_C_OnCellContentChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_RepairList.WBP_Page_RepairList_C.ExecuteUbergraph_WBP_Page_RepairList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Page_RepairList_C::ExecuteUbergraph_WBP_Page_RepairList(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_RepairList.WBP_Page_RepairList_C.ExecuteUbergraph_WBP_Page_RepairList");
		
		UWBP_Page_RepairList_C_ExecuteUbergraph_WBP_Page_RepairList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Page_RepairList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Page_RepairList_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Page_RepairList.WBP_Page_RepairList_C");
		return ptr;
	}

}


