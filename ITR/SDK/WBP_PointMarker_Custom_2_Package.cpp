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
	 * 		Name   -> Function WBP_PointMarker_Custom_2.WBP_PointMarker_Custom_1_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_PointMarker_Custom_1_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PointMarker_Custom_2.WBP_PointMarker_Custom_1_C.Construct");
		
		UWBP_PointMarker_Custom_1_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PointMarker_Custom_2.WBP_PointMarker_Custom_1_C.ExecuteUbergraph_WBP_PointMarker_Custom_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PointMarker_Custom_1_C::ExecuteUbergraph_WBP_PointMarker_Custom_2(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PointMarker_Custom_2.WBP_PointMarker_Custom_1_C.ExecuteUbergraph_WBP_PointMarker_Custom_2");
		
		UWBP_PointMarker_Custom_1_C_ExecuteUbergraph_WBP_PointMarker_Custom_2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_PointMarker_Custom_1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_PointMarker_Custom_1_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PointMarker_Custom_2.WBP_PointMarker_Custom_1_C");
		return ptr;
	}

}


