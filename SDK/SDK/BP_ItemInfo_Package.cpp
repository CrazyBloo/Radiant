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
	 * 		Name   -> Function BP_ItemInfo.BP_ItemInfo_C.IsHelpShown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               shown                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ItemInfo_C::IsHelpShown(bool* shown)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemInfo.BP_ItemInfo_C.IsHelpShown");
		
		ABP_ItemInfo_C_IsHelpShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shown != nullptr)
			*shown = params.shown;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemInfo.BP_ItemInfo_C.IsItemOfType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                ItemTypeID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Match                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ItemInfo_C::IsItemOfType(const struct FGameplayTag& ItemTypeID, bool* Match)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemInfo.BP_ItemInfo_C.IsItemOfType");
		
		ABP_ItemInfo_C_IsItemOfType_Params params {};
		params.ItemTypeID = ItemTypeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Match != nullptr)
			*Match = params.Match;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemInfo.BP_ItemInfo_C.IsAttachmentsLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Locked                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ItemInfo_C::IsAttachmentsLocked(bool* Locked)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemInfo.BP_ItemInfo_C.IsAttachmentsLocked");
		
		ABP_ItemInfo_C_IsAttachmentsLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Locked != nullptr)
			*Locked = params.Locked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemInfo.BP_ItemInfo_C.SetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ItemInfo_C::SetVisibility(bool Show)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemInfo.BP_ItemInfo_C.SetVisibility");
		
		ABP_ItemInfo_C_SetVisibility_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemInfo.BP_ItemInfo_C.GetLockButtonLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ItemInfo_C::GetLockButtonLocation(struct FVector* Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemInfo.BP_ItemInfo_C.GetLockButtonLocation");
		
		ABP_ItemInfo_C_GetLockButtonLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemInfo.BP_ItemInfo_C.GetUnlockButtonLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ItemInfo_C::GetUnlockButtonLocation(struct FVector* Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemInfo.BP_ItemInfo_C.GetUnlockButtonLocation");
		
		ABP_ItemInfo_C_GetUnlockButtonLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemInfo.BP_ItemInfo_C.GetHelpButtonLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ItemInfo_C::GetHelpButtonLocation(struct FVector* Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemInfo.BP_ItemInfo_C.GetHelpButtonLocation");
		
		ABP_ItemInfo_C_GetHelpButtonLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemInfo.BP_ItemInfo_C.updateTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ItemInfo_C::updateTransform(const struct FVector& Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemInfo.BP_ItemInfo_C.updateTransform");
		
		ABP_ItemInfo_C_updateTransform_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemInfo.BP_ItemInfo_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ItemInfo_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemInfo.BP_ItemInfo_C.ReceiveBeginPlay");
		
		ABP_ItemInfo_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemInfo.BP_ItemInfo_C.HideInfo
	 * 		Flags  -> ()
	 */
	void ABP_ItemInfo_C::HideInfo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemInfo.BP_ItemInfo_C.HideInfo");
		
		ABP_ItemInfo_C_HideInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemInfo.BP_ItemInfo_C.ShowInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               unlock                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ItemInfo_C::ShowInfo(class UInventoryItem* InventoryItem, bool unlock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemInfo.BP_ItemInfo_C.ShowInfo");
		
		ABP_ItemInfo_C_ShowInfo_Params params {};
		params.InventoryItem = InventoryItem;
		params.unlock = unlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemInfo.BP_ItemInfo_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ItemInfo_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemInfo.BP_ItemInfo_C.ReceiveEndPlay");
		
		ABP_ItemInfo_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemInfo.BP_ItemInfo_C.ToggleInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               unlock                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ItemInfo_C::ToggleInfo(class UInventoryItem* InventoryItem, bool unlock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemInfo.BP_ItemInfo_C.ToggleInfo");
		
		ABP_ItemInfo_C_ToggleInfo_Params params {};
		params.InventoryItem = InventoryItem;
		params.unlock = unlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemInfo.BP_ItemInfo_C.UpdateInfoWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               unlock                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ItemInfo_C::UpdateInfoWidget(bool unlock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemInfo.BP_ItemInfo_C.UpdateInfoWidget");
		
		ABP_ItemInfo_C_UpdateInfoWidget_Params params {};
		params.unlock = unlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemInfo.BP_ItemInfo_C.UpdateDurability
	 * 		Flags  -> ()
	 */
	void ABP_ItemInfo_C::UpdateDurability()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemInfo.BP_ItemInfo_C.UpdateDurability");
		
		ABP_ItemInfo_C_UpdateDurability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemInfo.BP_ItemInfo_C.KillCheats
	 * 		Flags  -> ()
	 */
	void ABP_ItemInfo_C::KillCheats()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemInfo.BP_ItemInfo_C.KillCheats");
		
		ABP_ItemInfo_C_KillCheats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemInfo.BP_ItemInfo_C.OnApplyCheatyUpgrades
	 * 		Flags  -> ()
	 */
	void ABP_ItemInfo_C::OnApplyCheatyUpgrades()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemInfo.BP_ItemInfo_C.OnApplyCheatyUpgrades");
		
		ABP_ItemInfo_C_OnApplyCheatyUpgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemInfo.BP_ItemInfo_C.ExecuteUbergraph_BP_ItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ItemInfo_C::ExecuteUbergraph_BP_ItemInfo(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemInfo.BP_ItemInfo_C.ExecuteUbergraph_BP_ItemInfo");
		
		ABP_ItemInfo_C_ExecuteUbergraph_BP_ItemInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ItemInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ItemInfo_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemInfo.BP_ItemInfo_C");
		return ptr;
	}

}


