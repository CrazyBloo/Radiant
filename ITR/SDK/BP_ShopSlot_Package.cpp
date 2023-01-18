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
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.InitCleanState
	 * 		Flags  -> ()
	 */
	void ABP_ShopSlot_C::InitCleanState()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.InitCleanState");
		
		ABP_ShopSlot_C_InitCleanState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.InitReferences
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ShopBin_C*                               shopBinRef                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_ShopComputer_C*                          ShopComputerRef                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShopSlot_C::InitReferences(class ABP_ShopBin_C** shopBinRef, class ABP_ShopComputer_C** ShopComputerRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.InitReferences");
		
		ABP_ShopSlot_C_InitReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shopBinRef != nullptr)
			*shopBinRef = params.shopBinRef;
		if (ShopComputerRef != nullptr)
			*ShopComputerRef = params.ShopComputerRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.GetBinContentResultTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FGameplayTag>                        Tags                                                       (Parm, OutParm)
	 */
	void ABP_ShopSlot_C::GetBinContentResultTags(TArray<struct FGameplayTag>* Tags)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.GetBinContentResultTags");
		
		ABP_ShopSlot_C_GetBinContentResultTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Tags != nullptr)
			*Tags = params.Tags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.GetItemsPrice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FGameplayTag>                        Tags                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Price                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShopSlot_C::GetItemsPrice(TArray<struct FGameplayTag>* Tags, int32_t* Price)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.GetItemsPrice");
		
		ABP_ShopSlot_C_GetItemsPrice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Tags != nullptr)
			*Tags = params.Tags;
		if (Price != nullptr)
			*Price = params.Price;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.GetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                ItemTag                                                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      itemActor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      itemClass                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShopSlot_C::GetItem(struct FGameplayTag* ItemTag, class AActor** itemActor, class UClass** itemClass)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.GetItem");
		
		ABP_ShopSlot_C_GetItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemTag != nullptr)
			*ItemTag = params.ItemTag;
		if (itemActor != nullptr)
			*itemActor = params.itemActor;
		if (itemClass != nullptr)
			*itemClass = params.itemClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.UpdatePrice
	 * 		Flags  -> ()
	 */
	void ABP_ShopSlot_C::UpdatePrice()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.UpdatePrice");
		
		ABP_ShopSlot_C_UpdatePrice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_ShopSlot_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.Timeline_0__FinishedFunc");
		
		ABP_ShopSlot_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_ShopSlot_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.Timeline_0__UpdateFunc");
		
		ABP_ShopSlot_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.OnPlusClicked
	 * 		Flags  -> ()
	 */
	void ABP_ShopSlot_C::OnPlusClicked()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.OnPlusClicked");
		
		ABP_ShopSlot_C_OnPlusClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.ButtonPlus
	 * 		Flags  -> ()
	 */
	void ABP_ShopSlot_C::ButtonPlus()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.ButtonPlus");
		
		ABP_ShopSlot_C_ButtonPlus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.ButtonMinus
	 * 		Flags  -> ()
	 */
	void ABP_ShopSlot_C::ButtonMinus()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.ButtonMinus");
		
		ABP_ShopSlot_C_ButtonMinus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.ShowUI
	 * 		Flags  -> ()
	 */
	void ABP_ShopSlot_C::ShowUI()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.ShowUI");
		
		ABP_ShopSlot_C_ShowUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.OnMinusClicked
	 * 		Flags  -> ()
	 */
	void ABP_ShopSlot_C::OnMinusClicked()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.OnMinusClicked");
		
		ABP_ShopSlot_C_OnMinusClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.HideUI
	 * 		Flags  -> ()
	 */
	void ABP_ShopSlot_C::HideUI()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.HideUI");
		
		ABP_ShopSlot_C_HideUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.CloseUI
	 * 		Flags  -> ()
	 */
	void ABP_ShopSlot_C::CloseUI()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.CloseUI");
		
		ABP_ShopSlot_C_CloseUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ShopSlot_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.ReceiveBeginPlay");
		
		ABP_ShopSlot_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.OnBinStateChanged
	 * 		Flags  -> ()
	 */
	void ABP_ShopSlot_C::OnBinStateChanged()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.OnBinStateChanged");
		
		ABP_ShopSlot_C_OnBinStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.UpdateUI
	 * 		Flags  -> ()
	 */
	void ABP_ShopSlot_C::UpdateUI()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.UpdateUI");
		
		ABP_ShopSlot_C_UpdateUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.OnBinContentChanged
	 * 		Flags  -> ()
	 */
	void ABP_ShopSlot_C::OnBinContentChanged()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.OnBinContentChanged");
		
		ABP_ShopSlot_C_OnBinContentChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShopSlot_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.ReceiveEndPlay");
		
		ABP_ShopSlot_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.OnLevelStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShopSlot_C::OnLevelStarted(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.OnLevelStarted");
		
		ABP_ShopSlot_C_OnLevelStarted_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.SetLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLock                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAnnounce                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ShopSlot_C::SetLock(bool bLock, bool bAnnounce)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.SetLock");
		
		ABP_ShopSlot_C_SetLock_Params params {};
		params.bLock = bLock;
		params.bAnnounce = bAnnounce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.UpdateSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             componentToReturnActorTo                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      actorToAttach                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShopSlot_C::UpdateSlot(class USceneComponent* componentToReturnActorTo, const struct FGameplayTag& GameplayTag, class AActor* actorToAttach)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.UpdateSlot");
		
		ABP_ShopSlot_C_UpdateSlot_Params params {};
		params.componentToReturnActorTo = componentToReturnActorTo;
		params.GameplayTag = GameplayTag;
		params.actorToAttach = actorToAttach;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.Clear
	 * 		Flags  -> ()
	 */
	void ABP_ShopSlot_C::Clear()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.Clear");
		
		ABP_ShopSlot_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.ExecuteUbergraph_BP_ShopSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShopSlot_C::ExecuteUbergraph_BP_ShopSlot(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.ExecuteUbergraph_BP_ShopSlot");
		
		ABP_ShopSlot_C_ExecuteUbergraph_BP_ShopSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopSlot.BP_ShopSlot_C.OnPlusPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ShopSlot_C*                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShopSlot_C::OnPlusPressed__DelegateSignature(class ABP_ShopSlot_C* Slot)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopSlot.BP_ShopSlot_C.OnPlusPressed__DelegateSignature");
		
		ABP_ShopSlot_C_OnPlusPressed__DelegateSignature_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ShopSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ShopSlot_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShopSlot.BP_ShopSlot_C");
		return ptr;
	}

}


