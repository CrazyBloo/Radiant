#pragma once

/**
 * Name: Into_The_Radius_VR
 * Version: 2.5.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_ALSBase.BP_ALSBase_C
	 * Size -> 0x02F0 (FullSize[0x0B19] - InheritedSize[0x0829])
	 */
	class ABP_ALSBase_C : public ABPA_Char_C
	{
	public:
		unsigned char                                              UnknownData_1XU1[0x7];                                   // 0x0829(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0830(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      MantleTimeline_BlendIn_220B39424B7E9A895225B2B625578678; // 0x0838(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         MantleTimeline__Direction_220B39424B7E9A895225B2B625578678; // 0x083C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VZX3[0x3];                                   // 0x083D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  MantleTimeline;                                          // 0x0840(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMovementState                                             MovementState;                                           // 0x0848(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMovementState                                             PrevMovementState;                                       // 0x0849(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ERotationMode                                              DesiredRotationMode;                                     // 0x084A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMovementAction                                            MovementAction;                                          // 0x084B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ERotationMode                                              RotationMode;                                            // 0x084C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGait                                                      DesiredGait;                                             // 0x084D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGait                                                      Gait;                                                    // 0x084E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EStance                                                    Stance;                                                  // 0x084F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EViewMode                                                  ViewMode;                                                // 0x0850(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JQPQ[0x3];                                   // 0x0851(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PreviousVelocity;                                        // 0x0854(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Acceleration;                                            // 0x0860(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsMoving;                                                // 0x086C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasMovementInput;                                        // 0x086D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6U0N[0x2];                                   // 0x086E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            LastVelocityRotation;                                    // 0x0870(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            LastMovementInputRotation;                               // 0x087C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Speed;                                                   // 0x0888(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MovementInputAmount;                                     // 0x088C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PreviousAimYaw;                                          // 0x0890(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            TargetRotation;                                          // 0x0894(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            InAirRotation;                                           // 0x08A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      YawOffset;                                               // 0x08AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableRowHandle                                 MovementModel;                                           // 0x08B0(0x0010) Edit, BlueprintVisible, NoDestructor
		struct FMovementSettings_State                             MovementData;                                            // 0x08C0(0x00C0) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMovementSettings_FMovementSettings                 CurrentMovementSettings;                                 // 0x0980(0x0020) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMantle_Params_FMantle_Params                       MantleParams;                                            // 0x09A0(0x0028) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_024B[0x8];                                   // 0x09C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FALS_ComponentAndTransform                          MantleLedgeLS;                                           // 0x09D0(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
		struct FTransform                                          MantleTarget;                                            // 0x0A10(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          MantleActualStartOffset;                                 // 0x0A40(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          MantleAnimatedStartOffset;                               // 0x0A70(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FMantle_TraceSettings                               GroundedTraceSettings;                                   // 0x0AA0(0x0014) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMantle_TraceSettings                               AutomaticTraceSettings;                                  // 0x0AB4(0x0014) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMantle_TraceSettings                               FallingTraceSettings;                                    // 0x0AC8(0x0014) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EStance                                                    DesiredStance;                                           // 0x0ADC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0CRA[0x3];                                   // 0x0ADD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DownRate;                                                // 0x0AE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LookLeftRightRate;                                       // 0x0AE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimYawRate;                                              // 0x0AE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EOverlayState                                              OverlayState;                                            // 0x0AEC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YLS7[0x3];                                   // 0x0AED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TimesPressedStance;                                      // 0x0AF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BreakFall;                                               // 0x0AF4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SprintHeld;                                              // 0x0AF5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_41UO[0x2];                                   // 0x0AF6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimInstance*                                       MainAnimInstance;                                        // 0x0AF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RagdollOnGround;                                         // 0x0B00(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RagdollFaceUp;                                           // 0x0B01(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WO69[0x2];                                   // 0x0B02(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LastRagdollVelocity;                                     // 0x0B04(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ThirdPersonFOV;                                          // 0x0B10(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FirstPersonFOV;                                          // 0x0B14(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RightShoulder;                                           // 0x0B18(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void GetCurrentStates(Engine_EMovementMode* OutPawnMovementMode, EMovementState* OutMovementState, EMovementState* OutPrevMovementState, EMovementAction* OutMovementAction, ERotationMode* OutRotationMode, EGait* OutActualGait, EStance* OutActualStance, EViewMode* OutViewMode, EOverlayState* OutOverlayState);
		void GetEssentialValues(struct FVector* OutVelocity, struct FVector* OutAcceleration, struct FVector* OutMovementInput, bool* OutIsMoving, bool* OutHasMovementInput, float* OutSpeed, float* OutMovementInputAmount, struct FRotator* OutRotator, float* OutAimYawRate);
		void BPI_Get_CameraParameters(float* TP_FOV, float* FP_FOV, bool* RightShoulder);
		void BPI_Get_3P_TraceParams(struct FVector* TraceOrigin, float* TraceRadius, ETraceTypeQuery* TraceChannel);
		struct FTransform BPI_Get_3P_PivotTarget();
		struct FVector BPI_Get_FP_CameraTarget();
		void GetAimingRotation(struct FRotator* AimingRotation);
		class UAnimMontage* GetGetUpAnimation(bool RagdollFaceUp);
		class UAnimMontage* GetRollAnimation();
		float GetMappedSpeed();
		bool CanUpdateMovingRotation();
		void OnOverlayStateChanged(EOverlayState NewOverLayState);
		void OnViewModeChanged(EViewMode NewViewMode);
		void OnGaitChanged(EGait NewActualGait);
		void OnRotationModeChanged(ERotationMode NewRotationMode);
		void OnStanceChanged(EStance NewStance);
		void OnMovementActionChanged(EMovementAction NewMovementAction);
		void OnMovementStateChanged(EMovementState NewMovementState);
		void OnCharacterMovementModeChanged(Engine_EMovementMode PrevMovementMode, Engine_EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
		void OnBeginPlay();
		float GetAnimCurveValue(const class FName& CurveName);
		EDrawDebugTrace GetTraceDebugType(EDrawDebugTrace ShowTraceType);
		void SetActorLocationDuringRagdoll();
		void RagdollUpdate();
		void RagdollEnd();
		void RagdollStart();
		struct FVector CalculateAcceleration();
		struct FVector GetCapsuleLocationFromBase(const struct FVector& BaseLocation, float ZOffset);
		struct FVector GetCalpsuleBaseLocation(float ZOffset);
		void RightVector(struct FVector* ForwardVector, struct FVector* RightVector);
		struct FMantle_Asset_FMantle_Asset GetMantleAsset(EMantleType MantleType);
		void CapsuleHasRoomCheck(class UCapsuleComponent* capsule, const struct FVector& TargetLocation, float HeightOffset, float RadiusOffset, EDrawDebugTrace DebugType, bool* HasRoom);
		void MantleUpdate(float BlendIn);
		void MantleEnd();
		void MantleStart(float MantleHeight, const struct FALS_ComponentAndTransform& MantleLedgeWS, EMantleType MantleType);
		void DrawDebugShapes();
		void FixDiagonalGamepadValues(float Yin, float Xin, float* YOut, float* XOut);
		struct FVector GetPlayerMovementInput();
		void MantleCheck(const struct FMantle_TraceSettings& TraceSettings, EDrawDebugTrace DebugType, bool* Vault);
		float CalculateGroundedRotationRate();
		bool SetActorLocationAndRotationUpdateTarget(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
		void LimitRotation(float AimYawMin, float AimYawMax, float InterpSpeed);
		void AddToCharacterRotation(const struct FRotator& DeltaRotation);
		void CanSprint(bool* CanSprint);
		void GetActualGait(EGait AllowedGait, EGait* ActualGait);
		void GetAllowedGait(EGait* AllowedGait);
		void GetTargetMovementSettings(struct FMovementSettings_FMovementSettings* MovementSettings);
		void UpdateDynamicMovementSettings(EGait AllowedGait);
		void UpdateCharacterMovement();
		void SetMovementModel();
		void SmoothCharacterRotation(const struct FRotator& Target, float TargetInterpSpeedConst, float ActorInterpSpeedSmooth);
		void UpdateInAirRotation();
		void UpdateGroudedRotation();
		void CacheValues();
		void SetEssentialValues();
		void PlayerMovementInput(bool IsForwardAxis);
		void MantleTimeline__FinishedFunc();
		void MantleTimeline__UpdateFunc();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void K2_OnMovementModeChanged(Engine_EMovementMode PrevMovementMode, Engine_EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
		void OnJumped();
		void OnLanded(const struct FHitResult& Hit);
		void BreakfallEvent();
		void RollEvent();
		void SetTargetRotation(const struct FRotator& TargetRotation);
		void SetMovementState(EMovementState NewMovementState);
		void SetMovementAction(EMovementAction NewMovementAction);
		void SetRotationMode(ERotationMode NewRotationMode);
		void SetGait(EGait NewGait);
		void SetViewMode(EViewMode ViewMode);
		void SetOverlayState(EOverlayState NewOverLayState);
		void SetStance(EStance NewStance);
		void ExecuteUbergraph_BP_ALSBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
