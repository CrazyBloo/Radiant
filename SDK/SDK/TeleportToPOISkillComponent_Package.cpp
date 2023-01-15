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
	 * 		Name   -> Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.GetSkillPhases
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<ESkillPhase>                                Phases                                                     (Parm, OutParm)
	 */
	void UTeleportToPOISkillComponent_C::GetSkillPhases(TArray<ESkillPhase>* Phases)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.GetSkillPhases");
		
		UTeleportToPOISkillComponent_C_GetSkillPhases_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Phases != nullptr)
			*Phases = params.Phases;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.NeedWaitForReadyAfter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NeedWait                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTeleportToPOISkillComponent_C::NeedWaitForReadyAfter(bool* NeedWait)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.NeedWaitForReadyAfter");
		
		UTeleportToPOISkillComponent_C_NeedWaitForReadyAfter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NeedWait != nullptr)
			*NeedWait = params.NeedWait;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.NeedWaitForReadyBefore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NeedWait                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTeleportToPOISkillComponent_C::NeedWaitForReadyBefore(bool* NeedWait)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.NeedWaitForReadyBefore");
		
		UTeleportToPOISkillComponent_C_NeedWaitForReadyBefore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NeedWait != nullptr)
			*NeedWait = params.NeedWait;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.IsSkillReady
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SkillReady                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CooldownLeft                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTeleportToPOISkillComponent_C::IsSkillReady(bool* SkillReady, float* CooldownLeft)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.IsSkillReady");
		
		UTeleportToPOISkillComponent_C_IsSkillReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkillReady != nullptr)
			*SkillReady = params.SkillReady;
		if (CooldownLeft != nullptr)
			*CooldownLeft = params.CooldownLeft;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.UseSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTeleportToPOISkillComponent_C::UseSkill(bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.UseSkill");
		
		UTeleportToPOISkillComponent_C_UseSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.IsSkillInProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InProgress                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTeleportToPOISkillComponent_C::IsSkillInProgress(bool* InProgress)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.IsSkillInProgress");
		
		UTeleportToPOISkillComponent_C_IsSkillInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InProgress != nullptr)
			*InProgress = params.InProgress;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.CheckTargetReachability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTeleportToPOISkillComponent_C::CheckTargetReachability(bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.CheckTargetReachability");
		
		UTeleportToPOISkillComponent_C_CheckTargetReachability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.GetSettingsKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Output                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UTeleportToPOISkillComponent_C::GetSettingsKey(const class FString& Input, class FString* Output)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.GetSettingsKey");
		
		UTeleportToPOISkillComponent_C_GetSettingsKey_Params params {};
		params.Input = Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTeleportToPOISkillComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.ReceiveTick");
		
		UTeleportToPOISkillComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.DoUse
	 * 		Flags  -> ()
	 */
	void UTeleportToPOISkillComponent_C::DoUse()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.DoUse");
		
		UTeleportToPOISkillComponent_C_DoUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UTeleportToPOISkillComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.ReceiveBeginPlay");
		
		UTeleportToPOISkillComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.ExecuteUbergraph_TeleportToPOISkillComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTeleportToPOISkillComponent_C::ExecuteUbergraph_TeleportToPOISkillComponent(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.ExecuteUbergraph_TeleportToPOISkillComponent");
		
		UTeleportToPOISkillComponent_C_ExecuteUbergraph_TeleportToPOISkillComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.OnTeleportFinish__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTeleportToPOISkillComponent_C::OnTeleportFinish__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.OnTeleportFinish__DelegateSignature");
		
		UTeleportToPOISkillComponent_C_OnTeleportFinish__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.OnTeleportStart__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TargetLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTeleportToPOISkillComponent_C::OnTeleportStart__DelegateSignature(const struct FVector& TargetLocation, float Time)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.OnTeleportStart__DelegateSignature");
		
		UTeleportToPOISkillComponent_C_OnTeleportStart__DelegateSignature_Params params {};
		params.TargetLocation = TargetLocation;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTeleportToPOISkillComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTeleportToPOISkillComponent_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TeleportToPOISkillComponent.TeleportToPOISkillComponent_C");
		return ptr;
	}

}


