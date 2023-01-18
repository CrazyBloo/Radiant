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
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.GetAliveStats
	 * 		Flags  -> ()
	 */
	class UActorComponent* APWN_Beholder_C::GetAliveStats()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.GetAliveStats");
		
		APWN_Beholder_C_GetAliveStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.GetBoneTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FTransform APWN_Beholder_C::GetBoneTransform(const class FName& BoneName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.GetBoneTransform");
		
		APWN_Beholder_C_GetBoneTransform_Params params {};
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.GetBotMovementMode
	 * 		Flags  -> ()
	 */
	EBotMovementMode APWN_Beholder_C::GetBotMovementMode()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.GetBotMovementMode");
		
		APWN_Beholder_C_GetBotMovementMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.GetBotShootingComponent
	 * 		Flags  -> ()
	 */
	class UActorComponent* APWN_Beholder_C::GetBotShootingComponent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.GetBotShootingComponent");
		
		APWN_Beholder_C_GetBotShootingComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.GetIdleWalkDistance
	 * 		Flags  -> ()
	 */
	float APWN_Beholder_C::GetIdleWalkDistance()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.GetIdleWalkDistance");
		
		APWN_Beholder_C_GetIdleWalkDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.GetOptimalRange
	 * 		Flags  -> ()
	 */
	float APWN_Beholder_C::GetOptimalRange()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.GetOptimalRange");
		
		APWN_Beholder_C_GetOptimalRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.GetPatrolPath
	 * 		Flags  -> ()
	 */
	class USplineComponent* APWN_Beholder_C::GetPatrolPath()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.GetPatrolPath");
		
		APWN_Beholder_C_GetPatrolPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.GetPatrolTargets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsValidOut                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class AActor*>                              TargetsOut                                                 (Parm, OutParm)
	 */
	void APWN_Beholder_C::GetPatrolTargets(bool* IsValidOut, TArray<class AActor*>* TargetsOut)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.GetPatrolTargets");
		
		APWN_Beholder_C_GetPatrolTargets_Params params {};
		
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
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.GetPerception
	 * 		Flags  -> ()
	 */
	class UPRNpcPerceptionComponent* APWN_Beholder_C::GetPerception()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.GetPerception");
		
		APWN_Beholder_C_GetPerception_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.GetSelection
	 * 		Flags  -> ()
	 */
	class AActor* APWN_Beholder_C::GetSelection()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.GetSelection");
		
		APWN_Beholder_C_GetSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.GetStealth
	 * 		Flags  -> ()
	 */
	float APWN_Beholder_C::GetStealth()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.GetStealth");
		
		APWN_Beholder_C_GetStealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.SetBotMovementMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBotMovementMode                                   MovementMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Changed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APWN_Beholder_C::SetBotMovementMode(EBotMovementMode MovementMode, bool* Changed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.SetBotMovementMode");
		
		APWN_Beholder_C_SetBotMovementMode_Params params {};
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
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.GetHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Health                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APWN_Beholder_C::GetHealth(float* Health)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.GetHealth");
		
		APWN_Beholder_C_GetHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Health != nullptr)
			*Health = params.Health;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.GetHealthPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HealthPercent                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APWN_Beholder_C::GetHealthPercent(float* HealthPercent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.GetHealthPercent");
		
		APWN_Beholder_C_GetHealthPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HealthPercent != nullptr)
			*HealthPercent = params.HealthPercent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.IsAlive
	 * 		Flags  -> ()
	 */
	bool APWN_Beholder_C::IsAlive()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.IsAlive");
		
		APWN_Beholder_C_IsAlive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.IsArmored
	 * 		Flags  -> ()
	 */
	bool APWN_Beholder_C::IsArmored()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.IsArmored");
		
		APWN_Beholder_C_IsArmored_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.IsCriticalHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool APWN_Beholder_C::IsCriticalHit(class UPrimitiveComponent* HitComponent, const class FName& BoneName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.IsCriticalHit");
		
		APWN_Beholder_C_IsCriticalHit_Params params {};
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
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.GetIDs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                TypeID                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InstanceId                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void APWN_Beholder_C::GetIDs(struct FGameplayTag* TypeID, class FString* InstanceId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.GetIDs");
		
		APWN_Beholder_C_GetIDs_Params params {};
		
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
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.GetNPCInfo
	 * 		Flags  -> ()
	 */
	struct FPRNPCInfo APWN_Beholder_C::GetNPCInfo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.GetNPCInfo");
		
		APWN_Beholder_C_GetNPCInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.IsAttacksLocked
	 * 		Flags  -> ()
	 */
	bool APWN_Beholder_C::IsAttacksLocked()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.IsAttacksLocked");
		
		APWN_Beholder_C_IsAttacksLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.GetInstanceID
	 * 		Flags  -> ()
	 */
	class FString APWN_Beholder_C::GetInstanceID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.GetInstanceID");
		
		APWN_Beholder_C_GetInstanceID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.BroadcastEnemyLoc
	 * 		Flags  -> ()
	 */
	void APWN_Beholder_C::BroadcastEnemyLoc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.BroadcastEnemyLoc");
		
		APWN_Beholder_C_BroadcastEnemyLoc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.CcmStartWaitingForCombat
	 * 		Flags  -> ()
	 */
	void APWN_Beholder_C::CcmStartWaitingForCombat()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.CcmStartWaitingForCombat");
		
		APWN_Beholder_C_CcmStartWaitingForCombat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.CcmStopWaitingForCombat
	 * 		Flags  -> ()
	 */
	void APWN_Beholder_C::CcmStopWaitingForCombat()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.CcmStopWaitingForCombat");
		
		APWN_Beholder_C_CcmStopWaitingForCombat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.OnEnterPlayerViewport
	 * 		Flags  -> ()
	 */
	void APWN_Beholder_C::OnEnterPlayerViewport()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.OnEnterPlayerViewport");
		
		APWN_Beholder_C_OnEnterPlayerViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.OnExitPlayerViewport
	 * 		Flags  -> ()
	 */
	void APWN_Beholder_C::OnExitPlayerViewport()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.OnExitPlayerViewport");
		
		APWN_Beholder_C_OnExitPlayerViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.ReportDeath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DeadActorRef                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APWN_Beholder_C::ReportDeath(class AActor* DeadActorRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.ReportDeath");
		
		APWN_Beholder_C_ReportDeath_Params params {};
		params.DeadActorRef = DeadActorRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.SetFlyForce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APWN_Beholder_C::SetFlyForce(const struct FVector& Force)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.SetFlyForce");
		
		APWN_Beholder_C_SetFlyForce_Params params {};
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.SetTargetRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    TargetRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APWN_Beholder_C::SetTargetRotation(const struct FRotator& TargetRotation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.SetTargetRotation");
		
		APWN_Beholder_C_SetTargetRotation_Params params {};
		params.TargetRotation = TargetRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.StopMovement
	 * 		Flags  -> ()
	 */
	void APWN_Beholder_C::StopMovement()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.StopMovement");
		
		APWN_Beholder_C_StopMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.TeleportToNextPos
	 * 		Flags  -> ()
	 */
	void APWN_Beholder_C::TeleportToNextPos()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.TeleportToNextPos");
		
		APWN_Beholder_C_TeleportToNextPos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.ChangeHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HealthDelta                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APWN_Beholder_C::ChangeHealth(float HealthDelta)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.ChangeHealth");
		
		APWN_Beholder_C_ChangeHealth_Params params {};
		params.HealthDelta = HealthDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.Alert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 */
	void APWN_Beholder_C::Alert(class AActor* Target, const struct FTransform& Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.Alert");
		
		APWN_Beholder_C_Alert_Params params {};
		params.Target = Target;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.SetDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewDebug                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APWN_Beholder_C::SetDebug(bool NewDebug)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.SetDebug");
		
		APWN_Beholder_C_SetDebug_Params params {};
		params.NewDebug = NewDebug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APWN_Beholder_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.ReceiveTick");
		
		APWN_Beholder_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APWN_Beholder_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.ReceiveBeginPlay");
		
		APWN_Beholder_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PWN_Beholder.PWN_Beholder_C.ExecuteUbergraph_PWN_Beholder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APWN_Beholder_C::ExecuteUbergraph_PWN_Beholder(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function PWN_Beholder.PWN_Beholder_C.ExecuteUbergraph_PWN_Beholder");
		
		APWN_Beholder_C_ExecuteUbergraph_PWN_Beholder_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APWN_Beholder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APWN_Beholder_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PWN_Beholder.PWN_Beholder_C");
		return ptr;
	}

}


