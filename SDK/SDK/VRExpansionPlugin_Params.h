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
	 * Function VRExpansionPlugin.BucketUpdateSubsystem.RemoveObjectFromBucketByFunctionName
	 */
	struct UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                FunctionName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.BucketUpdateSubsystem.RemoveObjectFromBucketByEvent
	 */
	struct UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.BucketUpdateSubsystem.RemoveObjectFromAllBuckets
	 */
	struct UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.BucketUpdateSubsystem.K2_AddObjectToBucket
	 */
	struct UBucketUpdateSubsystem_K2_AddObjectToBucket_Params
	{
	public:
		int32_t                                                    UpdateHTZ;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D6SV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             InObject;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                FunctionName;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.BucketUpdateSubsystem.K2_AddObjectEventToBucket
	 */
	struct UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    UpdateHTZ;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.BucketUpdateSubsystem.IsObjectFunctionInBucket
	 */
	struct UBucketUpdateSubsystem_IsObjectFunctionInBucket_Params
	{
	public:
		class UObject*                                             InObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                FunctionName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.BucketUpdateSubsystem.IsActive
	 */
	struct UBucketUpdateSubsystem_IsActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.UpdatePhysicsHandleTransform_BP
	 */
	struct UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP_Params
	{
	public:
		struct FBPActorGripInformation                             GrippedActor;                                            // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FTransform                                          NewTransform;                                            // 0x01E0(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.UpdatePhysicsHandle_BP
	 */
	struct UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bFullyRecreate;                                          // 0x01E0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x01E1(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.TeleportMoveGrips
	 */
	struct UGripMotionControllerComponent_TeleportMoveGrips_Params
	{
	public:
		bool                                                       bTeleportPhysicsGrips;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsForPostTeleport;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.TeleportMoveGrippedComponent
	 */
	struct UGripMotionControllerComponent_TeleportMoveGrippedComponent_Params
	{
	public:
		class UPrimitiveComponent*                                 ComponentToMove;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTeleportPhysicsGrips;                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.TeleportMoveGrippedActor
	 */
	struct UGripMotionControllerComponent_TeleportMoveGrippedActor_Params
	{
	public:
		class AActor*                                              GrippedActorToMove;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTeleportPhysicsGrips;                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.TeleportMoveGrip
	 */
	struct UGripMotionControllerComponent_TeleportMoveGrip_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bTeleportPhysicsGrips;                                   // 0x01E0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsForPostTeleport;                                      // 0x01E1(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x01E2(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.SetUpPhysicsHandle_BP
	 */
	struct UGripMotionControllerComponent_SetUpPhysicsHandle_BP_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x01E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.SetSocketTransform
	 */
	struct UGripMotionControllerComponent_SetSocketTransform_Params
	{
	public:
		class UObject*                                             ObjectToSocket;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2NMR[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform_NetQuantize                              RelativeTransformToParent;                               // 0x0010(0x0030)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.SetPhysicsHandleSettings
	 */
	struct UGripMotionControllerComponent_SetPhysicsHandleSettings_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FBPAdvancedPhysicsHandleSettings                    PhysicsHandleSettingsIn;                                 // 0x01E0(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0240(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.SetPausedTransform
	 */
	struct UGripMotionControllerComponent_SetPausedTransform_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FTransform                                          PausedTransform;                                         // 0x01E0(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bTeleport;                                               // 0x0210(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.SetGripStiffnessAndDamping
	 */
	struct UGripMotionControllerComponent_SetGripStiffnessAndDamping_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		EBPVRResultSwitch                                          Result;                                                  // 0x01E0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VMAI[0x3];                                   // 0x01E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      NewStiffness;                                            // 0x01E4(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewDamping;                                              // 0x01E8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAlsoSetAngularValues;                                   // 0x01EC(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_13IL[0x3];                                   // 0x01ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OptionalAngularStiffness;                                // 0x01F0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OptionalAngularDamping;                                  // 0x01F4(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.SetGripRelativeTransform
	 */
	struct UGripMotionControllerComponent_SetGripRelativeTransform_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		EBPVRResultSwitch                                          Result;                                                  // 0x01E0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AR7O[0xF];                                   // 0x01E1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          NewRelativeTransform;                                    // 0x01F0(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.SetGripPaused
	 */
	struct UGripMotionControllerComponent_SetGripPaused_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		EBPVRResultSwitch                                          Result;                                                  // 0x01E0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsPaused;                                               // 0x01E1(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNoConstraintWhenPaused;                                 // 0x01E2(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.SetGripLateUpdateSetting
	 */
	struct UGripMotionControllerComponent_SetGripLateUpdateSetting_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		EBPVRResultSwitch                                          Result;                                                  // 0x01E0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGripLateUpdateSettings                                    NewGripLateUpdateSetting;                                // 0x01E1(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.SetGripHybridLock
	 */
	struct UGripMotionControllerComponent_SetGripHybridLock_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		EBPVRResultSwitch                                          Result;                                                  // 0x01E0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsLocked;                                               // 0x01E1(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.SetGripCollisionType
	 */
	struct UGripMotionControllerComponent_SetGripCollisionType_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		EBPVRResultSwitch                                          Result;                                                  // 0x01E0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGripCollisionType                                         NewGripCollisionType;                                    // 0x01E1(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.SetGripAdditionTransform
	 */
	struct UGripMotionControllerComponent_SetGripAdditionTransform_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		EBPVRResultSwitch                                          Result;                                                  // 0x01E0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2WKD[0xF];                                   // 0x01E1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          NewAdditionTransform;                                    // 0x01F0(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bMakeGripRelative;                                       // 0x0220(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.SetCustomPivotComponent
	 */
	struct UGripMotionControllerComponent_SetCustomPivotComponent_Params
	{
	public:
		class USceneComponent*                                     NewCustomPivotComponent;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                PivotSocketName;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.Server_SendControllerTransform
	 */
	struct UGripMotionControllerComponent_Server_SendControllerTransform_Params
	{
	public:
		struct FBPVRComponentPosRep                                NewTransform;                                            // 0x0000(0x001C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifySecondaryAttachmentChanged_Retain
	 */
	struct UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Params
	{
	public:
		unsigned char                                              GripID;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4V3G[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPSecondaryGripInfo                                SecondaryGripInfo;                                       // 0x0010(0x0070)  (ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FTransform_NetQuantize                              NewRelativeTransform;                                    // 0x0080(0x0030)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifySecondaryAttachmentChanged
	 */
	struct UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Params
	{
	public:
		unsigned char                                              GripID;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K67W[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPSecondaryGripInfo                                SecondaryGripInfo;                                       // 0x0010(0x0070)  (ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifyLocalGripRemoved
	 */
	struct UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Params
	{
	public:
		unsigned char                                              GripID;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RDPJ[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform_NetQuantize                              TransformAtDrop;                                         // 0x0010(0x0030)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize100                              AngularVelocity;                                         // 0x0040(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize100                              LinearVelocity;                                          // 0x004C(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifyLocalGripAddedOrChanged
	 */
	struct UGripMotionControllerComponent_Server_NotifyLocalGripAddedOrChanged_Params
	{
	public:
		struct FBPActorGripInformation                             newGrip;                                                 // 0x0000(0x01E0)  (ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifyHandledTransaction
	 */
	struct UGripMotionControllerComponent_Server_NotifyHandledTransaction_Params
	{
	public:
		unsigned char                                              GripID;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifyDropAndSocketGrip
	 */
	struct UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Params
	{
	public:
		unsigned char                                              GripID;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FOUF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     SocketingParent;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OptionalSocketName;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YRHS[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform_NetQuantize                              RelativeTransformToParent;                               // 0x0020(0x0030)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWeldBodies;                                             // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.RemoveSecondaryAttachmentPoint
	 */
	struct UGripMotionControllerComponent_RemoveSecondaryAttachmentPoint_Params
	{
	public:
		class UObject*                                             GrippedObjectToRemoveAttachment;                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LerpToTime;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.RemoveSecondaryAttachmentFromGripByID
	 */
	struct UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID_Params
	{
	public:
		unsigned char                                              GripID;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H02P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      LerpToTime;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.RemoveSecondaryAttachmentFromGrip
	 */
	struct UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip_Params
	{
	public:
		struct FBPActorGripInformation                             GripToRemoveAttachment;                                  // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		float                                                      LerpToTime;                                              // 0x01E0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x01E4(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.PostTeleportMoveGrippedObjects
	 */
	struct UGripMotionControllerComponent_PostTeleportMoveGrippedObjects_Params
	{	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.OnRep_ReplicatedControllerTransform
	 */
	struct UGripMotionControllerComponent_OnRep_ReplicatedControllerTransform_Params
	{	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.OnRep_LocalTransaction
	 */
	struct UGripMotionControllerComponent_OnRep_LocalTransaction_Params
	{
	public:
		TArray<struct FBPActorGripInformation>                     OriginalArrayState;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.OnRep_LocallyGrippedObjects
	 */
	struct UGripMotionControllerComponent_OnRep_LocallyGrippedObjects_Params
	{
	public:
		TArray<struct FBPActorGripInformation>                     OriginalArrayState;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.OnRep_GrippedObjects
	 */
	struct UGripMotionControllerComponent_OnRep_GrippedObjects_Params
	{
	public:
		TArray<struct FBPActorGripInformation>                     OriginalArrayState;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.NotifyDropAndSocket
	 */
	struct UGripMotionControllerComponent_NotifyDropAndSocket_Params
	{
	public:
		struct FBPActorGripInformation                             NewDrop;                                                 // 0x0000(0x01E0)  (ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class USceneComponent*                                     SocketingParent;                                         // 0x01E0(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OptionalSocketName;                                      // 0x01E8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform_NetQuantize                              RelativeTransformToParent;                               // 0x01F0(0x0030)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWeldBodies;                                             // 0x0220(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.NotifyDrop
	 */
	struct UGripMotionControllerComponent_NotifyDrop_Params
	{
	public:
		struct FBPActorGripInformation                             NewDrop;                                                 // 0x0000(0x01E0)  (ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bSimulate;                                               // 0x01E0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.NewControllerProfileLoaded
	 */
	struct UGripMotionControllerComponent_NewControllerProfileLoaded_Params
	{	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.HasGrippedObjects
	 */
	struct UGripMotionControllerComponent_HasGrippedObjects_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GripObjectByInterface
	 */
	struct UGripMotionControllerComponent_GripObjectByInterface_Params
	{
	public:
		class UObject*                                             ObjectToGrip;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XZBN[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          WorldOffset;                                             // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWorldOffsetIsRelative;                                  // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A1CZ[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                OptionalBoneToGripName;                                  // 0x0044(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OptionalSnapToSocketName;                                // 0x004C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsSlotGrip;                                             // 0x0054(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0055(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GripObject
	 */
	struct UGripMotionControllerComponent_GripObject_Params
	{
	public:
		class UObject*                                             ObjectToGrip;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IJTI[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          WorldOffset;                                             // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWorldOffsetIsRelative;                                  // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R104[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                OptionalSnapToSocketName;                                // 0x0044(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OptionalBoneToGripName;                                  // 0x004C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGripCollisionType                                         GripCollisionType;                                       // 0x0054(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGripLateUpdateSettings                                    GripLateUpdateSetting;                                   // 0x0055(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGripMovementReplicationSettings                           GripMovementReplicationSetting;                          // 0x0056(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VPXM[0x1];                                   // 0x0057(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      GripStiffness;                                           // 0x0058(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      GripDamping;                                             // 0x005C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsSlotGrip;                                             // 0x0060(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0061(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GripControllerIsTracked
	 */
	struct UGripMotionControllerComponent_GripControllerIsTracked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GripComponent
	 */
	struct UGripMotionControllerComponent_GripComponent_Params
	{
	public:
		class UPrimitiveComponent*                                 ComponentToGrip;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8AHW[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          WorldOffset;                                             // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWorldOffsetIsRelative;                                  // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_813B[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                OptionalSnapToSocketName;                                // 0x0044(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OptionalBoneToGripName;                                  // 0x004C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGripCollisionType                                         GripCollisionType;                                       // 0x0054(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGripLateUpdateSettings                                    GripLateUpdateSetting;                                   // 0x0055(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGripMovementReplicationSettings                           GripMovementReplicationSetting;                          // 0x0056(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DESA[0x1];                                   // 0x0057(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      GripStiffness;                                           // 0x0058(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      GripDamping;                                             // 0x005C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsSlotGrip;                                             // 0x0060(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0061(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GripActor
	 */
	struct UGripMotionControllerComponent_GripActor_Params
	{
	public:
		class AActor*                                              ActorToGrip;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MCE1[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          WorldOffset;                                             // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWorldOffsetIsRelative;                                  // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SAUI[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                OptionalSnapToSocketName;                                // 0x0044(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OptionalBoneToGripName;                                  // 0x004C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGripCollisionType                                         GripCollisionType;                                       // 0x0054(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGripLateUpdateSettings                                    GripLateUpdateSetting;                                   // 0x0055(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGripMovementReplicationSettings                           GripMovementReplicationSetting;                          // 0x0056(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EMIT[0x1];                                   // 0x0057(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      GripStiffness;                                           // 0x0058(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      GripDamping;                                             // 0x005C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsSlotGrip;                                             // 0x0060(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0061(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GetPivotTransform_BP
	 */
	struct UGripMotionControllerComponent_GetPivotTransform_BP_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GetPivotLocation_BP
	 */
	struct UGripMotionControllerComponent_GetPivotLocation_BP_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GetPhysicsVelocities
	 */
	struct UGripMotionControllerComponent_GetPhysicsVelocities_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             AngularVelocity;                                         // 0x01E0(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LinearVelocity;                                          // 0x01EC(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GetPhysicsHandleSettings
	 */
	struct UGripMotionControllerComponent_GetPhysicsHandleSettings_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FBPAdvancedPhysicsHandleSettings                    PhysicsHandleSettingsOut;                                // 0x01E0(0x0060)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0240(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GetPhysicsConstraintForce
	 */
	struct UGripMotionControllerComponent_GetPhysicsConstraintForce_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             AngularForce;                                            // 0x01E0(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LinearForce;                                             // 0x01EC(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x01F8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GetIsSecondaryAttachment
	 */
	struct UGripMotionControllerComponent_GetIsSecondaryAttachment_Params
	{
	public:
		class USceneComponent*                                     ComponentToCheck;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6DMH[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             Grip;                                                    // 0x0010(0x01E0)  (Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x01F0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GetIsObjectHeld
	 */
	struct UGripMotionControllerComponent_GetIsObjectHeld_Params
	{
	public:
		class UObject*                                             ObjectToCheck;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GetIsHeld
	 */
	struct UGripMotionControllerComponent_GetIsHeld_Params
	{
	public:
		class AActor*                                              ActorToCheck;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GetIsComponentHeld
	 */
	struct UGripMotionControllerComponent_GetIsComponentHeld_Params
	{
	public:
		class UPrimitiveComponent*                                 ComponentToCheck;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GetHandType
	 */
	struct UGripMotionControllerComponent_GetHandType_Params
	{
	public:
		EControllerHand                                            hand;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GetGrippedObjects
	 */
	struct UGripMotionControllerComponent_GetGrippedObjects_Params
	{
	public:
		TArray<class UObject*>                                     GrippedObjectsArray;                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GetGrippedComponents
	 */
	struct UGripMotionControllerComponent_GetGrippedComponents_Params
	{
	public:
		TArray<class UPrimitiveComponent*>                         GrippedComponentsArray;                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GetGrippedActors
	 */
	struct UGripMotionControllerComponent_GetGrippedActors_Params
	{
	public:
		TArray<class AActor*>                                      GrippedActorArray;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GetGripMass
	 */
	struct UGripMotionControllerComponent_GetGripMass_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		float                                                      Mass;                                                    // 0x01E0(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GetGripDistance_BP
	 */
	struct UGripMotionControllerComponent_GetGripDistance_BP_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             ExpectedLocation;                                        // 0x01E0(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      CurrentDistance;                                         // 0x01EC(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x01F0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByObject
	 */
	struct UGripMotionControllerComponent_GetGripByObject_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UObject*                                             ObjectToLookForGrip;                                     // 0x01E0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPVRResultSwitch                                          Result;                                                  // 0x01E8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByID
	 */
	struct UGripMotionControllerComponent_GetGripByID_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		unsigned char                                              IDToLookForGrip;                                         // 0x01E0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPVRResultSwitch                                          Result;                                                  // 0x01E1(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByComponent
	 */
	struct UGripMotionControllerComponent_GetGripByComponent_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 ComponentToLookForGrip;                                  // 0x01E0(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPVRResultSwitch                                          Result;                                                  // 0x01E8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByActor
	 */
	struct UGripMotionControllerComponent_GetGripByActor_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class AActor*                                              ActorToLookForGrip;                                      // 0x01E0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPVRResultSwitch                                          Result;                                                  // 0x01E8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GetControllerDeviceID
	 */
	struct UGripMotionControllerComponent_GetControllerDeviceID_Params
	{
	public:
		struct FXRDeviceId                                         DeviceID;                                                // 0x0000(0x000C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		EBPVRResultSwitch                                          Result;                                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCheckOpenVROnly;                                        // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GetAllGripsNumber
	 */
	struct UGripMotionControllerComponent_GetAllGripsNumber_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.GetAllGrips
	 */
	struct UGripMotionControllerComponent_GetAllGrips_Params
	{
	public:
		TArray<struct FBPActorGripInformation>                     GripArray;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.DropObjectByInterface
	 */
	struct UGripMotionControllerComponent_DropObjectByInterface_Params
	{
	public:
		class UObject*                                             ObjectToDrop;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              GripIDToDrop;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UREE[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OptionalAngularVelocity;                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OptionalLinearVelocity;                                  // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.DropObject
	 */
	struct UGripMotionControllerComponent_DropObject_Params
	{
	public:
		class UObject*                                             ObjectToDrop;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              GripIDToDrop;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSimulate;                                               // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MFIG[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OptionalAngularVelocity;                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OptionalLinearVelocity;                                  // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.DropGrip
	 */
	struct UGripMotionControllerComponent_DropGrip_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bSimulate;                                               // 0x01E0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7NN3[0x3];                                   // 0x01E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OptionalAngularVelocity;                                 // 0x01E4(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OptionalLinearVelocity;                                  // 0x01F0(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x01FC(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.DropComponent
	 */
	struct UGripMotionControllerComponent_DropComponent_Params
	{
	public:
		class UPrimitiveComponent*                                 ComponentToDrop;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSimulate;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SJ98[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OptionalAngularVelocity;                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OptionalLinearVelocity;                                  // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.DropAndSocketObject
	 */
	struct UGripMotionControllerComponent_DropAndSocketObject_Params
	{
	public:
		struct FTransform_NetQuantize                              RelativeTransformToParent;                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class UObject*                                             ObjectToDrop;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              GripIDToDrop;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GFYJ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     SocketingParent;                                         // 0x0040(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OptionalSocketName;                                      // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bWeldBodies;                                             // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0051(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.DropAndSocketGrip
	 */
	struct UGripMotionControllerComponent_DropAndSocketGrip_Params
	{
	public:
		struct FBPActorGripInformation                             GripToDrop;                                              // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class USceneComponent*                                     SocketingParent;                                         // 0x01E0(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OptionalSocketName;                                      // 0x01E8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform_NetQuantize                              RelativeTransformToParent;                               // 0x01F0(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bWeldBodies;                                             // 0x0220(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0221(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.DropActor
	 */
	struct UGripMotionControllerComponent_DropActor_Params
	{
	public:
		class AActor*                                              ActorToDrop;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSimulate;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_88EG[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OptionalAngularVelocity;                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OptionalLinearVelocity;                                  // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.DestroyPhysicsHandle_BP
	 */
	struct UGripMotionControllerComponent_DestroyPhysicsHandle_BP_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x01E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.CreateGripRelativeAdditionTransform_BP
	 */
	struct UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Params
	{
	public:
		struct FBPActorGripInformation                             GripToSample;                                            // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FTransform                                          AdditionTransform;                                       // 0x01E0(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bGripRelative;                                           // 0x0210(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E7C4[0xF];                                   // 0x0211(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0220(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.ConvertToGripRelativeTransform
	 */
	struct UGripMotionControllerComponent_ConvertToGripRelativeTransform_Params
	{
	public:
		struct FTransform                                          GrippedActorTransform;                                   // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          InTransform;                                             // 0x0030(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          ReturnValue;                                             // 0x0060(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.ConvertToControllerRelativeTransform
	 */
	struct UGripMotionControllerComponent_ConvertToControllerRelativeTransform_Params
	{
	public:
		struct FTransform                                          InTransform;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          ReturnValue;                                             // 0x0030(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.Client_NotifyInvalidLocalGrip
	 */
	struct UGripMotionControllerComponent_Client_NotifyInvalidLocalGrip_Params
	{
	public:
		class UObject*                                             LocallyGrippedObject;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              GripID;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.CancelGlobalLerpToHand
	 */
	struct UGripMotionControllerComponent_CancelGlobalLerpToHand_Params
	{
	public:
		unsigned char                                              GripID;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.BP_IsLocallyControlled
	 */
	struct UGripMotionControllerComponent_BP_IsLocallyControlled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.BP_HasGripMovementAuthority
	 */
	struct UGripMotionControllerComponent_BP_HasGripMovementAuthority_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x01E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.BP_HasGripAuthorityForObject
	 */
	struct UGripMotionControllerComponent_BP_HasGripAuthorityForObject_Params
	{
	public:
		class UObject*                                             ObjToCheck;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.BP_HasGripAuthority
	 */
	struct UGripMotionControllerComponent_BP_HasGripAuthority_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x01E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.AddSecondaryAttachmentToGripByID
	 */
	struct UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Params
	{
	public:
		unsigned char                                              GripID;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FDRE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     SecondaryPointComponent;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          OriginalTransform;                                       // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bTransformIsAlreadyRelative;                             // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ANUN[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      LerpToTime;                                              // 0x0044(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsSlotGrip;                                             // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VIBL[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                SecondarySlotName;                                       // 0x004C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0054(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.AddSecondaryAttachmentToGrip
	 */
	struct UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Params
	{
	public:
		struct FBPActorGripInformation                             GripToAddAttachment;                                     // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class USceneComponent*                                     SecondaryPointComponent;                                 // 0x01E0(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IQEG[0x8];                                   // 0x01E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          OriginalTransform;                                       // 0x01F0(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bTransformIsAlreadyRelative;                             // 0x0220(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q3ME[0x3];                                   // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      LerpToTime;                                              // 0x0224(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsSlotGrip;                                             // 0x0228(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9VSW[0x3];                                   // 0x0229(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                SecondarySlotName;                                       // 0x022C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0234(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GripMotionControllerComponent.AddSecondaryAttachmentPoint
	 */
	struct UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Params
	{
	public:
		class UObject*                                             GrippedObjectToAddAttachment;                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     SecondaryPointComponent;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          OriginalTransform;                                       // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bTransformIsAlreadyRelative;                             // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1BKE[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      LerpToTime;                                              // 0x0044(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsSlotGrip;                                             // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OPZL[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                SecondarySlotName;                                       // 0x004C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0054(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableActor.SetGripPriority
	 */
	struct AGrippableActor_SetGripPriority_Params
	{
	public:
		int32_t                                                    NewGripPriority;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableActor.SetDenyGripping
	 */
	struct AGrippableActor_SetDenyGripping_Params
	{
	public:
		bool                                                       bDenyGripping;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableActor.Server_GetClientAuthReplication
	 */
	struct AGrippableActor_Server_GetClientAuthReplication_Params
	{
	public:
		struct FRepMovementVR                                      newMovement;                                             // 0x0000(0x0034)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableActor.Server_EndClientAuthReplication
	 */
	struct AGrippableActor_Server_EndClientAuthReplication_Params
	{	};

	/**
	 * Function VRExpansionPlugin.GrippableActor.RemoveFromClientReplicationBucket
	 */
	struct AGrippableActor_RemoveFromClientReplicationBucket_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableActor.PollReplicationEvent
	 */
	struct AGrippableActor_PollReplicationEvent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableActor.IsCurrentlyClientAuthThrowing
	 */
	struct AGrippableActor_IsCurrentlyClientAuthThrowing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableActor.CeaseReplicationBlocking
	 */
	struct AGrippableActor_CeaseReplicationBlocking_Params
	{	};

	/**
	 * Function VRExpansionPlugin.GrippableActor.AddToClientReplicationBucket
	 */
	struct AGrippableActor_AddToClientReplicationBucket_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableBoxComponent.SetGripPriority
	 */
	struct UGrippableBoxComponent_SetGripPriority_Params
	{
	public:
		int32_t                                                    NewGripPriority;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableBoxComponent.SetDenyGripping
	 */
	struct UGrippableBoxComponent_SetDenyGripping_Params
	{
	public:
		bool                                                       bDenyGripping;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableCapsuleComponent.SetGripPriority
	 */
	struct UGrippableCapsuleComponent_SetGripPriority_Params
	{
	public:
		int32_t                                                    NewGripPriority;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableCapsuleComponent.SetDenyGripping
	 */
	struct UGrippableCapsuleComponent_SetDenyGripping_Params
	{
	public:
		bool                                                       bDenyGripping;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableSkeletalMeshActor.SetGripPriority
	 */
	struct AGrippableSkeletalMeshActor_SetGripPriority_Params
	{
	public:
		int32_t                                                    NewGripPriority;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableSkeletalMeshActor.SetDenyGripping
	 */
	struct AGrippableSkeletalMeshActor_SetDenyGripping_Params
	{
	public:
		bool                                                       bDenyGripping;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableSkeletalMeshActor.Server_GetClientAuthReplication
	 */
	struct AGrippableSkeletalMeshActor_Server_GetClientAuthReplication_Params
	{
	public:
		struct FRepMovementVR                                      newMovement;                                             // 0x0000(0x0034)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableSkeletalMeshActor.Server_EndClientAuthReplication
	 */
	struct AGrippableSkeletalMeshActor_Server_EndClientAuthReplication_Params
	{	};

	/**
	 * Function VRExpansionPlugin.GrippableSkeletalMeshActor.RemoveFromClientReplicationBucket
	 */
	struct AGrippableSkeletalMeshActor_RemoveFromClientReplicationBucket_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableSkeletalMeshActor.PollReplicationEvent
	 */
	struct AGrippableSkeletalMeshActor_PollReplicationEvent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableSkeletalMeshActor.IsCurrentlyClientAuthThrowing
	 */
	struct AGrippableSkeletalMeshActor_IsCurrentlyClientAuthThrowing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableSkeletalMeshActor.CeaseReplicationBlocking
	 */
	struct AGrippableSkeletalMeshActor_CeaseReplicationBlocking_Params
	{	};

	/**
	 * Function VRExpansionPlugin.GrippableSkeletalMeshActor.AddToClientReplicationBucket
	 */
	struct AGrippableSkeletalMeshActor_AddToClientReplicationBucket_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableSkeletalMeshComponent.SetGripPriority
	 */
	struct UGrippableSkeletalMeshComponent_SetGripPriority_Params
	{
	public:
		int32_t                                                    NewGripPriority;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableSkeletalMeshComponent.SetDenyGripping
	 */
	struct UGrippableSkeletalMeshComponent_SetDenyGripping_Params
	{
	public:
		bool                                                       bDenyGripping;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableSphereComponent.SetGripPriority
	 */
	struct UGrippableSphereComponent_SetGripPriority_Params
	{
	public:
		int32_t                                                    NewGripPriority;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableSphereComponent.SetDenyGripping
	 */
	struct UGrippableSphereComponent_SetDenyGripping_Params
	{
	public:
		bool                                                       bDenyGripping;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableStaticMeshActor.SetGripPriority
	 */
	struct AGrippableStaticMeshActor_SetGripPriority_Params
	{
	public:
		int32_t                                                    NewGripPriority;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableStaticMeshActor.SetDenyGripping
	 */
	struct AGrippableStaticMeshActor_SetDenyGripping_Params
	{
	public:
		bool                                                       bDenyGripping;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableStaticMeshActor.Server_GetClientAuthReplication
	 */
	struct AGrippableStaticMeshActor_Server_GetClientAuthReplication_Params
	{
	public:
		struct FRepMovementVR                                      newMovement;                                             // 0x0000(0x0034)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableStaticMeshActor.Server_EndClientAuthReplication
	 */
	struct AGrippableStaticMeshActor_Server_EndClientAuthReplication_Params
	{	};

	/**
	 * Function VRExpansionPlugin.GrippableStaticMeshActor.RemoveFromClientReplicationBucket
	 */
	struct AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableStaticMeshActor.PollReplicationEvent
	 */
	struct AGrippableStaticMeshActor_PollReplicationEvent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableStaticMeshActor.IsCurrentlyClientAuthThrowing
	 */
	struct AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableStaticMeshActor.CeaseReplicationBlocking
	 */
	struct AGrippableStaticMeshActor_CeaseReplicationBlocking_Params
	{	};

	/**
	 * Function VRExpansionPlugin.GrippableStaticMeshActor.AddToClientReplicationBucket
	 */
	struct AGrippableStaticMeshActor_AddToClientReplicationBucket_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableStaticMeshComponent.SetGripPriority
	 */
	struct UGrippableStaticMeshComponent_SetGripPriority_Params
	{
	public:
		int32_t                                                    NewGripPriority;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GrippableStaticMeshComponent.SetDenyGripping
	 */
	struct UGrippableStaticMeshComponent_SetDenyGripping_Params
	{
	public:
		bool                                                       bDenyGripping;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripScriptBase.Wants_DenyTeleport
	 */
	struct UVRGripScriptBase_Wants_DenyTeleport_Params
	{
	public:
		class UGripMotionControllerComponent*                      Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripScriptBase.SetTickEnabled
	 */
	struct UVRGripScriptBase_SetTickEnabled_Params
	{
	public:
		bool                                                       bTickEnabled;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripScriptBase.OnSecondaryGripRelease
	 */
	struct UVRGripScriptBase_OnSecondaryGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     ReleasingSecondaryGripComponent;                         // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripScriptBase.OnSecondaryGrip
	 */
	struct UVRGripScriptBase_OnSecondaryGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     SecondaryGripComponent;                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripScriptBase.OnGripRelease
	 */
	struct UVRGripScriptBase_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_W8NM[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripScriptBase.OnGrip
	 */
	struct UVRGripScriptBase_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YO2Q[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripScriptBase.OnEndPlay
	 */
	struct UVRGripScriptBase_OnEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripScriptBase.OnBeginPlay
	 */
	struct UVRGripScriptBase_OnBeginPlay_Params
	{
	public:
		class UObject*                                             CallingOwner;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripScriptBase.IsServer
	 */
	struct UVRGripScriptBase_IsServer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripScriptBase.HasAuthority
	 */
	struct UVRGripScriptBase_HasAuthority_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripScriptBase.GetWorldTransform
	 */
	struct UVRGripScriptBase_GetWorldTransform_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OLXZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          WorldTransform;                                          // 0x0010(0x0030)  (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          ParentTransform;                                         // 0x0040(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FBPActorGripInformation                             Grip;                                                    // 0x0070(0x01E0)  (Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0250(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 Root;                                                    // 0x0258(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRootHasInterface;                                       // 0x0260(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bActorHasInterface;                                      // 0x0261(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsForTeleport;                                          // 0x0262(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0263(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripScriptBase.GetParentTransform
	 */
	struct UVRGripScriptBase_GetParentTransform_Params
	{
	public:
		bool                                                       bGetWorldTransform;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QEGK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                BoneName;                                                // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1EX6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripScriptBase.GetParentSceneComp
	 */
	struct UVRGripScriptBase_GetParentSceneComp_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripScriptBase.GetParent
	 */
	struct UVRGripScriptBase_GetParent_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripScriptBase.GetOwner
	 */
	struct UVRGripScriptBase_GetOwner_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripScriptBase.GetGripTransform
	 */
	struct UVRGripScriptBase_GetGripTransform_Params
	{
	public:
		struct FBPActorGripInformation                             Grip;                                                    // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FTransform                                          ParentTransform;                                         // 0x01E0(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          ReturnValue;                                             // 0x0210(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripScriptBase.GetGripScriptByClass
	 */
	struct UVRGripScriptBase_GetGripScriptByClass_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              GripScriptClass;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPVRResultSwitch                                          Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T4C3[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UVRGripScriptBase*                                   ReturnValue;                                             // 0x0018(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripScriptBase.ForceGripToDrop
	 */
	struct UVRGripScriptBase_ForceGripToDrop_Params
	{	};

	/**
	 * Function VRExpansionPlugin.GS_GunTools.SetVirtualStockEnabled
	 */
	struct UGS_GunTools_SetVirtualStockEnabled_Params
	{
	public:
		bool                                                       bAllowVirtualStock;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GS_GunTools.SetVirtualStockComponent
	 */
	struct UGS_GunTools_SetVirtualStockComponent_Params
	{
	public:
		class USceneComponent*                                     NewStockComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GS_GunTools.ResetRecoil
	 */
	struct UGS_GunTools_ResetRecoil_Params
	{	};

	/**
	 * Function VRExpansionPlugin.GS_GunTools.AddRecoilInstance
	 */
	struct UGS_GunTools_AddRecoilInstance_Params
	{
	public:
		struct FTransform                                          RecoilAddition;                                          // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             Optional_Location;                                       // 0x0030(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GS_InteractibleSettings.RemoveHandRotation
	 */
	struct UGS_InteractibleSettings_RemoveHandRotation_Params
	{	};

	/**
	 * Function VRExpansionPlugin.GS_Melee.UpdateHandPositionAndRotation
	 */
	struct UGS_Melee_UpdateHandPositionAndRotation_Params
	{
	public:
		struct FBPGripPair                                         HandPair;                                                // 0x0000(0x0010)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FTransform                                          HandWorldTransform;                                      // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             LocDifference;                                           // 0x0040(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RotDifference;                                           // 0x004C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUpdateLocation;                                         // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUpdateRotation;                                         // 0x0051(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GS_Melee.UpdateHandPosition
	 */
	struct UGS_Melee_UpdateHandPosition_Params
	{
	public:
		struct FBPGripPair                                         HandPair;                                                // 0x0000(0x0010)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             HandWorldPosition;                                       // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LocDifference;                                           // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GS_Melee.SetPrimaryAndSecondaryHands
	 */
	struct UGS_Melee_SetPrimaryAndSecondaryHands_Params
	{
	public:
		struct FBPGripPair                                         PrimaryGrip;                                             // 0x0000(0x0010)  (Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FBPGripPair                                         SecondaryGrip;                                           // 0x0010(0x0010)  (Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GS_Melee.SetIsLodged
	 */
	struct UGS_Melee_SetIsLodged_Params
	{
	public:
		bool                                                       IsLodged;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YROC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 LodgeComponent;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GS_Melee.OnLodgeHitCallback
	 */
	struct UGS_Melee_OnLodgeHitCallback_Params
	{
	public:
		class AActor*                                              SelfActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x001C(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.HandSocketComponent.GetTargetAnimation
	 */
	struct UHandSocketComponent_GetTargetAnimation_Params
	{
	public:
		class UAnimSequence*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.HandSocketComponent.GetMeshRelativeTransform
	 */
	struct UHandSocketComponent_GetMeshRelativeTransform_Params
	{
	public:
		bool                                                       bIsRightHand;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K3MG[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.HandSocketComponent.GetHandSocketComponentFromObject
	 */
	struct UHandSocketComponent_GetHandSocketComponentFromObject_Params
	{
	public:
		class UObject*                                             ObjectToCheck;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SocketName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UHandSocketComponent*                                ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.HandSocketComponent.GetBlendedPoseSnapShot
	 */
	struct UHandSocketComponent_GetBlendedPoseSnapShot_Params
	{
	public:
		struct FPoseSnapshot                                       PoseSnapshot;                                            // 0x0000(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent*                              TargetMesh;                                              // 0x0038(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSkipRootBone;                                           // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFlipHand;                                               // 0x0041(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0042(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.HandSocketComponent.GetAnimationSequenceAsPoseSnapShot
	 */
	struct UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Params
	{
	public:
		class UAnimSequence*                                       InAnimationSequence;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPoseSnapshot                                       OutPoseSnapShot;                                         // 0x0008(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent*                              TargetMesh;                                              // 0x0040(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSkipRootBone;                                           // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFlipHand;                                               // 0x0049(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x004A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.ReplicatedVRCameraComponent.Server_SendCameraTransform
	 */
	struct UReplicatedVRCameraComponent_Server_SendCameraTransform_Params
	{
	public:
		struct FBPVRComponentPosRep                                NewTransform;                                            // 0x0000(0x001C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.ReplicatedVRCameraComponent.OnRep_ReplicatedCameraTransform
	 */
	struct UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.UpdateLowGravMovement
	 */
	struct AVRBaseCharacter_UpdateLowGravMovement_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.UpdateClimbingMovement
	 */
	struct AVRBaseCharacter_UpdateClimbingMovement_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.StopNavigationMovement
	 */
	struct AVRBaseCharacter_StopNavigationMovement_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.SetCharacterSizeVR
	 */
	struct AVRBaseCharacter_SetCharacterSizeVR_Params
	{
	public:
		float                                                      NewRadius;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewHalfHeight;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUpdateOverlaps;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.SetCharacterHalfHeightVR
	 */
	struct AVRBaseCharacter_SetCharacterHalfHeightVR_Params
	{
	public:
		float                                                      HalfHeight;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUpdateOverlaps;                                         // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.SetActorRotationVR
	 */
	struct AVRBaseCharacter_SetActorRotationVR_Params
	{
	public:
		struct FRotator                                            NewRot;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bUseYawOnly;                                             // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAccountForHMDRotation;                                  // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QQBH[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.SetActorLocationAndRotationVR
	 */
	struct AVRBaseCharacter_SetActorLocationAndRotationVR_Params
	{
	public:
		struct FVector                                             NewLoc;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            NewRot;                                                  // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bUseYawOnly;                                             // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAccountForHMDRotation;                                  // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTeleport;                                               // 0x001A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H186[0x1];                                   // 0x001B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.Server_SetSeatedMode
	 */
	struct AVRBaseCharacter_Server_SetSeatedMode_Params
	{
	public:
		class USceneComponent*                                     SeatParent;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetSeatedMode;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CV0K[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform_NetQuantize                              TargetTransform;                                         // 0x0010(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform_NetQuantize                              InitialRelCameraTransform;                               // 0x0040(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      AllowedRadius;                                           // 0x0070(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AllowedRadiusThreshold;                                  // 0x0074(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bZeroToHead;                                             // 0x0078(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EVRConjoinedMovementModes                                  PostSeatedMovementMode;                                  // 0x0079(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.Server_SendTransformRightController
	 */
	struct AVRBaseCharacter_Server_SendTransformRightController_Params
	{
	public:
		struct FBPVRComponentPosRep                                NewTransform;                                            // 0x0000(0x001C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.Server_SendTransformLeftController
	 */
	struct AVRBaseCharacter_Server_SendTransformLeftController_Params
	{
	public:
		struct FBPVRComponentPosRep                                NewTransform;                                            // 0x0000(0x001C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.Server_SendTransformCamera
	 */
	struct AVRBaseCharacter_Server_SendTransformCamera_Params
	{
	public:
		struct FBPVRComponentPosRep                                NewTransform;                                            // 0x0000(0x001C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.Server_ReZeroSeating
	 */
	struct AVRBaseCharacter_Server_ReZeroSeating_Params
	{
	public:
		struct FTransform_NetQuantize                              NewTargetTransform;                                      // 0x0000(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform_NetQuantize                              NewInitialRelCameraTransform;                            // 0x0030(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bZeroToHead;                                             // 0x0060(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.RegenerateOffsetComponentToWorld
	 */
	struct AVRBaseCharacter_RegenerateOffsetComponentToWorld_Params
	{
	public:
		bool                                                       bUpdateBounds;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCalculatePureYaw;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.ReceiveNavigationMoveCompleted
	 */
	struct AVRBaseCharacter_ReceiveNavigationMoveCompleted_Params
	{
	public:
		EPathFollowingResult                                       PathingResult;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.OnSeatThreshholdChanged
	 */
	struct AVRBaseCharacter_OnSeatThreshholdChanged_Params
	{
	public:
		bool                                                       bIsWithinThreshold;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XZI1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ToThresholdScaler;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.OnSeatedModeChanged
	 */
	struct AVRBaseCharacter_OnSeatedModeChanged_Params
	{
	public:
		bool                                                       bNewSeatedMode;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bWasAlreadySeated;                                       // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.OnRep_SeatedCharInfo
	 */
	struct AVRBaseCharacter_OnRep_SeatedCharInfo_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.OnRep_CapsuleHeight
	 */
	struct AVRBaseCharacter_OnRep_CapsuleHeight_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.OnEndWallPushback
	 */
	struct AVRBaseCharacter_OnEndWallPushback_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.OnCustomMoveActionPerformed
	 */
	struct AVRBaseCharacter_OnCustomMoveActionPerformed_Params
	{
	public:
		EVRMoveAction                                              MoveActionType;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2CE3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             MoveActionVector;                                        // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            MoveActionRotator;                                       // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.OnClimbingSteppedUp
	 */
	struct AVRBaseCharacter_OnClimbingSteppedUp_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.OnBeginWallPushback
	 */
	struct AVRBaseCharacter_OnBeginWallPushback_Params
	{
	public:
		struct FHitResult                                          HitResultOfImpact;                                       // 0x0000(0x0088)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bHadLocomotionInput;                                     // 0x0088(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z5CH[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HmdInput;                                                // 0x008C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.NotifyOfTeleport
	 */
	struct AVRBaseCharacter_NotifyOfTeleport_Params
	{
	public:
		bool                                                       bRegisterAsTeleport;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.K2_GetVRHeadLocation
	 */
	struct AVRBaseCharacter_K2_GetVRHeadLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.HasPartialPath
	 */
	struct AVRBaseCharacter_HasPartialPath_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.GetVRUpVector
	 */
	struct AVRBaseCharacter_GetVRUpVector_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.GetVRRotation
	 */
	struct AVRBaseCharacter_GetVRRotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.GetVRRightVector
	 */
	struct AVRBaseCharacter_GetVRRightVector_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.GetVRLocation
	 */
	struct AVRBaseCharacter_GetVRLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.GetVRForwardVector
	 */
	struct AVRBaseCharacter_GetVRForwardVector_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.GetTeleportLocation
	 */
	struct AVRBaseCharacter_GetTeleportLocation_Params
	{
	public:
		struct FVector                                             OriginalLocation;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.GetMoveStatus
	 */
	struct AVRBaseCharacter_GetMoveStatus_Params
	{
	public:
		EPathFollowingStatus                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.GetCurrentNavigationPathPoints
	 */
	struct AVRBaseCharacter_GetCurrentNavigationPathPoints_Params
	{
	public:
		TArray<struct FVector>                                     NavigationPointList;                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.ExtendedSimpleMoveToLocation
	 */
	struct AVRBaseCharacter_ExtendedSimpleMoveToLocation_Params
	{
	public:
		struct FVector                                             GoalLocation;                                            // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AcceptanceRadius;                                        // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStopOnOverlap;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUsePathfinding;                                         // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bProjectDestinationToNavigation;                         // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCanStrafe;                                              // 0x0013(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FA5P[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              FilterClass;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowPartialPath;                                       // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacter.AddActorWorldRotationVR
	 */
	struct AVRBaseCharacter_AddActorWorldRotationVR_Params
	{
	public:
		struct FRotator                                            DeltaRot;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bUseYawOnly;                                             // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZCFW[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacterMovementComponent.SetReplicatedMovementMode
	 */
	struct UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Params
	{
	public:
		EVRConjoinedMovementModes                                  NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacterMovementComponent.SetCrouchedHalfHeight
	 */
	struct UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Params
	{
	public:
		float                                                      NewCrouchedHalfHeight;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacterMovementComponent.SetClimbingMode
	 */
	struct UVRBaseCharacterMovementComponent_SetClimbingMode_Params
	{
	public:
		bool                                                       bIsClimbing;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacterMovementComponent.RewindVRMovement
	 */
	struct UVRBaseCharacterMovementComponent_RewindVRMovement_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_Teleport
	 */
	struct UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Params
	{
	public:
		struct FVector                                             TeleportLocation;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            TeleportRotation;                                        // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EVRMoveActionVelocityRetention                             VelocityRetention;                                       // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSkipEncroachmentCheck;                                  // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_StopAllMovement
	 */
	struct UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_SnapTurn
	 */
	struct UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Params
	{
	public:
		float                                                      SnapTurnDeltaYaw;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EVRMoveActionVelocityRetention                             VelocityRetention;                                       // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFlagGripTeleport;                                       // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFlagCharacterTeleport;                                  // 0x0006(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_SetRotation
	 */
	struct UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Params
	{
	public:
		float                                                      NewYaw;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EVRMoveActionVelocityRetention                             VelocityRetention;                                       // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFlagGripTeleport;                                       // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFlagCharacterTeleport;                                  // 0x0006(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_Custom
	 */
	struct UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Params
	{
	public:
		EVRMoveAction                                              MoveActionToPerform;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EVRMoveActionDataReq                                       DataRequirementsForMoveAction;                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y93L[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             MoveActionVector;                                        // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            MoveActionRotator;                                       // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacterMovementComponent.GetReplicatedMovementMode
	 */
	struct UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Params
	{
	public:
		EVRConjoinedMovementModes                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacterMovementComponent.GetCustomInputVector
	 */
	struct UVRBaseCharacterMovementComponent_GetCustomInputVector_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacterMovementComponent.ClearCustomReplicatedMovement
	 */
	struct UVRBaseCharacterMovementComponent_ClearCustomReplicatedMovement_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VRBaseCharacterMovementComponent.AddCustomReplicatedMovement
	 */
	struct UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Params
	{
	public:
		struct FVector                                             Movement;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRButtonComponent.SetButtonToRestingPosition
	 */
	struct UVRButtonComponent_SetButtonToRestingPosition_Params
	{
	public:
		bool                                                       bLerpToPosition;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRButtonComponent.SetButtonState
	 */
	struct UVRButtonComponent_SetButtonState_Params
	{
	public:
		bool                                                       bNewButtonState;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCallButtonChangedEvent;                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSnapIntoPosition;                                       // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRButtonComponent.ResetInitialButtonLocation
	 */
	struct UVRButtonComponent_ResetInitialButtonLocation_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VRButtonComponent.ReceiveButtonStateChanged
	 */
	struct UVRButtonComponent_ReceiveButtonStateChanged_Params
	{
	public:
		bool                                                       bCurButtonState;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VQLE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              LastInteractingActor;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 InteractingComponent;                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRButtonComponent.ReceiveButtonEndInteraction
	 */
	struct UVRButtonComponent_ReceiveButtonEndInteraction_Params
	{
	public:
		class AActor*                                              LastInteractingActor;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 LastInteractingComponent;                                // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRButtonComponent.ReceiveButtonBeginInteraction
	 */
	struct UVRButtonComponent_ReceiveButtonBeginInteraction_Params
	{
	public:
		class AActor*                                              InteractingActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 InteractingComponent;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRButtonComponent.OnRep_InitialRelativeTransform
	 */
	struct UVRButtonComponent_OnRep_InitialRelativeTransform_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VRButtonComponent.OnOverlapEnd
	 */
	struct UVRButtonComponent_OnOverlapEnd_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRButtonComponent.OnOverlapBegin
	 */
	struct UVRButtonComponent_OnOverlapBegin_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DUPU[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRButtonComponent.IsValidOverlap
	 */
	struct UVRButtonComponent_IsValidOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlapComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRButtonComponent.IsButtonInUse
	 */
	struct UVRButtonComponent_IsButtonInUse_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRDialComponent.SetGripPriority
	 */
	struct UVRDialComponent_SetGripPriority_Params
	{
	public:
		int32_t                                                    NewGripPriority;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRDialComponent.SetDialAngle
	 */
	struct UVRDialComponent_SetDialAngle_Params
	{
	public:
		float                                                      DialAngle;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCallEvents;                                             // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRDialComponent.ResetInitialDialLocation
	 */
	struct UVRDialComponent_ResetInitialDialLocation_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VRDialComponent.ReceiveDialHitSnapAngle
	 */
	struct UVRDialComponent_ReceiveDialHitSnapAngle_Params
	{
	public:
		float                                                      DialMilestoneAngle;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRDialComponent.ReceiveDialFinishedLerping
	 */
	struct UVRDialComponent_ReceiveDialFinishedLerping_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VRDialComponent.OnRep_InitialRelativeTransform
	 */
	struct UVRDialComponent_OnRep_InitialRelativeTransform_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VRDialComponent.AddDialAngle
	 */
	struct UVRDialComponent_AddDialAngle_Params
	{
	public:
		float                                                      DialAngleDelta;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCallEvents;                                             // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSkipSettingRot;                                         // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VREPhysicalAnimationComponent.SetWeldedBoneDriverPaused
	 */
	struct UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Params
	{
	public:
		bool                                                       bPaused;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VREPhysicalAnimationComponent.SetupWeldedBoneDriver
	 */
	struct UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Params
	{
	public:
		TArray<class FName>                                        BaseBoneNames;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VREPhysicalAnimationComponent.RefreshWeldedBoneDriver
	 */
	struct UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VREPhysicalAnimationComponent.IsWeldedBoneDriverPaused
	 */
	struct UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VREPhysicsConstraintComponent.SetConstraintToForceBased
	 */
	struct UVREPhysicsConstraintComponent_SetConstraintToForceBased_Params
	{
	public:
		bool                                                       bUseForceConstraint;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VREPhysicsConstraintComponent.SetAngularOffset
	 */
	struct UVREPhysicsConstraintComponent_SetAngularOffset_Params
	{
	public:
		struct FRotator                                            NewAngularOffset;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VREPhysicsConstraintComponent.GetLocalPose
	 */
	struct UVREPhysicsConstraintComponent_GetLocalPose_Params
	{
	public:
		EConstraintFrame                                           ConstraintFrame;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KOU5[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VREPhysicsConstraintComponent.GetGlobalPose
	 */
	struct UVREPhysicsConstraintComponent_GetGlobalPose_Params
	{
	public:
		EConstraintFrame                                           ConstraintFrame;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5QBR[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          GlobalPose;                                              // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VREPhysicsConstraintComponent.GetCurrentLinearDistance
	 */
	struct UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Params
	{
	public:
		EConstraintFrame                                           FrameOfReference;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2SZK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VREPhysicsConstraintComponent.GetConstraintReferenceFrame
	 */
	struct UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Params
	{
	public:
		EConstraintFrame                                           Frame;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6Y9D[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          RefFrame;                                                // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VREPhysicsConstraintComponent.GetAngularOffset
	 */
	struct UVREPhysicsConstraintComponent_GetAngularOffset_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.UpdatePeakLowPassFilter
	 */
	struct UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Params
	{
	public:
		struct FBPLowPassPeakFilter                                TargetPeakFilter;                                        // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector                                             newSample;                                               // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.SmoothUpdateLaserSpline
	 */
	struct UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Params
	{
	public:
		class USplineComponent*                                    LaserSplineComponent;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class USplineMeshComponent*>                        LaserSplineMeshComponents;                               // 0x0008(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             InStartLocation;                                         // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InEndLocation;                                           // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InForward;                                               // 0x0030(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LaserRadius;                                             // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.SetObjectsIgnoreCollision
	 */
	struct UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Params
	{
	public:
		class UPrimitiveComponent*                                 Prim1;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OptionalBoneName1;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 Prim2;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OptionalBoneName2;                                       // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnoreCollision;                                        // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.RunEuroSmoothingFilter
	 */
	struct UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Params
	{
	public:
		struct FBPEuroLowPassFilter                                TargetEuroFilter;                                        // 0x0000(0x005C)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             InRawValue;                                              // 0x005C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x0068(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             SmoothedValue;                                           // 0x006C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.RotateAroundPivot
	 */
	struct UVRExpansionFunctionLibrary_RotateAroundPivot_Params
	{
	public:
		struct FRotator                                            RotationDelta;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             OriginalLocation;                                        // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            OriginalRotation;                                        // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             PivotPoint;                                              // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NewLocation;                                             // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            NewRotation;                                             // 0x003C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bUseOriginalYawOnly;                                     // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.ResetPeakLowPassFilter
	 */
	struct UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Params
	{
	public:
		struct FBPLowPassPeakFilter                                TargetPeakFilter;                                        // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.ResetEuroSmoothingFilter
	 */
	struct UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Params
	{
	public:
		struct FBPEuroLowPassFilter                                TargetEuroFilter;                                        // 0x0000(0x005C)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.NonAuthorityMinimumAreaRectangle
	 */
	struct UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     InVerts;                                                 // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector                                             SampleSurfaceNormal;                                     // 0x0018(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutRectCenter;                                           // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            OutRectRotation;                                         // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      OutSideLengthX;                                          // 0x003C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutSideLengthY;                                          // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDebugDraw;                                              // 0x0044(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.MatchesAnyTagsWithDirectParentTag
	 */
	struct UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Params
	{
	public:
		struct FGameplayTag                                        DirectParentTag;                                         // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               BaseContainer;                                           // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               OtherContainer;                                          // 0x0028(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeVector_NetQuantize100
	 */
	struct UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Params
	{
	public:
		struct FVector                                             InVector;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize100                              ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeVector_NetQuantize10
	 */
	struct UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Params
	{
	public:
		struct FVector                                             InVector;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize10                               ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeVector_NetQuantize
	 */
	struct UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Params
	{
	public:
		struct FVector                                             InVector;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize                                 ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeTransform_NetQuantize
	 */
	struct UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             Scale;                                                   // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2G5E[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform_NetQuantize                              ReturnValue;                                             // 0x0030(0x0030)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.LowPassFilter_RollingAverage
	 */
	struct UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Params
	{
	public:
		struct FVector                                             lastAverage;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             newSample;                                               // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             newAverage;                                              // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    numSamples;                                              // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.LowPassFilter_Exponential
	 */
	struct UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Params
	{
	public:
		struct FVector                                             lastAverage;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             newSample;                                               // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             newAverage;                                              // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      sampleFactor;                                            // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.IsInVREditorPreviewOrGame
	 */
	struct UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.IsInVREditorPreview
	 */
	struct UVRExpansionFunctionLibrary_IsInVREditorPreview_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetPeak_PeakLowPassFilter
	 */
	struct UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Params
	{
	public:
		struct FBPLowPassPeakFilter                                TargetPeakFilter;                                        // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetIsHMDWorn
	 */
	struct UVRExpansionFunctionLibrary_GetIsHMDWorn_Params
	{
	public:
		EBPHMDWornState                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetIsHMDConnected
	 */
	struct UVRExpansionFunctionLibrary_GetIsHMDConnected_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetIsActorMovable
	 */
	struct UVRExpansionFunctionLibrary_GetIsActorMovable_Params
	{
	public:
		class AActor*                                              ActorToCheck;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetHMDType
	 */
	struct UVRExpansionFunctionLibrary_GetHMDType_Params
	{
	public:
		EBPHMDDeviceType                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetHMDPureYaw
	 */
	struct UVRExpansionFunctionLibrary_GetHMDPureYaw_Params
	{
	public:
		struct FRotator                                            HMDRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FRotator                                            ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetHandFromMotionSourceName
	 */
	struct UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Params
	{
	public:
		class FName                                                MotionSource;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EControllerHand                                            hand;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetGripSlotInRangeByTypeName_Component
	 */
	struct UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Params
	{
	public:
		class FName                                                SlotType;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 Component;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldLocation;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxRange;                                                // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHadSlotInRange;                                         // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2ETO[0xF];                                   // 0x0021(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          SlotWorldTransform;                                      // 0x0030(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                SlotName;                                                // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGripMotionControllerComponent*                      QueryController;                                         // 0x0068(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetGripSlotInRangeByTypeName
	 */
	struct UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Params
	{
	public:
		class FName                                                SlotType;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldLocation;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxRange;                                                // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHadSlotInRange;                                         // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D1FO[0xF];                                   // 0x0021(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          SlotWorldTransform;                                      // 0x0030(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                SlotName;                                                // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGripMotionControllerComponent*                      QueryController;                                         // 0x0068(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetGameViewportClient
	 */
	struct UVRExpansionFunctionLibrary_GetGameViewportClient_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameViewportClient*                                 ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetFirstGameplayTagWithExactParent
	 */
	struct UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Params
	{
	public:
		struct FGameplayTag                                        DirectParentTag;                                         // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               BaseContainer;                                           // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        FoundTag;                                                // 0x0028(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.EqualEqual_FBPActorGripInformation
	 */
	struct UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Params
	{
	public:
		struct FBPActorGripInformation                             A;                                                       // 0x0000(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FBPActorGripInformation                             B;                                                       // 0x01E0(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x03C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_TransformToTransformNetQuantize
	 */
	struct UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Params
	{
	public:
		struct FTransform                                          InTransform;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform_NetQuantize                              ReturnValue;                                             // 0x0030(0x0030)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_GripPairToMotionController
	 */
	struct UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Params
	{
	public:
		struct FBPGripPair                                         GripPair;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UGripMotionControllerComponent*                      ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_GripPairToGripID
	 */
	struct UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Params
	{
	public:
		struct FBPGripPair                                         GripPair;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		unsigned char                                              ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_FVectorToFVectorNetQuantize100
	 */
	struct UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Params
	{
	public:
		struct FVector                                             InVector;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize100                              ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_FVectorToFVectorNetQuantize10
	 */
	struct UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Params
	{
	public:
		struct FVector                                             InVector;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize10                               ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_FVectorToFVectorNetQuantize
	 */
	struct UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Params
	{
	public:
		struct FVector                                             InVector;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize                                 ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.BreakTransform_NetQuantize
	 */
	struct UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Params
	{
	public:
		struct FTransform_NetQuantize                              InTransform;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x003C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             Scale;                                                   // 0x0048(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.BPQuat_FindBetween
	 */
	struct UVRExpansionFunctionLibrary_BPQuat_FindBetween_Params
	{
	public:
		struct FVector                                             Vec1;                                                    // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Vec2;                                                    // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            ReturnValue;                                             // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRExpansionFunctionLibrary.AddSceneComponentByClass
	 */
	struct UVRExpansionFunctionLibrary_AddSceneComponentByClass_Params
	{
	public:
		class UObject*                                             Outer;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Class;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          ComponentRelativeTransform;                              // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class USceneComponent*                                     ReturnValue;                                             // 0x0040(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGameViewportClient.EventWindowClosing
	 */
	struct UVRGameViewportClient_EventWindowClosing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GesturesDatabase.RecalculateGestures
	 */
	struct UGesturesDatabase_RecalculateGestures_Params
	{
	public:
		bool                                                       bScaleToDatabase;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GesturesDatabase.ImportSplineAsGesture
	 */
	struct UGesturesDatabase_ImportSplineAsGesture_Params
	{
	public:
		class USplineComponent*                                    HostSplineComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              GestureName;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bKeepSplineCurves;                                       // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7XZC[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      SegmentLen;                                              // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bScaleToDatabase;                                        // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.GesturesDatabase.FillSplineWithGesture
	 */
	struct UGesturesDatabase_FillSplineWithGesture_Params
	{
	public:
		struct FVRGesture                                          Gesture;                                                 // 0x0000(0x0058)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class USplineComponent*                                    SplineComponent;                                         // 0x0058(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCenterPointsOnSpline;                                   // 0x0060(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bScaleToBounds;                                          // 0x0061(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O6KH[0x2];                                   // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OptionalBounds;                                          // 0x0064(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseCurvedPoints;                                        // 0x0068(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFillInSplineMeshComponents;                             // 0x0069(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SMAX[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMesh*                                         Mesh;                                                    // 0x0070(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterial*                                           MeshMat;                                                 // 0x0078(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGestureComponent.SaveRecording
	 */
	struct UVRGestureComponent_SaveRecording_Params
	{
	public:
		struct FVRGesture                                          Recording;                                               // 0x0000(0x0058)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              RecordingName;                                           // 0x0058(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bScaleRecordingToDatabase;                               // 0x0068(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGestureComponent.RecalculateGestureSize
	 */
	struct UVRGestureComponent_RecalculateGestureSize_Params
	{
	public:
		struct FVRGesture                                          InputGesture;                                            // 0x0000(0x0058)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UGesturesDatabase*                                   GestureDB;                                               // 0x0058(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGestureComponent.OnGestureDetected
	 */
	struct UVRGestureComponent_OnGestureDetected_Params
	{
	public:
		unsigned char                                              GestureType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6QP6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              DetectedGestureName;                                     // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    DetectedGestureIndex;                                    // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XFAO[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGesturesDatabase*                                   GestureDataBase;                                         // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGestureComponent.EndRecording
	 */
	struct UVRGestureComponent_EndRecording_Params
	{
	public:
		struct FVRGesture                                          ReturnValue;                                             // 0x0000(0x0058)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGestureComponent.DrawDebugGesture
	 */
	struct UVRGestureComponent_DrawDebugGesture_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WRF2[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          StartTransform;                                          // 0x0010(0x0030)  (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVRGesture                                          GestureToDraw;                                           // 0x0040(0x0058)  (Parm, NativeAccessSpecifierPublic)
		struct FColor                                              Color;                                                   // 0x0098(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPersistentLines;                                        // 0x009C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              DepthPriority;                                           // 0x009D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BAPL[0x2];                                   // 0x009E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      LifeTime;                                                // 0x00A0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Thickness;                                               // 0x00A4(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGestureComponent.ClearRecording
	 */
	struct UVRGestureComponent_ClearRecording_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VRGestureComponent.BeginRecording
	 */
	struct UVRGestureComponent_BeginRecording_Params
	{
	public:
		bool                                                       bRunDetection;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFlattenGesture;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDrawGesture;                                            // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDrawAsSpline;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SamplingHTZ;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SampleBufferSize;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ClampingTolerance;                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGlobalSettings.SaveVirtualStockGlobalSettings
	 */
	struct UVRGlobalSettings_SaveVirtualStockGlobalSettings_Params
	{
	public:
		struct FBPVirtualStockSettings                             NewVirtualStockSettings;                                 // 0x0000(0x0190)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGlobalSettings.SaveControllerProfiles
	 */
	struct UVRGlobalSettings_SaveControllerProfiles_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VRGlobalSettings.OverwriteControllerProfile
	 */
	struct UVRGlobalSettings_OverwriteControllerProfile_Params
	{
	public:
		struct FBPVRControllerProfile                              OverwritingProfile;                                      // 0x0000(0x0080)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bSaveOutToConfig;                                        // 0x0080(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGlobalSettings.LoadControllerProfileByName
	 */
	struct UVRGlobalSettings_LoadControllerProfileByName_Params
	{
	public:
		class FName                                                ControllerProfileName;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSetAsCurrentProfile;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGlobalSettings.LoadControllerProfile
	 */
	struct UVRGlobalSettings_LoadControllerProfile_Params
	{
	public:
		struct FBPVRControllerProfile                              ControllerProfile;                                       // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bSetAsCurrentProfile;                                    // 0x0080(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0081(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGlobalSettings.IsGlobalLerpEnabled
	 */
	struct UVRGlobalSettings_IsGlobalLerpEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGlobalSettings.GetVirtualStockGlobalSettings
	 */
	struct UVRGlobalSettings_GetVirtualStockGlobalSettings_Params
	{
	public:
		struct FBPVirtualStockSettings                             OutVirtualStockSettings;                                 // 0x0000(0x0190)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGlobalSettings.GetMeleeSurfaceGlobalSettings
	 */
	struct UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Params
	{
	public:
		TArray<struct FBPHitSurfaceProperties>                     OutMeleeSurfaceSettings;                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGlobalSettings.GetCurrentProfileName
	 */
	struct UVRGlobalSettings_GetCurrentProfileName_Params
	{
	public:
		bool                                                       bHadLoadedProfile;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9WGX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGlobalSettings.GetCurrentProfile
	 */
	struct UVRGlobalSettings_GetCurrentProfile_Params
	{
	public:
		bool                                                       bHadLoadedProfile;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AV6E[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPVRControllerProfile                              ReturnValue;                                             // 0x0010(0x0080)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGlobalSettings.GetControllerProfiles
	 */
	struct UVRGlobalSettings_GetControllerProfiles_Params
	{
	public:
		TArray<struct FBPVRControllerProfile>                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGlobalSettings.GetControllerProfile
	 */
	struct UVRGlobalSettings_GetControllerProfile_Params
	{
	public:
		class FName                                                ControllerProfileName;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_W67D[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPVRControllerProfile                              OutProfile;                                              // 0x0010(0x0080)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGlobalSettings.DeleteControllerProfile
	 */
	struct UVRGlobalSettings_DeleteControllerProfile_Params
	{
	public:
		class FName                                                ControllerProfileName;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSaveOutToConfig;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGlobalSettings.AdjustTransformByGivenControllerProfile
	 */
	struct UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Params
	{
	public:
		struct FBPVRControllerProfile                              ControllerProfile;                                       // 0x0000(0x0080)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          SocketTransform;                                         // 0x0080(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bIsRightHand;                                            // 0x00B0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q7Y0[0xF];                                   // 0x00B1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x00C0(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGlobalSettings.AdjustTransformByControllerProfile
	 */
	struct UVRGlobalSettings_AdjustTransformByControllerProfile_Params
	{
	public:
		class FName                                                OptionalControllerProfileName;                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UHDH[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          SocketTransform;                                         // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bIsRightHand;                                            // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WCVP[0xF];                                   // 0x0041(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0050(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGlobalSettings.AddControllerProfile
	 */
	struct UVRGlobalSettings_AddControllerProfile_Params
	{
	public:
		struct FBPVRControllerProfile                              NewProfile;                                              // 0x0000(0x0080)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bSaveOutToConfig;                                        // 0x0080(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.TickGrip
	 */
	struct UVRGripInterface_TickGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YE5Z[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		float                                                      DeltaTime;                                               // 0x01F0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.TeleportBehavior
	 */
	struct UVRGripInterface_TeleportBehavior_Params
	{
	public:
		EGripInterfaceTeleportBehavior                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.SimulateOnDrop
	 */
	struct UVRGripInterface_SimulateOnDrop_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.SetHeld
	 */
	struct UVRGripInterface_SetHeld_Params
	{
	public:
		class UGripMotionControllerComponent*                      HoldingController;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              GripID;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsHeld;                                                 // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.SecondaryGripType
	 */
	struct UVRGripInterface_SecondaryGripType_Params
	{
	public:
		ESecondaryGripType                                         ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.RequestsSocketing
	 */
	struct UVRGripInterface_RequestsSocketing_Params
	{
	public:
		class USceneComponent*                                     ParentToSocketTo;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OptionalSocketName;                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform_NetQuantize                              RelativeTransform;                                       // 0x0010(0x0030)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.OnUsed
	 */
	struct UVRGripInterface_OnUsed_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.OnSecondaryUsed
	 */
	struct UVRGripInterface_OnSecondaryUsed_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.OnSecondaryGripRelease
	 */
	struct UVRGripInterface_OnSecondaryGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      GripOwningController;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     ReleasingSecondaryGripComponent;                         // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.OnSecondaryGrip
	 */
	struct UVRGripInterface_OnSecondaryGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GripOwningController;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     SecondaryGripComponent;                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.OnInput
	 */
	struct UVRGripInterface_OnInput_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EInputEvent                                                KeyEvent;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.OnGripRelease
	 */
	struct UVRGripInterface_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ET20[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.OnGrip
	 */
	struct UVRGripInterface_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EPN2[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.OnEndUsed
	 */
	struct UVRGripInterface_OnEndUsed_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.OnEndSecondaryUsed
	 */
	struct UVRGripInterface_OnEndSecondaryUsed_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.OnChildGripRelease
	 */
	struct UVRGripInterface_OnChildGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MOXJ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.OnChildGrip
	 */
	struct UVRGripInterface_OnChildGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DBVH[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.IsHeld
	 */
	struct UVRGripInterface_IsHeld_Params
	{
	public:
		TArray<struct FBPGripPair>                                 HoldingControllers;                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bIsHeld;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.GripMovementReplicationType
	 */
	struct UVRGripInterface_GripMovementReplicationType_Params
	{
	public:
		EGripMovementReplicationSettings                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.GripLateUpdateSetting
	 */
	struct UVRGripInterface_GripLateUpdateSetting_Params
	{
	public:
		EGripLateUpdateSettings                                    ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.GripBreakDistance
	 */
	struct UVRGripInterface_GripBreakDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.GetPrimaryGripType
	 */
	struct UVRGripInterface_GetPrimaryGripType_Params
	{
	public:
		bool                                                       bIsSlot;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGripCollisionType                                         ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.GetGripStiffnessAndDamping
	 */
	struct UVRGripInterface_GetGripStiffnessAndDamping_Params
	{
	public:
		float                                                      GripStiffnessOut;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      GripDampingOut;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.GetGripScripts
	 */
	struct UVRGripInterface_GetGripScripts_Params
	{
	public:
		TArray<class UVRGripScriptBase*>                           ArrayReference;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.DenyGripping
	 */
	struct UVRGripInterface_DenyGripping_Params
	{
	public:
		class UGripMotionControllerComponent*                      GripInitiator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.ClosestGripSlotInRange
	 */
	struct UVRGripInterface_ClosestGripSlotInRange_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSecondarySlot;                                          // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHadSlotInRange;                                         // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2UE2[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          SlotWorldTransform;                                      // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FName                                                SlotName;                                                // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGripMotionControllerComponent*                      CallingController;                                       // 0x0048(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverridePrefix;                                          // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.AllowsMultipleGrips
	 */
	struct UVRGripInterface_AllowsMultipleGrips_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripInterface.AdvancedGripSettings
	 */
	struct UVRGripInterface_AdvancedGripSettings_Params
	{
	public:
		struct FBPAdvGripSettings                                  ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRGripScriptBaseBP.ReceiveTick
	 */
	struct UVRGripScriptBaseBP_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_OnGripInit
	 */
	struct UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Params
	{
	public:
		class USceneComponent*                                     InteractibleComp;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JYYV[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FBPVRInteractibleBaseData                           BaseDataToInit;                                          // 0x01F0(0x0090)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetThresholdSnappedValue
	 */
	struct UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Params
	{
	public:
		float                                                      ValueToSnap;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SnapIncrement;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SnapThreshold;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetCurrentRelativeTransform
	 */
	struct UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Params
	{
	public:
		class USceneComponent*                                     SceneComponentToCheck;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z5KL[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPVRInteractibleBaseData                           BaseData;                                                // 0x0010(0x0090)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          ReturnValue;                                             // 0x00A0(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetCurrentParentTransform
	 */
	struct UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Params
	{
	public:
		class USceneComponent*                                     SceneComponentToCheck;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UEAF[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetAngleAroundAxisDelta
	 */
	struct UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Params
	{
	public:
		EVRInteractibleAxis                                        AxisToCalc;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KLSM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CurInteractorLocation;                                   // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InitialAngle;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetAngleAroundAxis
	 */
	struct UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Params
	{
	public:
		EVRInteractibleAxis                                        AxisToCalc;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6231[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CurInteractorLocation;                                   // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_BeginPlayInit
	 */
	struct UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Params
	{
	public:
		class USceneComponent*                                     InteractibleComp;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CZKI[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPVRInteractibleBaseData                           BaseDataToInit;                                          // 0x0010(0x0090)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRLeverComponent.SetLeverAngle
	 */
	struct UVRLeverComponent_SetLeverAngle_Params
	{
	public:
		float                                                      NewAngle;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             DualAxisForwardVector;                                   // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowThrowingEvents;                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRLeverComponent.SetIsLocked
	 */
	struct UVRLeverComponent_SetIsLocked_Params
	{
	public:
		bool                                                       bNewLockedState;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRLeverComponent.SetGripPriority
	 */
	struct UVRLeverComponent_SetGripPriority_Params
	{
	public:
		int32_t                                                    NewGripPriority;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRLeverComponent.ResetInitialLeverLocation
	 */
	struct UVRLeverComponent_ResetInitialLeverLocation_Params
	{
	public:
		bool                                                       bAllowThrowingEvents;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRLeverComponent.ReceiveLeverStateChanged
	 */
	struct UVRLeverComponent_ReceiveLeverStateChanged_Params
	{
	public:
		bool                                                       LeverStatus;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EVRInteractibleLeverEventType                              LeverStatusType;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YKN8[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      LeverAngleAtTime;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FullLeverAngleAtTime;                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRLeverComponent.ReceiveLeverFinishedLerping
	 */
	struct UVRLeverComponent_ReceiveLeverFinishedLerping_Params
	{
	public:
		float                                                      LeverFinalAngle;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRLeverComponent.ReCalculateCurrentAngle
	 */
	struct UVRLeverComponent_ReCalculateCurrentAngle_Params
	{
	public:
		bool                                                       bAllowThrowingEvents;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M7HX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRLeverComponent.OnRep_InitialRelativeTransform
	 */
	struct UVRLeverComponent_OnRep_InitialRelativeTransform_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VRLogComponent.SetConsoleText
	 */
	struct UVRLogComponent_SetConsoleText_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRLogComponent.SendKeyEventToConsole
	 */
	struct UVRLogComponent_SendKeyEventToConsole_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EInputEvent                                                KeyEvent;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRLogComponent.DrawConsoleToRenderTarget2D
	 */
	struct UVRLogComponent_DrawConsoleToRenderTarget2D_Params
	{
	public:
		EBPVRConsoleDrawType                                       DrawType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WAR1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTextureRenderTarget2D*                              Texture;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ScrollOffset;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceDraw;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRLogComponent.AppendTextToConsole
	 */
	struct UVRLogComponent_AppendTextToConsole_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bReturnAtEnd;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRMountComponent.SetGripPriority
	 */
	struct UVRMountComponent_SetGripPriority_Params
	{
	public:
		int32_t                                                    NewGripPriority;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRMountComponent.ResetInitialMountLocation
	 */
	struct UVRMountComponent_ResetInitialMountLocation_Params
	{	};

	/**
	 * Function VRExpansionPlugin.RenderTargetReplicationProxy.SendNextDataBlob
	 */
	struct ARenderTargetReplicationProxy_SendNextDataBlob_Params
	{	};

	/**
	 * Function VRExpansionPlugin.RenderTargetReplicationProxy.SendLocalDrawOperations
	 */
	struct ARenderTargetReplicationProxy_SendLocalDrawOperations_Params
	{
	public:
		TArray<struct FRenderManagerOperation>                     LocalRenderOperationStoreList;                           // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.RenderTargetReplicationProxy.ReceiveTextureBlob
	 */
	struct ARenderTargetReplicationProxy_ReceiveTextureBlob_Params
	{
	public:
		TArray<unsigned char>                                      TextureBlob;                                             // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    LocationInData;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    BlobCount;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.RenderTargetReplicationProxy.ReceiveTexture
	 */
	struct ARenderTargetReplicationProxy_ReceiveTexture_Params
	{
	public:
		struct FBPVRReplicatedTextureStore                         TextureData;                                             // 0x0000(0x0030)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.RenderTargetReplicationProxy.OnRep_Manager
	 */
	struct ARenderTargetReplicationProxy_OnRep_Manager_Params
	{	};

	/**
	 * Function VRExpansionPlugin.RenderTargetReplicationProxy.InitTextureSend
	 */
	struct ARenderTargetReplicationProxy_InitTextureSend_Params
	{
	public:
		int32_t                                                    Width;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Height;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TotalDataCount;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    BlobCount;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPixelFormat                                               PixelFormat;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsZipped;                                               // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.RenderTargetReplicationProxy.Ack_ReceiveTextureBlob
	 */
	struct ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Params
	{
	public:
		int32_t                                                    BlobCount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.RenderTargetReplicationProxy.Ack_InitTextureSend
	 */
	struct ARenderTargetReplicationProxy_Ack_InitTextureSend_Params
	{
	public:
		int32_t                                                    TotalDataCount;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRRenderTargetManager.SendDrawOperations
	 */
	struct UVRRenderTargetManager_SendDrawOperations_Params
	{
	public:
		TArray<struct FRenderManagerOperation>                     RenderOperationStoreList;                                // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRRenderTargetManager.GenerateTrisFromBoxPlaneIntersection
	 */
	struct UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Params
	{
	public:
		class UPrimitiveComponent*                                 PrimToBoxCheck;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QX2A[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          WorldTransformOfPlane;                                   // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPlane                                              LocalProjectionPlane;                                    // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           PlaneSize;                                               // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                              UVColor;                                                 // 0x0058(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_N1RC[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FCanvasUVTri>                                OutTris;                                                 // 0x0060(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRRenderTargetManager.DrawPoll
	 */
	struct UVRRenderTargetManager_DrawPoll_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VRRenderTargetManager.AddTextureDrawOperation
	 */
	struct UVRRenderTargetManager_AddTextureDrawOperation_Params
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2D*                                          TextureToDisplay;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRRenderTargetManager.AddMaterialTrianglesDrawOperation
	 */
	struct UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Params
	{
	public:
		TArray<struct FCanvasUVTri>                                Tris;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class UMaterial*                                           Material;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRRenderTargetManager.AddLineDrawOperation
	 */
	struct UVRRenderTargetManager_AddLineDrawOperation_Params
	{
	public:
		struct FVector2D                                           Point1;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           Point2;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                              Color;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Thickness;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRRootComponent.SetTrackingPaused
	 */
	struct UVRRootComponent_SetTrackingPaused_Params
	{
	public:
		bool                                                       bPaused;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRRootComponent.SetCapsuleSizeVR
	 */
	struct UVRRootComponent_SetCapsuleSizeVR_Params
	{
	public:
		float                                                      NewRadius;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewHalfHeight;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUpdateOverlaps;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRRootComponent.SetCapsuleHalfHeightVR
	 */
	struct UVRRootComponent_SetCapsuleHalfHeightVR_Params
	{
	public:
		float                                                      HalfHeight;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUpdateOverlaps;                                         // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRSliderComponent.SetSplineComponentToFollow
	 */
	struct UVRSliderComponent_SetSplineComponentToFollow_Params
	{
	public:
		class USplineComponent*                                    SplineToFollow;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRSliderComponent.SetSliderProgress
	 */
	struct UVRSliderComponent_SetSliderProgress_Params
	{
	public:
		float                                                      NewSliderProgress;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRSliderComponent.SetIsLocked
	 */
	struct UVRSliderComponent_SetIsLocked_Params
	{
	public:
		bool                                                       bNewLockedState;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRSliderComponent.SetGripPriority
	 */
	struct UVRSliderComponent_SetGripPriority_Params
	{
	public:
		int32_t                                                    NewGripPriority;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRSliderComponent.ResetInitialSliderLocation
	 */
	struct UVRSliderComponent_ResetInitialSliderLocation_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VRSliderComponent.ReceiveSliderHitPoint
	 */
	struct UVRSliderComponent_ReceiveSliderHitPoint_Params
	{
	public:
		float                                                      SliderProgressPoint;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRSliderComponent.ReceiveSliderFinishedLerping
	 */
	struct UVRSliderComponent_ReceiveSliderFinishedLerping_Params
	{
	public:
		float                                                      FinalProgress;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRSliderComponent.OnRep_InitialRelativeTransform
	 */
	struct UVRSliderComponent_OnRep_InitialRelativeTransform_Params
	{	};

	/**
	 * Function VRExpansionPlugin.VRSliderComponent.CalculateSliderProgress
	 */
	struct UVRSliderComponent_CalculateSliderProgress_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRStereoWidgetRenderComponent.SetWidgetAndInit
	 */
	struct UVRStereoWidgetRenderComponent_SetWidgetAndInit_Params
	{
	public:
		class UClass*                                              NewWidgetClass;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRStereoWidgetComponent.SetPriority
	 */
	struct UVRStereoWidgetComponent_SetPriority_Params
	{
	public:
		int32_t                                                    InPriority;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRStereoWidgetComponent.GetPriority
	 */
	struct UVRStereoWidgetComponent_GetPriority_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRTrackedParentInterface.SetTrackedParent
	 */
	struct UVRTrackedParentInterface_SetTrackedParent_Params
	{
	public:
		class UPrimitiveComponent*                                 NewParentComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      WaistRadius;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPVRWaistTrackingMode                                     WaistTrackingMode;                                       // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRVehiclePawn.SetBindToInput
	 */
	struct AVRVehiclePawn_SetBindToInput_Params
	{
	public:
		class AController*                                         CController;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bBindToInput;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRVehiclePawn.ForceSecondaryPossession
	 */
	struct AVRVehiclePawn_ForceSecondaryPossession_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRWheeledVehicle.SetOverrideController
	 */
	struct AVRWheeledVehicle_SetOverrideController_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRWheeledVehicle.SetBindToInput
	 */
	struct AVRWheeledVehicle_SetBindToInput_Params
	{
	public:
		class AController*                                         CController;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bBindToInput;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function VRExpansionPlugin.VRWheeledVehicle.ForceSecondaryPossession
	 */
	struct AVRWheeledVehicle_ForceSecondaryPossession_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
