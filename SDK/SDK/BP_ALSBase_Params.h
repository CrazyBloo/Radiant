#pragma once

/**
 * Name: Into_The_Radius_VR
 * Version: 2.4
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_ALSBase.BP_ALSBase_C.GetCurrentStates
	 */
	struct ABP_ALSBase_C_GetCurrentStates_Params
	{
	public:
		Engine_EMovementMode                                       OutPawnMovementMode;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementState                                             OutMovementState;                                        // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementState                                             OutPrevMovementState;                                    // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementAction                                            OutMovementAction;                                       // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERotationMode                                              OutRotationMode;                                         // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGait                                                      OutActualGait;                                           // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EStance                                                    OutActualStance;                                         // 0x0006(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EViewMode                                                  OutViewMode;                                             // 0x0007(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EOverlayState                                              OutOverlayState;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.GetEssentialValues
	 */
	struct ABP_ALSBase_C_GetEssentialValues_Params
	{
	public:
		struct FVector                                             OutVelocity;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             OutAcceleration;                                         // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             OutMovementInput;                                        // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsMoving;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OutHasMovementInput;                                     // 0x0025(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FJV6[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OutSpeed;                                                // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OutMovementInputAmount;                                  // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            OutRotator;                                              // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutAimYawRate;                                           // 0x003C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.BPI_Get_CameraParameters
	 */
	struct ABP_ALSBase_C_BPI_Get_CameraParameters_Params
	{
	public:
		float                                                      TP_FOV;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FP_FOV;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RightShoulder;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.BPI_Get_3P_TraceParams
	 */
	struct ABP_ALSBase_C_BPI_Get_3P_TraceParams_Params
	{
	public:
		struct FVector                                             TraceOrigin;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TraceRadius;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETraceTypeQuery                                            TraceChannel;                                            // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V15F[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.BPI_Get_3P_PivotTarget
	 */
	struct ABP_ALSBase_C_BPI_Get_3P_PivotTarget_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.BPI_Get_FP_CameraTarget
	 */
	struct ABP_ALSBase_C_BPI_Get_FP_CameraTarget_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.GetAimingRotation
	 */
	struct ABP_ALSBase_C_GetAimingRotation_Params
	{
	public:
		struct FRotator                                            AimingRotation;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.GetGetUpAnimation
	 */
	struct ABP_ALSBase_C_GetGetUpAnimation_Params
	{
	public:
		bool                                                       RagdollFaceUp;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5239[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.GetRollAnimation
	 */
	struct ABP_ALSBase_C_GetRollAnimation_Params
	{
	public:
		class UAnimMontage*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.GetMappedSpeed
	 */
	struct ABP_ALSBase_C_GetMappedSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.CanUpdateMovingRotation
	 */
	struct ABP_ALSBase_C_CanUpdateMovingRotation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.OnOverlayStateChanged
	 */
	struct ABP_ALSBase_C_OnOverlayStateChanged_Params
	{
	public:
		EOverlayState                                              NewOverLayState;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.OnViewModeChanged
	 */
	struct ABP_ALSBase_C_OnViewModeChanged_Params
	{
	public:
		EViewMode                                                  NewViewMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.OnGaitChanged
	 */
	struct ABP_ALSBase_C_OnGaitChanged_Params
	{
	public:
		EGait                                                      NewActualGait;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.OnRotationModeChanged
	 */
	struct ABP_ALSBase_C_OnRotationModeChanged_Params
	{
	public:
		ERotationMode                                              NewRotationMode;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.OnStanceChanged
	 */
	struct ABP_ALSBase_C_OnStanceChanged_Params
	{
	public:
		EStance                                                    NewStance;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.OnMovementActionChanged
	 */
	struct ABP_ALSBase_C_OnMovementActionChanged_Params
	{
	public:
		EMovementAction                                            NewMovementAction;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.OnMovementStateChanged
	 */
	struct ABP_ALSBase_C_OnMovementStateChanged_Params
	{
	public:
		EMovementState                                             NewMovementState;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.OnCharacterMovementModeChanged
	 */
	struct ABP_ALSBase_C_OnCharacterMovementModeChanged_Params
	{
	public:
		Engine_EMovementMode                                       PrevMovementMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		Engine_EMovementMode                                       NewMovementMode;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.On Begin Play
	 */
	struct ABP_ALSBase_C_On_Begin_Play_Params
	{	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.GetAnimCurveValue
	 */
	struct ABP_ALSBase_C_GetAnimCurveValue_Params
	{
	public:
		class FName                                                CurveName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.GetTraceDebugType
	 */
	struct ABP_ALSBase_C_GetTraceDebugType_Params
	{
	public:
		EDrawDebugTrace                                            ShowTraceType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EDrawDebugTrace                                            ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P4HL[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.SetActorLocationDuringRagdoll
	 */
	struct ABP_ALSBase_C_SetActorLocationDuringRagdoll_Params
	{	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.RagdollUpdate
	 */
	struct ABP_ALSBase_C_RagdollUpdate_Params
	{	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.RagdollEnd
	 */
	struct ABP_ALSBase_C_RagdollEnd_Params
	{	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.RagdollStart
	 */
	struct ABP_ALSBase_C_RagdollStart_Params
	{	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.CalculateAcceleration
	 */
	struct ABP_ALSBase_C_CalculateAcceleration_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.GetCapsuleLocationFromBase
	 */
	struct ABP_ALSBase_C_GetCapsuleLocationFromBase_Params
	{
	public:
		struct FVector                                             BaseLocation;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ZOffset;                                                 // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.GetCalpsuleBaseLocation
	 */
	struct ABP_ALSBase_C_GetCalpsuleBaseLocation_Params
	{
	public:
		float                                                      ZOffset;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.RightVector
	 */
	struct ABP_ALSBase_C_RightVector_Params
	{
	public:
		struct FVector                                             ForwardVector;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             RightVector;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.GetMantleAsset
	 */
	struct ABP_ALSBase_C_GetMantleAsset_Params
	{
	public:
		EMantleType                                                MantleType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MN57[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMantle_Asset_FMantle_Asset                         ReturnValue;                                             // 0x0008(0x0038)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.CapsuleHasRoomCheck
	 */
	struct ABP_ALSBase_C_CapsuleHasRoomCheck_Params
	{
	public:
		class UCapsuleComponent*                                   capsule;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TargetLocation;                                          // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HeightOffset;                                            // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RadiusOffset;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EDrawDebugTrace                                            DebugType;                                               // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasRoom;                                                 // 0x001D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2QZE[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.MantleUpdate
	 */
	struct ABP_ALSBase_C_MantleUpdate_Params
	{
	public:
		float                                                      BlendIn;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K99P[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.MantleEnd
	 */
	struct ABP_ALSBase_C_MantleEnd_Params
	{	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.MantleStart
	 */
	struct ABP_ALSBase_C_MantleStart_Params
	{
	public:
		float                                                      MantleHeight;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HHDF[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FALS_ComponentAndTransform                          MantleLedgeWS;                                           // 0x0010(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
		EMantleType                                                MantleType;                                              // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U00J[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.DrawDebugShapes
	 */
	struct ABP_ALSBase_C_DrawDebugShapes_Params
	{	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.FixDiagonalGamepadValues
	 */
	struct ABP_ALSBase_C_FixDiagonalGamepadValues_Params
	{
	public:
		float                                                      Y_in;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      X_in;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Y_Out;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      X_Out;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.GetPlayerMovementInput
	 */
	struct ABP_ALSBase_C_GetPlayerMovementInput_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.MantleCheck
	 */
	struct ABP_ALSBase_C_MantleCheck_Params
	{
	public:
		struct FMantle_TraceSettings                               Trace_Settings;                                          // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EDrawDebugTrace                                            DebugType;                                               // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Vault;                                                   // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.CalculateGroundedRotationRate
	 */
	struct ABP_ALSBase_C_CalculateGroundedRotationRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.SetActorLocationAndRotation(UpdateTarget)
	 */
	struct ABP_ALSBase_C_SetActorLocationAndRotation_UpdateTarget_Params
	{
	public:
		struct FVector                                             NewLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            NewRotation;                                             // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSweep;                                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bTeleport;                                               // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RCLF[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepHitResult;                                          // 0x001C(0x0088)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x00A4(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PS5P[0x3];                                   // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.LimitRotation
	 */
	struct ABP_ALSBase_C_LimitRotation_Params
	{
	public:
		float                                                      AimYawMin;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AimYawMax;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InterpSpeed;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.AddToCharacterRotation
	 */
	struct ABP_ALSBase_C_AddToCharacterRotation_Params
	{
	public:
		struct FRotator                                            DeltaRotation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.CanSprint
	 */
	struct ABP_ALSBase_C_CanSprint_Params
	{
	public:
		bool                                                       CanSprint;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6HWC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.GetActualGait
	 */
	struct ABP_ALSBase_C_GetActualGait_Params
	{
	public:
		EGait                                                      AllowedGait;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGait                                                      ActualGait;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CGBS[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.GetAllowedGait
	 */
	struct ABP_ALSBase_C_GetAllowedGait_Params
	{
	public:
		EGait                                                      AllowedGait;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.GetTargetMovementSettings
	 */
	struct ABP_ALSBase_C_GetTargetMovementSettings_Params
	{
	public:
		struct FMovementSettings_FMovementSettings                 MovementSettings;                                        // 0x0000(0x0020)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.UpdateDynamicMovementSettings
	 */
	struct ABP_ALSBase_C_UpdateDynamicMovementSettings_Params
	{
	public:
		EGait                                                      AllowedGait;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.UpdateCharacterMovement
	 */
	struct ABP_ALSBase_C_UpdateCharacterMovement_Params
	{	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.SetMovementModel
	 */
	struct ABP_ALSBase_C_SetMovementModel_Params
	{	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.SmoothCharacterRotation
	 */
	struct ABP_ALSBase_C_SmoothCharacterRotation_Params
	{
	public:
		struct FRotator                                            Target;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TargetInterpSpeed_Const;                                 // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ActorInterpSpeed_Smooth;                                 // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.UpdateInAirRotation
	 */
	struct ABP_ALSBase_C_UpdateInAirRotation_Params
	{	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.UpdateGroudedRotation
	 */
	struct ABP_ALSBase_C_UpdateGroudedRotation_Params
	{	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.CacheValues
	 */
	struct ABP_ALSBase_C_CacheValues_Params
	{	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.SetEssentialValues
	 */
	struct ABP_ALSBase_C_SetEssentialValues_Params
	{	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.PlayerMovementInput
	 */
	struct ABP_ALSBase_C_PlayerMovementInput_Params
	{
	public:
		bool                                                       IsForwardAxis;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9GYE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.MantleTimeline__FinishedFunc
	 */
	struct ABP_ALSBase_C_MantleTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.MantleTimeline__UpdateFunc
	 */
	struct ABP_ALSBase_C_MantleTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.ReceiveTick
	 */
	struct ABP_ALSBase_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.ReceiveBeginPlay
	 */
	struct ABP_ALSBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.K2_OnStartCrouch
	 */
	struct ABP_ALSBase_C_K2_OnStartCrouch_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.K2_OnEndCrouch
	 */
	struct ABP_ALSBase_C_K2_OnEndCrouch_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.K2_OnMovementModeChanged
	 */
	struct ABP_ALSBase_C_K2_OnMovementModeChanged_Params
	{
	public:
		Engine_EMovementMode                                       PrevMovementMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		Engine_EMovementMode                                       NewMovementMode;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.OnJumped
	 */
	struct ABP_ALSBase_C_OnJumped_Params
	{	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.OnLanded
	 */
	struct ABP_ALSBase_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.Breakfall Event
	 */
	struct ABP_ALSBase_C_Breakfall_Event_Params
	{	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.Roll Event
	 */
	struct ABP_ALSBase_C_Roll_Event_Params
	{	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.SetTargetRotation
	 */
	struct ABP_ALSBase_C_SetTargetRotation_Params
	{
	public:
		struct FRotator                                            TargetRotation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.SetMovementState
	 */
	struct ABP_ALSBase_C_SetMovementState_Params
	{
	public:
		EMovementState                                             NewMovementState;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.SetMovementAction
	 */
	struct ABP_ALSBase_C_SetMovementAction_Params
	{
	public:
		EMovementAction                                            NewMovementAction;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.SetRotationMode
	 */
	struct ABP_ALSBase_C_SetRotationMode_Params
	{
	public:
		ERotationMode                                              NewRotationMode;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.SetGait
	 */
	struct ABP_ALSBase_C_SetGait_Params
	{
	public:
		EGait                                                      NewGait;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.SetViewMode
	 */
	struct ABP_ALSBase_C_SetViewMode_Params
	{
	public:
		EViewMode                                                  ViewMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.SetOverlayState
	 */
	struct ABP_ALSBase_C_SetOverlayState_Params
	{
	public:
		EOverlayState                                              NewOverLayState;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.SetStance
	 */
	struct ABP_ALSBase_C_SetStance_Params
	{
	public:
		EStance                                                    NewStance;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ALSBase.BP_ALSBase_C.ExecuteUbergraph_BP_ALSBase
	 */
	struct ABP_ALSBase_C_ExecuteUbergraph_BP_ALSBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
