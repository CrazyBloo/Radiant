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
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AimOffsetBehaviors
	 */
	struct UALS_AnimBPLite_C_AimOffsetBehaviors_Params
	{
	public:
		struct FPoseLink                                           AimOffsetBehaviors;                                      // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.Foot IK
	 */
	struct UALS_AnimBPLite_C_Foot_IK_Params
	{
	public:
		struct FPoseLink                                           InPose;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           Foot_IK;                                                 // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.(CLF) CycleBlending
	 */
	struct UALS_AnimBPLite_C_CLF_CycleBlending_Params
	{
	public:
		struct FPoseLink                                           F;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           B;                                                       // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           LF;                                                      // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           LB;                                                      // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           RF;                                                      // 0x0040(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           RB;                                                      // 0x0050(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           CLF_CycleBlending;                                       // 0x0060(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.(N) CycleBlending
	 */
	struct UALS_AnimBPLite_C_N_CycleBlending_Params
	{
	public:
		struct FPoseLink                                           F;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           B;                                                       // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           LF;                                                      // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           LB;                                                      // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           RF;                                                      // 0x0040(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           RB;                                                      // 0x0050(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           Sprint;                                                  // 0x0060(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           N_CycleBlending;                                         // 0x0070(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.LayerBlending
	 */
	struct UALS_AnimBPLite_C_LayerBlending_Params
	{
	public:
		struct FPoseLink                                           Base_Layer_Input;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           Overlay_Layer_Input;                                     // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           Base_Poses_Input;                                        // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           LayerBlending;                                           // 0x0030(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.BasePoses
	 */
	struct UALS_AnimBPLite_C_BasePoses_Params
	{
	public:
		struct FPoseLink                                           BasePoses;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.OverlayLayer
	 */
	struct UALS_AnimBPLite_C_OverlayLayer_Params
	{
	public:
		struct FPoseLink                                           OverlayLayer;                                            // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.BaseLayer
	 */
	struct UALS_AnimBPLite_C_BaseLayer_Params
	{
	public:
		struct FPoseLink                                           BaseLayer;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimGraph
	 */
	struct UALS_AnimBPLite_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.ResetIKOffsets
	 */
	struct UALS_AnimBPLite_C_ResetIKOffsets_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AngleInRange
	 */
	struct UALS_AnimBPLite_C_AngleInRange_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MinAngle;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxAngle;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Buffer;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IncreaseBuffer;                                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.CalculateQuadrant
	 */
	struct UALS_AnimBPLite_C_CalculateQuadrant_Params
	{
	public:
		EMovementDirection                                         Current;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RRPI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      FR_Threshold;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FL_Threshold;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BR_Threshold;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BL_Threshold;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Buffer;                                                  // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Angle;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementDirection                                         ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.InterpLeanAmount
	 */
	struct UALS_AnimBPLite_C_InterpLeanAmount_Params
	{
	public:
		struct FLeanAmount                                         Current;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLeanAmount                                         Target;                                                  // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InterpSpeed;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaTime;                                               // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLeanAmount                                         ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.InterpVelocityBlend
	 */
	struct UALS_AnimBPLite_C_InterpVelocityBlend_Params
	{
	public:
		struct FVelocityBlend                                      Current;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVelocityBlend                                      Target;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InterpSpeed;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaTime;                                               // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVelocityBlend                                      ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.GetDebugTraceType
	 */
	struct UALS_AnimBPLite_C_GetDebugTraceType_Params
	{
	public:
		EDrawDebugTrace                                            ShowTraceType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EDrawDebugTrace                                            DebugType;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NF0P[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.DynamicTransitionCheck
	 */
	struct UALS_AnimBPLite_C_DynamicTransitionCheck_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.RotateInPlaceCheck
	 */
	struct UALS_AnimBPLite_C_RotateInPlaceCheck_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.CalculateInAirLeanAmount
	 */
	struct UALS_AnimBPLite_C_CalculateInAirLeanAmount_Params
	{
	public:
		struct FLeanAmount                                         LeanAmount;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.CalculateLandPrediction
	 */
	struct UALS_AnimBPLite_C_CalculateLandPrediction_Params
	{
	public:
		float                                                      LandPrediction;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IIFX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.TurnInPlaceCheck
	 */
	struct UALS_AnimBPLite_C_TurnInPlaceCheck_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.TurnInPlace
	 */
	struct UALS_AnimBPLite_C_TurnInPlace_Params
	{
	public:
		struct FRotator                                            TargetRotation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PlayRateScale;                                           // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      StartTime;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OverrideCurrent;                                         // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KXXA[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.CanOverlayTransition
	 */
	struct UALS_AnimBPLite_C_CanOverlayTransition_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.CanDynamicTransition
	 */
	struct UALS_AnimBPLite_C_CanDynamicTransition_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O9YJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.CanRotateInPlace
	 */
	struct UALS_AnimBPLite_C_CanRotateInPlace_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.CanTurnInPlace
	 */
	struct UALS_AnimBPLite_C_CanTurnInPlace_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6LJ5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.ShouldMoveCheck
	 */
	struct UALS_AnimBPLite_C_ShouldMoveCheck_Params
	{
	public:
		bool                                                       return_value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.SetFootLockOffsets
	 */
	struct UALS_AnimBPLite_C_SetFootLockOffsets_Params
	{
	public:
		struct FVector                                             LocalLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            LocalRotation;                                           // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.SetFootLocking
	 */
	struct UALS_AnimBPLite_C_SetFootLocking_Params
	{
	public:
		class FName                                                Enable_FootIK_Curve;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                FootLockCurve;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                IKFootBone;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CurrentFootLockAlpha;                                    // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             CurrentFootLockLocation;                                 // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            CurrentFootLockRotation;                                 // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.SetPelvisIKOffset
	 */
	struct UALS_AnimBPLite_C_SetPelvisIKOffset_Params
	{
	public:
		struct FVector                                             FootOffset_L_Target;                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             FootOffset_R_Target;                                     // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.SetFootOffsets
	 */
	struct UALS_AnimBPLite_C_SetFootOffsets_Params
	{
	public:
		class FName                                                Enable_FootIK_Curve;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                IKFootBone;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                RootBone;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             CurrentLocationTarget;                                   // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             CurrentLocationOffset;                                   // 0x0024(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            CurrentRotationOffset;                                   // 0x0030(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.CalculateMovementDirection
	 */
	struct UALS_AnimBPLite_C_CalculateMovementDirection_Params
	{
	public:
		EMovementDirection                                         ReturnValues;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UEB7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.CalculateCrouchingPlayRate
	 */
	struct UALS_AnimBPLite_C_CalculateCrouchingPlayRate_Params
	{
	public:
		float                                                      PlayRate;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3KEF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.CalculateStandingPlayRate
	 */
	struct UALS_AnimBPLite_C_CalculateStandingPlayRate_Params
	{
	public:
		float                                                      PlayRate;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.CalculateStrideBlend
	 */
	struct UALS_AnimBPLite_C_CalculateStrideBlend_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.CalculateWalkRunBlend
	 */
	struct UALS_AnimBPLite_C_CalculateWalkRunBlend_Params
	{
	public:
		float                                                      WalkRunBlend;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.CalculateRelativeAccelerationAmount
	 */
	struct UALS_AnimBPLite_C_CalculateRelativeAccelerationAmount_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.CalculateDiagonalScaleAmount
	 */
	struct UALS_AnimBPLite_C_CalculateDiagonalScaleAmount_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.CalculateVelocityBlend
	 */
	struct UALS_AnimBPLite_C_CalculateVelocityBlend_Params
	{
	public:
		struct FVelocityBlend                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.UpdateRagdollValues
	 */
	struct UALS_AnimBPLite_C_UpdateRagdollValues_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.UpdateInAirValues
	 */
	struct UALS_AnimBPLite_C_UpdateInAirValues_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.UpdateRotationValues
	 */
	struct UALS_AnimBPLite_C_UpdateRotationValues_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.UpdateMovementValues
	 */
	struct UALS_AnimBPLite_C_UpdateMovementValues_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.UpdateFootIK
	 */
	struct UALS_AnimBPLite_C_UpdateFootIK_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.UpdateLayerValues
	 */
	struct UALS_AnimBPLite_C_UpdateLayerValues_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.UpdateAimingValues
	 */
	struct UALS_AnimBPLite_C_UpdateAimingValues_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.UpdateCharacterInfo
	 */
	struct UALS_AnimBPLite_C_UpdateCharacterInfo_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_615646094D45926C382D018E3C5EC6FB
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_615646094D45926C382D018E3C5EC6FB_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_90FF12694FC9F7A80B2175AD2C6FAE39
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_90FF12694FC9F7A80B2175AD2C6FAE39_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_278097FA47A4CED19A869D8406BD0AAE
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_278097FA47A4CED19A869D8406BD0AAE_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_F90B2F554EE3172C575C8E993E150CB0
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_F90B2F554EE3172C575C8E993E150CB0_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_65C7691943FC8DE0677D54AAAF3D56F6
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_65C7691943FC8DE0677D54AAAF3D56F6_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_E42ED48B4E99BFC32A84D0BDDC155716
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_E42ED48B4E99BFC32A84D0BDDC155716_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_1748385746AA3BC3CF7046977A221767
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_1748385746AA3BC3CF7046977A221767_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_67ABCC1A421EFAC73813B4B538D0C086
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_67ABCC1A421EFAC73813B4B538D0C086_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_ACE535704D2A904ABF3F6FA5B109551A
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_ACE535704D2A904ABF3F6FA5B109551A_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_34DECC704CC64F87BD21D4BC77050B57
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_34DECC704CC64F87BD21D4BC77050B57_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_552D8D294C4936B770231687B2ACAF40
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_552D8D294C4936B770231687B2ACAF40_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_153B87624F8EEB6B32F42FB4836FD612
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_153B87624F8EEB6B32F42FB4836FD612_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_490F21704765CDF1B17011AA61E447B3
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_490F21704765CDF1B17011AA61E447B3_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_B5799C06490F8E3DCDDB1F9441D552B7
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_B5799C06490F8E3DCDDB1F9441D552B7_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_C8A9208E40E2593DA9035CB4CB63FE71
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_C8A9208E40E2593DA9035CB4CB63FE71_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_399AEB724FEB27E18E0AD28393F102ED
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_399AEB724FEB27E18E0AD28393F102ED_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_78E6F89649222E00AAB357AC7C9D9C9D
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_78E6F89649222E00AAB357AC7C9D9C9D_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_725BAABB4F24D1C7AFDA25AF1A68F3AD
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_725BAABB4F24D1C7AFDA25AF1A68F3AD_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_F396BA354F6F6775C250088FDBFB6FE0
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_F396BA354F6F6775C250088FDBFB6FE0_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_55E5758546F6C036743AAB90906A70B8
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_55E5758546F6C036743AAB90906A70B8_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_69F726704D7314222124F79116722250
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_69F726704D7314222124F79116722250_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_4AE48DF648F70B5A787D2C87F6284ECD
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_4AE48DF648F70B5A787D2C87F6284ECD_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_88CB2E684CE9629E38DA6F8AEC355B3C
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_88CB2E684CE9629E38DA6F8AEC355B3C_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_39D8EF08490868CA09765CA8DB3B2C43
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_39D8EF08490868CA09765CA8DB3B2C43_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_37A99D8C47BBE8DA375B67B77F7F38B1
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_37A99D8C47BBE8DA375B67B77F7F38B1_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_C3407EC24F2285D4538D678F236B4469
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_C3407EC24F2285D4538D678F236B4469_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_8E3158564C7DCB99D85AD982C9937721
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_8E3158564C7DCB99D85AD982C9937721_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_A8CC682C4674D58CE46F7ABAD7EB1C21
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_A8CC682C4674D58CE46F7ABAD7EB1C21_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_43B2D021469C046981A6729FF690DE18
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_43B2D021469C046981A6729FF690DE18_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_FFAAC58943E89DB15D3FFC8AB26970D9
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_FFAAC58943E89DB15D3FFC8AB26970D9_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_D12E68EE48A8C3908B202A8FCC690575
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_D12E68EE48A8C3908B202A8FCC690575_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_253DC27742C70AB5094767AA713F8095
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_253DC27742C70AB5094767AA713F8095_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_76F596A34C4DE3BE7838049F3537FBAB
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_76F596A34C4DE3BE7838049F3537FBAB_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_195C8A9240B9F1164AA652AD130E5B44
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_195C8A9240B9F1164AA652AD130E5B44_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_F26EA9004186A705AA679CB57870EC70
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_F26EA9004186A705AA679CB57870EC70_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_1814CB90475A44C39E81C1841DF7F913
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_1814CB90475A44C39E81C1841DF7F913_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_0A81C4E14B77F94E57A8CF93BA8942EF
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_0A81C4E14B77F94E57A8CF93BA8942EF_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_BA5C095C493A50B8CAA3F082634B267A
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_BA5C095C493A50B8CAA3F082634B267A_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_330DCCB042D6732D8E2537BC33AA7FD9
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_330DCCB042D6732D8E2537BC33AA7FD9_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_ED42759449AD4E098300C4B863AB0621
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_ED42759449AD4E098300C4B863AB0621_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_D2A47F9546D27C294AE248ADE25ABD5A
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_D2A47F9546D27C294AE248ADE25ABD5A_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_B26EDE444F89880456AFB78BFDE0CE69
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_B26EDE444F89880456AFB78BFDE0CE69_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_C7EB54534E932F77D244E3AFD34E96C1
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_C7EB54534E932F77D244E3AFD34E96C1_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_98B9F45D4AFDF1464878AFA58010F96C
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_98B9F45D4AFDF1464878AFA58010F96C_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_7A5CB97B4ECCFEA12EA899A6781493B3
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_7A5CB97B4ECCFEA12EA899A6781493B3_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_EC501C42490E8FD60C986B9671BE650A
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_EC501C42490E8FD60C986B9671BE650A_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_8AA0A102406BC762DC21908E440DA5BB
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_8AA0A102406BC762DC21908E440DA5BB_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_F3E779954319BA733ACA15AC7DED65CD
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_F3E779954319BA733ACA15AC7DED65CD_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_9E5091AA473C0494ED9342A747B51DC3
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_9E5091AA473C0494ED9342A747B51DC3_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_1372094844B73D2C43FCF4A7AD9B3398
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_1372094844B73D2C43FCF4A7AD9B3398_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_253B790042A36C5E984A01A5B0040A5B
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_253B790042A36C5E984A01A5B0040A5B_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_19529E434384CE120D88EB93F2E964E5
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_19529E434384CE120D88EB93F2E964E5_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_E5F872864197887DD67531A6514F8152
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_E5F872864197887DD67531A6514F8152_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_FC81013B4A19FD223D1478BC2559CCA0
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_FC81013B4A19FD223D1478BC2559CCA0_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_71E6A728497D5C46795BFB8FD89999BD
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_71E6A728497D5C46795BFB8FD89999BD_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_1DCA0CC54FB7DA6A0BB27F8B5A0CA15D
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_1DCA0CC54FB7DA6A0BB27F8B5A0CA15D_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_35553AB14A21E09334BAD5A48672A9DA
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_35553AB14A21E09334BAD5A48672A9DA_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_660E8E404F9126FB77A056AEE93DE21B
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_660E8E404F9126FB77A056AEE93DE21B_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_F497AC814C5CEC73BF3A2EA6EF747C7B
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_F497AC814C5CEC73BF3A2EA6EF747C7B_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_9953FA7F4E8CAE968FBA79850763B0DD
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_9953FA7F4E8CAE968FBA79850763B0DD_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_D67D25CF448B2827AF176090D561A53D
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_D67D25CF448B2827AF176090D561A53D_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_FC57E3E24C3AF1C0E81E74BCCC023F13
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_FC57E3E24C3AF1C0E81E74BCCC023F13_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_7022FF3E4A09D16C8F6CC6A80E5D8C18
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_7022FF3E4A09D16C8F6CC6A80E5D8C18_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_AC564AA643641FAB7D18AF80F1367142
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_AC564AA643641FAB7D18AF80F1367142_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_B07BA6AD46BEED636D73FFB5DC517989
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_B07BA6AD46BEED636D73FFB5DC517989_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_6B894C4D41032C875C3571A60EB99ABC
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_6B894C4D41032C875C3571A60EB99ABC_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_FDAF06CB4A3E324F30ECAFB22533647D
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_FDAF06CB4A3E324F30ECAFB22533647D_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_CF2790924B7076B4D0952EA3313F5037
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_CF2790924B7076B4D0952EA3313F5037_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_CE0D05E04526F2A69228BF939B1AA1BF
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_CE0D05E04526F2A69228BF939B1AA1BF_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_9E4E6F8B401EB15BA8BB248615A6CE81
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_9E4E6F8B401EB15BA8BB248615A6CE81_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_2BE5768C432F119576A2B98E46759707
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_2BE5768C432F119576A2B98E46759707_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_299F26AB415DD9767DE44E9D72BDBCFA
	 */
	struct UALS_AnimBPLite_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ALS_AnimBPLite_AnimGraphNode_TransitionResult_299F26AB415DD9767DE44E9D72BDBCFA_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.BlueprintUpdateAnimation
	 */
	struct UALS_AnimBPLite_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.BlueprintInitializeAnimation
	 */
	struct UALS_AnimBPLite_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimNotify_->CLF Stop
	 */
	struct UALS_AnimBPLite_C_AnimNotify__CLF_Stop_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimNotify_StopTransition
	 */
	struct UALS_AnimBPLite_C_AnimNotify_StopTransition_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.PlayTransition
	 */
	struct UALS_AnimBPLite_C_PlayTransition_Params
	{
	public:
		struct FDynamicMontageParams                               Parameters;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimNotify_Roll->Idle
	 */
	struct UALS_AnimBPLite_C_AnimNotify_Roll_Idle_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimNotify_->N Stop L
	 */
	struct UALS_AnimBPLite_C_AnimNotify__N_Stop_L_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimNotify_->N Stop R
	 */
	struct UALS_AnimBPLite_C_AnimNotify__N_Stop_R_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimNotify_Land->Idle
	 */
	struct UALS_AnimBPLite_C_AnimNotify_Land_Idle_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimNotify_->N QuickStop 
	 */
	struct UALS_AnimBPLite_C_AnimNotify__N_QuickStop_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimNotify_Reset-GroundedEntryState
	 */
	struct UALS_AnimBPLite_C_AnimNotify_Reset_GroundedEntryState_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimNotify_Bow Ready->Relaxed
	 */
	struct UALS_AnimBPLite_C_AnimNotify_Bow_Ready_Relaxed_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimNotify_Bow Relaxed->Ready
	 */
	struct UALS_AnimBPLite_C_AnimNotify_Bow_Relaxed_Ready_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimNotify_M4A1 Ready->Relaxed
	 */
	struct UALS_AnimBPLite_C_AnimNotify_M4A1_Ready_Relaxed_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimNotify_M4A1 Relaxed->Ready
	 */
	struct UALS_AnimBPLite_C_AnimNotify_M4A1_Relaxed_Ready_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimNotify_Pistol 1H Ready->Relaxed
	 */
	struct UALS_AnimBPLite_C_AnimNotify_Pistol_1H_Ready_Relaxed_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimNotify_Pistol 1H Relaxed->Ready
	 */
	struct UALS_AnimBPLite_C_AnimNotify_Pistol_1H_Relaxed_Ready_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimNotify_Hips F
	 */
	struct UALS_AnimBPLite_C_AnimNotify_Hips_F_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimNotify_Hips B
	 */
	struct UALS_AnimBPLite_C_AnimNotify_Hips_B_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimNotify_Hips LB
	 */
	struct UALS_AnimBPLite_C_AnimNotify_Hips_LB_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimNotify_Hips LF
	 */
	struct UALS_AnimBPLite_C_AnimNotify_Hips_LF_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimNotify_Hips RB
	 */
	struct UALS_AnimBPLite_C_AnimNotify_Hips_RB_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimNotify_Hips RF
	 */
	struct UALS_AnimBPLite_C_AnimNotify_Hips_RF_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimNotify_Pivot
	 */
	struct UALS_AnimBPLite_C_AnimNotify_Pivot_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.PlayDynamicTransition
	 */
	struct UALS_AnimBPLite_C_PlayDynamicTransition_Params
	{
	public:
		float                                                      ReTriggerDelay;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2LSH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDynamicMontageParams                               Parameters;                                              // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimNotify_Pistol 2H Ready->Relaxed
	 */
	struct UALS_AnimBPLite_C_AnimNotify_Pistol_2H_Ready_Relaxed_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.AnimNotify_Pistol 2H Relaxed->Ready
	 */
	struct UALS_AnimBPLite_C_AnimNotify_Pistol_2H_Relaxed_Ready_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.OnJumped
	 */
	struct UALS_AnimBPLite_C_OnJumped_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.SetGroundedEntryState
	 */
	struct UALS_AnimBPLite_C_SetGroundedEntryState_Params
	{
	public:
		EGroundedEntryState                                        NewGroundedEntryState;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.SetOverlayOverrideState
	 */
	struct UALS_AnimBPLite_C_SetOverlayOverrideState_Params
	{
	public:
		int32_t                                                    NewOverlayOverrideState;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.ReloadWeapon
	 */
	struct UALS_AnimBPLite_C_ReloadWeapon_Params
	{	};

	/**
	 * Function ALS_AnimBPLite.ALS_AnimBPLite_C.ExecuteUbergraph_ALS_AnimBPLite
	 */
	struct UALS_AnimBPLite_C_ExecuteUbergraph_ALS_AnimBPLite_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
