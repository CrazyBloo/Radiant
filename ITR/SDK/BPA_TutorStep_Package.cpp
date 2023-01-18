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
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.HaveSubtitles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HaveText                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_TutorStep_C::HaveSubtitles(bool* HaveText)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.HaveSubtitles");
		
		ABPA_TutorStep_C_HaveSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HaveText != nullptr)
			*HaveText = params.HaveText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.RePrepareStep
	 * 		Flags  -> ()
	 */
	void ABPA_TutorStep_C::RePrepareStep()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.RePrepareStep");
		
		ABPA_TutorStep_C_RePrepareStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.isPrepared
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               prepared                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_TutorStep_C::isPrepared(bool* prepared)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.isPrepared");
		
		ABPA_TutorStep_C_isPrepared_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (prepared != nullptr)
			*prepared = params.prepared;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.OccupyWidget
	 * 		Flags  -> ()
	 */
	void ABPA_TutorStep_C::OccupyWidget()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.OccupyWidget");
		
		ABPA_TutorStep_C_OccupyWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.HaveText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HaveText                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_TutorStep_C::HaveText(bool* HaveText)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.HaveText");
		
		ABPA_TutorStep_C_HaveText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HaveText != nullptr)
			*HaveText = params.HaveText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.IsRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               running                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_TutorStep_C::IsRunning(bool* running)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.IsRunning");
		
		ABPA_TutorStep_C_IsRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (running != nullptr)
			*running = params.running;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.DoPrepare
	 * 		Flags  -> ()
	 */
	void ABPA_TutorStep_C::DoPrepare()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.DoPrepare");
		
		ABPA_TutorStep_C_DoPrepare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.PrepareStep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Tutorial_Mission_C*                      sequencer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABPA_Tutorial_C*                             Tutorial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_TutorStep_C::PrepareStep(class ABP_Tutorial_Mission_C* sequencer, class ABPA_Tutorial_C* Tutorial)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.PrepareStep");
		
		ABPA_TutorStep_C_PrepareStep_Params params {};
		params.sequencer = sequencer;
		params.Tutorial = Tutorial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.UpdateTargetBeam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_TutorStep_C::UpdateTargetBeam(const struct FVector& Target)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.UpdateTargetBeam");
		
		ABPA_TutorStep_C_UpdateTargetBeam_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.Finish
	 * 		Flags  -> ()
	 */
	void ABPA_TutorStep_C::Finish()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.Finish");
		
		ABPA_TutorStep_C_Finish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.EdRefresh
	 * 		Flags  -> ()
	 */
	void ABPA_TutorStep_C::EdRefresh()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.EdRefresh");
		
		ABPA_TutorStep_C_EdRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.EdFinish
	 * 		Flags  -> ()
	 */
	void ABPA_TutorStep_C::EdFinish()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.EdFinish");
		
		ABPA_TutorStep_C_EdFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.DoStop
	 * 		Flags  -> ()
	 */
	void ABPA_TutorStep_C::DoStop()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.DoStop");
		
		ABPA_TutorStep_C_DoStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.StopStep
	 * 		Flags  -> ()
	 */
	void ABPA_TutorStep_C::StopStep()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.StopStep");
		
		ABPA_TutorStep_C_StopStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.ReplaceControlName
	 * 		Flags  -> ()
	 */
	void ABPA_TutorStep_C::ReplaceControlName()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.ReplaceControlName");
		
		ABPA_TutorStep_C_ReplaceControlName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.UpdateText
	 * 		Flags  -> ()
	 */
	void ABPA_TutorStep_C::UpdateText()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.UpdateText");
		
		ABPA_TutorStep_C_UpdateText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.DoExecute
	 * 		Flags  -> ()
	 */
	void ABPA_TutorStep_C::DoExecute()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.DoExecute");
		
		ABPA_TutorStep_C_DoExecute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.ExecuteStep
	 * 		Flags  -> ()
	 */
	void ABPA_TutorStep_C::ExecuteStep()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.ExecuteStep");
		
		ABPA_TutorStep_C_ExecuteStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABPA_TutorStep_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.UserConstructionScript");
		
		ABPA_TutorStep_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.ItemsSold
	 * 		Flags  -> ()
	 */
	void ABPA_TutorStep_C::ItemsSold()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.ItemsSold");
		
		ABPA_TutorStep_C_ItemsSold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.ItemsBought
	 * 		Flags  -> ()
	 */
	void ABPA_TutorStep_C::ItemsBought()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.ItemsBought");
		
		ABPA_TutorStep_C_ItemsBought_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.SetControllActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABPA_TutorStep_C*                            Ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_TutorStep_C::SetControllActor(class ABPA_TutorStep_C* Ref)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.SetControllActor");
		
		ABPA_TutorStep_C_SetControllActor_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.LockFunctions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_TutorStep_C::LockFunctions(bool lock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.LockFunctions");
		
		ABPA_TutorStep_C_LockFunctions_Params params {};
		params.lock = lock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.ItemPutToBin
	 * 		Flags  -> ()
	 */
	void ABPA_TutorStep_C::ItemPutToBin()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.ItemPutToBin");
		
		ABPA_TutorStep_C_ItemPutToBin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.ItemREmovedFromBin
	 * 		Flags  -> ()
	 */
	void ABPA_TutorStep_C::ItemREmovedFromBin()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.ItemREmovedFromBin");
		
		ABPA_TutorStep_C_ItemREmovedFromBin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.TargetActorHeldInHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHeld                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HeldInLeft                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_TutorStep_C::TargetActorHeldInHand(bool IsHeld, bool HeldInLeft)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.TargetActorHeldInHand");
		
		ABPA_TutorStep_C_TargetActorHeldInHand_Params params {};
		params.IsHeld = IsHeld;
		params.HeldInLeft = HeldInLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABPA_TutorStep_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.ReceiveBeginPlay");
		
		ABPA_TutorStep_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_TutorStep_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.ReceiveTick");
		
		ABPA_TutorStep_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.updateTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_TutorStep_C::updateTransform(float DeltaTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.updateTransform");
		
		ABPA_TutorStep_C_updateTransform_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.OnLevelPrepare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_TutorStep_C::OnLevelPrepare(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.OnLevelPrepare");
		
		ABPA_TutorStep_C_OnLevelPrepare_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.SkipStep
	 * 		Flags  -> ()
	 */
	void ABPA_TutorStep_C::SkipStep()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.SkipStep");
		
		ABPA_TutorStep_C_SkipStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.ExecuteUbergraph_BPA_TutorStep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_TutorStep_C::ExecuteUbergraph_BPA_TutorStep(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.ExecuteUbergraph_BPA_TutorStep");
		
		ABPA_TutorStep_C_ExecuteUbergraph_BPA_TutorStep_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_TutorStep.BPA_TutorStep_C.OnTutorialStepFinish__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABPA_TutorStep_C::OnTutorialStepFinish__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_TutorStep.BPA_TutorStep_C.OnTutorialStepFinish__DelegateSignature");
		
		ABPA_TutorStep_C_OnTutorialStepFinish__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_TutorStep_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_TutorStep_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_TutorStep.BPA_TutorStep_C");
		return ptr;
	}

}


