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
	 * 		Name   -> Function WBP_PointMarker_GatePosition.WBP_PointMarker_GatePosition_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              IconAngle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                IconColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PointMarker_GatePosition_C::Setup(const class FText& Text, float IconAngle, const struct FLinearColor& IconColor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PointMarker_GatePosition.WBP_PointMarker_GatePosition_C.Setup");
		
		UWBP_PointMarker_GatePosition_C_Setup_Params params {};
		params.Text = Text;
		params.IconAngle = IconAngle;
		params.IconColor = IconColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_PointMarker_GatePosition.WBP_PointMarker_GatePosition_C.ExecuteUbergraph_WBP_PointMarker_GatePosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_PointMarker_GatePosition_C::ExecuteUbergraph_WBP_PointMarker_GatePosition(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PointMarker_GatePosition.WBP_PointMarker_GatePosition_C.ExecuteUbergraph_WBP_PointMarker_GatePosition");
		
		UWBP_PointMarker_GatePosition_C_ExecuteUbergraph_WBP_PointMarker_GatePosition_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_PointMarker_GatePosition_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_PointMarker_GatePosition_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PointMarker_GatePosition.WBP_PointMarker_GatePosition_C");
		return ptr;
	}

}


