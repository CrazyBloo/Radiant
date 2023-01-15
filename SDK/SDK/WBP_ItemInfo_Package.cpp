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
	 * 		Name   -> Function WBP_ItemInfo.WBP_ItemInfo_C.UpdateInfoWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemInfo_C::UpdateInfoWeapon(bool Show)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo.WBP_ItemInfo_C.UpdateInfoWeapon");
		
		UWBP_ItemInfo_C_UpdateInfoWeapon_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo.WBP_ItemInfo_C.UpdateInfoSimple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemInfo_C::UpdateInfoSimple(bool Show)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo.WBP_ItemInfo_C.UpdateInfoSimple");
		
		UWBP_ItemInfo_C_UpdateInfoSimple_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo.WBP_ItemInfo_C.GetAnimLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Seconds                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemInfo_C::GetAnimLength(float* Seconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo.WBP_ItemInfo_C.GetAnimLength");
		
		UWBP_ItemInfo_C_GetAnimLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Seconds != nullptr)
			*Seconds = params.Seconds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo.WBP_ItemInfo_C.Animate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemInfo_C::Animate(bool Show)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo.WBP_ItemInfo_C.Animate");
		
		UWBP_ItemInfo_C_Animate_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo.WBP_ItemInfo_C.ClearInfos
	 * 		Flags  -> ()
	 */
	void UWBP_ItemInfo_C::ClearInfos()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo.WBP_ItemInfo_C.ClearInfos");
		
		UWBP_ItemInfo_C_ClearInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo.WBP_ItemInfo_C.SetupInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemInfo_C::SetupInfo(class UInventoryItem* Item)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo.WBP_ItemInfo_C.SetupInfo");
		
		UWBP_ItemInfo_C_SetupInfo_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo.WBP_ItemInfo_C.UpdateDurability
	 * 		Flags  -> ()
	 */
	void UWBP_ItemInfo_C::UpdateDurability()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo.WBP_ItemInfo_C.UpdateDurability");
		
		UWBP_ItemInfo_C_UpdateDurability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo.WBP_ItemInfo_C.ExecuteUbergraph_WBP_ItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemInfo_C::ExecuteUbergraph_WBP_ItemInfo(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo.WBP_ItemInfo_C.ExecuteUbergraph_WBP_ItemInfo");
		
		UWBP_ItemInfo_C_ExecuteUbergraph_WBP_ItemInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ItemInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ItemInfo_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemInfo.WBP_ItemInfo_C");
		return ptr;
	}

}


