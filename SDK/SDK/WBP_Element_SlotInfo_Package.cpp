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
	 * 		Name   -> Function WBP_Element_SlotInfo.WBP_Element_SlotInfo_C.IsInstalled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Installed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Element_SlotInfo_C::IsInstalled(bool* Installed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_SlotInfo.WBP_Element_SlotInfo_C.IsInstalled");
		
		UWBP_Element_SlotInfo_C_IsInstalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Installed != nullptr)
			*Installed = params.Installed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_SlotInfo.WBP_Element_SlotInfo_C.GetLinked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpgradeInfo                                Upgrade_Info                                               (Parm, OutParm)
	 * 		bool                                               selected                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Element_SlotInfo_C::GetLinked(struct FUpgradeInfo* Upgrade_Info, bool* selected)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_SlotInfo.WBP_Element_SlotInfo_C.GetLinked");
		
		UWBP_Element_SlotInfo_C_GetLinked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Upgrade_Info != nullptr)
			*Upgrade_Info = params.Upgrade_Info;
		if (selected != nullptr)
			*selected = params.selected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_SlotInfo.WBP_Element_SlotInfo_C.Link
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                SlotId                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Element_SlotInfo_C::Link(class UInventoryItem* InventoryItem, const struct FGameplayTag& SlotId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_SlotInfo.WBP_Element_SlotInfo_C.Link");
		
		UWBP_Element_SlotInfo_C_Link_Params params {};
		params.InventoryItem = InventoryItem;
		params.SlotId = SlotId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_SlotInfo.WBP_Element_SlotInfo_C.ExecuteUbergraph_WBP_Element_SlotInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Element_SlotInfo_C::ExecuteUbergraph_WBP_Element_SlotInfo(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_SlotInfo.WBP_Element_SlotInfo_C.ExecuteUbergraph_WBP_Element_SlotInfo");
		
		UWBP_Element_SlotInfo_C_ExecuteUbergraph_WBP_Element_SlotInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Element_SlotInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Element_SlotInfo_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Element_SlotInfo.WBP_Element_SlotInfo_C");
		return ptr;
	}

}


