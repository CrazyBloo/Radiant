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
	 * 		Name   -> Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.KillTutor
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Standalone_C::KillTutor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.KillTutor");
		
		ABP_Tutorial_Standalone_C_KillTutor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.RestoreTiedItems
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Standalone_C::RestoreTiedItems()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.RestoreTiedItems");
		
		ABP_Tutorial_Standalone_C_RestoreTiedItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Standalone_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.UserConstructionScript");
		
		ABP_Tutorial_Standalone_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Tutorial_Standalone_C::BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_Tutorial_Standalone_C_BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.DoRunTutorial
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Standalone_C::DoRunTutorial()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.DoRunTutorial");
		
		ABP_Tutorial_Standalone_C_DoRunTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.DoStopTutorial
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Standalone_C::DoStopTutorial()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.DoStopTutorial");
		
		ABP_Tutorial_Standalone_C_DoStopTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Tutorial_Standalone_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.ReceiveTick");
		
		ABP_Tutorial_Standalone_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.ResetTutorial
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Standalone_C::ResetTutorial()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.ResetTutorial");
		
		ABP_Tutorial_Standalone_C_ResetTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.RunNextStep
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Standalone_C::RunNextStep()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.RunNextStep");
		
		ABP_Tutorial_Standalone_C_RunNextStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.OnStepFinish
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Standalone_C::OnStepFinish()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.OnStepFinish");
		
		ABP_Tutorial_Standalone_C_OnStepFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Standalone_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.ReceiveBeginPlay");
		
		ABP_Tutorial_Standalone_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.StopStep
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Standalone_C::StopStep()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.StopStep");
		
		ABP_Tutorial_Standalone_C_StopStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.CheckStartActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Tutorial_Standalone_C::CheckStartActor(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.CheckStartActor");
		
		ABP_Tutorial_Standalone_C_CheckStartActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.OnTransitionEnd
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Standalone_C::OnTransitionEnd()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.OnTransitionEnd");
		
		ABP_Tutorial_Standalone_C_OnTransitionEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.EventOnTutorialStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Tutorial_Standalone_C::EventOnTutorialStart(const struct FGameplayTag& Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.EventOnTutorialStart");
		
		ABP_Tutorial_Standalone_C_EventOnTutorialStart_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.OnGamePaused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPaused                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Tutorial_Standalone_C::OnGamePaused(bool bPaused)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.OnGamePaused");
		
		ABP_Tutorial_Standalone_C_OnGamePaused_Params params {};
		params.bPaused = bPaused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.CheckShowParticles
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Standalone_C::CheckShowParticles()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.CheckShowParticles");
		
		ABP_Tutorial_Standalone_C_CheckShowParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.OnStepFinishEvent
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Standalone_C::OnStepFinishEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.OnStepFinishEvent");
		
		ABP_Tutorial_Standalone_C_OnStepFinishEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.OnTransitionStartOnceEvent
	 * 		Flags  -> ()
	 */
	void ABP_Tutorial_Standalone_C::OnTransitionStartOnceEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.OnTransitionStartOnceEvent");
		
		ABP_Tutorial_Standalone_C_OnTransitionStartOnceEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.ExecuteUbergraph_BP_Tutorial_Standalone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Tutorial_Standalone_C::ExecuteUbergraph_BP_Tutorial_Standalone(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.ExecuteUbergraph_BP_Tutorial_Standalone");
		
		ABP_Tutorial_Standalone_C_ExecuteUbergraph_BP_Tutorial_Standalone_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Tutorial_Standalone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Tutorial_Standalone_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Tutorial_Standalone.BP_Tutorial_Standalone_C");
		return ptr;
	}

}


