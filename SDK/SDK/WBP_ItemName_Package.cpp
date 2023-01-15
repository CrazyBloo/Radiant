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
	 * 		Name   -> Function WBP_ItemName.WBP_ItemName_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_ItemName_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemName.WBP_ItemName_C.Construct");
		
		UWBP_ItemName_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemName.WBP_ItemName_C.ScaleUp
	 * 		Flags  -> ()
	 */
	void UWBP_ItemName_C::ScaleUp()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemName.WBP_ItemName_C.ScaleUp");
		
		UWBP_ItemName_C_ScaleUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemName.WBP_ItemName_C.ScaleDown
	 * 		Flags  -> ()
	 */
	void UWBP_ItemName_C::ScaleDown()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemName.WBP_ItemName_C.ScaleDown");
		
		UWBP_ItemName_C_ScaleDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemName.WBP_ItemName_C.ExecuteUbergraph_WBP_ItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemName_C::ExecuteUbergraph_WBP_ItemName(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemName.WBP_ItemName_C.ExecuteUbergraph_WBP_ItemName");
		
		UWBP_ItemName_C_ExecuteUbergraph_WBP_ItemName_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ItemName_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ItemName_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemName.WBP_ItemName_C");
		return ptr;
	}

}


