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
	 * 		Name   -> Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.StateUpgrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pause                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Page_UpgradeSelection_C::StateUpgrade(bool Pause)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.StateUpgrade");
		
		UWBP_Page_UpgradeSelection_C_StateUpgrade_Params params {};
		params.Pause = Pause;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.ToggleFreeMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Page_UpgradeSelection_C::ToggleFreeMode(bool State)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.ToggleFreeMode");
		
		UWBP_Page_UpgradeSelection_C_ToggleFreeMode_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.FindChainUpgrades
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FGameplayTag>                        Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FGameplayTag>                        updates                                                    (Parm, OutParm)
	 */
	void UWBP_Page_UpgradeSelection_C::FindChainUpgrades(TArray<struct FGameplayTag>* Array, TArray<struct FGameplayTag>* updates)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.FindChainUpgrades");
		
		UWBP_Page_UpgradeSelection_C_FindChainUpgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (updates != nullptr)
			*updates = params.updates;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.FindIndependentUpgrades
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FGameplayTag>                        Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FGameplayTag>                        Standalone                                                 (Parm, OutParm)
	 */
	void UWBP_Page_UpgradeSelection_C::FindIndependentUpgrades(TArray<struct FGameplayTag>* Array, TArray<struct FGameplayTag>* Standalone)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.FindIndependentUpgrades");
		
		UWBP_Page_UpgradeSelection_C_FindIndependentUpgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (Standalone != nullptr)
			*Standalone = params.Standalone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.FindSwitchableUpgrades
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FGameplayTag>                        Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FGameplayTag>                        updates                                                    (Parm, OutParm)
	 */
	void UWBP_Page_UpgradeSelection_C::FindSwitchableUpgrades(TArray<struct FGameplayTag>* Array, TArray<struct FGameplayTag>* updates)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.FindSwitchableUpgrades");
		
		UWBP_Page_UpgradeSelection_C_FindSwitchableUpgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (updates != nullptr)
			*updates = params.updates;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.GetSelectedUpgrades
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FUpgradeInfo>                        Install                                                    (Parm, OutParm)
	 * 		TArray<struct FUpgradeInfo>                        Remove                                                     (Parm, OutParm)
	 */
	void UWBP_Page_UpgradeSelection_C::GetSelectedUpgrades(TArray<struct FUpgradeInfo>* Install, TArray<struct FUpgradeInfo>* Remove)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.GetSelectedUpgrades");
		
		UWBP_Page_UpgradeSelection_C_GetSelectedUpgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Install != nullptr)
			*Install = params.Install;
		if (Remove != nullptr)
			*Remove = params.Remove;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.GetLinkedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              InventoryItem                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Page_UpgradeSelection_C::GetLinkedItem(class UInventoryItem** InventoryItem)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.GetLinkedItem");
		
		UWBP_Page_UpgradeSelection_C_GetLinkedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InventoryItem != nullptr)
			*InventoryItem = params.InventoryItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.Link
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Page_UpgradeSelection_C::Link(class UInventoryItem* InventoryItem)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.Link");
		
		UWBP_Page_UpgradeSelection_C_Link_Params params {};
		params.InventoryItem = InventoryItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Page_UpgradeSelection_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.Construct");
		
		UWBP_Page_UpgradeSelection_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.OnClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_Element_Upgrade_C*                      Element                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Page_UpgradeSelection_C::OnClicked(class UWBP_Element_Upgrade_C* Element)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.OnClicked");
		
		UWBP_Page_UpgradeSelection_C_OnClicked_Params params {};
		params.Element = Element;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.PlayElementUpgradeAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                UpgradeID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Page_UpgradeSelection_C::PlayElementUpgradeAnimation(const struct FGameplayTag& UpgradeID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.PlayElementUpgradeAnimation");
		
		UWBP_Page_UpgradeSelection_C_PlayElementUpgradeAnimation_Params params {};
		params.UpgradeID = UpgradeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.PlayUpgradeAnimation
	 * 		Flags  -> ()
	 */
	void UWBP_Page_UpgradeSelection_C::PlayUpgradeAnimation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.PlayUpgradeAnimation");
		
		UWBP_Page_UpgradeSelection_C_PlayUpgradeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.StatUpgradeAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pause                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Page_UpgradeSelection_C::StatUpgradeAnimation(bool Pause)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.StatUpgradeAnimation");
		
		UWBP_Page_UpgradeSelection_C_StatUpgradeAnimation_Params params {};
		params.Pause = Pause;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.ExecuteUbergraph_WBP_Page_UpgradeSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Page_UpgradeSelection_C::ExecuteUbergraph_WBP_Page_UpgradeSelection(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.ExecuteUbergraph_WBP_Page_UpgradeSelection");
		
		UWBP_Page_UpgradeSelection_C_ExecuteUbergraph_WBP_Page_UpgradeSelection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Page_UpgradeSelection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Page_UpgradeSelection_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C");
		return ptr;
	}

}


