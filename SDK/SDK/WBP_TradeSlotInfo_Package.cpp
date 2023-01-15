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
	 * 		Name   -> Function WBP_TradeSlotInfo.WBP_TradeSlotInfo_C.ChangeTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_TradeSlotInfo_C::ChangeTextColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TradeSlotInfo.WBP_TradeSlotInfo_C.ChangeTextColor");
		
		UWBP_TradeSlotInfo_C_ChangeTextColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_TradeSlotInfo.WBP_TradeSlotInfo_C.ExecuteUbergraph_WBP_TradeSlotInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_TradeSlotInfo_C::ExecuteUbergraph_WBP_TradeSlotInfo(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TradeSlotInfo.WBP_TradeSlotInfo_C.ExecuteUbergraph_WBP_TradeSlotInfo");
		
		UWBP_TradeSlotInfo_C_ExecuteUbergraph_WBP_TradeSlotInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_TradeSlotInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_TradeSlotInfo_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TradeSlotInfo.WBP_TradeSlotInfo_C");
		return ptr;
	}

}


