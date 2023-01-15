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
	 * 		Name   -> Function WBP_Saving.WBP_Saving_C.ShowSave
	 * 		Flags  -> ()
	 */
	void UWBP_Saving_C::ShowSave()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Saving.WBP_Saving_C.ShowSave");
		
		UWBP_Saving_C_ShowSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Saving.WBP_Saving_C.ShowAutoSave
	 * 		Flags  -> ()
	 */
	void UWBP_Saving_C::ShowAutoSave()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Saving.WBP_Saving_C.ShowAutoSave");
		
		UWBP_Saving_C_ShowAutoSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Saving.WBP_Saving_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Saving_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Saving.WBP_Saving_C.Construct");
		
		UWBP_Saving_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Saving.WBP_Saving_C.HideIcons
	 * 		Flags  -> ()
	 */
	void UWBP_Saving_C::HideIcons()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Saving.WBP_Saving_C.HideIcons");
		
		UWBP_Saving_C_HideIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Saving.WBP_Saving_C.ExecuteUbergraph_WBP_Saving
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Saving_C::ExecuteUbergraph_WBP_Saving(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Saving.WBP_Saving_C.ExecuteUbergraph_WBP_Saving");
		
		UWBP_Saving_C_ExecuteUbergraph_WBP_Saving_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Saving_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Saving_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Saving.WBP_Saving_C");
		return ptr;
	}

}


