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
	 * 		Name   -> Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.UpdateMissingItemsList
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Mission_C::UpdateMissingItemsList()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.UpdateMissingItemsList");
		
		ABP_Tutorial_Mission_C_UpdateMissingItemsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.FindItemActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                ItemTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Actor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Tutorial_Mission_C::FindItemActor(const struct FGameplayTag& ItemTag, bool* success, class AActor** Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.FindItemActor");
		
		ABP_Tutorial_Mission_C_FindItemActor_Params params {};
		params.ItemTag = ItemTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		if (Actor != nullptr)
			*Actor = params.Actor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.GetMissingItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      missingActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Tutorial_Mission_C::GetMissingItem(class AActor** missingActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.GetMissingItem");
		
		ABP_Tutorial_Mission_C_GetMissingItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (missingActor != nullptr)
			*missingActor = params.missingActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.GetItemNotInInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              ItemsArray                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class ABPA_BaseItem_C*                             itemActor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Tutorial_Mission_C::GetItemNotInInventory(TArray<class AActor*>* ItemsArray, class ABPA_BaseItem_C** itemActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.GetItemNotInInventory");
		
		ABP_Tutorial_Mission_C_GetItemNotInInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemsArray != nullptr)
			*ItemsArray = params.ItemsArray;
		if (itemActor != nullptr)
			*itemActor = params.itemActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.GetCurrentStep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABPA_TutorStep_C*                            step                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Tutorial_Mission_C::GetCurrentStep(class ABPA_TutorStep_C** step)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.GetCurrentStep");
		
		ABP_Tutorial_Mission_C_GetCurrentStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (step != nullptr)
			*step = params.step;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Mission_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.UserConstructionScript");
		
		ABP_Tutorial_Mission_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.ExecuteNextStep
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Mission_C::ExecuteNextStep()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.ExecuteNextStep");
		
		ABP_Tutorial_Mission_C_ExecuteNextStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.IncrementAndContinue
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Mission_C::IncrementAndContinue()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.IncrementAndContinue");
		
		ABP_Tutorial_Mission_C_IncrementAndContinue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.MissingItemsCheck
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Mission_C::MissingItemsCheck()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.MissingItemsCheck");
		
		ABP_Tutorial_Mission_C_MissingItemsCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.StopStep
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Mission_C::StopStep()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.StopStep");
		
		ABP_Tutorial_Mission_C_StopStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.StopSequenceAndShowMissingItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Tutorial_Mission_C::StopSequenceAndShowMissingItem(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.StopSequenceAndShowMissingItem");
		
		ABP_Tutorial_Mission_C_StopSequenceAndShowMissingItem_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.FinishStep
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Mission_C::FinishStep()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.FinishStep");
		
		ABP_Tutorial_Mission_C_FinishStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.FinishSequencer
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Mission_C::FinishSequencer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.FinishSequencer");
		
		ABP_Tutorial_Mission_C_FinishSequencer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Tutorial_Mission_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.ReceiveEndPlay");
		
		ABP_Tutorial_Mission_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Tutorial_Mission_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.ReceiveTick");
		
		ABP_Tutorial_Mission_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.OnLevelPrepare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Tutorial_Mission_C::OnLevelPrepare(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.OnLevelPrepare");
		
		ABP_Tutorial_Mission_C_OnLevelPrepare_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.OnTransitionEnd
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Mission_C::OnTransitionEnd()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.OnTransitionEnd");
		
		ABP_Tutorial_Mission_C_OnTransitionEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.DoRunTutorial
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Mission_C::DoRunTutorial()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.DoRunTutorial");
		
		ABP_Tutorial_Mission_C_DoRunTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.OnTransitionStartOnceEvent
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Mission_C::OnTransitionStartOnceEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.OnTransitionStartOnceEvent");
		
		ABP_Tutorial_Mission_C_OnTransitionStartOnceEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.ExecuteUbergraph_BP_Tutorial_Mission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Tutorial_Mission_C::ExecuteUbergraph_BP_Tutorial_Mission(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.ExecuteUbergraph_BP_Tutorial_Mission");
		
		ABP_Tutorial_Mission_C_ExecuteUbergraph_BP_Tutorial_Mission_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Tutorial_Mission_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Tutorial_Mission_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Tutorial_Mission.BP_Tutorial_Mission_C");
		return ptr;
	}

}


