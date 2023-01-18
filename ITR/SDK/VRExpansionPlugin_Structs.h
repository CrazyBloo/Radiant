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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum VRExpansionPlugin.EPhysicsGripCOMType
	 */
	enum class EPhysicsGripCOMType : uint8_t
	{
		COM_Default             = 0,
		COM_AtPivot             = 1,
		COM_SetAndGripAt        = 2,
		COM_GripAt              = 3,
		COM_GripAtControllerLoc = 4,
		COM_MAX                 = 5
	};

	/**
	 * Enum VRExpansionPlugin.EPhysicsGripConstraintType
	 */
	enum class EPhysicsGripConstraintType : uint8_t
	{
		AccelerationConstraint = 0,
		ForceConstraint        = 1,
		MAX                    = 2
	};

	/**
	 * Enum VRExpansionPlugin.EGripMovementReplicationSettings
	 */
	enum class EGripMovementReplicationSettings : uint8_t
	{
		KeepOriginalMovement         = 0,
		ForceServerSideMovement      = 1,
		ForceClientSideMovement      = 2,
		ClientSide_Authoritive       = 3,
		ClientSide_Authoritive_NoRep = 4,
		MAX                          = 5
	};

	/**
	 * Enum VRExpansionPlugin.EGripLateUpdateSettings
	 */
	enum class EGripLateUpdateSettings : uint8_t
	{
		LateUpdatesAlwaysOn              = 0,
		LateUpdatesAlwaysOff             = 1,
		NotWhenColliding                 = 2,
		NotWhenDoubleGripping            = 3,
		NotWhenCollidingOrDoubleGripping = 4,
		MAX                              = 5
	};

	/**
	 * Enum VRExpansionPlugin.EGripCollisionType
	 */
	enum class EGripCollisionType : uint8_t
	{
		InteractiveCollisionWithPhysics       = 0,
		InteractiveCollisionWithSweep         = 1,
		InteractiveHybridCollisionWithPhysics = 2,
		InteractiveHybridCollisionWithSweep   = 3,
		SweepWithPhysics                      = 4,
		PhysicsOnly                           = 5,
		ManipulationGrip                      = 6,
		ManipulationGripWithWristTwist        = 7,
		AttachmentGrip                        = 8,
		CustomGrip                            = 9,
		EventsOnly                            = 10,
		LockedConstraint                      = 11,
		MAX                                   = 12
	};

	/**
	 * Enum VRExpansionPlugin.EGripTargetType
	 */
	enum class EGripTargetType : uint8_t
	{
		ActorGrip     = 0,
		ComponentGrip = 1,
		MAX           = 2
	};

	/**
	 * Enum VRExpansionPlugin.EVRMeleeZoneType
	 */
	enum class EVRMeleeZoneType : uint8_t
	{
		VRPMELLE_ZONETYPE_Stab       = 0,
		VRPMELLE_ZONETYPE_Hit        = 1,
		VRPMELLE_ZONETYPE_StabAndHit = 2,
		VRPMELLE_ZONETYPE_MAX        = 3
	};

	/**
	 * Enum VRExpansionPlugin.EVRInteractibleLeverEventType
	 */
	enum class EVRInteractibleLeverEventType : uint8_t
	{
		LeverPositive = 0,
		LeverNegative = 1,
		MAX           = 2
	};

	/**
	 * Enum VRExpansionPlugin.EVRMoveActionDataReq
	 */
	enum class EVRMoveActionDataReq : uint8_t
	{
		VRMOVEACTIONDATA_None        = 0,
		VRMOVEACTIONDATA_LOC         = 1,
		VRMOVEACTIONDATA_ROT         = 2,
		VRMOVEACTIONDATA_LOC_AND_ROT = 3,
		VRMOVEACTIONDATA_MAX         = 4
	};

	/**
	 * Enum VRExpansionPlugin.EVRMoveActionVelocityRetention
	 */
	enum class EVRMoveActionVelocityRetention : uint8_t
	{
		VRMOVEACTION_Velocity_None  = 0,
		VRMOVEACTION_Velocity_Clear = 1,
		VRMOVEACTION_Velocity_Turn  = 2,
		VRMOVEACTION_Velocity_MAX   = 3
	};

	/**
	 * Enum VRExpansionPlugin.EVRMoveAction
	 */
	enum class EVRMoveAction : uint8_t
	{
		VRMOVEACTION_None            = 0,
		VRMOVEACTION_SnapTurn        = 1,
		VRMOVEACTION_Teleport        = 2,
		VRMOVEACTION_StopAllMovement = 3,
		VRMOVEACTION_SetRotation     = 4,
		VRMOVEACTION_CUSTOM1         = 5,
		VRMOVEACTION_CUSTOM2         = 6,
		VRMOVEACTION_CUSTOM3         = 7,
		VRMOVEACTION_CUSTOM4         = 8,
		VRMOVEACTION_CUSTOM5         = 9,
		VRMOVEACTION_CUSTOM6         = 10,
		VRMOVEACTION_CUSTOM7         = 11,
		VRMOVEACTION_CUSTOM8         = 12,
		VRMOVEACTION_CUSTOM9         = 13,
		VRMOVEACTION_CUSTOM10        = 14,
		VRMOVEACTION_MAX             = 15
	};

	/**
	 * Enum VRExpansionPlugin.EVRMeleePrimaryHandType
	 */
	enum class EVRMeleePrimaryHandType : uint8_t
	{
		VRPHAND_Rear    = 0,
		VRPHAND_Front   = 1,
		VRPHAND_Slotted = 2,
		VRPHAND_MAX     = 3
	};

	/**
	 * Enum VRExpansionPlugin.EVRMeleeComType
	 */
	enum class EVRMeleeComType : uint8_t
	{
		VRPMELEECOM_Normal       = 0,
		VRPMELEECOM_BetweenHands = 1,
		VRPMELEECOM_PrimaryHand  = 2,
		VRPMELEECOM_MAX          = 3
	};

	/**
	 * Enum VRExpansionPlugin.EVRAxis
	 */
	enum class EVRAxis : uint8_t
	{
		X   = 0,
		Y   = 1,
		Z   = 2,
		MAX = 3
	};

	/**
	 * Enum VRExpansionPlugin.EVR_PRC_RotationMethod
	 */
	enum class EVR_PRC_RotationMethod : uint8_t
	{
		PRC_ROT_HMD                  = 0,
		PRC_ROT_HMDControllerBlend   = 1,
		PRC_ROT_ControllerHMDClamped = 2,
		PRC_ROT_MAX                  = 3
	};

	/**
	 * Enum VRExpansionPlugin.EGripInterfaceTeleportBehavior
	 */
	enum class EGripInterfaceTeleportBehavior : uint8_t
	{
		TeleportAllComponents     = 0,
		DeltaTeleportation        = 1,
		OnlyTeleportRootComponent = 2,
		DropOnTeleport            = 3,
		DontTeleport              = 4,
		MAX                       = 5
	};

	/**
	 * Enum VRExpansionPlugin.ESecondaryGripType
	 */
	enum class ESecondaryGripType : uint8_t
	{
		SG_None                       = 0,
		SG_Free                       = 1,
		SG_SlotOnly                   = 2,
		SG_Free_Retain                = 3,
		SG_SlotOnly_Retain            = 4,
		SG_FreeWithScaling_Retain     = 5,
		SG_SlotOnlyWithScaling_Retain = 6,
		SG_Custom                     = 7,
		SG_ScalingOnly                = 8,
		SG_MAX                        = 9
	};

	/**
	 * Enum VRExpansionPlugin.EGripLerpState
	 */
	enum class EGripLerpState : uint8_t
	{
		StartLerp  = 0,
		EndLerp    = 1,
		NotLerping = 2,
		MAX        = 3
	};

	/**
	 * Enum VRExpansionPlugin.EBPHMDDeviceType
	 */
	enum class EBPHMDDeviceType : uint8_t
	{
		DT_OculusHMD            = 0,
		DT_PSVR                 = 1,
		DT_ES2GenericStereoMesh = 2,
		DT_SteamVR              = 3,
		DT_GearVR               = 4,
		DT_GoogleVR             = 5,
		DT_AppleARKit           = 6,
		DT_GoogleARCore         = 7,
		DT_Unknown              = 8,
		DT_MAX                  = 9
	};

	/**
	 * Enum VRExpansionPlugin.EVRRotationQuantization
	 */
	enum class EVRRotationQuantization : uint8_t
	{
		RoundTo10Bits = 0,
		RoundToShort  = 1,
		MAX           = 2
	};

	/**
	 * Enum VRExpansionPlugin.EVRVectorQuantization
	 */
	enum class EVRVectorQuantization : uint8_t
	{
		RoundOneDecimal  = 0,
		RoundTwoDecimals = 1,
		MAX              = 2
	};

	/**
	 * Enum VRExpansionPlugin.EVRVelocityType
	 */
	enum class EVRVelocityType : uint8_t
	{
		VRLOCITY_Default        = 0,
		VRLOCITY_RunningAverage = 1,
		VRLOCITY_SamplePeak     = 2,
		VRLOCITY_MAX            = 3
	};

	/**
	 * Enum VRExpansionPlugin.EVRLerpInterpolationMode
	 */
	enum class EVRLerpInterpolationMode : uint8_t
	{
		QuatInterp     = 0,
		EulerInterp    = 1,
		DualQuatInterp = 2,
		MAX            = 3
	};

	/**
	 * Enum VRExpansionPlugin.EBPVRWaistTrackingMode
	 */
	enum class EBPVRWaistTrackingMode : uint8_t
	{
		VRWaist_Tracked_Front = 0,
		VRWaist_Tracked_Rear  = 1,
		VRWaist_Tracked_Left  = 2,
		VRWaist_Tracked_Right = 3,
		VRWaist_Tracked_MAX   = 4
	};

	/**
	 * Enum VRExpansionPlugin.EBPVRResultSwitch
	 */
	enum class EBPVRResultSwitch : uint8_t
	{
		OnSucceeded = 0,
		OnFailed    = 1,
		MAX         = 2
	};

	/**
	 * Enum VRExpansionPlugin.EVRConjoinedMovementModes
	 */
	enum class EVRConjoinedMovementModes : uint8_t
	{
		C_MOVE_None       = 0,
		C_MOVE_Walking    = 1,
		C_MOVE_NavWalking = 2,
		C_MOVE_Falling    = 3,
		C_MOVE_Swimming   = 4,
		C_MOVE_Flying     = 5,
		C_MOVE_MAX        = 6,
		C_VRMOVE_Climbing = 7,
		C_VRMOVE_LowGrav  = 8,
		C_VRMOVE_Seated   = 9,
		C_VRMOVE_Custom1  = 10,
		C_VRMOVE_Custom2  = 11,
		C_VRMOVE_Custom3  = 12,
		C_VRMOVE_Custom4  = 13,
		C_VRMOVE_Custom5  = 14,
		C_MAX             = 15
	};

	/**
	 * Enum VRExpansionPlugin.EVRCustomMovementMode
	 */
	enum class EVRCustomMovementMode : uint8_t
	{
		VRMOVE_Climbing = 0,
		VRMOVE_LowGrav  = 1,
		VRMOVE_Seated   = 2,
		VRMOVE_MAX      = 3
	};

	/**
	 * Enum VRExpansionPlugin.EVRStateChangeAuthorityType
	 */
	enum class EVRStateChangeAuthorityType : uint8_t
	{
		CanChangeState_All    = 0,
		CanChangeState_Server = 1,
		CanChangeState_Owner  = 2,
		CanChangeState_MAX    = 3
	};

	/**
	 * Enum VRExpansionPlugin.EVRButtonType
	 */
	enum class EVRButtonType : uint8_t
	{
		Btn_Press         = 0,
		Btn_Toggle_Return = 1,
		Btn_Toggle_Stay   = 2,
		Btn_MAX           = 3
	};

	/**
	 * Enum VRExpansionPlugin.EBPHMDWornState
	 */
	enum class EBPHMDWornState : uint8_t
	{
		Unknown = 0,
		Worn    = 1,
		NotWorn = 2,
		MAX     = 3
	};

	/**
	 * Enum VRExpansionPlugin.EVRGameInputMethod
	 */
	enum class EVRGameInputMethod : uint8_t
	{
		GameInput_Default                   = 0,
		GameInput_SharedKeyboardAndMouse    = 1,
		GameInput_KeyboardAndMouseToPlayer2 = 2,
		GameInput_MAX                       = 3
	};

	/**
	 * Enum VRExpansionPlugin.EVRGestureMirrorMode
	 */
	enum class EVRGestureMirrorMode : uint8_t
	{
		GES_NoMirror    = 0,
		GES_MirrorLeft  = 1,
		GES_MirrorRight = 2,
		GES_MirrorBoth  = 3,
		GES_MAX         = 4
	};

	/**
	 * Enum VRExpansionPlugin.EVRGestureState
	 */
	enum class EVRGestureState : uint8_t
	{
		GES_None      = 0,
		GES_Recording = 1,
		GES_Detecting = 2,
		GES_MAX       = 3
	};

	/**
	 * Enum VRExpansionPlugin.EGSTransformOverrideType
	 */
	enum class EGSTransformOverrideType : uint8_t
	{
		None                    = 0,
		OverridesWorldTransform = 1,
		ModifiesWorldTransform  = 2,
		MAX                     = 3
	};

	/**
	 * Enum VRExpansionPlugin.EVRInteractibleAxis
	 */
	enum class EVRInteractibleAxis : uint8_t
	{
		Axis_X   = 0,
		Axis_Y   = 1,
		Axis_Z   = 2,
		Axis_MAX = 3
	};

	/**
	 * Enum VRExpansionPlugin.EVRInteractibleLeverReturnType
	 */
	enum class EVRInteractibleLeverReturnType : uint8_t
	{
		Stay                     = 0,
		ReturnToZero             = 1,
		LerpToMax                = 2,
		LerpToMaxIfOverThreshold = 3,
		RetainMomentum           = 4,
		MAX                      = 5
	};

	/**
	 * Enum VRExpansionPlugin.EVRInteractibleLeverAxis
	 */
	enum class EVRInteractibleLeverAxis : uint8_t
	{
		Axis_X         = 0,
		Axis_Y         = 1,
		Axis_Z         = 2,
		Axis_XY        = 3,
		FlightStick_XY = 4,
		MAX            = 5
	};

	/**
	 * Enum VRExpansionPlugin.EBPVRConsoleDrawType
	 */
	enum class EBPVRConsoleDrawType : uint8_t
	{
		VRConsole_Draw_ConsoleOnly   = 0,
		VRConsole_Draw_OutputLogOnly = 1,
		VRConsole_Draw_MAX           = 2
	};

	/**
	 * Enum VRExpansionPlugin.EVRInteractibleMountAxis
	 */
	enum class EVRInteractibleMountAxis : uint8_t
	{
		Axis_XZ  = 0,
		Axis_MAX = 1
	};

	/**
	 * Enum VRExpansionPlugin.ERenderManagerOperationType
	 */
	enum class ERenderManagerOperationType : uint8_t
	{
		Op_LineDraw = 0,
		Op_TriDraw  = 1,
		Op_TexDraw  = 2,
		Op_MAX      = 3
	};

	/**
	 * Enum VRExpansionPlugin.EVRInteractibleSliderDropBehavior
	 */
	enum class EVRInteractibleSliderDropBehavior : uint8_t
	{
		Stay           = 0,
		RetainMomentum = 1,
		MAX            = 2
	};

	/**
	 * Enum VRExpansionPlugin.EVRInteractibleSliderLerpType
	 */
	enum class EVRInteractibleSliderLerpType : uint8_t
	{
		Lerp_None             = 0,
		Lerp_Interp           = 1,
		Lerp_InterpConstantTo = 2,
		Lerp_MAX              = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct VRExpansionPlugin.BPEuroLowPassFilterTrans
	 * Size -> 0x0150
	 */
	struct FBPEuroLowPassFilterTrans
	{
	public:
		float                                                      MinCutoff;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeltaCutoff;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CutoffSlope;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y5FR[0x144];                                 // 0x000C(0x0144) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.Transform_NetQuantize
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FTransform_NetQuantize : public FTransform
	{	};

	/**
	 * ScriptStruct VRExpansionPlugin.BPAdvGripPhysicsSettings
	 * Size -> 0x001C
	 */
	struct FBPAdvGripPhysicsSettings
	{
	public:
		bool                                                       bUsePhysicsSettings;                                     // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPhysicsGripConstraintType                                 PhysicsConstraintType;                                   // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPhysicsGripCOMType                                        PhysicsGripLocationSettings;                             // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTurnOffGravityDuringGrip;                               // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipSettingSimulating;                                  // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y4D4[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LinearMaxForceCoefficient;                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularMaxForceCoefficient;                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCustomAngularValues;                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L9RB[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AngularStiffness;                                        // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularDamping;                                          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct VRExpansionPlugin.BPAdvGripSettings
	 * Size -> 0x0020
	 */
	struct FBPAdvGripSettings
	{
	public:
		unsigned char                                              GripPriority;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetOwnerOnGrip;                                         // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9P0Q[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPAdvGripPhysicsSettings                           PhysicsSettings;                                         // 0x0004(0x001C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct VRExpansionPlugin.BPSecondaryGripInfo
	 * Size -> 0x0070
	 */
	struct FBPSecondaryGripInfo
	{
	public:
		bool                                                       bHasSecondaryAttachment;                                 // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PUU1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     SecondaryAttachment;                                     // 0x0008(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform_NetQuantize                              SecondaryRelativeTransform;                              // 0x0010(0x0030) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsSlotGrip;                                             // 0x0040(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_523O[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SecondarySlotName;                                       // 0x0044(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LerpToRate;                                              // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondaryGripDistance;                                   // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GAU1[0x1C];                                  // 0x0054(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.BPActorGripInformation
	 * Size -> 0x01E0
	 */
	struct FBPActorGripInformation
	{
	public:
		unsigned char                                              GripID;                                                  // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGripTargetType                                            GripTargetType;                                          // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QS3R[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             GrippedObject;                                           // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGripCollisionType                                         GripCollisionType;                                       // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGripLateUpdateSettings                                    GripLateUpdateSetting;                                   // 0x0011(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bColliding;                                              // 0x0012(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8MT3[0xD];                                   // 0x0013(0x000D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform_NetQuantize                              RelativeTransform;                                       // 0x0020(0x0030) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsSlotGrip;                                             // 0x0050(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C4C7[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                GrippedBoneName;                                         // 0x0054(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SlotName;                                                // 0x005C(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGripMovementReplicationSettings                           GripMovementReplicationSetting;                          // 0x0064(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPaused;                                               // 0x0065(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockHybridGrip;                                         // 0x0066(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOriginalReplicatesMovement;                             // 0x0067(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOriginalGravity;                                        // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QC3B[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Damping;                                                 // 0x006C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Stiffness;                                               // 0x0070(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBPAdvGripSettings                                  AdvancedGripSettings;                                    // 0x0074(0x0020) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W4ZH[0xC];                                   // 0x0094(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPSecondaryGripInfo                                SecondaryGripInfo;                                       // 0x00A0(0x0070) BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FTransform                                          AdditionTransform;                                       // 0x0110(0x0030) BlueprintVisible, IsPlainOldData, RepSkip, NoDestructor, NativeAccessSpecifierPublic
		float                                                      GripDistance;                                            // 0x0140(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7619[0x8C];                                  // 0x0144(0x008C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsLerping;                                              // 0x01D0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WDM0[0xF];                                   // 0x01D1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.BPVRComponentPosRep
	 * Size -> 0x001C
	 */
	struct FBPVRComponentPosRep
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EVRVectorQuantization                                      QuantizationLevel;                                       // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVRRotationQuantization                                    RotationQuantizationLevel;                               // 0x0019(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AVL8[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.RepAttachmentWithWeld
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	struct FRepAttachmentWithWeld : public FRepAttachment
	{
	public:
		bool                                                       bIsWelded;                                               // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QS5M[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.VRClientAuthReplicationData
	 * Size -> 0x0050
	 */
	struct FVRClientAuthReplicationData
	{
	public:
		bool                                                       bUseClientAuthThrowing;                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MOGK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UpdateRate;                                              // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KUL[0x48];                                  // 0x0008(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.BPGripPair
	 * Size -> 0x0010
	 */
	struct FBPGripPair
	{
	public:
		class UGripMotionControllerComponent*                      HoldingController;                                       // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              GripID;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9QBP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.BPInterfaceProperties
	 * Size -> 0x0058
	 */
	struct FBPInterfaceProperties
	{
	public:
		bool                                                       bDenyGripping;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowMultipleGrips;                                     // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGripInterfaceTeleportBehavior                             OnTeleportBehavior;                                      // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimulateOnDrop;                                         // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGripCollisionType                                         SlotDefaultGripType;                                     // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGripCollisionType                                         FreeDefaultGripType;                                     // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESecondaryGripType                                         SecondaryGripType;                                       // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGripMovementReplicationSettings                           MovementReplicationType;                                 // 0x0007(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGripLateUpdateSettings                                    LateUpdateSetting;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IAR7[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ConstraintStiffness;                                     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConstraintDamping;                                       // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConstraintBreakDistance;                                 // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondarySlotRange;                                      // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PrimarySlotRange;                                        // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBPAdvGripSettings                                  AdvancedGripSettings;                                    // 0x0020(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsHeld;                                                 // 0x0040(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3WRV[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBPGripPair>                                 HoldingControllers;                                      // 0x0048(0x0010) BlueprintVisible, ZeroConstructor, RepSkip, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct VRExpansionPlugin.BPEuroLowPassFilter
	 * Size -> 0x005C
	 */
	struct FBPEuroLowPassFilter
	{
	public:
		float                                                      MinCutoff;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeltaCutoff;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CutoffSlope;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IXT7[0x50];                                  // 0x000C(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.GunTools_AdvSecondarySettings
	 * Size -> 0x0074
	 */
	struct FGunTools_AdvSecondarySettings
	{
	public:
		bool                                                       bUseAdvancedSecondarySettings;                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2S2B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SecondaryGripScaler;                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseConstantGripScaler;                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseGlobalSmoothingSettings;                             // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KVLG[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPEuroLowPassFilter                                SecondarySmoothing;                                      // 0x000C(0x005C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseSecondaryGripDistanceInfluence;                      // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YDMX[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GripInfluenceDeadZone;                                   // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GripInfluenceDistanceToZero;                             // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct VRExpansionPlugin.BPVirtualStockSettings
	 * Size -> 0x0190
	 */
	struct FBPVirtualStockSettings
	{
	public:
		bool                                                       bUseDistanceBasedStockSnapping;                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HVJW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StockSnapDistance;                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StockSnapLerpThreshold;                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StockLerpValue;                                          // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              StockSnapOffset;                                         // 0x0010(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSmoothStockHand;                                        // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OESG[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SmoothingValueForStock;                                  // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O48D[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPEuroLowPassFilterTrans                           StockHandSmoothing;                                      // 0x0030(0x0150) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDebugDrawVirtualStock;                                  // 0x0180(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V17V[0xF];                                   // 0x0181(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.BPGS_InteractionSettings
	 * Size -> 0x0090
	 */
	struct FBPGS_InteractionSettings
	{
	public:
		unsigned char                                              UnknownData_E80I[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLimitsInLocalSpace : 1;                                 // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGetInitialPositionsOnBeginPlay : 1;                     // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitX : 1;                                             // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitY : 1;                                             // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitZ : 1;                                             // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitPitch : 1;                                         // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitYaw : 1;                                           // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitRoll : 1;                                          // 0x0040(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreHandRotation : 1;                                 // 0x0041(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4RFS[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector_NetQuantize100                              InitialLinearTranslation;                                // 0x0044(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              MinLinearTranslation;                                    // 0x0050(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              MaxLinearTranslation;                                    // 0x005C(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            InitialAngularTranslation;                               // 0x0068(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            MinAngularTranslation;                                   // 0x0074(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            MaxAngularTranslation;                                   // 0x0080(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMO5[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.BPHitSurfaceProperties
	 * Size -> 0x0014
	 */
	struct FBPHitSurfaceProperties
	{
	public:
		bool                                                       bSurfaceAllowsPenetration;                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KEC9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BluntDamageScaler;                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SharpDamageScaler;                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StabVelocityScaler;                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPhysicalSurface                                           SurfaceType;                                             // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UDUT[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.BPLodgeComponentInfo
	 * Size -> 0x0030
	 */
	struct FBPLodgeComponentInfo
	{
	public:
		class FName                                                ComponentName;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVRMeleeZoneType                                           ZoneType;                                                // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreForwardVectorForHitImpulse;                       // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1JXO[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DamageScaler;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PenetrationDepth;                                        // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowPenetrationInReverseAsWell;                        // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W5YJ[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PenetrationVelocity;                                     // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumHitVelocity;                                      // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AcceptableForwardProductRange;                           // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AcceptableForwardProductRangeForHits;                    // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UPrimitiveComponent>                  TargetComponent;                                         // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct VRExpansionPlugin.BPAdvancedPhysicsHandleAxisSettings
	 * Size -> 0x0010
	 */
	struct FBPAdvancedPhysicsHandleAxisSettings
	{
	public:
		float                                                      Stiffness;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damping;                                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxForceCoefficient;                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnablePositionDrive;                                    // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableVelocityDrive;                                    // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K9MK[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.BPAdvancedPhysicsHandleSettings
	 * Size -> 0x0060
	 */
	struct FBPAdvancedPhysicsHandleSettings
	{
	public:
		struct FBPAdvancedPhysicsHandleAxisSettings                XAxisSettings;                                           // 0x0000(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FBPAdvancedPhysicsHandleAxisSettings                YAxisSettings;                                           // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FBPAdvancedPhysicsHandleAxisSettings                ZAxisSettings;                                           // 0x0020(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FBPAdvancedPhysicsHandleAxisSettings                SlerpSettings;                                           // 0x0030(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FBPAdvancedPhysicsHandleAxisSettings                TwistSettings;                                           // 0x0040(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FBPAdvancedPhysicsHandleAxisSettings                SwingSettings;                                           // 0x0050(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct VRExpansionPlugin.BPVRHandPoseBonePair
	 * Size -> 0x0030
	 */
	struct FBPVRHandPoseBonePair
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LOTC[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               DeltaPose;                                               // 0x0010(0x0010) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L0DV[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.BPVRWaistTracking_Info
	 * Size -> 0x0020
	 */
	struct FBPVRWaistTracking_Info
	{
	public:
		struct FRotator                                            RestingRotation;                                         // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      WaistRadius;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBPVRWaistTrackingMode                                     TrackingMode;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8LQZ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 TrackedDevice;                                           // 0x0018(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct VRExpansionPlugin.RepMovementVRCharacter
	 * Size -> 0x000C (FullSize[0x0040] - InheritedSize[0x0034])
	 */
	struct FRepMovementVRCharacter : public FRepMovement
	{
	public:
		bool                                                       bJustTeleported;                                         // 0x0034(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bJustTeleportedGrips;                                    // 0x0035(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TBBR[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Owner;                                                   // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct VRExpansionPlugin.VRReplicatedCapsuleHeight
	 * Size -> 0x0004
	 */
	struct FVRReplicatedCapsuleHeight
	{
	public:
		float                                                      CapsuleHeight;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct VRExpansionPlugin.VRSeatedCharacterInfo
	 * Size -> 0x0090
	 */
	struct FVRSeatedCharacterInfo
	{
	public:
		bool                                                       bSitting;                                                // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bZeroToHead;                                             // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2N0P[0xE];                                   // 0x0002(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform_NetQuantize                              StoredTargetTransform;                                   // 0x0010(0x0030) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform_NetQuantize                              InitialRelCameraTransform;                               // 0x0040(0x0030) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		class USceneComponent*                                     SeatParent;                                              // 0x0070(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVRConjoinedMovementModes                                  PostSeatedMovementMode;                                  // 0x0078(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_589H[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AllowedRadius;                                           // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AllowedRadiusThreshold;                                  // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentThresholdScaler;                                  // 0x0084(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsOverThreshold;                                        // 0x0088(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_27QK[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.WeldedBoneDriverData
	 * Size -> 0x0070
	 */
	struct FWeldedBoneDriverData
	{
	public:
		unsigned char                                              UnknownData_M6Z4[0x70];                                  // 0x0000(0x0070) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.VRGestureSettings
	 * Size -> 0x0010
	 */
	struct FVRGestureSettings
	{
	public:
		int32_t                                                    Minimum_Gesture_Length;                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      firstThreshold;                                          // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FullThreshold;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVRGestureMirrorMode                                       MirrorMode;                                              // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableScaling;                                          // 0x000E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_64PH[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.VRGesture
	 * Size -> 0x0058
	 */
	struct FVRGesture
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              GestureType;                                             // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HZUC[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     Samples;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		struct FBox                                                GestureSize;                                             // 0x0028(0x001C) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVRGestureSettings                                  GestureSettings;                                         // 0x0044(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CG76[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.BPVRControllerProfile
	 * Size -> 0x0080
	 */
	struct FBPVRControllerProfile
	{
	public:
		class FName                                                ControllerName;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6FYL[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform_NetQuantize                              SocketOffsetTransform;                                   // 0x0010(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseSeperateHandOffsetTransforms;                        // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5EVW[0xF];                                   // 0x0041(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform_NetQuantize                              SocketOffsetTransformRightHand;                          // 0x0050(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct VRExpansionPlugin.BPVRReplicatedTextureStore
	 * Size -> 0x0030
	 */
	struct FBPVRReplicatedTextureStore
	{
	public:
		TArray<unsigned char>                                      PackedData;                                              // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<uint16_t>                                           UnpackedData;                                            // 0x0010(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		uint32_t                                                   Width;                                                   // 0x0020(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Height;                                                  // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsZipped;                                               // 0x0028(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NMWA[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.ClientRepData
	 * Size -> 0x0014
	 */
	struct FClientRepData
	{
	public:
		TWeakObjectPtr<class APlayerController>                    PC;                                                      // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class ARenderTargetReplicationProxy>        ReplicationProxy;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRelevant;                                             // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDirty;                                                // 0x0011(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KKBM[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.UpdateBucketContainer
	 * Size -> 0x0058
	 */
	struct FUpdateBucketContainer
	{
	public:
		unsigned char                                              UnknownData_BKR6[0x58];                                  // 0x0000(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.UpdateBucket
	 * Size -> 0x0018
	 */
	struct FUpdateBucket
	{
	public:
		unsigned char                                              UnknownData_J1VH[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.UpdateBucketDrop
	 * Size -> 0x0028
	 */
	struct FUpdateBucketDrop
	{
	public:
		unsigned char                                              UnknownData_J816[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.VRConditionalMoveRep2
	 * Size -> 0x0018
	 */
	struct FVRConditionalMoveRep2
	{
	public:
		class UPrimitiveComponent*                                 ClientMovementBase;                                      // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ClientBaseBoneName;                                      // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   ClientYaw;                                               // 0x0010(0x0002) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   ClientPitch;                                             // 0x0012(0x0002) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ClientRoll;                                              // 0x0014(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7PSO[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.VRMoveActionContainer
	 * Size -> 0x002C
	 */
	struct FVRMoveActionContainer
	{
	public:
		EVRMoveAction                                              MoveAction;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVRMoveActionDataReq                                       MoveActionDataReq;                                       // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_POY9[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MoveActionLoc;                                           // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MoveActionVel;                                           // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            MoveActionRot;                                           // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              MoveActionFlags;                                         // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVRMoveActionVelocityRetention                             VelRetentionSetting;                                     // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZXUJ[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.VRMoveActionArray
	 * Size -> 0x0010
	 */
	struct FVRMoveActionArray
	{
	public:
		TArray<struct FVRMoveActionContainer>                      MoveActions;                                             // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct VRExpansionPlugin.VRConditionalMoveRep
	 * Size -> 0x0028
	 */
	struct FVRConditionalMoveRep
	{
	public:
		struct FVector                                             CustomVRInputVector;                                     // 0x0000(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RequestedVelocity;                                       // 0x000C(0x000C) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVRMoveActionArray                                  MoveActionArray;                                         // 0x0018(0x0010) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct VRExpansionPlugin.GripComponentEndPhysicsTickFunction
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FGripComponentEndPhysicsTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_F6GL[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.RepMovementVR
	 * Size -> 0x0000 (FullSize[0x0034] - InheritedSize[0x0034])
	 */
	struct FRepMovementVR : public FRepMovement
	{	};

	/**
	 * ScriptStruct VRExpansionPlugin.SkeletalMeshComponentEndPhysicsTickFunctionVR
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FSkeletalMeshComponentEndPhysicsTickFunctionVR : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_Q13M[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.AISightEventVR
	 * Size -> 0x0018
	 */
	struct FAISightEventVR
	{
	public:
		unsigned char                                              UnknownData_JLXQ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              SeenActor;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Observer;                                                // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct VRExpansionPlugin.BPActorPhysicsHandleInformation
	 * Size -> 0x0160
	 */
	struct FBPActorPhysicsHandleInformation
	{
	public:
		class UObject*                                             HandledObject;                                           // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PUT1[0x158];                                 // 0x0008(0x0158) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.BPLowPassPeakFilter
	 * Size -> 0x0020
	 */
	struct FBPLowPassPeakFilter
	{
	public:
		int32_t                                                    VelocitySamples;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8YXO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     VelocitySampleLog;                                       // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y0XN[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.BPEuroLowPassFilterQuat
	 * Size -> 0x0090
	 */
	struct FBPEuroLowPassFilterQuat
	{
	public:
		float                                                      MinCutoff;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeltaCutoff;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CutoffSlope;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2KDM[0x84];                                  // 0x000C(0x0084) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.VRGestureSplineDraw
	 * Size -> 0x0020
	 */
	struct FVRGestureSplineDraw
	{
	public:
		class USplineComponent*                                    SplineComponent;                                         // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USplineMeshComponent*>                        SplineMeshes;                                            // 0x0008(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_26HN[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.BPVRInteractibleBaseData
	 * Size -> 0x0090
	 */
	struct FBPVRInteractibleBaseData
	{
	public:
		struct FTransform                                          InitialRelativeTransform;                                // 0x0000(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             InitialInteractorLocation;                               // 0x0030(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InitialGripLoc;                                          // 0x003C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InitialDropLocation;                                     // 0x0048(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T9Z5[0xC];                                   // 0x0054(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          ReversedRelativeTransform;                               // 0x0060(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct VRExpansionPlugin.RenderManagerTri
	 * Size -> 0x0018
	 */
	struct FRenderManagerTri
	{
	public:
		unsigned char                                              UnknownData_BPG1[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct VRExpansionPlugin.RenderManagerOperation
	 * Size -> 0x0080
	 */
	struct FRenderManagerOperation
	{
	public:
		uint32_t                                                   OwnerID;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERenderManagerOperationType                                OperationType;                                           // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HWRE[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              Color;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           P1;                                                      // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           P2;                                                      // 0x0014(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Thickness;                                               // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRenderManagerTri>                           Tris;                                                    // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              Texture[0x28];                                           // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Material[0x28];                                          // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct VRExpansionPlugin.RenderDataStore
	 * Size -> 0x0030
	 */
	struct FRenderDataStore
	{
	public:
		unsigned char                                              UnknownData_9MGZ[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
