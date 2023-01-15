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
	 * 		Name   -> Function WBP_PointMarker_Camp.WBP_PointMarker_Camp_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_PointMarker_Camp_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PointMarker_Camp.WBP_PointMarker_Camp_C.Construct");
		
		UWBP_PointMarker_Camp_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PointMarker_Camp.WBP_PointMarker_Camp_C.ExecuteUbergraph_WBP_PointMarker_Camp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PointMarker_Camp_C::ExecuteUbergraph_WBP_PointMarker_Camp(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PointMarker_Camp.WBP_PointMarker_Camp_C.ExecuteUbergraph_WBP_PointMarker_Camp");
		
		UWBP_PointMarker_Camp_C_ExecuteUbergraph_WBP_PointMarker_Camp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_PointMarker_Camp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_PointMarker_Camp_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PointMarker_Camp.WBP_PointMarker_Camp_C");
		return ptr;
	}

}


