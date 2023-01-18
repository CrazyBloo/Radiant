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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetActionButtonName
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetActionButtonName_Params
	{
	public:
		EControlAction                                             Action;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1HLS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ButtonName;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class UTexture2D*                                          HelpImage;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHand_EHand                                                DefaultHand;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetPostProcesscomp
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetPostProcesscomp_Params
	{
	public:
		class UBPC_PlayerPostProcess_C*                            PPcomp;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetOverlapGrips
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetOverlapGrips_Params
	{
	public:
		EPRHand                                                    hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XD0O[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGripOverlap                                        Grip;                                                    // 0x0010(0x0110)  (Parm, OutParm, NoDestructor, ContainsInstancedReference)
		struct FGripOverlap                                        selectedGrip;                                            // 0x0120(0x0110)  (Parm, OutParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsRunning
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_IsRunning_Params
	{
	public:
		bool                                                       running;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetAudioCaptureRef
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetAudioCaptureRef_Params
	{
	public:
		class UAudioCaptureComponent*                              Ref;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsLeaning
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_IsLeaning_Params
	{
	public:
		bool                                                       IsLeaning;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetCalculatedBodyRotation
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetCalculatedBodyRotation_Params
	{
	public:
		float                                                      BodyYaw;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.getNetSmoother
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_getNetSmoother_Params
	{
	public:
		class USceneComponent*                                     comp;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetStepsCount
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetStepsCount_Params
	{
	public:
		int32_t                                                    Steps;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetMovementDirection
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetMovementDirection_Params
	{
	public:
		struct FVector                                             MovementVector;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetTargetingInfo
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetTargetingInfo_Params
	{
	public:
		struct FTransform                                          BodyTransform;                                           // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Velocity;                                                // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetPlayerControllerType
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetPlayerControllerType_Params
	{
	public:
		EPRControllerType                                          Controller;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetControllerVelocity
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetControllerVelocity_Params
	{
	public:
		float                                                      LeftVel;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RightVel;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsBackpackEquipped
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_IsBackpackEquipped_Params
	{
	public:
		bool                                                       equipped;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetMoveSpeedCoefficient
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetMoveSpeedCoefficient_Params
	{
	public:
		float                                                      Coefficient;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0H7I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsActorInHands
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_IsActorInHands_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YR99[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetLastDamageData
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetLastDamageData_Params
	{
	public:
		class UDamageType*                                         DamageType;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         Instigator;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              causer;                                                  // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                CauserName;                                              // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetStats
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetStats_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HealthPercent;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Stamina;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      StaminaPercent;                                          // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Rest;                                                    // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RestPercent;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Nutrition;                                               // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NutritionPercent;                                        // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetUnderwaterState
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetUnderwaterState_Params
	{
	public:
		bool                                                       HeadUnderwater;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BodyUnderwater;                                          // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsActorClassInHands
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_IsActorClassInHands_Params
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9XHF[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterIndicatorRef
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetHolsterIndicatorRef_Params
	{
	public:
		class UWidgetComponent*                                    Indicator;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetMarkerMesh
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetMarkerMesh_Params
	{
	public:
		class UStaticMeshComponent*                                Mesh;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.PlayFootstepAndClothSounds
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_PlayFootstepAndClothSounds_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetBeamPointerComponents
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetBeamPointerComponents_Params
	{
	public:
		class USceneComponent*                                     Left;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     Right;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetInputMovementVector
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetInputMovementVector_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsSecondaryGrip
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_IsSecondaryGrip_Params
	{
	public:
		bool                                                       bLeft;                                                   // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.CheckFallDamage
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_CheckFallDamage_Params
	{
	public:
		float                                                      DeltaSpeed;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetBackpackPivot
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetBackpackPivot_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsAnyLampEnabled
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_IsAnyLampEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8YFI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.LoadInHandItems
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_LoadInHandItems_Params
	{
	public:
		bool                                                       bIsRightHand;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SS8I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetHandForDirection
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_SetHandForDirection_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsActorLerpingToHand
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_IsActorLerpingToHand_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LFAI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetGripRelativeTransformByGeometryTypeAndPoseNumber
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetGripRelativeTransformByGeometryTypeAndPoseNumber_Params
	{
	public:
		class UObject*                                             GripObject;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGripMotionControllerComponent*                      handController;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPRHandPoseType                                            poseType;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPRHandPoseGeometryType                                    GeometryType;                                            // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPRHandPoseNumber                                          PoseNumber;                                              // 0x0012(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSuccess;                                                // 0x0013(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VYF7[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          GripRelativeTransform;                                   // 0x0020(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterProbes_R
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetHolsterProbes_R_Params
	{
	public:
		class UHolsterComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterProbes_L
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetHolsterProbes_L_Params
	{
	public:
		class UHolsterComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterWeaponSecondary
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetHolsterWeaponSecondary_Params
	{
	public:
		class UHolsterComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetTriggerMelee
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetTriggerMelee_Params
	{
	public:
		class UBoxComponent*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterMelee
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetHolsterMelee_Params
	{
	public:
		class UHolsterComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetTriggerWeaponSecondary
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetTriggerWeaponSecondary_Params
	{
	public:
		class UBoxComponent*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetTriggerMap
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetTriggerMap_Params
	{
	public:
		class UBoxComponent*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetTriggerDetector
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetTriggerDetector_Params
	{
	public:
		class UBoxComponent*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetTriggerBackpack
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetTriggerBackpack_Params
	{
	public:
		class UBoxComponent*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterDetector
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetHolsterDetector_Params
	{
	public:
		class UHolsterComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetTriggerWeaponPrimary
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetTriggerWeaponPrimary_Params
	{
	public:
		class UBoxComponent*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterWeaponPrimary
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetHolsterWeaponPrimary_Params
	{
	public:
		class UHolsterComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolderSmallPouchActorComponent
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetHolderSmallPouchActorComponent_Params
	{
	public:
		class UChildActorComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHolsterMap
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetHolsterMap_Params
	{
	public:
		class UHolsterComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetIsInteractableHolsterable
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetIsInteractableHolsterable_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FJYG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UnbindInteractable
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_UnbindInteractable_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetPivotBackpack
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetPivotBackpack_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BindInteractable
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_BindInteractable_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetPivotNeck
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetPivotNeck_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Set Camera Fade
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_SetCameraFade_Params
	{
	public:
		float                                                      InFadeAmount;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Set Blink Radius
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_SetBlinkRadius_Params
	{
	public:
		float                                                      BlinkRadius;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetSM_ClimbingIndicatorRight
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetSM_ClimbingIndicatorRight_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetSM_ClimbingIndicatorLeft
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetSM_ClimbingIndicatorLeft_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetBPC_VRController_Left
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetBPC_VRController_Left_Params
	{
	public:
		class UVRControllerComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetBPC_VRController_Right
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetBPC_VRController_Right_Params
	{
	public:
		class UVRControllerComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetPS_BeamPointerLeft
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetPS_BeamPointerLeft_Params
	{
	public:
		class UParticleSystemComponent*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetPS_BeamPointerRight
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetPS_BeamPointerRight_Params
	{
	public:
		class UParticleSystemComponent*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetWidgetInteractionLeft
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetWidgetInteractionLeft_Params
	{
	public:
		class UWidgetInteractionComponent*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetWidgetInteractionRight
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetWidgetInteractionRight_Params
	{
	public:
		class UWidgetInteractionComponent*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetW_L_WristMenu
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetW_L_WristMenu_Params
	{
	public:
		class UWidgetComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetW_R_WristMenu
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetW_R_WristMenu_Params
	{
	public:
		class UWidgetComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetLHandCollider
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetLHandCollider_Params
	{
	public:
		class USphereComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetRHandCollider
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetRHandCollider_Params
	{
	public:
		class USphereComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetUIPoseTriggerLeft
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetUIPoseTriggerLeft_Params
	{
	public:
		class UCapsuleComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetUIPoseTriggerRight
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetUIPoseTriggerRight_Params
	{
	public:
		class UCapsuleComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetGrabSphereLeft
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetGrabSphereLeft_Params
	{
	public:
		class USphereComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetGrabSphereRight
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetGrabSphereRight_Params
	{
	public:
		class USphereComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetPivotVest
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetPivotVest_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetVisibilityPrimitives
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetVisibilityPrimitives_Params
	{
	public:
		TArray<class UPrimitiveComponent*>                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetCrouch
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetCrouch_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetArmLength
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_SetArmLength_Params
	{
	public:
		unsigned char                                              hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.StopAllAudio
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_StopAllAudio_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetDamageCauserName
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_SetDamageCauserName_Params
	{
	public:
		class UDamageType*                                         LastDamageType;                                          // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         LastDamageInstigator;                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              LastDamageCauser;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateLefthanded
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_UpdateLefthanded_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateMarkers
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_UpdateMarkers_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetArmor FootStepNoiseBonus
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetArmorFootStepNoiseBonus_Params
	{
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetCameraRef
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetCameraRef_Params
	{
	public:
		class UCameraComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetCurrentVelocity
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetCurrentVelocity_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsHoldingActor
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_IsHoldingActor_Params
	{
	public:
		class UGripMotionControllerComponent*                      Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       holding;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GUD9[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.DoUnstuck
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_DoUnstuck_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.DropOrRetakeOrHolster
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_DropOrRetakeOrHolster_Params
	{
	public:
		class UGripMotionControllerComponent*                      Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             GrippedObject;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SecondaryGrip;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       zeroVel;                                                 // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       holstered;                                               // 0x0012(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsItemActorSticked
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_IsItemActorSticked_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.CheckHandStickBreak
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_CheckHandStickBreak_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ForceGrabObject
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ForceGrabObject_Params
	{
	public:
		class UObject*                                             ObjectToTryToGrab;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5QTJ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          WorldTransform;                                          // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FTransform                                          GripPoint;                                               // 0x0040(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		class UGripMotionControllerComponent*                      hand;                                                    // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSlotGrip;                                              // 0x0078(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Gripped;                                                 // 0x0079(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NW68[0x6];                                   // 0x007A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ResetMoveSpeedCoefficient
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ResetMoveSpeedCoefficient_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateIndicators
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_UpdateIndicators_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.EnableRagdoll
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_EnableRagdoll_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetControlsRefs
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetControlsRefs_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       alive;                                                   // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VUHK[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCameraComponent*                                    cameraRef;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     pivotHead;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGripMotionControllerComponent*                      leftControllerRef;                                       // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     pivotLeftController;                                     // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     pivotLeftHand;                                           // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USphereComponent*                                    sphereLeftHand;                                          // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstanceDynamic*                            materialLeftController;                                  // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGripMotionControllerComponent*                      rightControllerRef;                                      // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     pivotRightController;                                    // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     pivotRightHand;                                          // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USphereComponent*                                    sphereRightHand;                                         // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstanceDynamic*                            materialRightController;                                 // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHandPivot
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetHandPivot_Params
	{
	public:
		class UGripMotionControllerComponent*                      Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     Pivot;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHealth
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetHealth_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4VGH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetHealthPercent
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetHealthPercent_Params
	{
	public:
		float                                                      HealthPercent;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SS4D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.IsAlive
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_IsAlive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SpawnItemsInHands
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_SpawnItemsInHands_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Velocity Calculations
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_VelocityCalculations_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.GetDPadMovementFacing
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_GetDPadMovementFacing_Params
	{
	public:
		EMovementMode_EMovementMode                                MovementMode;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HUJ3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGripMotionControllerComponent*                      hand;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGripMotionControllerComponent*                      OtherHand;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode_EMovementMode                                OtherHandMovementMode;                                   // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2YFK[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ForwardVector;                                           // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             RightVector;                                             // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ScaleWristWidgets
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ScaleWristWidgets_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ProcessClimb
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ProcessClimb_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.CheckTriggerOverlaps
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_CheckTriggerOverlaps_Params
	{
	public:
		class USphereComponent*                                    GrabSphere;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGripMotionControllerComponent*                      GripMotionController;                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Overlapped;                                              // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.FindBinding
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_FindBinding_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsBound;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Bindable;                                                // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HolsterFree;                                             // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsUsable;                                                // 0x000B(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q7EX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBPC_Holster_C*                                      HolsterPoint;                                            // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.LoadSettings
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_LoadSettings_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UserConstructionScript
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Timeline_1__FinishedFunc
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Timeline_1__UpdateFunc
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Timeline_2__FinishedFunc
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_Timeline_2__FinishedFunc_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Timeline_2__UpdateFunc
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_Timeline_2__UpdateFunc_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Timeline_0__FinishedFunc
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Timeline_0__UpdateFunc
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.TL_Turn__FinishedFunc
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_TL_Turn__FinishedFunc_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.TL_Turn__UpdateFunc
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_TL_Turn__UpdateFunc_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.InpActEvt_Escape_K2Node_InputKeyEvent_1
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_InpActEvt_Escape_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BindLeft
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_BindLeft_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BindRight
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_BindRight_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.RunToggle
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_RunToggle_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ShowButtons
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ShowButtons_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VAI0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<EControlAction>                                     Actions;                                                 // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.TurnPlayerToFaceActor
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_TurnPlayerToFaceActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BlockInput
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_BlockInput_Params
	{
	public:
		TArray<EControlAction>                                     Actions;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       AllowInput;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ShowCapTouch
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ShowCapTouch_Params
	{
	public:
		EOculusButton                                              Button;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Show;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.StopHaptics
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_StopHaptics_Params
	{
	public:
		EControllerHand                                            hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.AllowAll
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_AllowAll_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.AllowOnly
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_AllowOnly_Params
	{
	public:
		TArray<EControlAction>                                     Actions;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.AudioFootstep
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_AudioFootstep_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ReceiveTick
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.TurnPlayer
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_TurnPlayer_Params
	{
	public:
		float                                                      Degrees;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.YawnSounds
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_YawnSounds_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Sleep
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_Sleep_Params
	{
	public:
		bool                                                       UntilRested;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UntilHealed;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Healing;                                                 // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_691T[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      WakeUpTime;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnGameStartedEventDelegate
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_OnGameStartedEventDelegate_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.HungrySounds
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_HungrySounds_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.AudioGasMask
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_AudioGasMask_Params
	{
	public:
		bool                                                       PlayOrStop;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ForcePlay;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.AudioUnderwater
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_AudioUnderwater_Params
	{
	public:
		bool                                                       PlayOrStop;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ForcePlay;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.AudioDrowning
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_AudioDrowning_Params
	{
	public:
		bool                                                       PlayOrStop;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ForcePlay;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetSecondaryGripController
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_SetSecondaryGripController_Params
	{
	public:
		class USceneComponent*                                     SecondaryController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ChangeStamina
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ChangeStamina_Params
	{
	public:
		float                                                      ChangeBy;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ChangeNutrition
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ChangeNutrition_Params
	{
	public:
		float                                                      ChangeBy;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BuffRest
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_BuffRest_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetControllersVisibility
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_SetControllersVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetDPadVelocityScale
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_SetDPadVelocityScale_Params
	{
	public:
		float                                                      DPadVelocityScale;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Backward
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_Backward_Params
	{
	public:
		float                                                      Axis;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Left
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_Left_Params
	{
	public:
		float                                                      Axis;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Sprint
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_Sprint_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnClimbingSteppedUp
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_OnClimbingSteppedUp_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.FireMode
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_FireMode_Params
	{
	public:
		bool                                                       Right;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Arm
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_Arm_Params
	{
	public:
		bool                                                       Right;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.EjectMag
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_EjectMag_Params
	{
	public:
		bool                                                       Right;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.InteractLeft
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_InteractLeft_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.InteractRight
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_InteractRight_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.DropFirstGrip
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_DropFirstGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ReceiveAnyDamage
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KHU9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Event Headtrigger
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_EventHeadtrigger_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Unstuck
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_Unstuck_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetUnderwaterState
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_SetUnderwaterState_Params
	{
	public:
		bool                                                       HeadUnderwater;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BodyUnderwater;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BndEvt__Trigger_Face_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_BndEvt__Trigger_Face_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_58OF[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.RefreshBackpack
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_RefreshBackpack_Params
	{
	public:
		bool                                                       allowCreate;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Initialize
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_Initialize_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SpawnInventory
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_SpawnInventory_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ReturnBackpack
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ReturnBackpack_Params
	{
	public:
		bool                                                       instant;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ShowDirectionHint
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ShowDirectionHint_Params
	{
	public:
		struct FVector                                             LookTo;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Show;                                                    // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.RefreshHandPose
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_RefreshHandPose_Params
	{
	public:
		class UGripMotionControllerComponent*                      Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ChangeHealth
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ChangeHealth_Params
	{
	public:
		float                                                      HealthDelta;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OpenEyes
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_OpenEyes_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.CloseEyes
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_CloseEyes_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.EjectMagDrop
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_EjectMagDrop_Params
	{
	public:
		bool                                                       Right;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.RestoreAfterDeath
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_RestoreAfterDeath_Params
	{
	public:
		bool                                                       ShowNormalBody;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ChangeHealthByPercent
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ChangeHealthByPercent_Params
	{
	public:
		int32_t                                                    Percent;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ChangeRestByPercent
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ChangeRestByPercent_Params
	{
	public:
		int32_t                                                    Percent;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetStats
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_SetStats_Params
	{
	public:
		int32_t                                                    HealthPercent;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RestPercent;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StaminaPercent;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    HungerPercent;                                           // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ClearRefs
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ClearRefs_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ReceiveEndPlay
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.DropAll
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_DropAll_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetMoveSpeedCoefficient
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_SetMoveSpeedCoefficient_Params
	{
	public:
		ESpeedCoefficient                                          Source;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V84R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Coefficient;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateControllerAndHands
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_UpdateControllerAndHands_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_4_StatStatusEvent__DelegateSignature
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_4_StatStatusEvent__DelegateSignature_Params
	{
	public:
		EPRStatStatus                                              Status;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_17_StatStatusEvent__DelegateSignature
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_17_StatStatusEvent__DelegateSignature_Params
	{
	public:
		EPRStatStatus                                              Status;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_21_StatStatusEvent__DelegateSignature
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_21_StatStatusEvent__DelegateSignature_Params
	{
	public:
		EPRStatStatus                                              Status;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnHealthEnd
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_OnHealthEnd_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_23_NoParamsDelegate__DelegateSignature
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_BndEvt__BPC_PlayerStats_K2Node_ComponentBoundEvent_23_NoParamsDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnTeleported
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_OnTeleported_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateWeight
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_UpdateWeight_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetCrouch
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_SetCrouch_Params
	{
	public:
		bool                                                       Crouch;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ToggleCrouch
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ToggleCrouch_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.PreTeleport
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_PreTeleport_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetWristMenuHidden
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_SetWristMenuHidden_Params
	{
	public:
		bool                                                       Hidden;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SwitchPlayerMesh
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_SwitchPlayerMesh_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Stop Blink
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_StopBlink_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SpawnItemInHand
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_SpawnItemInHand_Params
	{
	public:
		bool                                                       LeftHand;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H385[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ProcessHaptics
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ProcessHaptics_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ResetSeatedMode
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ResetSeatedMode_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateControllerShifts
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_UpdateControllerShifts_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetCurrentVelocity
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_SetCurrentVelocity_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.Gasmask
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_Gasmask_Params
	{
	public:
		bool                                                       PutOn;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.StopHapticses
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_StopHapticses_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SetPaused
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_SetPaused_Params
	{
	public:
		bool                                                       paused;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnInventoryModeChanged
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_OnInventoryModeChanged_Params
	{
	public:
		EInventoryMode                                             Mode;                                                    // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.SpawnItemConfigInHand
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_SpawnItemConfigInHand_Params
	{
	public:
		bool                                                       bLeftHand;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KCMZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPRItemConfig*                                       itemConfig;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateHealthSounds
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_UpdateHealthSounds_Params
	{
	public:
		EPRStatStatus                                              HealthLevel;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateStaminaSounds
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_UpdateStaminaSounds_Params
	{
	public:
		EPRStatStatus                                              StaminaLevel;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateNutritionSounds
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_UpdateNutritionSounds_Params
	{
	public:
		EPRStatStatus                                              NutritionLevel;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.TriggerRight
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_TriggerRight_Params
	{
	public:
		float                                                      AngleAxis;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.TriggerLeft
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_TriggerLeft_Params
	{
	public:
		float                                                      AxisAngle;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.CallNightGlow
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_CallNightGlow_Params
	{
	public:
		class UObject*                                             Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bOn;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.LerpRightGrip
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_LerpRightGrip_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGripMotionControllerComponent*                      hand;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsSlot;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MAM1[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Offset;                                                  // 0x0020(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		bool                                                       bDisableCollision;                                       // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bKeepHandSnapped;                                        // 0x0051(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.LerpLeftGrip
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_LerpLeftGrip_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGripMotionControllerComponent*                      hand;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsSlot;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SJU6[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Offset;                                                  // 0x0020(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		bool                                                       bDisableCollision;                                       // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bKeepHandSnapped;                                        // 0x0051(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.UpdateItemInfos
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_UpdateItemInfos_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.DropGrip
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_DropGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GripMotionController;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LNR8[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripToDrop;                                              // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		struct FVector                                             AngleVel;                                                // 0x01F0(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             LinearVel;                                               // 0x01FC(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.DropAllGrips
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_DropAllGrips_Params
	{
	public:
		class UGripMotionControllerComponent*                      GripMotionController;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bZeroVelo;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.HandHaptics
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_HandHaptics_Params
	{
	public:
		EHapticsCurve                                              Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnLanded
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.BlockAll
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_BlockAll_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ToggleAimSmoothing
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ToggleAimSmoothing_Params
	{
	public:
		bool                                                       bIsLeft;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.CheckRest
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_CheckRest_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnItemInfoClickedRight
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_OnItemInfoClickedRight_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnItemInfoClickedLeft
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_OnItemInfoClickedLeft_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnMenuButtonClicked
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_OnMenuButtonClicked_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.E1
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_E1_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.E2
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_E2_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.LeftLerpTimeOut
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_LeftLerpTimeOut_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.LeftLerpEnd
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_LeftLerpEnd_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ReportPlayerLocation
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ReportPlayerLocation_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.RightLerpTimeOut
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_RightLerpTimeOut_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.RightLerpEnd
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_RightLerpEnd_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnTransitionStartEvent
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_OnTransitionStartEvent_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnMissionStateChangedEvent
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_OnMissionStateChangedEvent_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnLevelPrepare
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_OnLevelPrepare_Params
	{
	public:
		struct FGameplayTag                                        Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.OnTransitionEndEvent
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_OnTransitionEndEvent_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ResetOnLVLStart
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ResetOnLVLStart_Params
	{
	public:
		struct FGameplayTag                                        Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.PlayerResetEvent
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_PlayerResetEvent_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.On Seated Mode Changed
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_OnSeatedModeChanged_Params
	{	};

	/**
	 * Function BP_PRPlayerCharacter_IKv4.BP_PRPlayerCharacter_IKv4_C.ExecuteUbergraph_BP_PRPlayerCharacter_IKv4
	 */
	struct ABP_PRPlayerCharacter_IKv4_C_ExecuteUbergraph_BP_PRPlayerCharacter_IKv4_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DOQU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
