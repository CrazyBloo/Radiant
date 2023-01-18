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
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.GetAliveStats
	 * 		Flags  -> ()
	 */
	class UActorComponent* AVH_BTR70_C::GetAliveStats()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.GetAliveStats");
		
		AVH_BTR70_C_GetAliveStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.GetBoneTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FTransform AVH_BTR70_C::GetBoneTransform(const class FName& BoneName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.GetBoneTransform");
		
		AVH_BTR70_C_GetBoneTransform_Params params {};
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.GetBotMovementMode
	 * 		Flags  -> ()
	 */
	EBotMovementMode AVH_BTR70_C::GetBotMovementMode()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.GetBotMovementMode");
		
		AVH_BTR70_C_GetBotMovementMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.GetBotShootingComponent
	 * 		Flags  -> ()
	 */
	class UActorComponent* AVH_BTR70_C::GetBotShootingComponent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.GetBotShootingComponent");
		
		AVH_BTR70_C_GetBotShootingComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.GetIdleWalkDistance
	 * 		Flags  -> ()
	 */
	float AVH_BTR70_C::GetIdleWalkDistance()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.GetIdleWalkDistance");
		
		AVH_BTR70_C_GetIdleWalkDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.GetOptimalRange
	 * 		Flags  -> ()
	 */
	float AVH_BTR70_C::GetOptimalRange()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.GetOptimalRange");
		
		AVH_BTR70_C_GetOptimalRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.GetPatrolPath
	 * 		Flags  -> ()
	 */
	class USplineComponent* AVH_BTR70_C::GetPatrolPath()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.GetPatrolPath");
		
		AVH_BTR70_C_GetPatrolPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.GetPatrolTargets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsValidOut                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class AActor*>                              TargetsOut                                                 (Parm, OutParm)
	 */
	void AVH_BTR70_C::GetPatrolTargets(bool* IsValidOut, TArray<class AActor*>* TargetsOut)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.GetPatrolTargets");
		
		AVH_BTR70_C_GetPatrolTargets_Params params {};
		
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
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.GetPerception
	 * 		Flags  -> ()
	 */
	class UPRNpcPerceptionComponent* AVH_BTR70_C::GetPerception()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.GetPerception");
		
		AVH_BTR70_C_GetPerception_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.GetSelection
	 * 		Flags  -> ()
	 */
	class AActor* AVH_BTR70_C::GetSelection()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.GetSelection");
		
		AVH_BTR70_C_GetSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.GetStealth
	 * 		Flags  -> ()
	 */
	float AVH_BTR70_C::GetStealth()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.GetStealth");
		
		AVH_BTR70_C_GetStealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.SetBotMovementMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBotMovementMode                                   MovementMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Changed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_BTR70_C::SetBotMovementMode(EBotMovementMode MovementMode, bool* Changed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.SetBotMovementMode");
		
		AVH_BTR70_C_SetBotMovementMode_Params params {};
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
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.GetHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Health                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVH_BTR70_C::GetHealth(float* Health)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.GetHealth");
		
		AVH_BTR70_C_GetHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Health != nullptr)
			*Health = params.Health;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.GetHealthPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HealthPercent                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVH_BTR70_C::GetHealthPercent(float* HealthPercent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.GetHealthPercent");
		
		AVH_BTR70_C_GetHealthPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HealthPercent != nullptr)
			*HealthPercent = params.HealthPercent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.IsAlive
	 * 		Flags  -> ()
	 */
	bool AVH_BTR70_C::IsAlive()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.IsAlive");
		
		AVH_BTR70_C_IsAlive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.IsArmored
	 * 		Flags  -> ()
	 */
	bool AVH_BTR70_C::IsArmored()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.IsArmored");
		
		AVH_BTR70_C_IsArmored_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.IsCriticalHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AVH_BTR70_C::IsCriticalHit(class UPrimitiveComponent* HitComponent, const class FName& BoneName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.IsCriticalHit");
		
		AVH_BTR70_C_IsCriticalHit_Params params {};
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
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.GetIDs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                TypeID                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InstanceId                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AVH_BTR70_C::GetIDs(struct FGameplayTag* TypeID, class FString* InstanceId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.GetIDs");
		
		AVH_BTR70_C_GetIDs_Params params {};
		
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
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.GetNPCInfo
	 * 		Flags  -> ()
	 */
	struct FPRNPCInfo AVH_BTR70_C::GetNPCInfo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.GetNPCInfo");
		
		AVH_BTR70_C_GetNPCInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.IsAttacksLocked
	 * 		Flags  -> ()
	 */
	bool AVH_BTR70_C::IsAttacksLocked()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.IsAttacksLocked");
		
		AVH_BTR70_C_IsAttacksLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.GetInstanceID
	 * 		Flags  -> ()
	 */
	class FString AVH_BTR70_C::GetInstanceID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.GetInstanceID");
		
		AVH_BTR70_C_GetInstanceID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.Unstuck
	 * 		Flags  -> ()
	 */
	void AVH_BTR70_C::Unstuck()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.Unstuck");
		
		AVH_BTR70_C_Unstuck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.CheckStuck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStuck                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_BTR70_C::CheckStuck(bool* bStuck)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.CheckStuck");
		
		AVH_BTR70_C_CheckStuck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bStuck != nullptr)
			*bStuck = params.bStuck;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.ComputeSmallestTurnAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TargetLoc                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    TurnTransform                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_BTR70_C::ComputeSmallestTurnAngle(const struct FVector& TargetLoc, struct FRotator* TurnTransform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.ComputeSmallestTurnAngle");
		
		AVH_BTR70_C_ComputeSmallestTurnAngle_Params params {};
		params.TargetLoc = TargetLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TurnTransform != nullptr)
			*TurnTransform = params.TurnTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.InitCritBone
	 * 		Flags  -> ()
	 */
	void AVH_BTR70_C::InitCritBone()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.InitCritBone");
		
		AVH_BTR70_C_InitCritBone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.LoadConfig
	 * 		Flags  -> ()
	 */
	void AVH_BTR70_C::LoadConfig()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.LoadConfig");
		
		AVH_BTR70_C_LoadConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.CcmStartWaitingForCombat
	 * 		Flags  -> ()
	 */
	void AVH_BTR70_C::CcmStartWaitingForCombat()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.CcmStartWaitingForCombat");
		
		AVH_BTR70_C_CcmStartWaitingForCombat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.CcmStopWaitingForCombat
	 * 		Flags  -> ()
	 */
	void AVH_BTR70_C::CcmStopWaitingForCombat()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.CcmStopWaitingForCombat");
		
		AVH_BTR70_C_CcmStopWaitingForCombat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.OnEnterPlayerViewport
	 * 		Flags  -> ()
	 */
	void AVH_BTR70_C::OnEnterPlayerViewport()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.OnEnterPlayerViewport");
		
		AVH_BTR70_C_OnEnterPlayerViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.OnExitPlayerViewport
	 * 		Flags  -> ()
	 */
	void AVH_BTR70_C::OnExitPlayerViewport()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.OnExitPlayerViewport");
		
		AVH_BTR70_C_OnExitPlayerViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.ReportDeath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DeadActorRef                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVH_BTR70_C::ReportDeath(class AActor* DeadActorRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.ReportDeath");
		
		AVH_BTR70_C_ReportDeath_Params params {};
		params.DeadActorRef = DeadActorRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.SetFlyForce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVH_BTR70_C::SetFlyForce(const struct FVector& Force)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.SetFlyForce");
		
		AVH_BTR70_C_SetFlyForce_Params params {};
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.SetTargetRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    TargetRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_BTR70_C::SetTargetRotation(const struct FRotator& TargetRotation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.SetTargetRotation");
		
		AVH_BTR70_C_SetTargetRotation_Params params {};
		params.TargetRotation = TargetRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.ChangeHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HealthDelta                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVH_BTR70_C::ChangeHealth(float HealthDelta)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.ChangeHealth");
		
		AVH_BTR70_C_ChangeHealth_Params params {};
		params.HealthDelta = HealthDelta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.Alert
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 */
	void AVH_BTR70_C::Alert(class AActor* Target, const struct FTransform& Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.Alert");
		
		AVH_BTR70_C_Alert_Params params {};
		params.Target = Target;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.SetDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewDebug                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVH_BTR70_C::SetDebug(bool NewDebug)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.SetDebug");
		
		AVH_BTR70_C_SetDebug_Params params {};
		params.NewDebug = NewDebug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.CustomThrottle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TargetAngle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DestinationDistance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DesiredSpeed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CalculatedThrottle                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVH_BTR70_C::CustomThrottle(float TargetAngle, float DestinationDistance, float DesiredSpeed, float CalculatedThrottle)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.CustomThrottle");
		
		AVH_BTR70_C_CustomThrottle_Params params {};
		params.TargetAngle = TargetAngle;
		params.DestinationDistance = DestinationDistance;
		params.DesiredSpeed = DesiredSpeed;
		params.CalculatedThrottle = CalculatedThrottle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.CustomSteering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TargetAngle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Steering                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DestinationDistance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVH_BTR70_C::CustomSteering(float TargetAngle, float Steering, float DestinationDistance)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.CustomSteering");
		
		AVH_BTR70_C_CustomSteering_Params params {};
		params.TargetAngle = TargetAngle;
		params.Steering = Steering;
		params.DestinationDistance = DestinationDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.CustomBraking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TargetAngle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DestinationDistance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DesiredSpeed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CalculatedBrake                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVH_BTR70_C::CustomBraking(float TargetAngle, float DestinationDistance, float DesiredSpeed, float CalculatedBrake)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.CustomBraking");
		
		AVH_BTR70_C_CustomBraking_Params params {};
		params.TargetAngle = TargetAngle;
		params.DestinationDistance = DestinationDistance;
		params.DesiredSpeed = DesiredSpeed;
		params.CalculatedBrake = CalculatedBrake;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVH_BTR70_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.ReceiveTick");
		
		AVH_BTR70_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AVH_BTR70_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.ReceiveBeginPlay");
		
		AVH_BTR70_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.saveData
	 * 		Flags  -> ()
	 */
	void AVH_BTR70_C::saveData()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.saveData");
		
		AVH_BTR70_C_saveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.StopMovement
	 * 		Flags  -> ()
	 */
	void AVH_BTR70_C::StopMovement()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.StopMovement");
		
		AVH_BTR70_C_StopMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.TeleportToNextPos
	 * 		Flags  -> ()
	 */
	void AVH_BTR70_C::TeleportToNextPos()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.TeleportToNextPos");
		
		AVH_BTR70_C_TeleportToNextPos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.BndEvt__VH_BTR70_AliveStats_K2Node_ComponentBoundEvent_2_OnHealthEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AVH_BTR70_C::BndEvt__VH_BTR70_AliveStats_K2Node_ComponentBoundEvent_2_OnHealthEnd__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.BndEvt__VH_BTR70_AliveStats_K2Node_ComponentBoundEvent_2_OnHealthEnd__DelegateSignature");
		
		AVH_BTR70_C_BndEvt__VH_BTR70_AliveStats_K2Node_ComponentBoundEvent_2_OnHealthEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.BndEvt__VH_BTR70_AliveStats_K2Node_ComponentBoundEvent_3_OnDamaged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVH_BTR70_C::BndEvt__VH_BTR70_AliveStats_K2Node_ComponentBoundEvent_3_OnDamaged__DelegateSignature(class AActor* Actor, float Damage)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.BndEvt__VH_BTR70_AliveStats_K2Node_ComponentBoundEvent_3_OnDamaged__DelegateSignature");
		
		AVH_BTR70_C_BndEvt__VH_BTR70_AliveStats_K2Node_ComponentBoundEvent_3_OnDamaged__DelegateSignature_Params params {};
		params.Actor = Actor;
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.StuckCheckEvent
	 * 		Flags  -> ()
	 */
	void AVH_BTR70_C::StuckCheckEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.StuckCheckEvent");
		
		AVH_BTR70_C_StuckCheckEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVH_BTR70_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.ReceiveEndPlay");
		
		AVH_BTR70_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.BroadcastEnemyLoc
	 * 		Flags  -> ()
	 */
	void AVH_BTR70_C::BroadcastEnemyLoc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.BroadcastEnemyLoc");
		
		AVH_BTR70_C_BroadcastEnemyLoc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VH_BTR70.VH_BTR70_C.ExecuteUbergraph_VH_BTR70
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVH_BTR70_C::ExecuteUbergraph_VH_BTR70(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VH_BTR70.VH_BTR70_C.ExecuteUbergraph_VH_BTR70");
		
		AVH_BTR70_C_ExecuteUbergraph_VH_BTR70_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVH_BTR70_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVH_BTR70_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass VH_BTR70.VH_BTR70_C");
		return ptr;
	}

}


