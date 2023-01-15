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
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.StopSfx
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::StopSfx()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.StopSfx");
		
		ABP_TrainStorage_C_StopSfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.PlaySfx
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ChannelIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrainStorage_C::PlaySfx(class USoundBase* Sound, int32_t ChannelIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.PlaySfx");
		
		ABP_TrainStorage_C_PlaySfx_Params params {};
		params.Sound = Sound;
		params.ChannelIndex = ChannelIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.CheckPlayerLevelBlock
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::CheckPlayerLevelBlock()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.CheckPlayerLevelBlock");
		
		ABP_TrainStorage_C_CheckPlayerLevelBlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.ResetDeliveryBulb
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::ResetDeliveryBulb()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.ResetDeliveryBulb");
		
		ABP_TrainStorage_C_ResetDeliveryBulb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.HighlightDeliveryBulb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TrainStorage_C::HighlightDeliveryBulb(bool success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.HighlightDeliveryBulb");
		
		ABP_TrainStorage_C_HighlightDeliveryBulb_Params params {};
		params.success = success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.EnableRepiarModeOnly
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::EnableRepiarModeOnly()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.EnableRepiarModeOnly");
		
		ABP_TrainStorage_C_EnableRepiarModeOnly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.FillterDeliveryBaseItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              Items                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class AActor*>                              Actors                                                     (Parm, OutParm)
	 */
	void ABP_TrainStorage_C::FillterDeliveryBaseItems(TArray<class AActor*>* Items, TArray<class AActor*>* Actors)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.FillterDeliveryBaseItems");
		
		ABP_TrainStorage_C_FillterDeliveryBaseItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
		if (Actors != nullptr)
			*Actors = params.Actors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.CheckWrongItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                MissionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TrainStorage_C::CheckWrongItems(class UMissionData* MissionData, bool* State)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.CheckWrongItems");
		
		ABP_TrainStorage_C_CheckWrongItems_Params params {};
		params.MissionData = MissionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.InitButtonApplyRepair
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::InitButtonApplyRepair()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.InitButtonApplyRepair");
		
		ABP_TrainStorage_C_InitButtonApplyRepair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.IsUpgrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TrainStorage_C::IsUpgrade(bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.IsUpgrade");
		
		ABP_TrainStorage_C_IsUpgrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.LockComputer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TrainStorage_C::LockComputer(bool lock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.LockComputer");
		
		ABP_TrainStorage_C_LockComputer_Params params {};
		params.lock = lock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.SpawnRepairActors
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::SpawnRepairActors()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.SpawnRepairActors");
		
		ABP_TrainStorage_C_SpawnRepairActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.IsRepair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TrainStorage_C::IsRepair(bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.IsRepair");
		
		ABP_TrainStorage_C_IsRepair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.IsDelivery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TrainStorage_C::IsDelivery(bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.IsDelivery");
		
		ABP_TrainStorage_C_IsDelivery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.RepairItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TrainStorage_C::RepairItems(bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.RepairItems");
		
		ABP_TrainStorage_C_RepairItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.CheckTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                ItemTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGameplayTag>                        targetTags                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrainStorage_C::CheckTags(const struct FGameplayTag& ItemTag, TArray<struct FGameplayTag>* targetTags, bool* found, int32_t* Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.CheckTags");
		
		ABP_TrainStorage_C_CheckTags_Params params {};
		params.ItemTag = ItemTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (targetTags != nullptr)
			*targetTags = params.targetTags;
		if (found != nullptr)
			*found = params.found;
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.CheckDelivery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                MissionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               finishObjectives                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               excessive                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TrainStorage_C::CheckDelivery(class UMissionData* MissionData, bool finishObjectives, bool* success, bool* excessive)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.CheckDelivery");
		
		ABP_TrainStorage_C_CheckDelivery_Params params {};
		params.MissionData = MissionData;
		params.finishObjectives = finishObjectives;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		if (excessive != nullptr)
			*excessive = params.excessive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.unlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              stateChangedDelegate                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              beginOverlapDelegate                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              endOverlapDelegate                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void ABP_TrainStorage_C::unlock(int32_t Index, const class FScriptDelegate& stateChangedDelegate, const class FScriptDelegate& beginOverlapDelegate, const class FScriptDelegate& endOverlapDelegate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.unlock");
		
		ABP_TrainStorage_C_unlock_Params params {};
		params.Index = Index;
		params.stateChangedDelegate = stateChangedDelegate;
		params.beginOverlapDelegate = beginOverlapDelegate;
		params.endOverlapDelegate = endOverlapDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.LockAll
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::LockAll()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.LockAll");
		
		ABP_TrainStorage_C_LockAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.GetCurrentIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Delivery                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrainStorage_C::GetCurrentIndex(bool Delivery, int32_t* Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.GetCurrentIndex");
		
		ABP_TrainStorage_C_GetCurrentIndex_Params params {};
		params.Delivery = Delivery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.GetCellItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Delivery                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class AActor*>                              cellItems                                                  (Parm, OutParm)
	 * 		TArray<class AActor*>                              AllItems                                                   (Parm, OutParm)
	 */
	void ABP_TrainStorage_C::GetCellItems(bool Delivery, TArray<class AActor*>* cellItems, TArray<class AActor*>* AllItems)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.GetCellItems");
		
		ABP_TrainStorage_C_GetCellItems_Params params {};
		params.Delivery = Delivery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (cellItems != nullptr)
			*cellItems = params.cellItems;
		if (AllItems != nullptr)
			*AllItems = params.AllItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.IsActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TrainStorage_C::IsActive(bool* Active)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.IsActive");
		
		ABP_TrainStorage_C_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Active != nullptr)
			*Active = params.Active;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.ReceiveBeginPlay");
		
		ABP_TrainStorage_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrainStorage_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.ReceiveTick");
		
		ABP_TrainStorage_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.UpdateDoors
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::UpdateDoors()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.UpdateDoors");
		
		ABP_TrainStorage_C_UpdateDoors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.GoToSelection
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::GoToSelection()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.GoToSelection");
		
		ABP_TrainStorage_C_GoToSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.GoToDelivery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MissionInstanceId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_TrainStorage_C::GoToDelivery(const class FString& MissionInstanceId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.GoToDelivery");
		
		ABP_TrainStorage_C_GoToDelivery_Params params {};
		params.MissionInstanceId = MissionInstanceId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.GoToRepair
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::GoToRepair()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.GoToRepair");
		
		ABP_TrainStorage_C_GoToRepair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.OnLevelStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrainStorage_C::OnLevelStarted(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.OnLevelStarted");
		
		ABP_TrainStorage_C_OnLevelStarted_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.OnItemDroppedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrainStorage_C::OnItemDroppedEvent(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.OnItemDroppedEvent");
		
		ABP_TrainStorage_C_OnItemDroppedEvent_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrainStorage_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.ReceiveEndPlay");
		
		ABP_TrainStorage_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.GoToUpgrade
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::GoToUpgrade()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.GoToUpgrade");
		
		ABP_TrainStorage_C_GoToUpgrade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.UpgradeItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              Itrem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FUpgradeInfo>                        Install                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FUpgradeInfo>                        Remove                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_TrainStorage_C::UpgradeItem(class UInventoryItem* Itrem, TArray<struct FUpgradeInfo>* Install, TArray<struct FUpgradeInfo>* Remove)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.UpgradeItem");
		
		ABP_TrainStorage_C_UpgradeItem_Params params {};
		params.Itrem = Itrem;
		
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
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.GoToMissionSelection
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::GoToMissionSelection()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.GoToMissionSelection");
		
		ABP_TrainStorage_C_GoToMissionSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.OnPlayerLevelChangeEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrainStorage_C::OnPlayerLevelChangeEvent(int32_t Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.OnPlayerLevelChangeEvent");
		
		ABP_TrainStorage_C_OnPlayerLevelChangeEvent_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.OnCompletePressed
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::OnCompletePressed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.OnCompletePressed");
		
		ABP_TrainStorage_C_OnCompletePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.OnDeliveryBackPressed
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::OnDeliveryBackPressed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.OnDeliveryBackPressed");
		
		ABP_TrainStorage_C_OnDeliveryBackPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.OnMissionSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InstanceId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_TrainStorage_C::OnMissionSelected(const class FString& InstanceId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.OnMissionSelected");
		
		ABP_TrainStorage_C_OnMissionSelected_Params params {};
		params.InstanceId = InstanceId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.UpgradeOnPressedEvent
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::UpgradeOnPressedEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.UpgradeOnPressedEvent");
		
		ABP_TrainStorage_C_UpgradeOnPressedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.BackOnPressedEvent
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::BackOnPressedEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.BackOnPressedEvent");
		
		ABP_TrainStorage_C_BackOnPressedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.DebriefingOkOnPressedEvent
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::DebriefingOkOnPressedEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.DebriefingOkOnPressedEvent");
		
		ABP_TrainStorage_C_DebriefingOkOnPressedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.OnMissionFinishedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                MissionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrainStorage_C::OnMissionFinishedEvent(class UMissionData* MissionData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.OnMissionFinishedEvent");
		
		ABP_TrainStorage_C_OnMissionFinishedEvent_Params params {};
		params.MissionData = MissionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.DeliveryOnPressedEvent
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::DeliveryOnPressedEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.DeliveryOnPressedEvent");
		
		ABP_TrainStorage_C_DeliveryOnPressedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.RepairOnPressedEvent
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::RepairOnPressedEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.RepairOnPressedEvent");
		
		ABP_TrainStorage_C_RepairOnPressedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.StartRepairItems
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::StartRepairItems()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.StartRepairItems");
		
		ABP_TrainStorage_C_StartRepairItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.UpdateWeaponCell
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::UpdateWeaponCell()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.UpdateWeaponCell");
		
		ABP_TrainStorage_C_UpdateWeaponCell_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.OnEndOverlapRepair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrainStorage_C::OnEndOverlapRepair(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.OnEndOverlapRepair");
		
		ABP_TrainStorage_C_OnEndOverlapRepair_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.OnBeginOverlapRepair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_TrainStorage_C::OnBeginOverlapRepair(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.OnBeginOverlapRepair");
		
		ABP_TrainStorage_C_OnBeginOverlapRepair_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.OnDoorStateChangedWeapon
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::OnDoorStateChangedWeapon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.OnDoorStateChangedWeapon");
		
		ABP_TrainStorage_C_OnDoorStateChangedWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.UpdateDeliveryCell
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::UpdateDeliveryCell()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.UpdateDeliveryCell");
		
		ABP_TrainStorage_C_UpdateDeliveryCell_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.OnEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrainStorage_C::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.OnEndOverlap");
		
		ABP_TrainStorage_C_OnEndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.OnBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_TrainStorage_C::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.OnBeginOverlap");
		
		ABP_TrainStorage_C_OnBeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.OnDoorStateChanged
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::OnDoorStateChanged()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.OnDoorStateChanged");
		
		ABP_TrainStorage_C_OnDoorStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.ExecuteUbergraph_BP_TrainStorage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrainStorage_C::ExecuteUbergraph_BP_TrainStorage(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.ExecuteUbergraph_BP_TrainStorage");
		
		ABP_TrainStorage_C_ExecuteUbergraph_BP_TrainStorage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TrainStorage.BP_TrainStorage_C.OnCellContentChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_TrainStorage_C::OnCellContentChanged__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainStorage.BP_TrainStorage_C.OnCellContentChanged__DelegateSignature");
		
		ABP_TrainStorage_C_OnCellContentChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TrainStorage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TrainStorage_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrainStorage.BP_TrainStorage_C");
		return ptr;
	}

}


