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
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.GetCurrentStates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Engine_EMovementMode                               OutPawnMovementMode                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMovementState                                     OutMovementState                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMovementState                                     OutPrevMovementState                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMovementAction                                    OutMovementAction                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERotationMode                                      OutRotationMode                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGait                                              OutActualGait                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EStance                                            OutActualStance                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EViewMode                                          OutViewMode                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EOverlayState                                      OutOverlayState                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::GetCurrentStates(Engine_EMovementMode* OutPawnMovementMode, EMovementState* OutMovementState, EMovementState* OutPrevMovementState, EMovementAction* OutMovementAction, ERotationMode* OutRotationMode, EGait* OutActualGait, EStance* OutActualStance, EViewMode* OutViewMode, EOverlayState* OutOverlayState)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.GetCurrentStates");
		
		ABP_ALSBase_C_GetCurrentStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPawnMovementMode != nullptr)
			*OutPawnMovementMode = params.OutPawnMovementMode;
		if (OutMovementState != nullptr)
			*OutMovementState = params.OutMovementState;
		if (OutPrevMovementState != nullptr)
			*OutPrevMovementState = params.OutPrevMovementState;
		if (OutMovementAction != nullptr)
			*OutMovementAction = params.OutMovementAction;
		if (OutRotationMode != nullptr)
			*OutRotationMode = params.OutRotationMode;
		if (OutActualGait != nullptr)
			*OutActualGait = params.OutActualGait;
		if (OutActualStance != nullptr)
			*OutActualStance = params.OutActualStance;
		if (OutViewMode != nullptr)
			*OutViewMode = params.OutViewMode;
		if (OutOverlayState != nullptr)
			*OutOverlayState = params.OutOverlayState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.GetEssentialValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     OutVelocity                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OutAcceleration                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OutMovementInput                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsMoving                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OutHasMovementInput                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutSpeed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OutMovementInputAmount                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    OutRotator                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutAimYawRate                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::GetEssentialValues(struct FVector* OutVelocity, struct FVector* OutAcceleration, struct FVector* OutMovementInput, bool* OutIsMoving, bool* OutHasMovementInput, float* OutSpeed, float* OutMovementInputAmount, struct FRotator* OutRotator, float* OutAimYawRate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.GetEssentialValues");
		
		ABP_ALSBase_C_GetEssentialValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVelocity != nullptr)
			*OutVelocity = params.OutVelocity;
		if (OutAcceleration != nullptr)
			*OutAcceleration = params.OutAcceleration;
		if (OutMovementInput != nullptr)
			*OutMovementInput = params.OutMovementInput;
		if (OutIsMoving != nullptr)
			*OutIsMoving = params.OutIsMoving;
		if (OutHasMovementInput != nullptr)
			*OutHasMovementInput = params.OutHasMovementInput;
		if (OutSpeed != nullptr)
			*OutSpeed = params.OutSpeed;
		if (OutMovementInputAmount != nullptr)
			*OutMovementInputAmount = params.OutMovementInputAmount;
		if (OutRotator != nullptr)
			*OutRotator = params.OutRotator;
		if (OutAimYawRate != nullptr)
			*OutAimYawRate = params.OutAimYawRate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.BPI_Get_CameraParameters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TP_FOV                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FP_FOV                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RightShoulder                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ALSBase_C::BPI_Get_CameraParameters(float* TP_FOV, float* FP_FOV, bool* RightShoulder)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.BPI_Get_CameraParameters");
		
		ABP_ALSBase_C_BPI_Get_CameraParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TP_FOV != nullptr)
			*TP_FOV = params.TP_FOV;
		if (FP_FOV != nullptr)
			*FP_FOV = params.FP_FOV;
		if (RightShoulder != nullptr)
			*RightShoulder = params.RightShoulder;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.BPI_Get_3P_TraceParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TraceOrigin                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TraceRadius                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETraceTypeQuery                                    TraceChannel                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::BPI_Get_3P_TraceParams(struct FVector* TraceOrigin, float* TraceRadius, ETraceTypeQuery* TraceChannel)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.BPI_Get_3P_TraceParams");
		
		ABP_ALSBase_C_BPI_Get_3P_TraceParams_Params params {};
		
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
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.BPI_Get_3P_PivotTarget
	 * 		Flags  -> ()
	 */
	struct FTransform ABP_ALSBase_C::BPI_Get_3P_PivotTarget()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.BPI_Get_3P_PivotTarget");
		
		ABP_ALSBase_C_BPI_Get_3P_PivotTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.BPI_Get_FP_CameraTarget
	 * 		Flags  -> ()
	 */
	struct FVector ABP_ALSBase_C::BPI_Get_FP_CameraTarget()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.BPI_Get_FP_CameraTarget");
		
		ABP_ALSBase_C_BPI_Get_FP_CameraTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.GetAimingRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    AimingRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ALSBase_C::GetAimingRotation(struct FRotator* AimingRotation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.GetAimingRotation");
		
		ABP_ALSBase_C_GetAimingRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AimingRotation != nullptr)
			*AimingRotation = params.AimingRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.GetGetUpAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               RagdollFaceUp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UAnimMontage* ABP_ALSBase_C::GetGetUpAnimation(bool RagdollFaceUp)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.GetGetUpAnimation");
		
		ABP_ALSBase_C_GetGetUpAnimation_Params params {};
		params.RagdollFaceUp = RagdollFaceUp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.GetRollAnimation
	 * 		Flags  -> ()
	 */
	class UAnimMontage* ABP_ALSBase_C::GetRollAnimation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.GetRollAnimation");
		
		ABP_ALSBase_C_GetRollAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.GetMappedSpeed
	 * 		Flags  -> ()
	 */
	float ABP_ALSBase_C::GetMappedSpeed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.GetMappedSpeed");
		
		ABP_ALSBase_C_GetMappedSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.CanUpdateMovingRotation
	 * 		Flags  -> ()
	 */
	bool ABP_ALSBase_C::CanUpdateMovingRotation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.CanUpdateMovingRotation");
		
		ABP_ALSBase_C_CanUpdateMovingRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.OnOverlayStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOverlayState                                      NewOverLayState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::OnOverlayStateChanged(EOverlayState NewOverLayState)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.OnOverlayStateChanged");
		
		ABP_ALSBase_C_OnOverlayStateChanged_Params params {};
		params.NewOverLayState = NewOverLayState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.OnViewModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EViewMode                                          NewViewMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::OnViewModeChanged(EViewMode NewViewMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.OnViewModeChanged");
		
		ABP_ALSBase_C_OnViewModeChanged_Params params {};
		params.NewViewMode = NewViewMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.OnGaitChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGait                                              NewActualGait                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::OnGaitChanged(EGait NewActualGait)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.OnGaitChanged");
		
		ABP_ALSBase_C_OnGaitChanged_Params params {};
		params.NewActualGait = NewActualGait;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.OnRotationModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERotationMode                                      NewRotationMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::OnRotationModeChanged(ERotationMode NewRotationMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.OnRotationModeChanged");
		
		ABP_ALSBase_C_OnRotationModeChanged_Params params {};
		params.NewRotationMode = NewRotationMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.OnStanceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStance                                            NewStance                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::OnStanceChanged(EStance NewStance)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.OnStanceChanged");
		
		ABP_ALSBase_C_OnStanceChanged_Params params {};
		params.NewStance = NewStance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.OnMovementActionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMovementAction                                    NewMovementAction                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::OnMovementActionChanged(EMovementAction NewMovementAction)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.OnMovementActionChanged");
		
		ABP_ALSBase_C_OnMovementActionChanged_Params params {};
		params.NewMovementAction = NewMovementAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.OnMovementStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMovementState                                     NewMovementState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::OnMovementStateChanged(EMovementState NewMovementState)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.OnMovementStateChanged");
		
		ABP_ALSBase_C_OnMovementStateChanged_Params params {};
		params.NewMovementState = NewMovementState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.OnCharacterMovementModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Engine_EMovementMode                               PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Engine_EMovementMode                               NewMovementMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      PrevCustomMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewCustomMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::OnCharacterMovementModeChanged(Engine_EMovementMode PrevMovementMode, Engine_EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.OnCharacterMovementModeChanged");
		
		ABP_ALSBase_C_OnCharacterMovementModeChanged_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.NewMovementMode = NewMovementMode;
		params.PrevCustomMode = PrevCustomMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.On Begin Play
	 * 		Flags  -> ()
	 */
	void ABP_ALSBase_C::On_Begin_Play()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.On Begin Play");
		
		ABP_ALSBase_C_On_Begin_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.GetAnimCurveValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        CurveName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABP_ALSBase_C::GetAnimCurveValue(const class FName& CurveName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.GetAnimCurveValue");
		
		ABP_ALSBase_C_GetAnimCurveValue_Params params {};
		params.CurveName = CurveName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.GetTraceDebugType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDrawDebugTrace                                    ShowTraceType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EDrawDebugTrace ABP_ALSBase_C::GetTraceDebugType(EDrawDebugTrace ShowTraceType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.GetTraceDebugType");
		
		ABP_ALSBase_C_GetTraceDebugType_Params params {};
		params.ShowTraceType = ShowTraceType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.SetActorLocationDuringRagdoll
	 * 		Flags  -> ()
	 */
	void ABP_ALSBase_C::SetActorLocationDuringRagdoll()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.SetActorLocationDuringRagdoll");
		
		ABP_ALSBase_C_SetActorLocationDuringRagdoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.RagdollUpdate
	 * 		Flags  -> ()
	 */
	void ABP_ALSBase_C::RagdollUpdate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.RagdollUpdate");
		
		ABP_ALSBase_C_RagdollUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.RagdollEnd
	 * 		Flags  -> ()
	 */
	void ABP_ALSBase_C::RagdollEnd()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.RagdollEnd");
		
		ABP_ALSBase_C_RagdollEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.RagdollStart
	 * 		Flags  -> ()
	 */
	void ABP_ALSBase_C::RagdollStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.RagdollStart");
		
		ABP_ALSBase_C_RagdollStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.CalculateAcceleration
	 * 		Flags  -> ()
	 */
	struct FVector ABP_ALSBase_C::CalculateAcceleration()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.CalculateAcceleration");
		
		ABP_ALSBase_C_CalculateAcceleration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.GetCapsuleLocationFromBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     BaseLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ZOffset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector ABP_ALSBase_C::GetCapsuleLocationFromBase(const struct FVector& BaseLocation, float ZOffset)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.GetCapsuleLocationFromBase");
		
		ABP_ALSBase_C_GetCapsuleLocationFromBase_Params params {};
		params.BaseLocation = BaseLocation;
		params.ZOffset = ZOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.GetCalpsuleBaseLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ZOffset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector ABP_ALSBase_C::GetCalpsuleBaseLocation(float ZOffset)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.GetCalpsuleBaseLocation");
		
		ABP_ALSBase_C_GetCalpsuleBaseLocation_Params params {};
		params.ZOffset = ZOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.RightVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ForwardVector                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     RightVector                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::RightVector(struct FVector* ForwardVector, struct FVector* RightVector)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.RightVector");
		
		ABP_ALSBase_C_RightVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForwardVector != nullptr)
			*ForwardVector = params.ForwardVector;
		if (RightVector != nullptr)
			*RightVector = params.RightVector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.GetMantleAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMantleType                                        MantleType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FMantle_Asset_FMantle_Asset ABP_ALSBase_C::GetMantleAsset(EMantleType MantleType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.GetMantleAsset");
		
		ABP_ALSBase_C_GetMantleAsset_Params params {};
		params.MantleType = MantleType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.CapsuleHasRoomCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCapsuleComponent*                           capsule                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TargetLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HeightOffset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RadiusOffset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDrawDebugTrace                                    DebugType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasRoom                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ALSBase_C::CapsuleHasRoomCheck(class UCapsuleComponent* capsule, const struct FVector& TargetLocation, float HeightOffset, float RadiusOffset, EDrawDebugTrace DebugType, bool* HasRoom)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.CapsuleHasRoomCheck");
		
		ABP_ALSBase_C_CapsuleHasRoomCheck_Params params {};
		params.capsule = capsule;
		params.TargetLocation = TargetLocation;
		params.HeightOffset = HeightOffset;
		params.RadiusOffset = RadiusOffset;
		params.DebugType = DebugType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasRoom != nullptr)
			*HasRoom = params.HasRoom;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.MantleUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BlendIn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::MantleUpdate(float BlendIn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.MantleUpdate");
		
		ABP_ALSBase_C_MantleUpdate_Params params {};
		params.BlendIn = BlendIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.MantleEnd
	 * 		Flags  -> ()
	 */
	void ABP_ALSBase_C::MantleEnd()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.MantleEnd");
		
		ABP_ALSBase_C_MantleEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.MantleStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MantleHeight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FALS_ComponentAndTransform                  MantleLedgeWS                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		EMantleType                                        MantleType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::MantleStart(float MantleHeight, const struct FALS_ComponentAndTransform& MantleLedgeWS, EMantleType MantleType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.MantleStart");
		
		ABP_ALSBase_C_MantleStart_Params params {};
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
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.DrawDebugShapes
	 * 		Flags  -> ()
	 */
	void ABP_ALSBase_C::DrawDebugShapes()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.DrawDebugShapes");
		
		ABP_ALSBase_C_DrawDebugShapes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.FixDiagonalGamepadValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Y_in                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              X_in                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Y_Out                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              X_Out                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::FixDiagonalGamepadValues(float Y_in, float X_in, float* Y_Out, float* X_Out)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.FixDiagonalGamepadValues");
		
		ABP_ALSBase_C_FixDiagonalGamepadValues_Params params {};
		params.Y_in = Y_in;
		params.X_in = X_in;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Y_Out != nullptr)
			*Y_Out = params.Y_Out;
		if (X_Out != nullptr)
			*X_Out = params.X_Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.GetPlayerMovementInput
	 * 		Flags  -> ()
	 */
	struct FVector ABP_ALSBase_C::GetPlayerMovementInput()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.GetPlayerMovementInput");
		
		ABP_ALSBase_C_GetPlayerMovementInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.MantleCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMantle_TraceSettings                       Trace_Settings                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDrawDebugTrace                                    DebugType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Vault                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ALSBase_C::MantleCheck(const struct FMantle_TraceSettings& Trace_Settings, EDrawDebugTrace DebugType, bool* Vault)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.MantleCheck");
		
		ABP_ALSBase_C_MantleCheck_Params params {};
		params.Trace_Settings = Trace_Settings;
		params.DebugType = DebugType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Vault != nullptr)
			*Vault = params.Vault;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.CalculateGroundedRotationRate
	 * 		Flags  -> ()
	 */
	float ABP_ALSBase_C::CalculateGroundedRotationRate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.CalculateGroundedRotationRate");
		
		ABP_ALSBase_C_CalculateGroundedRotationRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.SetActorLocationAndRotation(UpdateTarget)
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    NewRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSweep                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bTeleport                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepHitResult                                             (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	bool ABP_ALSBase_C::SetActorLocationAndRotation_UpdateTarget(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.SetActorLocationAndRotation(UpdateTarget)");
		
		ABP_ALSBase_C_SetActorLocationAndRotation_UpdateTarget_Params params {};
		params.NewLocation = NewLocation;
		params.NewRotation = NewRotation;
		params.bSweep = bSweep;
		params.bTeleport = bTeleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SweepHitResult != nullptr)
			*SweepHitResult = params.SweepHitResult;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.LimitRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AimYawMin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AimYawMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InterpSpeed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::LimitRotation(float AimYawMin, float AimYawMax, float InterpSpeed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.LimitRotation");
		
		ABP_ALSBase_C_LimitRotation_Params params {};
		params.AimYawMin = AimYawMin;
		params.AimYawMax = AimYawMax;
		params.InterpSpeed = InterpSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.AddToCharacterRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    DeltaRotation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ALSBase_C::AddToCharacterRotation(const struct FRotator& DeltaRotation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.AddToCharacterRotation");
		
		ABP_ALSBase_C_AddToCharacterRotation_Params params {};
		params.DeltaRotation = DeltaRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.CanSprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CanSprint                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ALSBase_C::CanSprint(bool* CanSprint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.CanSprint");
		
		ABP_ALSBase_C_CanSprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanSprint != nullptr)
			*CanSprint = params.CanSprint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.GetActualGait
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGait                                              AllowedGait                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGait                                              ActualGait                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::GetActualGait(EGait AllowedGait, EGait* ActualGait)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.GetActualGait");
		
		ABP_ALSBase_C_GetActualGait_Params params {};
		params.AllowedGait = AllowedGait;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActualGait != nullptr)
			*ActualGait = params.ActualGait;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.GetAllowedGait
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGait                                              AllowedGait                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::GetAllowedGait(EGait* AllowedGait)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.GetAllowedGait");
		
		ABP_ALSBase_C_GetAllowedGait_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllowedGait != nullptr)
			*AllowedGait = params.AllowedGait;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.GetTargetMovementSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMovementSettings_FMovementSettings         MovementSettings                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::GetTargetMovementSettings(struct FMovementSettings_FMovementSettings* MovementSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.GetTargetMovementSettings");
		
		ABP_ALSBase_C_GetTargetMovementSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MovementSettings != nullptr)
			*MovementSettings = params.MovementSettings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.UpdateDynamicMovementSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGait                                              AllowedGait                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::UpdateDynamicMovementSettings(EGait AllowedGait)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.UpdateDynamicMovementSettings");
		
		ABP_ALSBase_C_UpdateDynamicMovementSettings_Params params {};
		params.AllowedGait = AllowedGait;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.UpdateCharacterMovement
	 * 		Flags  -> ()
	 */
	void ABP_ALSBase_C::UpdateCharacterMovement()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.UpdateCharacterMovement");
		
		ABP_ALSBase_C_UpdateCharacterMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.SetMovementModel
	 * 		Flags  -> ()
	 */
	void ABP_ALSBase_C::SetMovementModel()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.SetMovementModel");
		
		ABP_ALSBase_C_SetMovementModel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.SmoothCharacterRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TargetInterpSpeed_Const                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ActorInterpSpeed_Smooth                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::SmoothCharacterRotation(const struct FRotator& Target, float TargetInterpSpeed_Const, float ActorInterpSpeed_Smooth)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.SmoothCharacterRotation");
		
		ABP_ALSBase_C_SmoothCharacterRotation_Params params {};
		params.Target = Target;
		params.TargetInterpSpeed_Const = TargetInterpSpeed_Const;
		params.ActorInterpSpeed_Smooth = ActorInterpSpeed_Smooth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.UpdateInAirRotation
	 * 		Flags  -> ()
	 */
	void ABP_ALSBase_C::UpdateInAirRotation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.UpdateInAirRotation");
		
		ABP_ALSBase_C_UpdateInAirRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.UpdateGroudedRotation
	 * 		Flags  -> ()
	 */
	void ABP_ALSBase_C::UpdateGroudedRotation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.UpdateGroudedRotation");
		
		ABP_ALSBase_C_UpdateGroudedRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.CacheValues
	 * 		Flags  -> ()
	 */
	void ABP_ALSBase_C::CacheValues()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.CacheValues");
		
		ABP_ALSBase_C_CacheValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.SetEssentialValues
	 * 		Flags  -> ()
	 */
	void ABP_ALSBase_C::SetEssentialValues()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.SetEssentialValues");
		
		ABP_ALSBase_C_SetEssentialValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.PlayerMovementInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsForwardAxis                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ALSBase_C::PlayerMovementInput(bool IsForwardAxis)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.PlayerMovementInput");
		
		ABP_ALSBase_C_PlayerMovementInput_Params params {};
		params.IsForwardAxis = IsForwardAxis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.MantleTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_ALSBase_C::MantleTimeline__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.MantleTimeline__FinishedFunc");
		
		ABP_ALSBase_C_MantleTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.MantleTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_ALSBase_C::MantleTimeline__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.MantleTimeline__UpdateFunc");
		
		ABP_ALSBase_C_MantleTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.ReceiveTick");
		
		ABP_ALSBase_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ALSBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.ReceiveBeginPlay");
		
		ABP_ALSBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.K2_OnStartCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HalfHeightAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScaledHalfHeightAdjust                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.K2_OnStartCrouch");
		
		ABP_ALSBase_C_K2_OnStartCrouch_Params params {};
		params.HalfHeightAdjust = HalfHeightAdjust;
		params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.K2_OnEndCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HalfHeightAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScaledHalfHeightAdjust                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.K2_OnEndCrouch");
		
		ABP_ALSBase_C_K2_OnEndCrouch_Params params {};
		params.HalfHeightAdjust = HalfHeightAdjust;
		params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.K2_OnMovementModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		Engine_EMovementMode                               PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		Engine_EMovementMode                               NewMovementMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      PrevCustomMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewCustomMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::K2_OnMovementModeChanged(Engine_EMovementMode PrevMovementMode, Engine_EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.K2_OnMovementModeChanged");
		
		ABP_ALSBase_C_K2_OnMovementModeChanged_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.NewMovementMode = NewMovementMode;
		params.PrevCustomMode = PrevCustomMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.OnJumped
	 * 		Flags  -> ()
	 */
	void ABP_ALSBase_C::OnJumped()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.OnJumped");
		
		ABP_ALSBase_C_OnJumped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.OnLanded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_ALSBase_C::OnLanded(const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.OnLanded");
		
		ABP_ALSBase_C_OnLanded_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.Breakfall Event
	 * 		Flags  -> ()
	 */
	void ABP_ALSBase_C::Breakfall_Event()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.Breakfall Event");
		
		ABP_ALSBase_C_Breakfall_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.Roll Event
	 * 		Flags  -> ()
	 */
	void ABP_ALSBase_C::Roll_Event()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.Roll Event");
		
		ABP_ALSBase_C_Roll_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.SetTargetRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    TargetRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ALSBase_C::SetTargetRotation(const struct FRotator& TargetRotation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.SetTargetRotation");
		
		ABP_ALSBase_C_SetTargetRotation_Params params {};
		params.TargetRotation = TargetRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.SetMovementState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMovementState                                     NewMovementState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::SetMovementState(EMovementState NewMovementState)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.SetMovementState");
		
		ABP_ALSBase_C_SetMovementState_Params params {};
		params.NewMovementState = NewMovementState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.SetMovementAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMovementAction                                    NewMovementAction                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::SetMovementAction(EMovementAction NewMovementAction)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.SetMovementAction");
		
		ABP_ALSBase_C_SetMovementAction_Params params {};
		params.NewMovementAction = NewMovementAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.SetRotationMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERotationMode                                      NewRotationMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::SetRotationMode(ERotationMode NewRotationMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.SetRotationMode");
		
		ABP_ALSBase_C_SetRotationMode_Params params {};
		params.NewRotationMode = NewRotationMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.SetGait
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGait                                              NewGait                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::SetGait(EGait NewGait)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.SetGait");
		
		ABP_ALSBase_C_SetGait_Params params {};
		params.NewGait = NewGait;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.SetViewMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EViewMode                                          ViewMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::SetViewMode(EViewMode ViewMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.SetViewMode");
		
		ABP_ALSBase_C_SetViewMode_Params params {};
		params.ViewMode = ViewMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.SetOverlayState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOverlayState                                      NewOverLayState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::SetOverlayState(EOverlayState NewOverLayState)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.SetOverlayState");
		
		ABP_ALSBase_C_SetOverlayState_Params params {};
		params.NewOverLayState = NewOverLayState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.SetStance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EStance                                            NewStance                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::SetStance(EStance NewStance)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.SetStance");
		
		ABP_ALSBase_C_SetStance_Params params {};
		params.NewStance = NewStance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ALSBase.BP_ALSBase_C.ExecuteUbergraph_BP_ALSBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ALSBase_C::ExecuteUbergraph_BP_ALSBase(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ALSBase.BP_ALSBase_C.ExecuteUbergraph_BP_ALSBase");
		
		ABP_ALSBase_C_ExecuteUbergraph_BP_ALSBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ALSBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ALSBase_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ALSBase.BP_ALSBase_C");
		return ptr;
	}

}


