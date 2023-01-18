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
	 * Class VRExpansionPlugin.BucketUpdateSubsystem
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UBucketUpdateSubsystem : public UEngineSubsystem
	{
	public:
		unsigned char                                              UnknownData_JH4A[0x60];                                  // 0x0030(0x0060) MISSED OFFSET (PADDING)

	public:
		bool RemoveObjectFromBucketByFunctionName(class UObject* InObject, const class FName& FunctionName);
		bool RemoveObjectFromBucketByEvent(const class FScriptDelegate& Delegate);
		bool RemoveObjectFromAllBuckets(class UObject* InObject);
		bool K2_AddObjectToBucket(int32_t UpdateHTZ, class UObject* InObject, const class FName& FunctionName);
		bool K2_AddObjectEventToBucket(const class FScriptDelegate& Delegate, int32_t UpdateHTZ);
		bool IsObjectFunctionInBucket(class UObject* InObject, const class FName& FunctionName);
		bool IsActive();
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.GripMotionControllerComponent
	 * Size -> 0x04F0 (FullSize[0x0A30] - InheritedSize[0x0540])
	 */
	class UGripMotionControllerComponent : public UMotionControllerComponent
	{
	public:
		unsigned char                                              UnknownData_XOOD[0x28];                                  // 0x0540(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DefaultGripScriptClass;                                  // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVRGripScriptBase*                                   DefaultGripScript;                                       // 0x0570(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLerpToHandFinished;                                    // 0x0578(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bOffsetByHMD;                                            // 0x0588(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bConstrainToPivot;                                       // 0x0589(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GXHO[0x2];                                   // 0x058A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AVRBaseCharacter>                     AttachChar;                                              // 0x058C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2C6G[0x3C];                                  // 0x0594(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSmoothHandTracking;                                     // 0x05D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9R0Q[0x1];                                   // 0x05D1(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSmoothWithEuroLowPassFunction;                          // 0x05D2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VZAY[0x1];                                   // 0x05D3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SmoothingSpeed;                                          // 0x05D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4USK[0x8];                                   // 0x05D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPEuroLowPassFilterTrans                           EuroSmoothingParams;                                     // 0x05E0(0x0150) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0PU1[0x30];                                  // 0x0730(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EVRVelocityType                                            VelocityCalculationType;                                 // 0x0760(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSampleVelocityInWorldSpace;                             // 0x0761(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LP6Q[0x2];                                   // 0x0762(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VelocitySamples;                                         // 0x0764(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VV6K[0x20];                                  // 0x0768(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bOffsetByControllerProfile;                              // 0x0788(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KBTE[0x37];                                  // 0x0789(0x0037) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnControllerProfileTransformChanged;                     // 0x07C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGripOutOfRange;                                        // 0x07D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FVector                                             LastGripRootLocation;                                    // 0x07E0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHandDistanceInGrip;                                   // 0x07EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          LastHandOffsetTransform;                                 // 0x07F0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHasSecondControllerAttachment;                          // 0x0820(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OOXO[0x7];                                   // 0x0821(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGripMotionControllerComponent*                      SecondController;                                        // 0x0828(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLerpGrip;                                               // 0x0830(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanUseDistanceHandLimits;                               // 0x0831(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JO4Z[0x86];                                  // 0x0832(0x0086) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTrackingChanged;                                       // 0x08B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGrippedObject;                                         // 0x08C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDroppedObject;                                         // 0x08D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTeleportedGrips;                                       // 0x08E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSecondaryGripAdded;                                    // 0x08F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSecondaryGripRemoved;                                  // 0x0908(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGripTransformChanged;                                  // 0x0918(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TWeakObjectPtr<class USceneComponent>                      CustomPivotComponent;                                    // 0x0928(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CustomPivotComponentSocketName;                          // 0x0930(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipPivotTransformAdjustment;                           // 0x0938(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ZLO[0x7];                                   // 0x0939(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBPActorGripInformation>                     GrippedObjects;                                          // 0x0940(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FBPActorGripInformation>                     LocallyGrippedObjects;                                   // 0x0950(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FBPActorGripInformation>                     LocalTransactionBuffer;                                  // 0x0960(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bAlwaysSendTickGrip;                                     // 0x0970(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SKWU[0x7];                                   // 0x0971(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPrimitiveComponent*>                         AdditionalLateUpdateComponents;                          // 0x0978(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FBPVRComponentPosRep                                ReplicatedControllerTransform;                           // 0x0988(0x001C) Edit, Net, DisableEditOnInstance, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QBNA[0x1C];                                  // 0x09A4(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ControllerNetUpdateRate;                                 // 0x09C0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EDGU[0x4];                                   // 0x09C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSmoothReplicatedMotion;                                 // 0x09C8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplicateWithoutTracking;                               // 0x09C9(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E0AW[0x1E];                                  // 0x09CA(0x001E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     ObjectsWaitingForSocketUpdate;                           // 0x09E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_988D[0x1];                                   // 0x09F8(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseWithoutTracking;                                     // 0x09F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BDPT[0x36];                                  // 0x09FA(0x0036) MISSED OFFSET (PADDING)

	public:
		void UpdatePhysicsHandleTransform_BP(const struct FBPActorGripInformation& GrippedActor, const struct FTransform& NewTransform);
		bool UpdatePhysicsHandle_BP(const struct FBPActorGripInformation& Grip, bool bFullyRecreate);
		void TeleportMoveGrips(bool bTeleportPhysicsGrips, bool bIsForPostTeleport);
		bool TeleportMoveGrippedComponent(class UPrimitiveComponent* ComponentToMove, bool bTeleportPhysicsGrips);
		bool TeleportMoveGrippedActor(class AActor* GrippedActorToMove, bool bTeleportPhysicsGrips);
		bool TeleportMoveGrip(struct FBPActorGripInformation* Grip, bool bTeleportPhysicsGrips, bool bIsForPostTeleport);
		bool SetUpPhysicsHandle_BP(const struct FBPActorGripInformation& Grip);
		void SetSocketTransform(class UObject* ObjectToSocket, const struct FTransform_NetQuantize& RelativeTransformToParent);
		bool SetPhysicsHandleSettings(const struct FBPActorGripInformation& Grip, const struct FBPAdvancedPhysicsHandleSettings& PhysicsHandleSettingsIn);
		void SetPausedTransform(const struct FBPActorGripInformation& Grip, const struct FTransform& PausedTransform, bool bTeleport);
		void SetGripStiffnessAndDamping(const struct FBPActorGripInformation& Grip, EBPVRResultSwitch* Result, float NewStiffness, float NewDamping, bool bAlsoSetAngularValues, float OptionalAngularStiffness, float OptionalAngularDamping);
		void SetGripRelativeTransform(const struct FBPActorGripInformation& Grip, EBPVRResultSwitch* Result, const struct FTransform& NewRelativeTransform);
		void SetGripPaused(const struct FBPActorGripInformation& Grip, EBPVRResultSwitch* Result, bool bIsPaused, bool bNoConstraintWhenPaused);
		void SetGripLateUpdateSetting(const struct FBPActorGripInformation& Grip, EBPVRResultSwitch* Result, EGripLateUpdateSettings NewGripLateUpdateSetting);
		void SetGripHybridLock(const struct FBPActorGripInformation& Grip, EBPVRResultSwitch* Result, bool bIsLocked);
		void SetGripCollisionType(const struct FBPActorGripInformation& Grip, EBPVRResultSwitch* Result, EGripCollisionType NewGripCollisionType);
		void SetGripAdditionTransform(const struct FBPActorGripInformation& Grip, EBPVRResultSwitch* Result, const struct FTransform& NewAdditionTransform, bool bMakeGripRelative);
		void SetCustomPivotComponent(class USceneComponent* NewCustomPivotComponent, const class FName& PivotSocketName);
		void Server_SendControllerTransform(const struct FBPVRComponentPosRep& NewTransform);
		void Server_NotifySecondaryAttachmentChanged_Retain(unsigned char GripID, const struct FBPSecondaryGripInfo& SecondaryGripInfo, const struct FTransform_NetQuantize& NewRelativeTransform);
		void Server_NotifySecondaryAttachmentChanged(unsigned char GripID, const struct FBPSecondaryGripInfo& SecondaryGripInfo);
		void Server_NotifyLocalGripRemoved(unsigned char GripID, const struct FTransform_NetQuantize& TransformAtDrop, const struct FVector_NetQuantize100& AngularVelocity, const struct FVector_NetQuantize100& LinearVelocity);
		void Server_NotifyLocalGripAddedOrChanged(const struct FBPActorGripInformation& newGrip);
		void Server_NotifyHandledTransaction(unsigned char GripID);
		void Server_NotifyDropAndSocketGrip(unsigned char GripID, class USceneComponent* SocketingParent, const class FName& OptionalSocketName, const struct FTransform_NetQuantize& RelativeTransformToParent, bool bWeldBodies);
		bool RemoveSecondaryAttachmentPoint(class UObject* GrippedObjectToRemoveAttachment, float LerpToTime);
		bool RemoveSecondaryAttachmentFromGripByID(unsigned char GripID, float LerpToTime);
		bool RemoveSecondaryAttachmentFromGrip(const struct FBPActorGripInformation& GripToRemoveAttachment, float LerpToTime);
		void PostTeleportMoveGrippedObjects();
		void OnRep_ReplicatedControllerTransform();
		void OnRep_LocalTransaction(TArray<struct FBPActorGripInformation> OriginalArrayState);
		void OnRep_LocallyGrippedObjects(TArray<struct FBPActorGripInformation> OriginalArrayState);
		void OnRep_GrippedObjects(TArray<struct FBPActorGripInformation> OriginalArrayState);
		void NotifyDropAndSocket(const struct FBPActorGripInformation& NewDrop, class USceneComponent* SocketingParent, const class FName& OptionalSocketName, const struct FTransform_NetQuantize& RelativeTransformToParent, bool bWeldBodies);
		void NotifyDrop(const struct FBPActorGripInformation& NewDrop, bool bSimulate);
		void NewControllerProfileLoaded();
		bool HasGrippedObjects();
		bool GripObjectByInterface(class UObject* ObjectToGrip, const struct FTransform& WorldOffset, bool bWorldOffsetIsRelative, const class FName& OptionalBoneToGripName, const class FName& OptionalSnapToSocketName, bool bIsSlotGrip);
		bool GripObject(class UObject* ObjectToGrip, const struct FTransform& WorldOffset, bool bWorldOffsetIsRelative, const class FName& OptionalSnapToSocketName, const class FName& OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip);
		bool GripControllerIsTracked();
		bool GripComponent(class UPrimitiveComponent* ComponentToGrip, const struct FTransform& WorldOffset, bool bWorldOffsetIsRelative, const class FName& OptionalSnapToSocketName, const class FName& OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip);
		bool GripActor(class AActor* ActorToGrip, const struct FTransform& WorldOffset, bool bWorldOffsetIsRelative, const class FName& OptionalSnapToSocketName, const class FName& OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip);
		struct FTransform GetPivotTransform_BP();
		struct FVector GetPivotLocation_BP();
		void GetPhysicsVelocities(const struct FBPActorGripInformation& Grip, struct FVector* AngularVelocity, struct FVector* LinearVelocity);
		bool GetPhysicsHandleSettings(const struct FBPActorGripInformation& Grip, struct FBPAdvancedPhysicsHandleSettings* PhysicsHandleSettingsOut);
		bool GetPhysicsConstraintForce(const struct FBPActorGripInformation& Grip, struct FVector* AngularForce, struct FVector* LinearForce);
		bool GetIsSecondaryAttachment(class USceneComponent* ComponentToCheck, struct FBPActorGripInformation* Grip);
		bool GetIsObjectHeld(class UObject* ObjectToCheck);
		bool GetIsHeld(class AActor* ActorToCheck);
		bool GetIsComponentHeld(class UPrimitiveComponent* ComponentToCheck);
		void GetHandType(EControllerHand* hand);
		void GetGrippedObjects(TArray<class UObject*>* GrippedObjectsArray);
		void GetGrippedComponents(TArray<class UPrimitiveComponent*>* GrippedComponentsArray);
		void GetGrippedActors(TArray<class AActor*>* GrippedActorArray);
		void GetGripMass(const struct FBPActorGripInformation& Grip, float* Mass);
		bool GetGripDistance_BP(struct FBPActorGripInformation* Grip, const struct FVector& ExpectedLocation, float* CurrentDistance);
		void GetGripByObject(struct FBPActorGripInformation* Grip, class UObject* ObjectToLookForGrip, EBPVRResultSwitch* Result);
		void GetGripByID(struct FBPActorGripInformation* Grip, unsigned char IDToLookForGrip, EBPVRResultSwitch* Result);
		void GetGripByComponent(struct FBPActorGripInformation* Grip, class UPrimitiveComponent* ComponentToLookForGrip, EBPVRResultSwitch* Result);
		void GetGripByActor(struct FBPActorGripInformation* Grip, class AActor* ActorToLookForGrip, EBPVRResultSwitch* Result);
		void GetControllerDeviceID(struct FXRDeviceId* DeviceID, EBPVRResultSwitch* Result, bool bCheckOpenVROnly);
		int32_t GetAllGripsNumber();
		void GetAllGrips(TArray<struct FBPActorGripInformation>* GripArray);
		bool DropObjectByInterface(class UObject* ObjectToDrop, unsigned char GripIDToDrop, const struct FVector& OptionalAngularVelocity, const struct FVector& OptionalLinearVelocity);
		bool DropObject(class UObject* ObjectToDrop, unsigned char GripIDToDrop, bool bSimulate, const struct FVector& OptionalAngularVelocity, const struct FVector& OptionalLinearVelocity);
		bool DropGrip(const struct FBPActorGripInformation& Grip, bool bSimulate, const struct FVector& OptionalAngularVelocity, const struct FVector& OptionalLinearVelocity);
		bool DropComponent(class UPrimitiveComponent* ComponentToDrop, bool bSimulate, const struct FVector& OptionalAngularVelocity, const struct FVector& OptionalLinearVelocity);
		bool DropAndSocketObject(const struct FTransform_NetQuantize& RelativeTransformToParent, class UObject* ObjectToDrop, unsigned char GripIDToDrop, class USceneComponent* SocketingParent, const class FName& OptionalSocketName, bool bWeldBodies);
		bool DropAndSocketGrip(const struct FBPActorGripInformation& GripToDrop, class USceneComponent* SocketingParent, const class FName& OptionalSocketName, const struct FTransform_NetQuantize& RelativeTransformToParent, bool bWeldBodies);
		bool DropActor(class AActor* ActorToDrop, bool bSimulate, const struct FVector& OptionalAngularVelocity, const struct FVector& OptionalLinearVelocity);
		bool DestroyPhysicsHandle_BP(const struct FBPActorGripInformation& Grip);
		struct FTransform CreateGripRelativeAdditionTransform_BP(const struct FBPActorGripInformation& GripToSample, const struct FTransform& AdditionTransform, bool bGripRelative);
		struct FTransform ConvertToGripRelativeTransform(const struct FTransform& GrippedActorTransform, const struct FTransform& InTransform);
		struct FTransform ConvertToControllerRelativeTransform(const struct FTransform& InTransform);
		void Client_NotifyInvalidLocalGrip(class UObject* LocallyGrippedObject, unsigned char GripID);
		void CancelGlobalLerpToHand(unsigned char GripID);
		bool BP_IsLocallyControlled();
		bool BP_HasGripMovementAuthority(const struct FBPActorGripInformation& Grip);
		bool BP_HasGripAuthorityForObject(class UObject* ObjToCheck);
		bool BP_HasGripAuthority(const struct FBPActorGripInformation& Grip);
		bool AddSecondaryAttachmentToGripByID(unsigned char GripID, class USceneComponent* SecondaryPointComponent, const struct FTransform& OriginalTransform, bool bTransformIsAlreadyRelative, float LerpToTime, bool bIsSlotGrip, const class FName& SecondarySlotName);
		bool AddSecondaryAttachmentToGrip(const struct FBPActorGripInformation& GripToAddAttachment, class USceneComponent* SecondaryPointComponent, const struct FTransform& OriginalTransform, bool bTransformIsAlreadyRelative, float LerpToTime, bool bIsSlotGrip, const class FName& SecondarySlotName);
		bool AddSecondaryAttachmentPoint(class UObject* GrippedObjectToAddAttachment, class USceneComponent* SecondaryPointComponent, const struct FTransform& OriginalTransform, bool bTransformIsAlreadyRelative, float LerpToTime, bool bIsSlotGrip, const class FName& SecondarySlotName);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.GrippableActor
	 * Size -> 0x0180 (FullSize[0x0400] - InheritedSize[0x0280])
	 */
	class AGrippableActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_478S[0x10];                                  // 0x0280(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRepAttachmentWithWeld                              AttachmentWeldReplication;                               // 0x0290(0x0048) Net, RepNotify, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UVRGripScriptBase*>                           GripLogicScripts;                                        // 0x02D8(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGripped;                                               // 0x02E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDropped;                                               // 0x02F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSecondaryGripAdded;                                    // 0x0308(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSecondaryGripRemoved;                                  // 0x0318(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O73S[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVRClientAuthReplicationData                        ClientAuthReplicationData;                               // 0x0330(0x0050) Edit, BlueprintVisible, Net, NoDestructor, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0380(0x0020) Edit, BlueprintVisible, Net, NativeAccessSpecifierPublic
		bool                                                       bAllowIgnoringAttachOnOwner;                             // 0x03A0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRepGripSettingsAndGameplayTags;                         // 0x03A1(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D3AQ[0x6];                                   // 0x03A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPInterfaceProperties                              VRGripInterfaceSettings;                                 // 0x03A8(0x0058) Edit, BlueprintVisible, Net, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void SetGripPriority(int32_t NewGripPriority);
		void SetDenyGripping(bool bDenyGripping);
		void Server_GetClientAuthReplication(const struct FRepMovementVR& newMovement);
		void Server_EndClientAuthReplication();
		bool RemoveFromClientReplicationBucket();
		bool PollReplicationEvent();
		bool IsCurrentlyClientAuthThrowing();
		void CeaseReplicationBlocking();
		bool AddToClientReplicationBucket();
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.GrippableBoxComponent
	 * Size -> 0x00E0 (FullSize[0x0590] - InheritedSize[0x04B0])
	 */
	class UGrippableBoxComponent : public UBoxComponent
	{
	public:
		unsigned char                                              UnknownData_JDW3[0x8];                                   // 0x04B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UVRGripScriptBase*>                           GripLogicScripts;                                        // 0x04B8(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGripped;                                               // 0x04C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDropped;                                               // 0x04D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSecondaryGripAdded;                                    // 0x04E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSecondaryGripRemoved;                                  // 0x04F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0508(0x0020) Edit, BlueprintVisible, Net, NativeAccessSpecifierPublic
		bool                                                       bRepGripSettingsAndGameplayTags;                         // 0x0528(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplicateMovement;                                      // 0x0529(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IMQR[0x6];                                   // 0x052A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPInterfaceProperties                              VRGripInterfaceSettings;                                 // 0x0530(0x0058) Edit, BlueprintVisible, Net, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DHG[0x8];                                   // 0x0588(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetGripPriority(int32_t NewGripPriority);
		void SetDenyGripping(bool bDenyGripping);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.GrippableCapsuleComponent
	 * Size -> 0x00E0 (FullSize[0x0580] - InheritedSize[0x04A0])
	 */
	class UGrippableCapsuleComponent : public UCapsuleComponent
	{
	public:
		unsigned char                                              UnknownData_CWLS[0x10];                                  // 0x04A0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UVRGripScriptBase*>                           GripLogicScripts;                                        // 0x04B0(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGripped;                                               // 0x04C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDropped;                                               // 0x04D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSecondaryGripAdded;                                    // 0x04E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSecondaryGripRemoved;                                  // 0x04F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0500(0x0020) Edit, BlueprintVisible, Net, NativeAccessSpecifierPublic
		bool                                                       bRepGripSettingsAndGameplayTags;                         // 0x0520(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplicateMovement;                                      // 0x0521(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3FZM[0x6];                                   // 0x0522(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPInterfaceProperties                              VRGripInterfaceSettings;                                 // 0x0528(0x0058) Edit, BlueprintVisible, Net, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void SetGripPriority(int32_t NewGripPriority);
		void SetDenyGripping(bool bDenyGripping);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.GrippableCharacter
	 * Size -> 0x0018 (FullSize[0x0530] - InheritedSize[0x0518])
	 */
	class AGrippableCharacter : public ACharacter
	{
	public:
		class UGrippableSkeletalMeshComponent*                     GrippableMeshReference;                                  // 0x0518(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ViewOriginationSocket;                                   // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FEXZ[0x8];                                   // 0x0528(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.OptionalRepSkeletalMeshComponent
	 * Size -> 0x0000 (FullSize[0x0F00] - InheritedSize[0x0F00])
	 */
	class UOptionalRepSkeletalMeshComponent : public USkeletalMeshComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.GrippableSkeletalMeshActor
	 * Size -> 0x0178 (FullSize[0x0480] - InheritedSize[0x0308])
	 */
	class AGrippableSkeletalMeshActor : public ASkeletalMeshActor
	{
	public:
		unsigned char                                              UnknownData_5IUE[0x10];                                  // 0x0308(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRepAttachmentWithWeld                              AttachmentWeldReplication;                               // 0x0318(0x0048) Net, RepNotify, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UVRGripScriptBase*>                           GripLogicScripts;                                        // 0x0360(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGripped;                                               // 0x0370(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDropped;                                               // 0x0380(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSecondaryGripAdded;                                    // 0x0390(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSecondaryGripRemoved;                                  // 0x03A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FVRClientAuthReplicationData                        ClientAuthReplicationData;                               // 0x03B0(0x0050) Edit, BlueprintVisible, Net, NoDestructor, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0400(0x0020) Edit, BlueprintVisible, Net, NativeAccessSpecifierPublic
		bool                                                       bAllowIgnoringAttachOnOwner;                             // 0x0420(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRepGripSettingsAndGameplayTags;                         // 0x0421(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RS18[0x6];                                   // 0x0422(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPInterfaceProperties                              VRGripInterfaceSettings;                                 // 0x0428(0x0058) Edit, BlueprintVisible, Net, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void SetGripPriority(int32_t NewGripPriority);
		void SetDenyGripping(bool bDenyGripping);
		void Server_GetClientAuthReplication(const struct FRepMovementVR& newMovement);
		void Server_EndClientAuthReplication();
		bool RemoveFromClientReplicationBucket();
		bool PollReplicationEvent();
		bool IsCurrentlyClientAuthThrowing();
		void CeaseReplicationBlocking();
		bool AddToClientReplicationBucket();
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.GrippableSkeletalMeshComponent
	 * Size -> 0x00E0 (FullSize[0x0FE0] - InheritedSize[0x0F00])
	 */
	class UGrippableSkeletalMeshComponent : public USkeletalMeshComponent
	{
	public:
		unsigned char                                              UnknownData_8OG7[0x8];                                   // 0x0F00(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UVRGripScriptBase*>                           GripLogicScripts;                                        // 0x0F08(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGripped;                                               // 0x0F18(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDropped;                                               // 0x0F28(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSecondaryGripAdded;                                    // 0x0F38(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSecondaryGripRemoved;                                  // 0x0F48(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0F58(0x0020) Edit, BlueprintVisible, Net, NativeAccessSpecifierPublic
		bool                                                       bRepGripSettingsAndGameplayTags;                         // 0x0F78(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplicateMovement;                                      // 0x0F79(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AP9S[0x6];                                   // 0x0F7A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPInterfaceProperties                              VRGripInterfaceSettings;                                 // 0x0F80(0x0058) Edit, BlueprintVisible, Net, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D2MU[0x8];                                   // 0x0FD8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetGripPriority(int32_t NewGripPriority);
		void SetDenyGripping(bool bDenyGripping);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.GrippableSphereComponent
	 * Size -> 0x00E0 (FullSize[0x0580] - InheritedSize[0x04A0])
	 */
	class UGrippableSphereComponent : public USphereComponent
	{
	public:
		unsigned char                                              UnknownData_AUOW[0x10];                                  // 0x04A0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UVRGripScriptBase*>                           GripLogicScripts;                                        // 0x04B0(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGripped;                                               // 0x04C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDropped;                                               // 0x04D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSecondaryGripAdded;                                    // 0x04E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSecondaryGripRemoved;                                  // 0x04F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0500(0x0020) Edit, BlueprintVisible, Net, NativeAccessSpecifierPublic
		bool                                                       bRepGripSettingsAndGameplayTags;                         // 0x0520(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplicateMovement;                                      // 0x0521(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O6XX[0x6];                                   // 0x0522(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPInterfaceProperties                              VRGripInterfaceSettings;                                 // 0x0528(0x0058) Edit, BlueprintVisible, Net, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void SetGripPriority(int32_t NewGripPriority);
		void SetDenyGripping(bool bDenyGripping);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.OptionalRepStaticMeshComponent
	 * Size -> 0x0010 (FullSize[0x0520] - InheritedSize[0x0510])
	 */
	class UOptionalRepStaticMeshComponent : public UStaticMeshComponent
	{
	public:
		bool                                                       bReplicateMovement;                                      // 0x0510(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KAJF[0xF];                                   // 0x0511(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.GrippableStaticMeshActor
	 * Size -> 0x0180 (FullSize[0x0410] - InheritedSize[0x0290])
	 */
	class AGrippableStaticMeshActor : public AStaticMeshActor
	{
	public:
		unsigned char                                              UnknownData_H8JH[0x10];                                  // 0x0290(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRepAttachmentWithWeld                              AttachmentWeldReplication;                               // 0x02A0(0x0048) Net, RepNotify, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UVRGripScriptBase*>                           GripLogicScripts;                                        // 0x02E8(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGripped;                                               // 0x02F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDropped;                                               // 0x0308(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSecondaryGripAdded;                                    // 0x0318(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSecondaryGripRemoved;                                  // 0x0328(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TU4A[0x8];                                   // 0x0338(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVRClientAuthReplicationData                        ClientAuthReplicationData;                               // 0x0340(0x0050) Edit, BlueprintVisible, Net, NoDestructor, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0390(0x0020) Edit, BlueprintVisible, Net, NativeAccessSpecifierPublic
		bool                                                       bAllowIgnoringAttachOnOwner;                             // 0x03B0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRepGripSettingsAndGameplayTags;                         // 0x03B1(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RNOQ[0x6];                                   // 0x03B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPInterfaceProperties                              VRGripInterfaceSettings;                                 // 0x03B8(0x0058) Edit, BlueprintVisible, Net, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void SetGripPriority(int32_t NewGripPriority);
		void SetDenyGripping(bool bDenyGripping);
		void Server_GetClientAuthReplication(const struct FRepMovementVR& newMovement);
		void Server_EndClientAuthReplication();
		bool RemoveFromClientReplicationBucket();
		bool PollReplicationEvent();
		bool IsCurrentlyClientAuthThrowing();
		void CeaseReplicationBlocking();
		bool AddToClientReplicationBucket();
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.GrippableStaticMeshComponent
	 * Size -> 0x00E0 (FullSize[0x05F0] - InheritedSize[0x0510])
	 */
	class UGrippableStaticMeshComponent : public UStaticMeshComponent
	{
	public:
		unsigned char                                              UnknownData_RTE3[0x10];                                  // 0x0510(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UVRGripScriptBase*>                           GripLogicScripts;                                        // 0x0520(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGripped;                                               // 0x0530(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDropped;                                               // 0x0540(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSecondaryGripAdded;                                    // 0x0550(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSecondaryGripRemoved;                                  // 0x0560(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0570(0x0020) Edit, BlueprintVisible, Net, NativeAccessSpecifierPublic
		bool                                                       bRepGripSettingsAndGameplayTags;                         // 0x0590(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplicateMovement;                                      // 0x0591(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_17WS[0x6];                                   // 0x0592(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPInterfaceProperties                              VRGripInterfaceSettings;                                 // 0x0598(0x0058) Edit, BlueprintVisible, Net, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void SetGripPriority(int32_t NewGripPriority);
		void SetDenyGripping(bool bDenyGripping);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRGripScriptBase
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UVRGripScriptBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_1R1F[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsActive;                                               // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGSTransformOverrideType                                   WorldTransformOverrideType;                              // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDenyAutoDrop;                                           // 0x0032(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceDrop;                                              // 0x0033(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDenyLateUpdates;                                        // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInjectPrePhysicsHandle;                                 // 0x0035(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInjectPostPhysicsHandle;                                // 0x0036(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanEverTick;                                            // 0x0037(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowTicking;                                           // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZSZF[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		bool Wants_DenyTeleport(class UGripMotionControllerComponent* Controller);
		void SetTickEnabled(bool bTickEnabled);
		void OnSecondaryGripRelease(class UGripMotionControllerComponent* Controller, class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
		void OnSecondaryGrip(class UGripMotionControllerComponent* Controller, class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
		void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
		void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
		void OnEndPlay(EEndPlayReason EndPlayReason);
		void OnBeginPlay(class UObject* CallingOwner);
		bool IsServer();
		bool HasAuthority();
		bool GetWorldTransform(class UGripMotionControllerComponent* GrippingController, float DeltaTime, struct FTransform* WorldTransform, const struct FTransform& ParentTransform, struct FBPActorGripInformation* Grip, class AActor* Actor, class UPrimitiveComponent* Root, bool bRootHasInterface, bool bActorHasInterface, bool bIsForTeleport);
		struct FTransform GetParentTransform(bool bGetWorldTransform, const class FName& BoneName);
		class USceneComponent* GetParentSceneComp();
		class UObject* GetParent();
		class AActor* GetOwner();
		struct FTransform GetGripTransform(const struct FBPActorGripInformation& Grip, const struct FTransform& ParentTransform);
		class UVRGripScriptBase* GetGripScriptByClass(class UObject* WorldContextObject, class UClass* GripScriptClass, EBPVRResultSwitch* Result);
		void ForceGripToDrop();
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.GS_Default
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UGS_Default : public UVRGripScriptBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.GS_ExtendedDefault
	 * Size -> 0x0020 (FullSize[0x0060] - InheritedSize[0x0040])
	 */
	class UGS_ExtendedDefault : public UGS_Default
	{
	public:
		bool                                                       bLimitGripScaling;                                       // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I2YQ[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector_NetQuantize100                              MinimumGripScaling;                                      // 0x0044(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              MaximumGripScaling;                                      // 0x0050(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JVYE[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.GS_GunTools
	 * Size -> 0x03B0 (FullSize[0x03F0] - InheritedSize[0x0040])
	 */
	class UGS_GunTools : public UGS_Default
	{
	public:
		class FName                                                WeaponRootOrientationComponent;                          // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CPUV[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseHighQualityRemoteSimulation;                         // 0x0090(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseGlobalRotaionClamp;                                  // 0x0091(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YDF1[0x2];                                   // 0x0092(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GlobalRotaionClamp;                                      // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGunTools_AdvSecondarySettings                      AdvSecondarySettings;                                    // 0x0098(0x0074) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              PivotOffset;                                             // 0x010C(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnVirtualStockModeChanged;                               // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bUseVirtualStock;                                        // 0x0128(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QZPH[0x7F];                                  // 0x0129(0x007F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class USceneComponent>                      VirtualStockComponent;                                   // 0x01A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseGlobalVirtualStockSettings;                          // 0x01B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O5YI[0xF];                                   // 0x01B1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPVirtualStockSettings                             VirtualStockSettings;                                    // 0x01C0(0x0190) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHasRecoil;                                              // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyRecoilAsPhysicalForce;                             // 0x0351(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_400E[0x2];                                   // 0x0352(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector_NetQuantize100                              MaxRecoilTranslation;                                    // 0x0354(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              MaxRecoilRotation;                                       // 0x0360(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              MaxRecoilScale;                                          // 0x036C(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecayRate;                                               // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LerpRate;                                                // 0x037C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U6FI[0x70];                                  // 0x0380(0x0070) MISSED OFFSET (PADDING)

	public:
		void SetVirtualStockEnabled(bool bAllowVirtualStock);
		void SetVirtualStockComponent(class USceneComponent* NewStockComponent);
		void ResetRecoil();
		void AddRecoilInstance(const struct FTransform& RecoilAddition, const struct FVector& Optional_Location);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.GS_InteractibleSettings
	 * Size -> 0x0090 (FullSize[0x00D0] - InheritedSize[0x0040])
	 */
	class UGS_InteractibleSettings : public UVRGripScriptBase
	{
	public:
		struct FBPGS_InteractionSettings                           InteractionSettings;                                     // 0x0040(0x0090) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void RemoveHandRotation();
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.GS_LerpToHand
	 * Size -> 0x0110 (FullSize[0x0150] - InheritedSize[0x0040])
	 */
	class UGS_LerpToHand : public UVRGripScriptBase
	{
	public:
		unsigned char                                              UnknownData_2X6W[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinDistanceForLerp;                                      // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LerpDuration;                                            // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSpeedForLerp;                                         // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpeedForLerp;                                         // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVRLerpInterpolationMode                                   LerpInterpolationMode;                                   // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DNAQ[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLerpToHandBegin;                                       // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLerpToHandFinished;                                    // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bUseCurve;                                               // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y8NZ[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  OptionalCurveToFollow;                                   // 0x0088(0x0088) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_97YD[0x38];                                  // 0x0110(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     Holster;                                                 // 0x0148(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.GS_Melee
	 * Size -> 0x01D0 (FullSize[0x0210] - InheritedSize[0x0040])
	 */
	class UGS_Melee : public UGS_Default
	{
	public:
		unsigned char                                              UnknownData_QHI1[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnShouldLodgeInObject;                                   // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMeleeHit;                                              // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bAlwaysTickPenetration;                                  // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyPenetrateWithTwoHands;                              // 0x0071(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UND8[0x6];                                   // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBPHitSurfaceProperties>                     OverrideMeleeSurfaceSettings;                            // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                WeaponRootOrientationComponent;                          // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_536E[0x30];                                  // 0x0090(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBPLodgeComponentInfo>                       PenetrationNotifierComponents;                           // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PGN0[0x1C];                                  // 0x00D0(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSkipGripMassChecks;                                     // 0x00EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoSetPrimaryAndSecondaryHands;                        // 0x00ED(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BBF3[0x1];                                   // 0x00EE(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EVRMeleePrimaryHandType                                    PrimaryHandSelectionType;                                // 0x00EF(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBPGripPair                                         PrimaryHand;                                             // 0x00F0(0x0010) BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FBPGripPair                                         SecondaryHand;                                           // 0x0100(0x0010) BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		EVRMeleeComType                                            COMType;                                                 // 0x0110(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z4MY[0x3F];                                  // 0x0111(0x003F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPAdvancedPhysicsHandleSettings                    PrimaryHandPhysicsSettings;                              // 0x0150(0x0060) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FBPAdvancedPhysicsHandleSettings                    SecondaryHandPhysicsSettings;                            // 0x01B0(0x0060) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		void UpdateHandPositionAndRotation(const struct FBPGripPair& HandPair, const struct FTransform& HandWorldTransform, struct FVector* LocDifference, float* RotDifference, bool bUpdateLocation, bool bUpdateRotation);
		void UpdateHandPosition(const struct FBPGripPair& HandPair, const struct FVector& HandWorldPosition, struct FVector* LocDifference);
		void SetPrimaryAndSecondaryHands(struct FBPGripPair* PrimaryGrip, struct FBPGripPair* SecondaryGrip);
		void SetIsLodged(bool IsLodged, class UPrimitiveComponent* LodgeComponent);
		void OnLodgeHitCallback(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.GS_Physics
	 * Size -> 0x00C8 (FullSize[0x0108] - InheritedSize[0x0040])
	 */
	class UGS_Physics : public UGS_Default
	{
	public:
		bool                                                       bSkipGripMassChecks;                                     // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ITVL[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPAdvancedPhysicsHandleSettings                    SingleHandPhysicsSettings;                               // 0x0044(0x0060) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FBPAdvancedPhysicsHandleSettings                    MultiHandPhysicsSettings;                                // 0x00A4(0x0060) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4AP2[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.HandSocketComponent
	 * Size -> 0x00A8 (FullSize[0x02D0] - InheritedSize[0x0228])
	 */
	class UHandSocketComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_HHX3[0x8];                                   // 0x0228(0x0008) Fix Super Size
		EVRAxis                                                    MirrorAxis;                                              // 0x0230(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVRAxis                                                    FlipAxis;                                                // 0x0231(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_85W9[0xE];                                   // 0x0232(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          HandRelativePlacement;                                   // 0x0240(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                SlotPrefix;                                              // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDecoupleMeshPlacement;                                  // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlySnapMesh;                                           // 0x0279(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLeftHandDominant;                                       // 0x027A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlipForLeftHand;                                        // 0x027B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyFlipRotation;                                       // 0x027C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysInRange;                                          // 0x027D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMatchRotation;                                          // 0x027E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisabled;                                               // 0x027F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OverrideDistance;                                        // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCustomPoseDeltas;                                    // 0x0284(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GCRB[0x3];                                   // 0x0285(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBPVRHandPoseBonePair>                       CustomPoseDeltas;                                        // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UAnimSequence*                                       HandTargetAnimation;                                     // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x02A0(0x0020) Edit, BlueprintVisible, Net, NativeAccessSpecifierPublic
		bool                                                       bRepGameplayTags;                                        // 0x02C0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplicateMovement;                                      // 0x02C1(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q79F[0xE];                                   // 0x02C2(0x000E) MISSED OFFSET (PADDING)

	public:
		class UAnimSequence* GetTargetAnimation();
		struct FTransform GetMeshRelativeTransform(bool bIsRightHand);
		class UHandSocketComponent* GetHandSocketComponentFromObject(class UObject* ObjectToCheck, const class FName& SocketName);
		bool GetBlendedPoseSnapShot(struct FPoseSnapshot* PoseSnapshot, class USkeletalMeshComponent* TargetMesh, bool bSkipRootBone, bool bFlipHand);
		bool GetAnimationSequenceAsPoseSnapShot(class UAnimSequence* InAnimationSequence, struct FPoseSnapshot* OutPoseSnapShot, class USkeletalMeshComponent* TargetMesh, bool bSkipRootBone, bool bFlipHand);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.HandSocketAnimInstance
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class UHandSocketAnimInstance : public UAnimInstance
	{
	public:
		class UHandSocketComponent*                                OwningSocket;                                            // 0x02B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.NoRepSphereComponent
	 * Size -> 0x0010 (FullSize[0x04B0] - InheritedSize[0x04A0])
	 */
	class UNoRepSphereComponent : public USphereComponent
	{
	public:
		bool                                                       bReplicateMovement;                                      // 0x04A0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9X31[0xF];                                   // 0x04A1(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.InversePhysicsSkeletalMeshComponent
	 * Size -> 0x0030 (FullSize[0x0F30] - InheritedSize[0x0F00])
	 */
	class UInversePhysicsSkeletalMeshComponent : public USkeletalMeshComponent
	{
	public:
		unsigned char                                              UnknownData_OGEW[0x30];                                  // 0x0F00(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.OptionalRepGrippableSkeletalMeshActor
	 * Size -> 0x0008 (FullSize[0x0310] - InheritedSize[0x0308])
	 */
	class AOptionalRepGrippableSkeletalMeshActor : public ASkeletalMeshActor
	{
	public:
		bool                                                       bIgnoreAttachmentReplication;                            // 0x0308(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnorePhysicsReplication;                               // 0x0309(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O7XT[0x6];                                   // 0x030A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.ParentRelativeAttachmentComponent
	 * Size -> 0x00D8 (FullSize[0x0300] - InheritedSize[0x0228])
	 */
	class UParentRelativeAttachmentComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_5S7M[0x8];                                   // 0x0228(0x0008) Fix Super Size
		float                                                      YawTolerance;                                            // 0x0230(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LerpSpeed;                                               // 0x0234(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLerpTransition;                                         // 0x0238(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M00U[0x77];                                  // 0x0239(0x0077) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseFeetLocation;                                        // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JM8D[0x3];                                   // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CustomOffset;                                            // 0x02B4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOffsetByHMD;                                            // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreRotationFromParent;                               // 0x02C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateInCharacterMovement;                              // 0x02C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TN01[0x5];                                   // 0x02C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPVRWaistTracking_Info                             OptionalWaistTrackingParent;                             // 0x02C8(0x0020) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AVRCharacter>                         AttachChar;                                              // 0x02E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AVRBaseCharacter>                     AttachBaseChar;                                          // 0x02F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OR08[0x8];                                   // 0x02F8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.ReplicatedVRCameraComponent
	 * Size -> 0x0070 (FullSize[0x0870] - InheritedSize[0x0800])
	 */
	class UReplicatedVRCameraComponent : public UCameraComponent
	{
	public:
		bool                                                       bUpdateInCharacterMovement;                              // 0x0800(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CE8X[0x3];                                   // 0x0801(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AVRBaseCharacter>                     AttachChar;                                              // 0x0804(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_30ES[0x2];                                   // 0x080C(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSetPositionDuringTick;                                  // 0x080E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOffsetByHMD;                                            // 0x080F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoSetLockToHmd : 1;                                   // 0x0810(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HHKW[0x3];                                   // 0x0811(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPVRComponentPosRep                                ReplicatedCameraTransform;                               // 0x0814(0x001C) Edit, Net, DisableEditOnInstance, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IWNR[0x1A];                                  // 0x0830(0x001A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSmoothReplicatedMotion;                                 // 0x084A(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I78Z[0x1];                                   // 0x084B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NetUpdateRate;                                           // 0x084C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AV7B[0x20];                                  // 0x0850(0x0020) MISSED OFFSET (PADDING)

	public:
		void Server_SendCameraTransform(const struct FBPVRComponentPosRep& NewTransform);
		void OnRep_ReplicatedCameraTransform();
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRAIController
	 * Size -> 0x0000 (FullSize[0x0398] - InheritedSize[0x0398])
	 */
	class AVRAIController : public AAIController
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRDetourCrowdAIController
	 * Size -> 0x0000 (FullSize[0x0398] - InheritedSize[0x0398])
	 */
	class AVRDetourCrowdAIController : public AVRAIController
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.AISenseConfig_Sight_VR
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	class UAISenseConfig_Sight_VR : public UAISenseConfig
	{
	public:
		class UClass*                                              Implementation;                                          // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SightRadius;                                             // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LoseSightRadius;                                         // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PeripheralVisionAngleDegrees;                            // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAISenseAffiliationFilter                           DetectionByAffiliation;                                  // 0x005C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      AutoSuccessRangeFromLastSeenLocation;                    // 0x0060(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R9I6[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.AISense_Sight_VR
	 * Size -> 0x00F0 (FullSize[0x0170] - InheritedSize[0x0080])
	 */
	class UAISense_Sight_VR : public UAISense
	{
	public:
		unsigned char                                              UnknownData_RJLH[0xC8];                                  // 0x0080(0x00C8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxTracesPerTick;                                        // 0x0148(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MinQueriesPerTimeSliceCheck;                             // 0x014C(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		double                                                     MaxTimeSlicePerTick;                                     // 0x0150(0x0008) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HighImportanceQueryDistanceThreshold;                    // 0x0158(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0CH0[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxQueryImportance;                                      // 0x0160(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SightLimitQueryImportance;                               // 0x0164(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W4VR[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRBaseCharacter
	 * Size -> 0x01A0 (FullSize[0x06B8] - InheritedSize[0x0518])
	 */
	class AVRBaseCharacter : public ACharacter
	{
	public:
		class AVRPlayerController*                                 OwningVRPlayerController;                                // 0x0518(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRepMovementVRCharacter                             ReplicatedMovementVR;                                    // 0x0520(0x0040) Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V0T3[0x8];                                   // 0x0560(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCharacterTeleported_Bind;                              // 0x0568(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCharacterNetworkCorrected_Bind;                        // 0x0578(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerStateReplicated_Bind;                            // 0x0588(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       VRReplicateCapsuleHeight;                                // 0x0598(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1WR5[0x3];                                   // 0x0599(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVRReplicatedCapsuleHeight                          ReplicatedCapsuleHeight;                                 // 0x059C(0x0004) Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          OffsetComponentToWorld;                                  // 0x05A0(0x0030) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseExperimentalUnseatModeFix;                           // 0x05D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E2TM[0xF];                                   // 0x05D1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVRSeatedCharacterInfo                              SeatInformation;                                         // 0x05E0(0x0090) Edit, BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSeatThreshholdChanged_Bind;                            // 0x0670(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class USceneComponent*                                     NetSmoother;                                             // 0x0680(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVRBaseCharacterMovementComponent*                   VRMovementReference;                                     // 0x0688(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UReplicatedVRCameraComponent*                        VRReplicatedCamera;                                      // 0x0690(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParentRelativeAttachmentComponent*                  ParentRelativeAttachment;                                // 0x0698(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGripMotionControllerComponent*                      LeftMotionController;                                    // 0x06A0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGripMotionControllerComponent*                      RightMotionController;                                   // 0x06A8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DefaultNavigationFilterClass;                            // 0x06B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UpdateLowGravMovement(float DeltaTime);
		void UpdateClimbingMovement(float DeltaTime);
		void StopNavigationMovement();
		void SetCharacterSizeVR(float NewRadius, float NewHalfHeight, bool bUpdateOverlaps);
		void SetCharacterHalfHeightVR(float HalfHeight, bool bUpdateOverlaps);
		struct FVector SetActorRotationVR(const struct FRotator& NewRot, bool bUseYawOnly, bool bAccountForHMDRotation);
		struct FVector SetActorLocationAndRotationVR(const struct FVector& NewLoc, const struct FRotator& NewRot, bool bUseYawOnly, bool bAccountForHMDRotation, bool bTeleport);
		void Server_SetSeatedMode(class USceneComponent* SeatParent, bool bSetSeatedMode, const struct FTransform_NetQuantize& TargetTransform, const struct FTransform_NetQuantize& InitialRelCameraTransform, float AllowedRadius, float AllowedRadiusThreshold, bool bZeroToHead, EVRConjoinedMovementModes PostSeatedMovementMode);
		void Server_SendTransformRightController(const struct FBPVRComponentPosRep& NewTransform);
		void Server_SendTransformLeftController(const struct FBPVRComponentPosRep& NewTransform);
		void Server_SendTransformCamera(const struct FBPVRComponentPosRep& NewTransform);
		void Server_ReZeroSeating(const struct FTransform_NetQuantize& NewTargetTransform, const struct FTransform_NetQuantize& NewInitialRelCameraTransform, bool bZeroToHead);
		void RegenerateOffsetComponentToWorld(bool bUpdateBounds, bool bCalculatePureYaw);
		void ReceiveNavigationMoveCompleted(EPathFollowingResult PathingResult);
		void OnSeatThreshholdChanged(bool bIsWithinThreshold, float ToThresholdScaler);
		void OnSeatedModeChanged(bool bNewSeatedMode, bool bWasAlreadySeated);
		void OnRep_SeatedCharInfo();
		void OnRep_CapsuleHeight();
		void OnEndWallPushback();
		void OnCustomMoveActionPerformed(EVRMoveAction MoveActionType, const struct FVector& MoveActionVector, const struct FRotator& MoveActionRotator);
		void OnClimbingSteppedUp();
		void OnBeginWallPushback(const struct FHitResult& HitResultOfImpact, bool bHadLocomotionInput, const struct FVector& HmdInput);
		void NotifyOfTeleport(bool bRegisterAsTeleport);
		struct FVector K2_GetVRHeadLocation();
		bool HasPartialPath();
		struct FVector GetVRUpVector();
		struct FRotator GetVRRotation();
		struct FVector GetVRRightVector();
		struct FVector GetVRLocation();
		struct FVector GetVRForwardVector();
		struct FVector GetTeleportLocation(const struct FVector& OriginalLocation);
		EPathFollowingStatus GetMoveStatus();
		bool GetCurrentNavigationPathPoints(TArray<struct FVector>* NavigationPointList);
		void ExtendedSimpleMoveToLocation(const struct FVector& GoalLocation, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
		struct FVector AddActorWorldRotationVR(const struct FRotator& DeltaRot, bool bUseYawOnly);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRBaseCharacterMovementComponent
	 * Size -> 0x03E8 (FullSize[0x0F08] - InheritedSize[0x0B20])
	 */
	class UVRBaseCharacterMovementComponent : public UCharacterMovementComponent
	{
	public:
		unsigned char                                              UnknownData_UUND[0x350];                                 // 0x0B20(0x0350) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AVRBaseCharacter*                                    BaseVRCharacterOwner;                                    // 0x0E70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseClientControlRotation;                               // 0x0E78(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableSimulatedTickWhenSmoothingMovement;              // 0x0E79(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BL6L[0x6];                                   // 0x0E7A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPerformClimbingStepUp;                                 // 0x0E80(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      VRWallSlideScaler;                                       // 0x0E90(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3USJ[0x3C];                                  // 0x0E94(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TrackingLossThreshold;                                   // 0x0ED0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHoldPositionOnTrackingLossThresholdHit;                 // 0x0ED4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X4XP[0x3];                                   // 0x0ED5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIgnoreSimulatingComponentsInFloorCheck;                 // 0x0ED8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRunControlRotationInMovementComponent;                  // 0x0ED9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TCP9[0x2];                                   // 0x0EDA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VRClimbingStepHeight;                                    // 0x0EDC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VRClimbingEdgeRejectDistance;                            // 0x0EE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VRClimbingStepUpMultiplier;                              // 0x0EE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClampClimbingStepUp;                                    // 0x0EE8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PNPH[0x3];                                   // 0x0EE9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VRClimbingStepUpMaxSize;                                 // 0x0EEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SetDefaultPostClimbMovementOnStepUp;                     // 0x0EF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4TUV[0x3];                                   // 0x0EF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VRClimbingMaxReleaseVelocitySize;                        // 0x0EF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VREdgeRejectDistance;                                    // 0x0EF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVRConjoinedMovementModes                                  DefaultPostClimbMovement;                                // 0x0EFC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VHDZ[0x3];                                   // 0x0EFD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VRLowGravWallFrictionScaler;                             // 0x0F00(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       VRLowGravIgnoresDefaultFluidFriction;                    // 0x0F04(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZHNC[0x3];                                   // 0x0F05(0x0003) Fix size for supers

	public:
		void SetReplicatedMovementMode(EVRConjoinedMovementModes NewMovementMode);
		void SetCrouchedHalfHeight(float NewCrouchedHalfHeight);
		void SetClimbingMode(bool bIsClimbing);
		struct FVector RewindVRMovement();
		void PerformMoveAction_Teleport(const struct FVector& TeleportLocation, const struct FRotator& TeleportRotation, EVRMoveActionVelocityRetention VelocityRetention, bool bSkipEncroachmentCheck);
		void PerformMoveAction_StopAllMovement();
		void PerformMoveAction_SnapTurn(float SnapTurnDeltaYaw, EVRMoveActionVelocityRetention VelocityRetention, bool bFlagGripTeleport, bool bFlagCharacterTeleport);
		void PerformMoveAction_SetRotation(float NewYaw, EVRMoveActionVelocityRetention VelocityRetention, bool bFlagGripTeleport, bool bFlagCharacterTeleport);
		void PerformMoveAction_Custom(EVRMoveAction MoveActionToPerform, EVRMoveActionDataReq DataRequirementsForMoveAction, const struct FVector& MoveActionVector, const struct FRotator& MoveActionRotator);
		EVRConjoinedMovementModes GetReplicatedMovementMode();
		struct FVector GetCustomInputVector();
		void ClearCustomReplicatedMovement();
		void AddCustomReplicatedMovement(const struct FVector& Movement);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRButtonComponent
	 * Size -> 0x00C0 (FullSize[0x05D0] - InheritedSize[0x0510])
	 */
	class UVRButtonComponent : public UStaticMeshComponent
	{
	public:
		class FScriptMulticastDelegate                             OnButtonStateChanged;                                    // 0x0510(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnButtonBeginInteraction;                                // 0x0520(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnButtonEndInteraction;                                  // 0x0530(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UPrimitiveComponent>                  LocalInteractingComponent;                               // 0x0540(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               LocalLastInteractingActor;                               // 0x0548(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UPrimitiveComponent>                  LocalLastInteractingComponent;                           // 0x0550(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEnabled;                                              // 0x0558(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bButtonState;                                            // 0x0559(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVRStateChangeAuthorityType                                StateChangeAuthorityType;                                // 0x055A(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LDGZ[0x1];                                   // 0x055B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DepressSpeed;                                            // 0x055C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepressDistance;                                         // 0x0560(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVRButtonType                                              ButtonType;                                              // 0x0564(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVRInteractibleAxis                                        ButtonAxis;                                              // 0x0565(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RS85[0x2];                                   // 0x0566(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ButtonEngageDepth;                                       // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinTimeBetweenEngaging;                                  // 0x056C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipOverlapFiltering;                                   // 0x0570(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplicateMovement;                                      // 0x0571(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MSRV[0xE];                                   // 0x0572(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform_NetQuantize                              InitialRelativeTransform;                                // 0x0580(0x0030) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LLU5[0x20];                                  // 0x05B0(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetButtonToRestingPosition(bool bLerpToPosition);
		void SetButtonState(bool bNewButtonState, bool bCallButtonChangedEvent, bool bSnapIntoPosition);
		void ResetInitialButtonLocation();
		void ReceiveButtonStateChanged(bool bCurButtonState, class AActor* LastInteractingActor, class UPrimitiveComponent* InteractingComponent);
		void ReceiveButtonEndInteraction(class AActor* LastInteractingActor, class UPrimitiveComponent* LastInteractingComponent);
		void ReceiveButtonBeginInteraction(class AActor* InteractingActor, class UPrimitiveComponent* InteractingComponent);
		void OnRep_InitialRelativeTransform();
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		bool IsValidOverlap(class UPrimitiveComponent* OverlapComponent);
		bool IsButtonInUse();
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRCharacter
	 * Size -> 0x0008 (FullSize[0x06C0] - InheritedSize[0x06B8])
	 */
	class AVRCharacter : public AVRBaseCharacter
	{
	public:
		class UVRRootComponent*                                    VRRootReference;                                         // 0x06B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRCharacterMovementComponent
	 * Size -> 0x0018 (FullSize[0x0F20] - InheritedSize[0x0F08])
	 */
	class UVRCharacterMovementComponent : public UVRBaseCharacterMovementComponent
	{
	public:
		class UVRRootComponent*                                    VRRootCapsule;                                           // 0x0F08(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowMovementMerging;                                   // 0x0F10(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RDZK[0xF];                                   // 0x0F11(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRDialComponent
	 * Size -> 0x0160 (FullSize[0x0670] - InheritedSize[0x0510])
	 */
	class UVRDialComponent : public UStaticMeshComponent
	{
	public:
		unsigned char                                              UnknownData_LQPY[0x10];                                  // 0x0510(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDialHitSnapAngle;                                      // 0x0520(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bLerpBackOnRelease;                                      // 0x0530(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSendDialEventsDuringLerp;                               // 0x0531(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8S6Z[0x2];                                   // 0x0532(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DialReturnSpeed;                                         // 0x0534(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLerping;                                              // 0x0538(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LHCX[0x7];                                   // 0x0539(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDialFinishedLerping;                                   // 0x0540(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      CurrentDialAngle;                                        // 0x0550(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClockwiseMaximumDialAngle;                               // 0x0554(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CClockwiseMaximumDialAngle;                              // 0x0558(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRollover;                                            // 0x055C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDialUsesAngleSnap;                                      // 0x055D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDialUseSnapAngleList;                                   // 0x055E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3SBS[0x1];                                   // 0x055F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              DialSnapAngleList;                                       // 0x0560(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      SnapAngleIncrement;                                      // 0x0570(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SnapAngleThreshold;                                      // 0x0574(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationScaler;                                          // 0x0578(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVRInteractibleAxis                                        DialRotationAxis;                                        // 0x057C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDialUseDirectHandRotation;                              // 0x057D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TZH8[0xE];                                   // 0x057E(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EVRInteractibleAxis                                        InteractorRotationAxis;                                  // 0x058C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LDIX[0x3];                                   // 0x058D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PrimarySlotRange;                                        // 0x0590(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondarySlotRange;                                      // 0x0594(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GripPriority;                                            // 0x0598(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JZVG[0x4];                                   // 0x059C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform_NetQuantize                              InitialRelativeTransform;                                // 0x05A0(0x0030) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3IDO[0x30];                                  // 0x05D0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0600(0x0020) Edit, BlueprintVisible, Net, NativeAccessSpecifierPublic
		bool                                                       bRepGameplayTags;                                        // 0x0620(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplicateMovement;                                      // 0x0621(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGripMovementReplicationSettings                           MovementReplicationSetting;                              // 0x0622(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsHeld;                                                 // 0x0623(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DBY1[0x4];                                   // 0x0624(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPGripPair                                         HoldingGrip;                                             // 0x0628(0x0010) BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PAME[0x8];                                   // 0x0638(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnGripped;                                               // 0x0640(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDropped;                                               // 0x0650(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      BreakDistance;                                           // 0x0660(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDenyGripping;                                           // 0x0664(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O1Q0[0xB];                                   // 0x0665(0x000B) MISSED OFFSET (PADDING)

	public:
		void SetGripPriority(int32_t NewGripPriority);
		void SetDialAngle(float DialAngle, bool bCallEvents);
		void ResetInitialDialLocation();
		void ReceiveDialHitSnapAngle(float DialMilestoneAngle);
		void ReceiveDialFinishedLerping();
		void OnRep_InitialRelativeTransform();
		void AddDialAngle(float DialAngleDelta, bool bCallEvents, bool bSkipSettingRot);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VREPhysicalAnimationComponent
	 * Size -> 0x0028 (FullSize[0x0148] - InheritedSize[0x0120])
	 */
	class UVREPhysicalAnimationComponent : public UPhysicalAnimationComponent
	{
	public:
		bool                                                       bIsPaused;                                               // 0x0120(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoSetPhysicsSleepSensitivity;                         // 0x0121(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L53Y[0x2];                                   // 0x0122(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SleepThresholdMultiplier;                                // 0x0124(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        BaseWeldedBoneDriverNames;                               // 0x0128(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FWeldedBoneDriverData>                       BoneDriverMap;                                           // 0x0138(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void SetWeldedBoneDriverPaused(bool bPaused);
		void SetupWeldedBoneDriver(TArray<class FName> BaseBoneNames);
		void RefreshWeldedBoneDriver();
		bool IsWeldedBoneDriverPaused();
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VREPhysicsConstraintComponent
	 * Size -> 0x0000 (FullSize[0x0440] - InheritedSize[0x0440])
	 */
	class UVREPhysicsConstraintComponent : public UPhysicsConstraintComponent
	{
	public:
		void SetConstraintToForceBased(bool bUseForceConstraint);
		void SetAngularOffset(const struct FRotator& NewAngularOffset);
		struct FTransform GetLocalPose(EConstraintFrame ConstraintFrame);
		void GetGlobalPose(EConstraintFrame ConstraintFrame, struct FTransform* GlobalPose);
		struct FVector GetCurrentLinearDistance(EConstraintFrame FrameOfReference);
		void GetConstraintReferenceFrame(EConstraintFrame Frame, struct FTransform* RefFrame);
		struct FRotator GetAngularOffset();
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRExpansionFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVRExpansionFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void UpdatePeakLowPassFilter(struct FBPLowPassPeakFilter* TargetPeakFilter, const struct FVector& newSample);
		void SmoothUpdateLaserSpline(class USplineComponent* LaserSplineComponent, TArray<class USplineMeshComponent*> LaserSplineMeshComponents, const struct FVector& InStartLocation, const struct FVector& InEndLocation, const struct FVector& InForward, float LaserRadius);
		void SetObjectsIgnoreCollision(class UPrimitiveComponent* Prim1, const class FName& OptionalBoneName1, class UPrimitiveComponent* Prim2, const class FName& OptionalBoneName2, bool bIgnoreCollision);
		void RunEuroSmoothingFilter(struct FBPEuroLowPassFilter* TargetEuroFilter, const struct FVector& InRawValue, float DeltaTime, struct FVector* SmoothedValue);
		void RotateAroundPivot(const struct FRotator& RotationDelta, const struct FVector& OriginalLocation, const struct FRotator& OriginalRotation, const struct FVector& PivotPoint, struct FVector* NewLocation, struct FRotator* NewRotation, bool bUseOriginalYawOnly);
		void ResetPeakLowPassFilter(struct FBPLowPassPeakFilter* TargetPeakFilter);
		void ResetEuroSmoothingFilter(struct FBPEuroLowPassFilter* TargetEuroFilter);
		void NonAuthorityMinimumAreaRectangle(class UObject* WorldContextObject, TArray<struct FVector> InVerts, const struct FVector& SampleSurfaceNormal, struct FVector* OutRectCenter, struct FRotator* OutRectRotation, float* OutSideLengthX, float* OutSideLengthY, bool bDebugDraw);
		bool MatchesAnyTagsWithDirectParentTag(const struct FGameplayTag& DirectParentTag, const struct FGameplayTagContainer& BaseContainer, const struct FGameplayTagContainer& OtherContainer);
		struct FVector_NetQuantize100 MakeVector_NetQuantize100(const struct FVector& InVector);
		struct FVector_NetQuantize10 MakeVector_NetQuantize10(const struct FVector& InVector);
		struct FVector_NetQuantize MakeVector_NetQuantize(const struct FVector& InVector);
		struct FTransform_NetQuantize MakeTransform_NetQuantize(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale);
		void LowPassFilter_RollingAverage(const struct FVector& lastAverage, const struct FVector& newSample, struct FVector* newAverage, int32_t numSamples);
		void LowPassFilter_Exponential(const struct FVector& lastAverage, const struct FVector& newSample, struct FVector* newAverage, float sampleFactor);
		bool IsInVREditorPreviewOrGame();
		bool IsInVREditorPreview();
		struct FVector GetPeak_PeakLowPassFilter(struct FBPLowPassPeakFilter* TargetPeakFilter);
		EBPHMDWornState GetIsHMDWorn();
		bool GetIsHMDConnected();
		bool GetIsActorMovable(class AActor* ActorToCheck);
		EBPHMDDeviceType GetHMDType();
		struct FRotator GetHMDPureYaw(const struct FRotator& HMDRotation);
		bool GetHandFromMotionSourceName(const class FName& MotionSource, EControllerHand* hand);
		void GetGripSlotInRangeByTypeName_Component(const class FName& SlotType, class UPrimitiveComponent* Component, const struct FVector& WorldLocation, float MaxRange, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform, class FName* SlotName, class UGripMotionControllerComponent* QueryController);
		void GetGripSlotInRangeByTypeName(const class FName& SlotType, class AActor* Actor, const struct FVector& WorldLocation, float MaxRange, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform, class FName* SlotName, class UGripMotionControllerComponent* QueryController);
		class UGameViewportClient* GetGameViewportClient(class UObject* WorldContextObject);
		bool GetFirstGameplayTagWithExactParent(const struct FGameplayTag& DirectParentTag, const struct FGameplayTagContainer& BaseContainer, struct FGameplayTag* FoundTag);
		bool EqualEqual_FBPActorGripInformation(const struct FBPActorGripInformation& A, const struct FBPActorGripInformation& B);
		struct FTransform_NetQuantize Conv_TransformToTransformNetQuantize(const struct FTransform& InTransform);
		class UGripMotionControllerComponent* Conv_GripPairToMotionController(const struct FBPGripPair& GripPair);
		unsigned char Conv_GripPairToGripID(const struct FBPGripPair& GripPair);
		struct FVector_NetQuantize100 Conv_FVectorToFVectorNetQuantize100(const struct FVector& InVector);
		struct FVector_NetQuantize10 Conv_FVectorToFVectorNetQuantize10(const struct FVector& InVector);
		struct FVector_NetQuantize Conv_FVectorToFVectorNetQuantize(const struct FVector& InVector);
		void BreakTransform_NetQuantize(const struct FTransform_NetQuantize& InTransform, struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale);
		struct FRotator BPQuat_FindBetween(const struct FVector& Vec1, const struct FVector& Vec2);
		class USceneComponent* AddSceneComponentByClass(class UObject* Outer, class UClass* Class, const struct FTransform& ComponentRelativeTransform);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRGameViewportClient
	 * Size -> 0x0028 (FullSize[0x0388] - InheritedSize[0x0360])
	 */
	class UVRGameViewportClient : public UGameViewportClient
	{
	public:
		class FScriptMulticastDelegate                             BPOnWindowCloseRequested;                                // 0x0360(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bIgnoreWindowCloseCommands;                              // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVRGameInputMethod                                         GameInputMethod;                                         // 0x0371(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlsoChangeGamepPadInput;                                // 0x0372(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2V3Z[0x5];                                   // 0x0373(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        GamepadInputCategories;                                  // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		bool EventWindowClosing();
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.GesturesDatabase
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UGesturesDatabase : public UDataAsset
	{
	public:
		TArray<struct FVRGesture>                                  Gestures;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      TargetGestureScale;                                      // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TOOO[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	public:
		void RecalculateGestures(bool bScaleToDatabase);
		bool ImportSplineAsGesture(class USplineComponent* HostSplineComponent, const class FString& GestureName, bool bKeepSplineCurves, float SegmentLen, bool bScaleToDatabase);
		void FillSplineWithGesture(struct FVRGesture* Gesture, class USplineComponent* SplineComponent, bool bCenterPointsOnSpline, bool bScaleToBounds, float OptionalBounds, bool bUseCurvedPoints, bool bFillInSplineMeshComponents, class UStaticMesh* Mesh, class UMaterial* MeshMat);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRGestureComponent
	 * Size -> 0x0128 (FullSize[0x0350] - InheritedSize[0x0228])
	 */
	class UVRGestureComponent : public USceneComponent
	{
	public:
		class FScriptMulticastDelegate                             OnGestureDetected_Bind;                                  // 0x0228(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UGesturesDatabase*                                   GesturesDB;                                              // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SameSampleTolerance;                                     // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVRGestureMirrorMode                                       MirroringHand;                                           // 0x0244(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EQBJ[0x3];                                   // 0x0245(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AVRBaseCharacter*                                    TargetCharacter;                                         // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XS8O[0x20];                                  // 0x0250(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bDrawSplinesCurved;                                      // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGetGestureInWorldSpace;                                 // 0x0271(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DC5Y[0x6];                                   // 0x0272(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         SplineMesh;                                              // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           SplineMeshScaler;                                        // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  SplineMaterial;                                          // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M2FA[0x18];                                  // 0x0290(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    maxSlope;                                                // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVRGestureState                                            CurrentState;                                            // 0x02AC(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HQ5Q[0x3];                                   // 0x02AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVRGesture                                          GestureLog;                                              // 0x02B0(0x0058) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CXP8[0x48];                                  // 0x0308(0x0048) MISSED OFFSET (PADDING)

	public:
		void SaveRecording(struct FVRGesture* Recording, const class FString& RecordingName, bool bScaleRecordingToDatabase);
		void RecalculateGestureSize(struct FVRGesture* InputGesture, class UGesturesDatabase* GestureDB);
		void OnGestureDetected(unsigned char GestureType, class FString* DetectedGestureName, int32_t* DetectedGestureIndex, class UGesturesDatabase* GestureDataBase);
		struct FVRGesture EndRecording();
		void DrawDebugGesture(class UObject* WorldContextObject, struct FTransform* StartTransform, const struct FVRGesture& GestureToDraw, const struct FColor& Color, bool bPersistentLines, unsigned char DepthPriority, float LifeTime, float Thickness);
		void ClearRecording();
		void BeginRecording(bool bRunDetection, bool bFlattenGesture, bool bDrawGesture, bool bDrawAsSpline, int32_t SamplingHTZ, int32_t SampleBufferSize, float ClampingTolerance);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRGlobalSettings
	 * Size -> 0x0308 (FullSize[0x0330] - InheritedSize[0x0028])
	 */
	class UVRGlobalSettings : public UObject
	{
	public:
		float                                                      LinearDriveStiffnessScale;                               // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LinearDriveDampingScale;                                 // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularDriveStiffnessScale;                              // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularDriveDampingScale;                                // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseGlobalLerpToHand;                                    // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2Z8L[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinDistanceForLerp;                                      // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LerpDuration;                                            // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSpeedForLerp;                                         // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpeedForLerp;                                         // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVRLerpInterpolationMode                                   LerpInterpolationMode;                                   // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCurve;                                               // 0x004D(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LNVO[0x2];                                   // 0x004E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  OptionalCurveToFollow;                                   // 0x0050(0x0088) Edit, Config, NativeAccessSpecifierPublic
		int32_t                                                    MaxCCDPasses;                                            // 0x00D8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JB43[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBPHitSurfaceProperties>                     MeleeSurfaceSettings;                                    // 0x00E0(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		struct FBPVirtualStockSettings                             VirtualStockSettings;                                    // 0x00F0(0x0190) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		float                                                      OneEuroMinCutoff;                                        // 0x0280(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OneEuroCutoffSlope;                                      // 0x0284(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OneEuroDeltaCutoff;                                      // 0x0288(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VD4A[0x1C];                                  // 0x028C(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBPVRControllerProfile>                      ControllerProfiles;                                      // 0x02A8(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YYJO[0x78];                                  // 0x02B8(0x0078) MISSED OFFSET (PADDING)

	public:
		void SaveVirtualStockGlobalSettings(const struct FBPVirtualStockSettings& NewVirtualStockSettings);
		void SaveControllerProfiles();
		void OverwriteControllerProfile(struct FBPVRControllerProfile* OverwritingProfile, bool bSaveOutToConfig);
		bool LoadControllerProfileByName(const class FName& ControllerProfileName, bool bSetAsCurrentProfile);
		bool LoadControllerProfile(const struct FBPVRControllerProfile& ControllerProfile, bool bSetAsCurrentProfile);
		bool IsGlobalLerpEnabled();
		void GetVirtualStockGlobalSettings(struct FBPVirtualStockSettings* OutVirtualStockSettings);
		void GetMeleeSurfaceGlobalSettings(TArray<struct FBPHitSurfaceProperties>* OutMeleeSurfaceSettings);
		class FName GetCurrentProfileName(bool* bHadLoadedProfile);
		struct FBPVRControllerProfile GetCurrentProfile(bool* bHadLoadedProfile);
		TArray<struct FBPVRControllerProfile> GetControllerProfiles();
		bool GetControllerProfile(const class FName& ControllerProfileName, struct FBPVRControllerProfile* OutProfile);
		void DeleteControllerProfile(const class FName& ControllerProfileName, bool bSaveOutToConfig);
		struct FTransform AdjustTransformByGivenControllerProfile(struct FBPVRControllerProfile* ControllerProfile, const struct FTransform& SocketTransform, bool bIsRightHand);
		struct FTransform AdjustTransformByControllerProfile(const class FName& OptionalControllerProfileName, const struct FTransform& SocketTransform, bool bIsRightHand);
		void AddControllerProfile(struct FBPVRControllerProfile* NewProfile, bool bSaveOutToConfig);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRGripInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVRGripInterface : public UInterface
	{
	public:
		void TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime);
		EGripInterfaceTeleportBehavior TeleportBehavior();
		bool SimulateOnDrop();
		void SetHeld(class UGripMotionControllerComponent* HoldingController, unsigned char GripID, bool bIsHeld);
		ESecondaryGripType SecondaryGripType();
		bool RequestsSocketing(class USceneComponent** ParentToSocketTo, class FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform);
		void OnUsed();
		void OnSecondaryUsed();
		void OnSecondaryGripRelease(class UGripMotionControllerComponent* GripOwningController, class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
		void OnSecondaryGrip(class UGripMotionControllerComponent* GripOwningController, class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
		void OnInput(const struct FKey& Key, EInputEvent KeyEvent);
		void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
		void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
		void OnEndUsed();
		void OnEndSecondaryUsed();
		void OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
		void OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
		void IsHeld(TArray<struct FBPGripPair>* HoldingControllers, bool* bIsHeld);
		EGripMovementReplicationSettings GripMovementReplicationType();
		EGripLateUpdateSettings GripLateUpdateSetting();
		float GripBreakDistance();
		EGripCollisionType GetPrimaryGripType(bool bIsSlot);
		void GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut);
		bool GetGripScripts(TArray<class UVRGripScriptBase*>* ArrayReference);
		bool DenyGripping(class UGripMotionControllerComponent* GripInitiator);
		void ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform, class FName* SlotName, class UGripMotionControllerComponent* CallingController, const class FName& OverridePrefix);
		bool AllowsMultipleGrips();
		struct FBPAdvGripSettings AdvancedGripSettings();
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRGripScriptBaseBP
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UVRGripScriptBaseBP : public UVRGripScriptBase
	{
	public:
		void ReceiveTick(float DeltaSeconds);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRInteractibleFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVRInteractibleFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void Interactible_OnGripInit(class USceneComponent* InteractibleComp, struct FBPActorGripInformation* GripInformation, struct FBPVRInteractibleBaseData* BaseDataToInit);
		float Interactible_GetThresholdSnappedValue(float ValueToSnap, float SnapIncrement, float SnapThreshold);
		struct FTransform Interactible_GetCurrentRelativeTransform(class USceneComponent* SceneComponentToCheck, struct FBPVRInteractibleBaseData* BaseData);
		struct FTransform Interactible_GetCurrentParentTransform(class USceneComponent* SceneComponentToCheck);
		float Interactible_GetAngleAroundAxisDelta(EVRInteractibleAxis AxisToCalc, const struct FVector& CurInteractorLocation, float InitialAngle);
		float Interactible_GetAngleAroundAxis(EVRInteractibleAxis AxisToCalc, const struct FVector& CurInteractorLocation);
		void Interactible_BeginPlayInit(class USceneComponent* InteractibleComp, struct FBPVRInteractibleBaseData* BaseDataToInit);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRLeverComponent
	 * Size -> 0x01C0 (FullSize[0x06D0] - InheritedSize[0x0510])
	 */
	class UVRLeverComponent : public UStaticMeshComponent
	{
	public:
		unsigned char                                              UnknownData_7Q0O[0x10];                                  // 0x0510(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLeverStateChanged;                                     // 0x0520(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLeverFinishedLerping;                                  // 0x0530(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      CurrentLeverAngle;                                       // 0x0540(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            AllCurrentLeverAngles;                                   // 0x0544(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             CurrentLeverForwardVector;                               // 0x0550(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPhysicsLever;                                         // 0x055C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUngripAtTargetRotation;                                 // 0x055D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVRInteractibleLeverAxis                                   LeverRotationAxis;                                       // 0x055E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q37R[0x1];                                   // 0x055F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LeverTogglePercentage;                                   // 0x0560(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeverLimitPositive;                                      // 0x0564(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeverLimitNegative;                                      // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLocked;                                               // 0x056C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoDropWhenLocked;                                     // 0x056D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVRInteractibleLeverReturnType                             LeverReturnTypeWhenReleased;                             // 0x056E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSendLeverEventsDuringLerp;                              // 0x056F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeverReturnSpeed;                                        // 0x0570(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlendAxisValuesByAngleThreshold;                        // 0x0574(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AH7S[0x3];                                   // 0x0575(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AngleThreshold;                                          // 0x0578(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FramesToAverage;                                         // 0x057C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeverMomentumFriction;                                   // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeverRestitution;                                        // 0x0584(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLeverMomentum;                                        // 0x0588(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLerping;                                              // 0x058C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TX9W[0x3];                                   // 0x058D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PrimarySlotRange;                                        // 0x0590(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondarySlotRange;                                      // 0x0594(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GripPriority;                                            // 0x0598(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K1AL[0x14];                                  // 0x059C(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform_NetQuantize                              InitialRelativeTransform;                                // 0x05B0(0x0030) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LWY9[0x70];                                  // 0x05E0(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0650(0x0020) Edit, BlueprintVisible, Net, NativeAccessSpecifierPublic
		bool                                                       bRepGameplayTags;                                        // 0x0670(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplicateMovement;                                      // 0x0671(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGripMovementReplicationSettings                           MovementReplicationSetting;                              // 0x0672(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_012H[0x1];                                   // 0x0673(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Stiffness;                                               // 0x0674(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damping;                                                 // 0x0678(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BreakDistance;                                           // 0x067C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDenyGripping;                                           // 0x0680(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsHeld;                                                 // 0x0681(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NQUF[0x6];                                   // 0x0682(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPGripPair                                         HoldingGrip;                                             // 0x0688(0x0010) BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BJJL[0x10];                                  // 0x0698(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnGripped;                                               // 0x06A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDropped;                                               // 0x06B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AIO4[0x8];                                   // 0x06C8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetLeverAngle(float NewAngle, const struct FVector& DualAxisForwardVector, bool bAllowThrowingEvents);
		void SetIsLocked(bool bNewLockedState);
		void SetGripPriority(int32_t NewGripPriority);
		void ResetInitialLeverLocation(bool bAllowThrowingEvents);
		void ReceiveLeverStateChanged(bool LeverStatus, EVRInteractibleLeverEventType LeverStatusType, float LeverAngleAtTime, float FullLeverAngleAtTime);
		void ReceiveLeverFinishedLerping(float LeverFinalAngle);
		float ReCalculateCurrentAngle(bool bAllowThrowingEvents);
		void OnRep_InitialRelativeTransform();
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRLogComponent
	 * Size -> 0x0038 (FullSize[0x0118] - InheritedSize[0x00E0])
	 */
	class UVRLogComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_BH35[0x30];                                  // 0x00E0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxLineLength;                                           // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxStoredMessages;                                       // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetConsoleText(const class FString& Text);
		void SendKeyEventToConsole(const struct FKey& Key, EInputEvent KeyEvent);
		bool DrawConsoleToRenderTarget2D(EBPVRConsoleDrawType DrawType, class UTextureRenderTarget2D* Texture, float ScrollOffset, bool bForceDraw);
		void AppendTextToConsole(const class FString& Text, bool bReturnAtEnd);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRMountComponent
	 * Size -> 0x0180 (FullSize[0x0690] - InheritedSize[0x0510])
	 */
	class UVRMountComponent : public UStaticMeshComponent
	{
	public:
		unsigned char                                              UnknownData_WMY3[0x10];                                  // 0x0510(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EVRInteractibleMountAxis                                   MountRotationAxis;                                       // 0x0520(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4S8N[0x6F];                                  // 0x0521(0x006F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FlipingZone;                                             // 0x0590(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FlipReajustYawSpeed;                                     // 0x0594(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GripPriority;                                            // 0x0598(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_06BP[0x94];                                  // 0x059C(0x0094) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0630(0x0020) Edit, BlueprintVisible, Net, NativeAccessSpecifierPublic
		bool                                                       bRepGameplayTags;                                        // 0x0650(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplicateMovement;                                      // 0x0651(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGripMovementReplicationSettings                           MovementReplicationSetting;                              // 0x0652(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VF3U[0x1];                                   // 0x0653(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Stiffness;                                               // 0x0654(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damping;                                                 // 0x0658(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BreakDistance;                                           // 0x065C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PrimarySlotRange;                                        // 0x0660(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondarySlotRange;                                      // 0x0664(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDenyGripping;                                           // 0x0668(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsHeld;                                                 // 0x0669(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R6PD[0x6];                                   // 0x066A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPGripPair                                         HoldingGrip;                                             // 0x0670(0x0010) BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MVG3[0x10];                                  // 0x0680(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetGripPriority(int32_t NewGripPriority);
		void ResetInitialMountLocation();
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRPathFollowingComponent
	 * Size -> 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
	 */
	class UVRPathFollowingComponent : public UPathFollowingComponent
	{
	public:
		class UVRBaseCharacterMovementComponent*                   VRMovementComp;                                          // 0x0280(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRPlayerController
	 * Size -> 0x0010 (FullSize[0x05E0] - InheritedSize[0x05D0])
	 */
	class AVRPlayerController : public APlayerController
	{
	public:
		bool                                                       bDisableServerUpdateCamera;                              // 0x05D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1IZV[0xF];                                   // 0x05D1(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRPlayerStart
	 * Size -> 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
	 */
	class AVRPlayerStart : public APlayerStart
	{
	public:
		class USceneComponent*                                     VRRootComp;                                              // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.RenderTargetReplicationProxy
	 * Size -> 0x0060 (FullSize[0x02E0] - InheritedSize[0x0280])
	 */
	class ARenderTargetReplicationProxy : public AActor
	{
	public:
		TWeakObjectPtr<class UVRRenderTargetManager>               OwningManager;                                           // 0x0280(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   OwnersID;                                                // 0x0288(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZSB[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPVRReplicatedTextureStore                         TextureStore;                                            // 0x0290(0x0030) Transient, NativeAccessSpecifierPublic
		int32_t                                                    BlobNum;                                                 // 0x02C0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YHRW[0x14];                                  // 0x02C4(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TextureBlobSize;                                         // 0x02D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxBytesPerSecondRate;                                   // 0x02DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SendNextDataBlob();
		void SendLocalDrawOperations(TArray<struct FRenderManagerOperation> LocalRenderOperationStoreList);
		void ReceiveTextureBlob(TArray<unsigned char> TextureBlob, int32_t LocationInData, int32_t BlobCount);
		void ReceiveTexture(const struct FBPVRReplicatedTextureStore& TextureData);
		void OnRep_Manager();
		void InitTextureSend(int32_t Width, int32_t Height, int32_t TotalDataCount, int32_t BlobCount, EPixelFormat PixelFormat, bool bIsZipped);
		void Ack_ReceiveTextureBlob(int32_t BlobCount);
		void Ack_InitTextureSend(int32_t TotalDataCount);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRRenderTargetManager
	 * Size -> 0x00D0 (FullSize[0x01B0] - InheritedSize[0x00E0])
	 */
	class UVRRenderTargetManager : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_IA1G[0x4];                                   // 0x00E0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class ARenderTargetReplicationProxy>        LocalProxy;                                              // 0x00E4(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V8I9[0x24];                                  // 0x00EC(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DrawRate;                                                // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WIKU[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        DrawHandle;                                              // 0x0118(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsStoringImage;                                         // 0x0120(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInitiallyReplicateTexture;                              // 0x0121(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLoadingTextureBuffer;                                 // 0x0122(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M9T6[0x1];                                   // 0x0123(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TextureBlobSize;                                         // 0x0124(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxBytesPerSecondRate;                                   // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MSS3[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCanvasRenderTarget2D*                               RenderTarget;                                            // 0x0130(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RenderTargetWidth;                                       // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RenderTargetHeight;                                      // 0x013C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              ClearColor;                                              // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q89H[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FClientRepData>                              NetRelevancyLog;                                         // 0x0148(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		float                                                      PollRelevancyTime;                                       // 0x0158(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8GAY[0xC];                                   // 0x015C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPVRReplicatedTextureStore                         RenderTargetStore;                                       // 0x0168(0x0030) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R8TJ[0x18];                                  // 0x0198(0x0018) MISSED OFFSET (PADDING)

	public:
		void SendDrawOperations(TArray<struct FRenderManagerOperation> RenderOperationStoreList);
		bool GenerateTrisFromBoxPlaneIntersection(class UPrimitiveComponent* PrimToBoxCheck, const struct FTransform& WorldTransformOfPlane, const struct FPlane& LocalProjectionPlane, const struct FVector2D& PlaneSize, const struct FColor& UVColor, TArray<struct FCanvasUVTri>* OutTris);
		void DrawPoll();
		void AddTextureDrawOperation(const struct FVector2D& Position, class UTexture2D* TextureToDisplay);
		void AddMaterialTrianglesDrawOperation(TArray<struct FCanvasUVTri> Tris, class UMaterial* Material);
		void AddLineDrawOperation(const struct FVector2D& Point1, const struct FVector2D& Point2, const struct FColor& Color, int32_t Thickness);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRRootComponent
	 * Size -> 0x00E0 (FullSize[0x0580] - InheritedSize[0x04A0])
	 */
	class UVRRootComponent : public UCapsuleComponent
	{
	public:
		unsigned char                                              UnknownData_N06M[0x10];                                  // 0x04A0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPVRWaistTracking_Info                             OptionalWaistTrackingParent;                             // 0x04B0(0x0020) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class USceneComponent*                                     TargetPrimitiveComponent;                                // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FXLK[0x48];                                  // 0x04D8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             VRCapsuleOffset;                                         // 0x0520(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPauseTracking;                                          // 0x052C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCenterCapsuleOnHMD;                                     // 0x052D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowSimulatingCollision;                               // 0x052E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseWalkingCollisionOverride;                            // 0x052F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          WalkingCollisionOverride;                                // 0x0530(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FVMW[0x3F];                                  // 0x0531(0x003F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bHadRelativeMovement;                                    // 0x0570(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HW1L[0xF];                                   // 0x0571(0x000F) MISSED OFFSET (PADDING)

	public:
		void SetTrackingPaused(bool bPaused);
		void SetCapsuleSizeVR(float NewRadius, float NewHalfHeight, bool bUpdateOverlaps);
		void SetCapsuleHalfHeightVR(float HalfHeight, bool bUpdateOverlaps);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRSimpleCharacter
	 * Size -> 0x0008 (FullSize[0x06C0] - InheritedSize[0x06B8])
	 */
	class AVRSimpleCharacter : public AVRBaseCharacter
	{
	public:
		class USceneComponent*                                     VRSceneComponent;                                        // 0x06B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRSimpleCharacterMovementComponent
	 * Size -> 0x0058 (FullSize[0x0F60] - InheritedSize[0x0F08])
	 */
	class UVRSimpleCharacterMovementComponent : public UVRBaseCharacterMovementComponent
	{
	public:
		unsigned char                                              UnknownData_DHZS[0x8];                                   // 0x0F08(0x0008) Fix Super Size
		unsigned char                                              UnknownData_STJU[0x30];                                  // 0x0F10(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCapsuleComponent*                                   VRRootCapsule;                                           // 0x0F40(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCameraComponent*                                    VRCameraComponent;                                       // 0x0F48(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipHMDChecks;                                          // 0x0F50(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OELD[0xF];                                   // 0x0F51(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRSliderComponent
	 * Size -> 0x01A0 (FullSize[0x06B0] - InheritedSize[0x0510])
	 */
	class UVRSliderComponent : public UStaticMeshComponent
	{
	public:
		unsigned char                                              UnknownData_4KYQ[0x10];                                  // 0x0510(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSliderHitPoint;                                        // 0x0520(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSliderFinishedLerping;                                 // 0x0530(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bUpdateInTick;                                           // 0x0540(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQKL[0x7];                                   // 0x0541(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MaxSlideDistance;                                        // 0x0548(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MinSlideDistance;                                        // 0x0554(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVRInteractibleSliderDropBehavior                          SliderBehaviorWhenReleased;                              // 0x0560(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MM5O[0x3];                                   // 0x0561(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FramesToAverage;                                         // 0x0564(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SliderMomentumFriction;                                  // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SliderRestitution;                                       // 0x056C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSliderMomentum;                                       // 0x0570(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLerping;                                              // 0x0574(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E6ET[0x23];                                  // 0x0575(0x0023) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentSliderProgress;                                   // 0x0598(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSlideDistanceIsInParentSpace;                           // 0x059C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLocked;                                               // 0x059D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoDropWhenLocked;                                     // 0x059E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLegacyLogic;                                         // 0x059F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EventThrowThreshold;                                     // 0x05A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8KNO[0x4];                                   // 0x05A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PrimarySlotRange;                                        // 0x05A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondarySlotRange;                                      // 0x05AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GripPriority;                                            // 0x05B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HA7T[0x4];                                   // 0x05B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USplineComponent*                                    SplineComponentToFollow;                                 // 0x05B8(0x0008) Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFollowSplineRotationAndScale;                           // 0x05C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnforceSplineLinearity;                                 // 0x05C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T066[0xA];                                   // 0x05C2(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EVRInteractibleSliderLerpType                              SplineLerpType;                                          // 0x05CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D7O2[0x3];                                   // 0x05CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SplineLerpValue;                                         // 0x05D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSliderUsesSnapPoints;                                   // 0x05D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M9CD[0x3];                                   // 0x05D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SnapIncrement;                                           // 0x05D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SnapThreshold;                                           // 0x05DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncrementProgressBetweenSnapPoints;                     // 0x05E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0PPS[0xF];                                   // 0x05E1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform_NetQuantize                              InitialRelativeTransform;                                // 0x05F0(0x0030) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RHOT[0x28];                                  // 0x0620(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0648(0x0020) Edit, BlueprintVisible, Net, NativeAccessSpecifierPublic
		bool                                                       bRepGameplayTags;                                        // 0x0668(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplicateMovement;                                      // 0x0669(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGripMovementReplicationSettings                           MovementReplicationSetting;                              // 0x066A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4QM4[0x1];                                   // 0x066B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BreakDistance;                                           // 0x066C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDenyGripping;                                           // 0x0670(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsHeld;                                                 // 0x0671(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A0DY[0x6];                                   // 0x0672(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPGripPair                                         HoldingGrip;                                             // 0x0678(0x0010) BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_113Q[0x8];                                   // 0x0688(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnGripped;                                               // 0x0690(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDropped;                                               // 0x06A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void SetSplineComponentToFollow(class USplineComponent* SplineToFollow);
		void SetSliderProgress(float NewSliderProgress);
		void SetIsLocked(bool bNewLockedState);
		void SetGripPriority(int32_t NewGripPriority);
		void ResetInitialSliderLocation();
		void ReceiveSliderHitPoint(float SliderProgressPoint);
		void ReceiveSliderFinishedLerping(float FinalProgress);
		void OnRep_InitialRelativeTransform();
		float CalculateSliderProgress();
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRStereoWidgetRenderComponent
	 * Size -> 0x0078 (FullSize[0x0380] - InheritedSize[0x0308])
	 */
	class UVRStereoWidgetRenderComponent : public UStereoLayerComponent
	{
	public:
		class UClass*                                              WidgetClass;                                             // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUserWidget*                                         Widget;                                                  // 0x0310(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawAtDesiredSize;                                      // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IYUT[0x3];                                   // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WidgetRenderScale;                                       // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WidgetRenderGamma;                                       // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseGammaCorrection;                                     // 0x0324(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SJ56[0x3];                                   // 0x0325(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        RenderTargetClearColor;                                  // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawWithoutStereo;                                      // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7SFF[0x3];                                   // 0x0339(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DrawRate;                                                // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HGDL[0x20];                                  // 0x0340(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0360(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q6DV[0x18];                                  // 0x0368(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetWidgetAndInit(class UClass* NewWidgetClass);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRStereoWidgetComponent
	 * Size -> 0x0070 (FullSize[0x0640] - InheritedSize[0x05D0])
	 */
	class UVRStereoWidgetComponent : public UWidgetComponent
	{
	public:
		class UStereoLayerShape*                                   Shape;                                                   // 0x05D0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRenderBothStereoAndWorld;                               // 0x05D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseEpicsWorldLockedStereo;                              // 0x05D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDelayForRenderThread;                                   // 0x05DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSleeping;                                             // 0x05DB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsDepth : 1;                                      // 0x05DC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoAlphaChannel : 1;                                     // 0x05DC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bQuadPreserveTextureRatio : 1;                           // 0x05DC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P3LO[0x17];                                  // 0x05DD(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Priority;                                                // 0x05F4(0x0004) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SKS2[0x48];                                  // 0x05F8(0x0048) MISSED OFFSET (PADDING)

	public:
		void SetPriority(int32_t InPriority);
		int32_t GetPriority();
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRTrackedParentInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVRTrackedParentInterface : public UInterface
	{
	public:
		void SetTrackedParent(class UPrimitiveComponent* NewParentComponent, float WaistRadius, EBPVRWaistTrackingMode WaistTrackingMode);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRVehiclePawn
	 * Size -> 0x0000 (FullSize[0x02E0] - InheritedSize[0x02E0])
	 */
	class AVRVehiclePawn : public APawn
	{
	public:
		bool SetBindToInput(class AController* CController, bool bBindToInput);
		bool ForceSecondaryPossession(class AController* NewController);
		static UClass* StaticClass();
	};

	/**
	 * Class VRExpansionPlugin.VRWheeledVehicle
	 * Size -> 0x0000 (FullSize[0x02F0] - InheritedSize[0x02F0])
	 */
	class AVRWheeledVehicle : public AWheeledVehicle
	{
	public:
		bool SetOverrideController(class AController* NewController);
		bool SetBindToInput(class AController* CController, bool bBindToInput);
		bool ForceSecondaryPossession(class AController* NewController);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
