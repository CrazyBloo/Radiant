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
	 * 		Name   -> Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.GetMagItemType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemInfo_Weapon_C::GetMagItemType(class FString* String)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.GetMagItemType");
		
		UWBP_ItemInfo_Weapon_C_GetMagItemType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (String != nullptr)
			*String = params.String;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.UpdateAttachmentSlots
	 * 		Flags  -> ()
	 */
	void UWBP_ItemInfo_Weapon_C::UpdateAttachmentSlots()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.UpdateAttachmentSlots");
		
		UWBP_ItemInfo_Weapon_C_UpdateAttachmentSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.UpdateUpgrades
	 * 		Flags  -> ()
	 */
	void UWBP_ItemInfo_Weapon_C::UpdateUpgrades()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.UpdateUpgrades");
		
		UWBP_ItemInfo_Weapon_C_UpdateUpgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.GetAcceptedAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                ammoID                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemInfo_Weapon_C::GetAcceptedAmmo(int32_t Index, struct FGameplayTag* ammoID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.GetAcceptedAmmo");
		
		UWBP_ItemInfo_Weapon_C_GetAcceptedAmmo_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ammoID != nullptr)
			*ammoID = params.ammoID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.IsHelpShown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               helpShown                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemInfo_Weapon_C::IsHelpShown(bool* helpShown)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.IsHelpShown");
		
		UWBP_ItemInfo_Weapon_C_IsHelpShown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (helpShown != nullptr)
			*helpShown = params.helpShown;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.ChangeTextColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemInfo_Weapon_C::ChangeTextColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.ChangeTextColor");
		
		UWBP_ItemInfo_Weapon_C_ChangeTextColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.BndEvt__Btn_Lock_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemInfo_Weapon_C::BndEvt__Btn_Lock_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.BndEvt__Btn_Lock_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_ItemInfo_Weapon_C_BndEvt__Btn_Lock_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.BndEvt__Btn_Unlock_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemInfo_Weapon_C::BndEvt__Btn_Unlock_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.BndEvt__Btn_Unlock_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_ItemInfo_Weapon_C_BndEvt__Btn_Unlock_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.BndEvt__Btn_Help_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemInfo_Weapon_C::BndEvt__Btn_Help_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.BndEvt__Btn_Help_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_ItemInfo_Weapon_C_BndEvt__Btn_Help_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.ShowHelp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemInfo_Weapon_C::ShowHelp(bool Show)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.ShowHelp");
		
		UWBP_ItemInfo_Weapon_C_ShowHelp_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.BndEvt__Btn_Back_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_ItemInfo_Weapon_C::BndEvt__Btn_Back_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.BndEvt__Btn_Back_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_ItemInfo_Weapon_C_BndEvt__Btn_Back_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.Fill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemInfo_Weapon_C::Fill(class UInventoryItem* Item)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.Fill");
		
		UWBP_ItemInfo_Weapon_C_Fill_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.UpdateLockState
	 * 		Flags  -> ()
	 */
	void UWBP_ItemInfo_Weapon_C::UpdateLockState()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.UpdateLockState");
		
		UWBP_ItemInfo_Weapon_C_UpdateLockState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.LockAttachments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemInfo_Weapon_C::LockAttachments(bool lock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.LockAttachments");
		
		UWBP_ItemInfo_Weapon_C_LockAttachments_Params params {};
		params.lock = lock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.UpdateDurability
	 * 		Flags  -> ()
	 */
	void UWBP_ItemInfo_Weapon_C::UpdateDurability()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.UpdateDurability");
		
		UWBP_ItemInfo_Weapon_C_UpdateDurability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.ExecuteUbergraph_WBP_ItemInfo_Weapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemInfo_Weapon_C::ExecuteUbergraph_WBP_ItemInfo_Weapon(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.ExecuteUbergraph_WBP_ItemInfo_Weapon");
		
		UWBP_ItemInfo_Weapon_C_ExecuteUbergraph_WBP_ItemInfo_Weapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ItemInfo_Weapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ItemInfo_Weapon_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C");
		return ptr;
	}

}


