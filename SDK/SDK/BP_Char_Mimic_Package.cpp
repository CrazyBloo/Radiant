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
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.GetCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharCommand                                       CurrentCommand                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Char_Mimic_C::GetCommand(ECharCommand* CurrentCommand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.GetCommand");
		
		ABP_Char_Mimic_C_GetCommand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentCommand != nullptr)
			*CurrentCommand = params.CurrentCommand;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.SetBotMovementMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBotMovementMode                                   MovementMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Changed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Char_Mimic_C::SetBotMovementMode(EBotMovementMode MovementMode, bool* Changed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.SetBotMovementMode");
		
		ABP_Char_Mimic_C_SetBotMovementMode_Params params {};
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
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.GetBotMovementMode
	 * 		Flags  -> ()
	 */
	EBotMovementMode ABP_Char_Mimic_C::GetBotMovementMode()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.GetBotMovementMode");
		
		ABP_Char_Mimic_C_GetBotMovementMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.GetBotShootingComponent
	 * 		Flags  -> ()
	 */
	class UActorComponent* ABP_Char_Mimic_C::GetBotShootingComponent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.GetBotShootingComponent");
		
		ABP_Char_Mimic_C_GetBotShootingComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.GetPatrolPath
	 * 		Flags  -> ()
	 */
	class USplineComponent* ABP_Char_Mimic_C::GetPatrolPath()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.GetPatrolPath");
		
		ABP_Char_Mimic_C_GetPatrolPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.GetBoneTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FTransform ABP_Char_Mimic_C::GetBoneTransform(const class FName& BoneName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.GetBoneTransform");
		
		ABP_Char_Mimic_C_GetBoneTransform_Params params {};
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.GetAliveStats
	 * 		Flags  -> ()
	 */
	class UActorComponent* ABP_Char_Mimic_C::GetAliveStats()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.GetAliveStats");
		
		ABP_Char_Mimic_C_GetAliveStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.GetIdleWalkDistance
	 * 		Flags  -> ()
	 */
	float ABP_Char_Mimic_C::GetIdleWalkDistance()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.GetIdleWalkDistance");
		
		ABP_Char_Mimic_C_GetIdleWalkDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.GetStealth
	 * 		Flags  -> ()
	 */
	float ABP_Char_Mimic_C::GetStealth()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.GetStealth");
		
		ABP_Char_Mimic_C_GetStealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.GetSelection
	 * 		Flags  -> ()
	 */
	class AActor* ABP_Char_Mimic_C::GetSelection()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.GetSelection");
		
		ABP_Char_Mimic_C_GetSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.GetOptimalRange
	 * 		Flags  -> ()
	 */
	float ABP_Char_Mimic_C::GetOptimalRange()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.GetOptimalRange");
		
		ABP_Char_Mimic_C_GetOptimalRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.GetPerception
	 * 		Flags  -> ()
	 */
	class UPRNpcPerceptionComponent* ABP_Char_Mimic_C::GetPerception()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.GetPerception");
		
		ABP_Char_Mimic_C_GetPerception_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.MantleStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MantleHeight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FALS_ComponentAndTransform                  MantleLedgeWS                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		EMantleType                                        MantleType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Char_Mimic_C::MantleStart(float MantleHeight, const struct FALS_ComponentAndTransform& MantleLedgeWS, EMantleType MantleType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.MantleStart");
		
		ABP_Char_Mimic_C_MantleStart_Params params {};
		params.MantleHeight = MantleHeight;
		params.MantleLedgeWS = MantleLedgeWS;
		params.MantleType = MantleType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.RagdollEnd
	 * 		Flags  -> ()
	 */
	void ABP_Char_Mimic_C::RagdollEnd()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.RagdollEnd");
		
		ABP_Char_Mimic_C_RagdollEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.RagdollStart
	 * 		Flags  -> ()
	 */
	void ABP_Char_Mimic_C::RagdollStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.RagdollStart");
		
		ABP_Char_Mimic_C_RagdollStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.GetGetUpAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               RagdollFaceUp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UAnimMontage* ABP_Char_Mimic_C::GetGetUpAnimation(bool RagdollFaceUp)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.GetGetUpAnimation");
		
		ABP_Char_Mimic_C_GetGetUpAnimation_Params params {};
		params.RagdollFaceUp = RagdollFaceUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.MantleEnd
	 * 		Flags  -> ()
	 */
	void ABP_Char_Mimic_C::MantleEnd()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.MantleEnd");
		
		ABP_Char_Mimic_C_MantleEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.GetRollAnimation
	 * 		Flags  -> ()
	 */
	class UAnimMontage* ABP_Char_Mimic_C::GetRollAnimation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.GetRollAnimation");
		
		ABP_Char_Mimic_C_GetRollAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.OnOverlayStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOverlayState                                      NewOverLayState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Char_Mimic_C::OnOverlayStateChanged(EOverlayState NewOverLayState)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.OnOverlayStateChanged");
		
		ABP_Char_Mimic_C_OnOverlayStateChanged_Params params {};
		params.NewOverLayState = NewOverLayState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.BPI_Get_3P_TraceParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TraceOrigin                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TraceRadius                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETraceTypeQuery                                    TraceChannel                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Char_Mimic_C::BPI_Get_3P_TraceParams(struct FVector* TraceOrigin, float* TraceRadius, ETraceTypeQuery* TraceChannel)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.BPI_Get_3P_TraceParams");
		
		ABP_Char_Mimic_C_BPI_Get_3P_TraceParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TraceOrigin != nullptr)
			*TraceOrigin = params.TraceOrigin;
		if (TraceRadius != nullptr)
			*TraceRadius = params.TraceRadius;
		if (TraceChannel != nullptr)
			*TraceChannel = params.TraceChannel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.GetMantleAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMantleType                                        MantleType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FMantle_Asset_FMantle_Asset ABP_Char_Mimic_C::GetMantleAsset(EMantleType MantleType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.GetMantleAsset");
		
		ABP_Char_Mimic_C_GetMantleAsset_Params params {};
		params.MantleType = MantleType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.BPI_Get_FP_CameraTarget
	 * 		Flags  -> ()
	 */
	struct FVector ABP_Char_Mimic_C::BPI_Get_FP_CameraTarget()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.BPI_Get_FP_CameraTarget");
		
		ABP_Char_Mimic_C_BPI_Get_FP_CameraTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.BPI_Get_3P_PivotTarget
	 * 		Flags  -> ()
	 */
	struct FTransform ABP_Char_Mimic_C::BPI_Get_3P_PivotTarget()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.BPI_Get_3P_PivotTarget");
		
		ABP_Char_Mimic_C_BPI_Get_3P_PivotTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Char_Mimic_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.Timeline_0__FinishedFunc");
		
		ABP_Char_Mimic_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Char_Mimic_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.Timeline_0__UpdateFunc");
		
		ABP_Char_Mimic_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps Walking__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Char_Mimic_C::Footsteps_Walking__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps Walking__FinishedFunc");
		
		ABP_Char_Mimic_C_Footsteps_Walking__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps Walking__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Char_Mimic_C::Footsteps_Walking__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps Walking__UpdateFunc");
		
		ABP_Char_Mimic_C_Footsteps_Walking__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps Walking__Play footstep__EventFunc
	 * 		Flags  -> ()
	 */
	void ABP_Char_Mimic_C::Footsteps_Walking__Play_footstep__EventFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps Walking__Play footstep__EventFunc");
		
		ABP_Char_Mimic_C_Footsteps_Walking__Play_footstep__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps RUnning__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Char_Mimic_C::Footsteps_RUnning__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps RUnning__FinishedFunc");
		
		ABP_Char_Mimic_C_Footsteps_RUnning__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps RUnning__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Char_Mimic_C::Footsteps_RUnning__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps RUnning__UpdateFunc");
		
		ABP_Char_Mimic_C_Footsteps_RUnning__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps RUnning__Play Footstep__EventFunc
	 * 		Flags  -> ()
	 */
	void ABP_Char_Mimic_C::Footsteps_RUnning__Play_Footstep__EventFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps RUnning__Play Footstep__EventFunc");
		
		ABP_Char_Mimic_C_Footsteps_RUnning__Play_Footstep__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps Sprinting__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Char_Mimic_C::Footsteps_Sprinting__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps Sprinting__FinishedFunc");
		
		ABP_Char_Mimic_C_Footsteps_Sprinting__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps Sprinting__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Char_Mimic_C::Footsteps_Sprinting__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps Sprinting__UpdateFunc");
		
		ABP_Char_Mimic_C_Footsteps_Sprinting__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps Sprinting__Play Footstep__EventFunc
	 * 		Flags  -> ()
	 */
	void ABP_Char_Mimic_C::Footsteps_Sprinting__Play_Footstep__EventFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps Sprinting__Play Footstep__EventFunc");
		
		ABP_Char_Mimic_C_Footsteps_Sprinting__Play_Footstep__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.OnStart
	 * 		Flags  -> ()
	 */
	void ABP_Char_Mimic_C::OnStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.OnStart");
		
		ABP_Char_Mimic_C_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Char_Mimic_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.ReceiveTick");
		
		ABP_Char_Mimic_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.OnDeath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EnableRagdoll                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Char_Mimic_C::OnDeath(bool EnableRagdoll)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.OnDeath");
		
		ABP_Char_Mimic_C_OnDeath_Params params {};
		params.EnableRagdoll = EnableRagdoll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.PlayFootstepSound
	 * 		Flags  -> ()
	 */
	void ABP_Char_Mimic_C::PlayFootstepSound()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.PlayFootstepSound");
		
		ABP_Char_Mimic_C_PlayFootstepSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.SetEnableAdditionalThings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Char_Mimic_C::SetEnableAdditionalThings(bool enable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.SetEnableAdditionalThings");
		
		ABP_Char_Mimic_C_SetEnableAdditionalThings_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.SaveGameData
	 * 		Flags  -> ()
	 */
	void ABP_Char_Mimic_C::SaveGameData()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.SaveGameData");
		
		ABP_Char_Mimic_C_SaveGameData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.StartFootstepLoop
	 * 		Flags  -> ()
	 */
	void ABP_Char_Mimic_C::StartFootstepLoop()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.StartFootstepLoop");
		
		ABP_Char_Mimic_C_StartFootstepLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.StopFootstepLoop
	 * 		Flags  -> ()
	 */
	void ABP_Char_Mimic_C::StopFootstepLoop()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.StopFootstepLoop");
		
		ABP_Char_Mimic_C_StopFootstepLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Mimic.BP_Char_Mimic_C.ExecuteUbergraph_BP_Char_Mimic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Char_Mimic_C::ExecuteUbergraph_BP_Char_Mimic(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Mimic.BP_Char_Mimic_C.ExecuteUbergraph_BP_Char_Mimic");
		
		ABP_Char_Mimic_C_ExecuteUbergraph_BP_Char_Mimic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Char_Mimic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Char_Mimic_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Char_Mimic.BP_Char_Mimic_C");
		return ptr;
	}

}


