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
	 * 		Name   -> Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.CheckPlayerLevelBlock
	 * 		Flags  -> ()
	 */
	void ABP_TutorialMissionComputer_C::CheckPlayerLevelBlock()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.CheckPlayerLevelBlock");
		
		ABP_TutorialMissionComputer_C_CheckPlayerLevelBlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.PrepareCassetteRecord
	 * 		Flags  -> ()
	 */
	void ABP_TutorialMissionComputer_C::PrepareCassetteRecord()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.PrepareCassetteRecord");
		
		ABP_TutorialMissionComputer_C_PrepareCassetteRecord_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.UpdateCurrentPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               notUpdated                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TutorialMissionComputer_C::UpdateCurrentPage(bool* notUpdated)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.UpdateCurrentPage");
		
		ABP_TutorialMissionComputer_C_UpdateCurrentPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (notUpdated != nullptr)
			*notUpdated = params.notUpdated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.OnLevelStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TutorialMissionComputer_C::OnLevelStarted(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.OnLevelStarted");
		
		ABP_TutorialMissionComputer_C_OnLevelStarted_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TutorialMissionComputer_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.ReceiveTick");
		
		ABP_TutorialMissionComputer_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.GoToMissions
	 * 		Flags  -> ()
	 */
	void ABP_TutorialMissionComputer_C::GoToMissions()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.GoToMissions");
		
		ABP_TutorialMissionComputer_C_GoToMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.GoToMainPage
	 * 		Flags  -> ()
	 */
	void ABP_TutorialMissionComputer_C::GoToMainPage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.GoToMainPage");
		
		ABP_TutorialMissionComputer_C_GoToMainPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.GoToTapes
	 * 		Flags  -> ()
	 */
	void ABP_TutorialMissionComputer_C::GoToTapes()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.GoToTapes");
		
		ABP_TutorialMissionComputer_C_GoToTapes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.GoToExecuting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                MissionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TutorialMissionComputer_C::GoToExecuting(class UMissionData* MissionData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.GoToExecuting");
		
		ABP_TutorialMissionComputer_C_GoToExecuting_Params params {};
		params.MissionData = MissionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.GoToBriefing
	 * 		Flags  -> ()
	 */
	void ABP_TutorialMissionComputer_C::GoToBriefing()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.GoToBriefing");
		
		ABP_TutorialMissionComputer_C_GoToBriefing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_TutorialMissionComputer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.ReceiveBeginPlay");
		
		ABP_TutorialMissionComputer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.BndEvt__BPC_RecordPlayer_K2Node_ComponentBoundEvent_4_OnRecordFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_TutorialMissionComputer_C::BndEvt__BPC_RecordPlayer_K2Node_ComponentBoundEvent_4_OnRecordFinished__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.BndEvt__BPC_RecordPlayer_K2Node_ComponentBoundEvent_4_OnRecordFinished__DelegateSignature");
		
		ABP_TutorialMissionComputer_C_BndEvt__BPC_RecordPlayer_K2Node_ComponentBoundEvent_4_OnRecordFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.CheckDist
	 * 		Flags  -> ()
	 */
	void ABP_TutorialMissionComputer_C::CheckDist()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.CheckDist");
		
		ABP_TutorialMissionComputer_C_CheckDist_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_TutorialMissionComputer_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_TutorialMissionComputer_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.BndEvt__Box_OnOff_Overlap_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TutorialMissionComputer_C::BndEvt__Box_OnOff_Overlap_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.BndEvt__Box_OnOff_Overlap_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");
		
		ABP_TutorialMissionComputer_C_BndEvt__Box_OnOff_Overlap_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.GoToNotice
	 * 		Flags  -> ()
	 */
	void ABP_TutorialMissionComputer_C::GoToNotice()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.GoToNotice");
		
		ABP_TutorialMissionComputer_C_GoToNotice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.NoticeAccepted
	 * 		Flags  -> ()
	 */
	void ABP_TutorialMissionComputer_C::NoticeAccepted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.NoticeAccepted");
		
		ABP_TutorialMissionComputer_C_NoticeAccepted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.SetTurnedOff
	 * 		Flags  -> ()
	 */
	void ABP_TutorialMissionComputer_C::SetTurnedOff()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.SetTurnedOff");
		
		ABP_TutorialMissionComputer_C_SetTurnedOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.EnableCassetes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TutorialMissionComputer_C::EnableCassetes(bool enable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.EnableCassetes");
		
		ABP_TutorialMissionComputer_C_EnableCassetes_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.BndEvt__VRButton_K2Node_ComponentBoundEvent_5_VRButtonStateChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ButtonState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      InteractingActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         InteractingComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TutorialMissionComputer_C::BndEvt__VRButton_K2Node_ComponentBoundEvent_5_VRButtonStateChangedSignature__DelegateSignature(bool ButtonState, class AActor* InteractingActor, class UPrimitiveComponent* InteractingComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.BndEvt__VRButton_K2Node_ComponentBoundEvent_5_VRButtonStateChangedSignature__DelegateSignature");
		
		ABP_TutorialMissionComputer_C_BndEvt__VRButton_K2Node_ComponentBoundEvent_5_VRButtonStateChangedSignature__DelegateSignature_Params params {};
		params.ButtonState = ButtonState;
		params.InteractingActor = InteractingActor;
		params.InteractingComponent = InteractingComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.OnPlayerLevelChangeEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TutorialMissionComputer_C::OnPlayerLevelChangeEvent(int32_t Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.OnPlayerLevelChangeEvent");
		
		ABP_TutorialMissionComputer_C_OnPlayerLevelChangeEvent_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.ExecuteUbergraph_BP_TutorialMissionComputer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TutorialMissionComputer_C::ExecuteUbergraph_BP_TutorialMissionComputer(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.ExecuteUbergraph_BP_TutorialMissionComputer");
		
		ABP_TutorialMissionComputer_C_ExecuteUbergraph_BP_TutorialMissionComputer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.OnComputerUnlocked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_TutorialMissionComputer_C::OnComputerUnlocked__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.OnComputerUnlocked__DelegateSignature");
		
		ABP_TutorialMissionComputer_C_OnComputerUnlocked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TutorialMissionComputer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TutorialMissionComputer_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_TutorialMissionComputer.BP_TutorialMissionComputer_C");
		return ptr;
	}

}


