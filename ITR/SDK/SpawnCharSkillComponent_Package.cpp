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
	 * 		Name   -> Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.GetSkillPhases
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<ESkillPhase>                                Phases                                                     (Parm, OutParm)
	 */
	void USpawnCharSkillComponent_C::GetSkillPhases(TArray<ESkillPhase>* Phases)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.GetSkillPhases");
		
		USpawnCharSkillComponent_C_GetSkillPhases_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Phases != nullptr)
			*Phases = params.Phases;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.NeedWaitForReadyAfter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NeedWait                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpawnCharSkillComponent_C::NeedWaitForReadyAfter(bool* NeedWait)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.NeedWaitForReadyAfter");
		
		USpawnCharSkillComponent_C_NeedWaitForReadyAfter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NeedWait != nullptr)
			*NeedWait = params.NeedWait;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.NeedWaitForReadyBefore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NeedWait                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpawnCharSkillComponent_C::NeedWaitForReadyBefore(bool* NeedWait)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.NeedWaitForReadyBefore");
		
		USpawnCharSkillComponent_C_NeedWaitForReadyBefore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NeedWait != nullptr)
			*NeedWait = params.NeedWait;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.IsSkillReady
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SkillReady                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CooldownLeft                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnCharSkillComponent_C::IsSkillReady(bool* SkillReady, float* CooldownLeft)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.IsSkillReady");
		
		USpawnCharSkillComponent_C_IsSkillReady_Params params {};
		
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
	 * 		Name   -> Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.UseSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpawnCharSkillComponent_C::UseSkill(bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.UseSkill");
		
		USpawnCharSkillComponent_C_UseSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.IsSkillInProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InProgress                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpawnCharSkillComponent_C::IsSkillInProgress(bool* InProgress)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.IsSkillInProgress");
		
		USpawnCharSkillComponent_C_IsSkillInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InProgress != nullptr)
			*InProgress = params.InProgress;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.UpdateCharsLifetime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnCharSkillComponent_C::UpdateCharsLifetime(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.UpdateCharsLifetime");
		
		USpawnCharSkillComponent_C_UpdateCharsLifetime_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.SpawnChar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		class ABPA_Char_C*                                 _char_                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnCharSkillComponent_C::SpawnChar(const struct FTransform& Transform, class ABPA_Char_C** _char_)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.SpawnChar");
		
		USpawnCharSkillComponent_C_SpawnChar_Params params {};
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_char_ != nullptr)
			*_char_ = params._char_;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void USpawnCharSkillComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.ReceiveBeginPlay");
		
		USpawnCharSkillComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.OnOwnerDead
	 * 		Flags  -> ()
	 */
	void USpawnCharSkillComponent_C::OnOwnerDead()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.OnOwnerDead");
		
		USpawnCharSkillComponent_C_OnOwnerDead_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.DoUse
	 * 		Flags  -> ()
	 */
	void USpawnCharSkillComponent_C::DoUse()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.DoUse");
		
		USpawnCharSkillComponent_C_DoUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnCharSkillComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.ReceiveTick");
		
		USpawnCharSkillComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.ExecuteUbergraph_SpawnCharSkillComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnCharSkillComponent_C::ExecuteUbergraph_SpawnCharSkillComponent(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.ExecuteUbergraph_SpawnCharSkillComponent");
		
		USpawnCharSkillComponent_C_ExecuteUbergraph_SpawnCharSkillComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnCharSkillComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnCharSkillComponent_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SpawnCharSkillComponent.SpawnCharSkillComponent_C");
		return ptr;
	}

}


