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
	 * 		Name   -> Function BPA_Char.BPA_Char_C.GetAliveStats
	 * 		Flags  -> ()
	 */
	class UActorComponent* ABPA_Char_C::GetAliveStats()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.GetAliveStats");
		
		ABPA_Char_C_GetAliveStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.GetBoneTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FTransform ABPA_Char_C::GetBoneTransform(const class FName& BoneName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.GetBoneTransform");
		
		ABPA_Char_C_GetBoneTransform_Params params {};
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.GetBotMovementMode
	 * 		Flags  -> ()
	 */
	EBotMovementMode ABPA_Char_C::GetBotMovementMode()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.GetBotMovementMode");
		
		ABPA_Char_C_GetBotMovementMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.GetBotShootingComponent
	 * 		Flags  -> ()
	 */
	class UActorComponent* ABPA_Char_C::GetBotShootingComponent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.GetBotShootingComponent");
		
		ABPA_Char_C_GetBotShootingComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.GetIdleWalkDistance
	 * 		Flags  -> ()
	 */
	float ABPA_Char_C::GetIdleWalkDistance()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.GetIdleWalkDistance");
		
		ABPA_Char_C_GetIdleWalkDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.GetOptimalRange
	 * 		Flags  -> ()
	 */
	float ABPA_Char_C::GetOptimalRange()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.GetOptimalRange");
		
		ABPA_Char_C_GetOptimalRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.GetPatrolPath
	 * 		Flags  -> ()
	 */
	class USplineComponent* ABPA_Char_C::GetPatrolPath()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.GetPatrolPath");
		
		ABPA_Char_C_GetPatrolPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.GetPatrolTargets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsValidOut                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class AActor*>                              TargetsOut                                                 (Parm, OutParm)
	 */
	void ABPA_Char_C::GetPatrolTargets(bool* IsValidOut, TArray<class AActor*>* TargetsOut)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.GetPatrolTargets");
		
		ABPA_Char_C_GetPatrolTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValidOut != nullptr)
			*IsValidOut = params.IsValidOut;
		if (TargetsOut != nullptr)
			*TargetsOut = params.TargetsOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.GetPerception
	 * 		Flags  -> ()
	 */
	class UPRNpcPerceptionComponent* ABPA_Char_C::GetPerception()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.GetPerception");
		
		ABPA_Char_C_GetPerception_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.GetSelection
	 * 		Flags  -> ()
	 */
	class AActor* ABPA_Char_C::GetSelection()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.GetSelection");
		
		ABPA_Char_C_GetSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.GetStealth
	 * 		Flags  -> ()
	 */
	float ABPA_Char_C::GetStealth()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.GetStealth");
		
		ABPA_Char_C_GetStealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.SetBotMovementMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBotMovementMode                                   MovementMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Changed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Char_C::SetBotMovementMode(EBotMovementMode MovementMode, bool* Changed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.SetBotMovementMode");
		
		ABPA_Char_C_SetBotMovementMode_Params params {};
		params.MovementMode = MovementMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Changed != nullptr)
			*Changed = params.Changed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.GetHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Health                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::GetHealth(float* Health)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.GetHealth");
		
		ABPA_Char_C_GetHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Health != nullptr)
			*Health = params.Health;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.GetHealthPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HealthPercent                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::GetHealthPercent(float* HealthPercent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.GetHealthPercent");
		
		ABPA_Char_C_GetHealthPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HealthPercent != nullptr)
			*HealthPercent = params.HealthPercent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.IsAlive
	 * 		Flags  -> ()
	 */
	bool ABPA_Char_C::IsAlive()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.IsAlive");
		
		ABPA_Char_C_IsAlive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.GetInstanceID
	 * 		Flags  -> ()
	 */
	class FString ABPA_Char_C::GetInstanceID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.GetInstanceID");
		
		ABPA_Char_C_GetInstanceID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.IsArmored
	 * 		Flags  -> ()
	 */
	bool ABPA_Char_C::IsArmored()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.IsArmored");
		
		ABPA_Char_C_IsArmored_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.IsCriticalHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABPA_Char_C::IsCriticalHit(class UPrimitiveComponent* HitComponent, const class FName& BoneName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.IsCriticalHit");
		
		ABPA_Char_C_IsCriticalHit_Params params {};
		params.HitComponent = HitComponent;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.IsAttacksLocked
	 * 		Flags  -> ()
	 */
	bool ABPA_Char_C::IsAttacksLocked()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.IsAttacksLocked");
		
		ABPA_Char_C_IsAttacksLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.GetNPCInfo
	 * 		Flags  -> ()
	 */
	struct FPRNPCInfo ABPA_Char_C::GetNPCInfo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.GetNPCInfo");
		
		ABPA_Char_C_GetNPCInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.GetIDs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                TypeID                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InstanceId                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::GetIDs(struct FGameplayTag* TypeID, class FString* InstanceId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.GetIDs");
		
		ABPA_Char_C_GetIDs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TypeID != nullptr)
			*TypeID = params.TypeID;
		if (InstanceId != nullptr)
			*InstanceId = params.InstanceId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.GetCurrentDetailLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharDetailLevel                                   DetailLevel                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::GetCurrentDetailLevel(ECharDetailLevel* DetailLevel)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.GetCurrentDetailLevel");
		
		ABPA_Char_C_GetCurrentDetailLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DetailLevel != nullptr)
			*DetailLevel = params.DetailLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.Reappear Cover Callback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNpcPointQueryResult                        QueryResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABPA_Char_C::ReappearCoverCallback(const struct FNpcPointQueryResult& QueryResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.Reappear Cover Callback");
		
		ABPA_Char_C_ReappearCoverCallback_Params params {};
		params.QueryResult = QueryResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.Reappear Out Of Sight
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::ReappearOutOfSight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.Reappear Out Of Sight");
		
		ABPA_Char_C_ReappearOutOfSight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.NpcAwarenessLevelChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAwarenessLevel                                    PrevAwarenessLevel                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EAwarenessLevel                                    NewAwarenessLevel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::NpcAwarenessLevelChanged(EAwarenessLevel PrevAwarenessLevel, EAwarenessLevel NewAwarenessLevel)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.NpcAwarenessLevelChanged");
		
		ABPA_Char_C_NpcAwarenessLevelChanged_Params params {};
		params.PrevAwarenessLevel = PrevAwarenessLevel;
		params.NewAwarenessLevel = NewAwarenessLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.Set Brain Enabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Char_C::SetBrainEnabled(bool Enabled)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.Set Brain Enabled");
		
		ABPA_Char_C_SetBrainEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.RequestDetailLevelUpdate
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::RequestDetailLevelUpdate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.RequestDetailLevelUpdate");
		
		ABPA_Char_C_RequestDetailLevelUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.InitDetailLevel
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::InitDetailLevel()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.InitDetailLevel");
		
		ABPA_Char_C_InitDetailLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.SetNpcEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewEnable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Char_C::SetNpcEnabled(bool bNewEnable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.SetNpcEnabled");
		
		ABPA_Char_C_SetNpcEnabled_Params params {};
		params.bNewEnable = bNewEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.UpdateActivationStatus
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::UpdateActivationStatus()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.UpdateActivationStatus");
		
		ABPA_Char_C_UpdateActivationStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.TogglePendingDisableState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnableOptim                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Char_C::TogglePendingDisableState(bool bEnableOptim)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.TogglePendingDisableState");
		
		ABPA_Char_C_TogglePendingDisableState_Params params {};
		params.bEnableOptim = bEnableOptim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.CheckedSetNpcEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewEnable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Char_C::CheckedSetNpcEnabled(bool bNewEnable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.CheckedSetNpcEnabled");
		
		ABPA_Char_C_CheckedSetNpcEnabled_Params params {};
		params.bNewEnable = bNewEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.UpdateDetailLevel
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::UpdateDetailLevel()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.UpdateDetailLevel");
		
		ABPA_Char_C_UpdateDetailLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.CloseCombatCleanup
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::CloseCombatCleanup()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.CloseCombatCleanup");
		
		ABPA_Char_C_CloseCombatCleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.CloseCombatSetup
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::CloseCombatSetup()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.CloseCombatSetup");
		
		ABPA_Char_C_CloseCombatSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.WalkToLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::WalkToLocation(const struct FVector& Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.WalkToLocation");
		
		ABPA_Char_C_WalkToLocation_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.CheckDistanceToPlayerMet
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::CheckDistanceToPlayerMet()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.CheckDistanceToPlayerMet");
		
		ABPA_Char_C_CheckDistanceToPlayerMet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.IsLocInValidRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Char_C::IsLocInValidRange(const struct FVector& Location, bool* Valid)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.IsLocInValidRange");
		
		ABPA_Char_C_IsLocInValidRange_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.SetupState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Awareness                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     POI                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ECharCommand                                       Command                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::SetupState(float Awareness, const struct FVector& POI, ECharCommand Command)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.SetupState");
		
		ABPA_Char_C_SetupState_Params params {};
		params.Awareness = Awareness;
		params.POI = POI;
		params.Command = Command;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.GetAttackLostLocationTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::GetAttackLostLocationTime(float* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.GetAttackLostLocationTime");
		
		ABPA_Char_C_GetAttackLostLocationTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.GetAttackMoveDilationAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::GetAttackMoveDilationAngle(float* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.GetAttackMoveDilationAngle");
		
		ABPA_Char_C_GetAttackMoveDilationAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.GetFootstepNoiseRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::GetFootstepNoiseRange(float* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.GetFootstepNoiseRange");
		
		ABPA_Char_C_GetFootstepNoiseRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.InvestigateLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::InvestigateLocation(const struct FVector& Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.InvestigateLocation");
		
		ABPA_Char_C_InvestigateLocation_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.ProcessDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      causer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::ProcessDamage(class AActor* causer, float Damage)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.ProcessDamage");
		
		ABPA_Char_C_ProcessDamage_Params params {};
		params.causer = causer;
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.SpawnLoot
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::SpawnLoot()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.SpawnLoot");
		
		ABPA_Char_C_SpawnLoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.ProcessNoise
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::ProcessNoise(const class FName& Tag, const struct FVector& Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.ProcessNoise");
		
		ABPA_Char_C_ProcessNoise_Params params {};
		params.Tag = Tag;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.GetAwarenessLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAwarenessLevel                                    AwarenessLevel                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::GetAwarenessLevel(EAwarenessLevel* AwarenessLevel)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.GetAwarenessLevel");
		
		ABPA_Char_C_GetAwarenessLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AwarenessLevel != nullptr)
			*AwarenessLevel = params.AwarenessLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.IsEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Char_C::IsEnabled(bool* Enabled)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.IsEnabled");
		
		ABPA_Char_C_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Enabled != nullptr)
			*Enabled = params.Enabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.IsPlayerNear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayerNear                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Char_C::IsPlayerNear(bool* PlayerNear)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.IsPlayerNear");
		
		ABPA_Char_C_IsPlayerNear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerNear != nullptr)
			*PlayerNear = params.PlayerNear;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.SetEnableAdditionalThings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Char_C::SetEnableAdditionalThings(bool enable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.SetEnableAdditionalThings");
		
		ABPA_Char_C_SetEnableAdditionalThings_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.SelectAndAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Char_C::SelectAndAttack(class AActor* Actor, bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.SelectAndAttack");
		
		ABPA_Char_C_SelectAndAttack_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.WalkToActorLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::WalkToActorLocation(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.WalkToActorLocation");
		
		ABPA_Char_C_WalkToActorLocation_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.SelectAndAttackClosestTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Char_C::SelectAndAttackClosestTarget(bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.SelectAndAttackClosestTarget");
		
		ABPA_Char_C_SelectAndAttackClosestTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.DestroyController
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::DestroyController()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.DestroyController");
		
		ABPA_Char_C_DestroyController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.LoadBaseSettings
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::LoadBaseSettings()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.LoadBaseSettings");
		
		ABPA_Char_C_LoadBaseSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.LoadAdditionalSettings
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::LoadAdditionalSettings()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.LoadAdditionalSettings");
		
		ABPA_Char_C_LoadAdditionalSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.GetIdleOriginPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Point                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::GetIdleOriginPoint(struct FVector* Point)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.GetIdleOriginPoint");
		
		ABPA_Char_C_GetIdleOriginPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Point != nullptr)
			*Point = params.Point;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.RestartTree
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::RestartTree()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.RestartTree");
		
		ABPA_Char_C_RestartTree_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.PrintMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::PrintMessage(const class FString& Message)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.PrintMessage");
		
		ABPA_Char_C_PrintMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.EnableRagdoll
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::EnableRagdoll()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.EnableRagdoll");
		
		ABPA_Char_C_EnableRagdoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.SetEnableEverything
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Char_C::SetEnableEverything(bool enable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.SetEnableEverything");
		
		ABPA_Char_C_SetEnableEverything_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.SetCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharCommand                                       NewCommand                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Char_C::SetCommand(ECharCommand NewCommand, bool Force)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.SetCommand");
		
		ABPA_Char_C_SetCommand_Params params {};
		params.NewCommand = NewCommand;
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.GetCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharCommand                                       CurrentCommand                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::GetCommand(ECharCommand* CurrentCommand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.GetCommand");
		
		ABPA_Char_C_GetCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentCommand != nullptr)
			*CurrentCommand = params.CurrentCommand;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.OnAttackCommandFinished
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::OnAttackCommandFinished()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.OnAttackCommandFinished");
		
		ABPA_Char_C_OnAttackCommandFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.OnAttackCommandStarted
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::OnAttackCommandStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.OnAttackCommandStarted");
		
		ABPA_Char_C_OnAttackCommandStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.OnIdleCommandFinished
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::OnIdleCommandFinished()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.OnIdleCommandFinished");
		
		ABPA_Char_C_OnIdleCommandFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.OnIdleCommandStarted
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::OnIdleCommandStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.OnIdleCommandStarted");
		
		ABPA_Char_C_OnIdleCommandStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.OnWalkCommandFinished
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::OnWalkCommandFinished()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.OnWalkCommandFinished");
		
		ABPA_Char_C_OnWalkCommandFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.OnWalkCommandStarted
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::OnWalkCommandStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.OnWalkCommandStarted");
		
		ABPA_Char_C_OnWalkCommandStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.ReportDeath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DeadActorRef                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::ReportDeath(class AActor* DeadActorRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.ReportDeath");
		
		ABPA_Char_C_ReportDeath_Params params {};
		params.DeadActorRef = DeadActorRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.SetFlyForce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::SetFlyForce(const struct FVector& Force)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.SetFlyForce");
		
		ABPA_Char_C_SetFlyForce_Params params {};
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.SetTargetRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    TargetRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Char_C::SetTargetRotation(const struct FRotator& TargetRotation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.SetTargetRotation");
		
		ABPA_Char_C_SetTargetRotation_Params params {};
		params.TargetRotation = TargetRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.StopMovement
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::StopMovement()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.StopMovement");
		
		ABPA_Char_C_StopMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.TeleportToNextPos
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::TeleportToNextPos()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.TeleportToNextPos");
		
		ABPA_Char_C_TeleportToNextPos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.ReceiveBeginPlay");
		
		ABPA_Char_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.BndEvt__HealthComp_K2Node_ComponentBoundEvent_0_HealthEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::BndEvt__HealthComp_K2Node_ComponentBoundEvent_0_HealthEnd__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.BndEvt__HealthComp_K2Node_ComponentBoundEvent_0_HealthEnd__DelegateSignature");
		
		ABPA_Char_C_BndEvt__HealthComp_K2Node_ComponentBoundEvent_0_HealthEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.ReceiveTick");
		
		ABPA_Char_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.BndEvt__PerceptionComponent_K2Node_ComponentBoundEvent_0_OnHeardNoise__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::BndEvt__PerceptionComponent_K2Node_ComponentBoundEvent_0_OnHeardNoise__DelegateSignature(class AActor* Actor, const struct FVector& Location, float Strength, const class FName& Tag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.BndEvt__PerceptionComponent_K2Node_ComponentBoundEvent_0_OnHeardNoise__DelegateSignature");
		
		ABPA_Char_C_BndEvt__PerceptionComponent_K2Node_ComponentBoundEvent_0_OnHeardNoise__DelegateSignature_Params params {};
		params.Actor = Actor;
		params.Location = Location;
		params.Strength = Strength;
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.BndEvt__AliveComp_K2Node_ComponentBoundEvent_1_OnDamaged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      causer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::BndEvt__AliveComp_K2Node_ComponentBoundEvent_1_OnDamaged__DelegateSignature(class AActor* causer, float Damage)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.BndEvt__AliveComp_K2Node_ComponentBoundEvent_1_OnDamaged__DelegateSignature");
		
		ABPA_Char_C_BndEvt__AliveComp_K2Node_ComponentBoundEvent_1_OnDamaged__DelegateSignature_Params params {};
		params.causer = causer;
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.OnStart
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::OnStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.OnStart");
		
		ABPA_Char_C_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.CharEnabled
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::CharEnabled()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.CharEnabled");
		
		ABPA_Char_C_CharEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.OnDeath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EnableRagdoll                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Char_C::OnDeath(bool EnableRagdoll)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.OnDeath");
		
		ABPA_Char_C_OnDeath_Params params {};
		params.EnableRagdoll = EnableRagdoll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.ReceiveEndPlay");
		
		ABPA_Char_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.AlertNearbyMonsters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      causer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::AlertNearbyMonsters(class AActor* causer)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.AlertNearbyMonsters");
		
		ABPA_Char_C_AlertNearbyMonsters_Params params {};
		params.causer = causer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.ChangeHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HealthDelta                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::ChangeHealth(float HealthDelta)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.ChangeHealth");
		
		ABPA_Char_C_ChangeHealth_Params params {};
		params.HealthDelta = HealthDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.LightOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::LightOn(const struct FVector& Location, class USceneComponent* Component)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.LightOn");
		
		ABPA_Char_C_LightOn_Params params {};
		params.Location = Location;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.SetPausedState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Char_C::SetPausedState(bool Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.SetPausedState");
		
		ABPA_Char_C_SetPausedState_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.BroadcastEnemyLoc
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::BroadcastEnemyLoc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.BroadcastEnemyLoc");
		
		ABPA_Char_C_BroadcastEnemyLoc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.Alert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Char_C::Alert(class AActor* Target, const struct FTransform& Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.Alert");
		
		ABPA_Char_C_Alert_Params params {};
		params.Target = Target;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.OnGameStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPause                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Char_C::OnGameStateChange(bool IsPause)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.OnGameStateChange");
		
		ABPA_Char_C_OnGameStateChange_Params params {};
		params.IsPause = IsPause;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.SetDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewDebug                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Char_C::SetDebug(bool NewDebug)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.SetDebug");
		
		ABPA_Char_C_SetDebug_Params params {};
		params.NewDebug = NewDebug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.OnEnterPlayerViewport
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::OnEnterPlayerViewport()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.OnEnterPlayerViewport");
		
		ABPA_Char_C_OnEnterPlayerViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.OnExitPlayerViewport
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::OnExitPlayerViewport()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.OnExitPlayerViewport");
		
		ABPA_Char_C_OnExitPlayerViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.OnTransitionEndOnceEventDelegate
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::OnTransitionEndOnceEventDelegate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.OnTransitionEndOnceEventDelegate");
		
		ABPA_Char_C_OnTransitionEndOnceEventDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.SetVolumeActivationState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Char_C::SetVolumeActivationState(bool NewState)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.SetVolumeActivationState");
		
		ABPA_Char_C_SetVolumeActivationState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.CcmStartWaitingForCombat
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::CcmStartWaitingForCombat()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.CcmStartWaitingForCombat");
		
		ABPA_Char_C_CcmStartWaitingForCombat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.CcmStopWaitingForCombat
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::CcmStopWaitingForCombat()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.CcmStopWaitingForCombat");
		
		ABPA_Char_C_CcmStopWaitingForCombat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.OnTransitionStartOnce
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::OnTransitionStartOnce()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.OnTransitionStartOnce");
		
		ABPA_Char_C_OnTransitionStartOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.SaveGameData
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::SaveGameData()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.SaveGameData");
		
		ABPA_Char_C_SaveGameData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.OnGameStartedEventDelegate
	 * 		Flags  -> ()
	 */
	void ABPA_Char_C::OnGameStartedEventDelegate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.OnGameStartedEventDelegate");
		
		ABPA_Char_C_OnGameStartedEventDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.ExecuteUbergraph_BPA_Char
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::ExecuteUbergraph_BPA_Char(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.ExecuteUbergraph_BPA_Char");
		
		ABPA_Char_C_ExecuteUbergraph_BPA_Char_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Char.BPA_Char_C.OnDeathDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      CharacterRef                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Char_C::OnDeathDispatcher__DelegateSignature(class AActor* CharacterRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Char.BPA_Char_C.OnDeathDispatcher__DelegateSignature");
		
		ABPA_Char_C_OnDeathDispatcher__DelegateSignature_Params params {};
		params.CharacterRef = CharacterRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_Char_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_Char_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_Char.BPA_Char_C");
		return ptr;
	}

}


