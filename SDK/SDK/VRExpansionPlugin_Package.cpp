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
	 * 		Name   -> Function VRExpansionPlugin.BucketUpdateSubsystem.RemoveObjectFromBucketByFunctionName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InObject                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FunctionName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBucketUpdateSubsystem::RemoveObjectFromBucketByFunctionName(class UObject* InObject, const class FName& FunctionName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.BucketUpdateSubsystem.RemoveObjectFromBucketByFunctionName");
		
		UBucketUpdateSubsystem_RemoveObjectFromBucketByFunctionName_Params params {};
		params.InObject = InObject;
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.BucketUpdateSubsystem.RemoveObjectFromBucketByEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UBucketUpdateSubsystem::RemoveObjectFromBucketByEvent(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.BucketUpdateSubsystem.RemoveObjectFromBucketByEvent");
		
		UBucketUpdateSubsystem_RemoveObjectFromBucketByEvent_Params params {};
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.BucketUpdateSubsystem.RemoveObjectFromAllBuckets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InObject                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBucketUpdateSubsystem::RemoveObjectFromAllBuckets(class UObject* InObject)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.BucketUpdateSubsystem.RemoveObjectFromAllBuckets");
		
		UBucketUpdateSubsystem_RemoveObjectFromAllBuckets_Params params {};
		params.InObject = InObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.BucketUpdateSubsystem.K2_AddObjectToBucket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            UpdateHTZ                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     InObject                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FunctionName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBucketUpdateSubsystem::K2_AddObjectToBucket(int32_t UpdateHTZ, class UObject* InObject, const class FName& FunctionName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.BucketUpdateSubsystem.K2_AddObjectToBucket");
		
		UBucketUpdateSubsystem_K2_AddObjectToBucket_Params params {};
		params.UpdateHTZ = UpdateHTZ;
		params.InObject = InObject;
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.BucketUpdateSubsystem.K2_AddObjectEventToBucket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UpdateHTZ                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBucketUpdateSubsystem::K2_AddObjectEventToBucket(const class FScriptDelegate& Delegate, int32_t UpdateHTZ)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.BucketUpdateSubsystem.K2_AddObjectEventToBucket");
		
		UBucketUpdateSubsystem_K2_AddObjectEventToBucket_Params params {};
		params.Delegate = Delegate;
		params.UpdateHTZ = UpdateHTZ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.BucketUpdateSubsystem.IsObjectFunctionInBucket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InObject                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        FunctionName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBucketUpdateSubsystem::IsObjectFunctionInBucket(class UObject* InObject, const class FName& FunctionName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.BucketUpdateSubsystem.IsObjectFunctionInBucket");
		
		UBucketUpdateSubsystem_IsObjectFunctionInBucket_Params params {};
		params.InObject = InObject;
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.BucketUpdateSubsystem.IsActive
	 * 		Flags  -> ()
	 */
	bool UBucketUpdateSubsystem::IsActive()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.BucketUpdateSubsystem.IsActive");
		
		UBucketUpdateSubsystem_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBucketUpdateSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBucketUpdateSubsystem::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.BucketUpdateSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.UpdatePhysicsHandleTransform_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     GrippedActor                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  NewTransform                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::UpdatePhysicsHandleTransform_BP(const struct FBPActorGripInformation& GrippedActor, const struct FTransform& NewTransform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.UpdatePhysicsHandleTransform_BP");
		
		UGripMotionControllerComponent_UpdatePhysicsHandleTransform_BP_Params params {};
		params.GrippedActor = GrippedActor;
		params.NewTransform = NewTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.UpdatePhysicsHandle_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bFullyRecreate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::UpdatePhysicsHandle_BP(const struct FBPActorGripInformation& Grip, bool bFullyRecreate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.UpdatePhysicsHandle_BP");
		
		UGripMotionControllerComponent_UpdatePhysicsHandle_BP_Params params {};
		params.Grip = Grip;
		params.bFullyRecreate = bFullyRecreate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.TeleportMoveGrips
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bTeleportPhysicsGrips                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsForPostTeleport                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::TeleportMoveGrips(bool bTeleportPhysicsGrips, bool bIsForPostTeleport)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.TeleportMoveGrips");
		
		UGripMotionControllerComponent_TeleportMoveGrips_Params params {};
		params.bTeleportPhysicsGrips = bTeleportPhysicsGrips;
		params.bIsForPostTeleport = bIsForPostTeleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.TeleportMoveGrippedComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         ComponentToMove                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTeleportPhysicsGrips                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::TeleportMoveGrippedComponent(class UPrimitiveComponent* ComponentToMove, bool bTeleportPhysicsGrips)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.TeleportMoveGrippedComponent");
		
		UGripMotionControllerComponent_TeleportMoveGrippedComponent_Params params {};
		params.ComponentToMove = ComponentToMove;
		params.bTeleportPhysicsGrips = bTeleportPhysicsGrips;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.TeleportMoveGrippedActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      GrippedActorToMove                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTeleportPhysicsGrips                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::TeleportMoveGrippedActor(class AActor* GrippedActorToMove, bool bTeleportPhysicsGrips)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.TeleportMoveGrippedActor");
		
		UGripMotionControllerComponent_TeleportMoveGrippedActor_Params params {};
		params.GrippedActorToMove = GrippedActorToMove;
		params.bTeleportPhysicsGrips = bTeleportPhysicsGrips;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.TeleportMoveGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bTeleportPhysicsGrips                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsForPostTeleport                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::TeleportMoveGrip(struct FBPActorGripInformation* Grip, bool bTeleportPhysicsGrips, bool bIsForPostTeleport)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.TeleportMoveGrip");
		
		UGripMotionControllerComponent_TeleportMoveGrip_Params params {};
		params.bTeleportPhysicsGrips = bTeleportPhysicsGrips;
		params.bIsForPostTeleport = bIsForPostTeleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Grip != nullptr)
			*Grip = params.Grip;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.SetUpPhysicsHandle_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::SetUpPhysicsHandle_BP(const struct FBPActorGripInformation& Grip)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.SetUpPhysicsHandle_BP");
		
		UGripMotionControllerComponent_SetUpPhysicsHandle_BP_Params params {};
		params.Grip = Grip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.SetSocketTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ObjectToSocket                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform_NetQuantize                      RelativeTransformToParent                                  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::SetSocketTransform(class UObject* ObjectToSocket, const struct FTransform_NetQuantize& RelativeTransformToParent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.SetSocketTransform");
		
		UGripMotionControllerComponent_SetSocketTransform_Params params {};
		params.ObjectToSocket = ObjectToSocket;
		params.RelativeTransformToParent = RelativeTransformToParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.SetPhysicsHandleSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FBPAdvancedPhysicsHandleSettings            PhysicsHandleSettingsIn                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::SetPhysicsHandleSettings(const struct FBPActorGripInformation& Grip, const struct FBPAdvancedPhysicsHandleSettings& PhysicsHandleSettingsIn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.SetPhysicsHandleSettings");
		
		UGripMotionControllerComponent_SetPhysicsHandleSettings_Params params {};
		params.Grip = Grip;
		params.PhysicsHandleSettingsIn = PhysicsHandleSettingsIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.SetPausedTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  PausedTransform                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bTeleport                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::SetPausedTransform(const struct FBPActorGripInformation& Grip, const struct FTransform& PausedTransform, bool bTeleport)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.SetPausedTransform");
		
		UGripMotionControllerComponent_SetPausedTransform_Params params {};
		params.Grip = Grip;
		params.PausedTransform = PausedTransform;
		params.bTeleport = bTeleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.SetGripStiffnessAndDamping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		EBPVRResultSwitch                                  Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewStiffness                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewDamping                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAlsoSetAngularValues                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OptionalAngularStiffness                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OptionalAngularDamping                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::SetGripStiffnessAndDamping(const struct FBPActorGripInformation& Grip, EBPVRResultSwitch* Result, float NewStiffness, float NewDamping, bool bAlsoSetAngularValues, float OptionalAngularStiffness, float OptionalAngularDamping)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.SetGripStiffnessAndDamping");
		
		UGripMotionControllerComponent_SetGripStiffnessAndDamping_Params params {};
		params.Grip = Grip;
		params.NewStiffness = NewStiffness;
		params.NewDamping = NewDamping;
		params.bAlsoSetAngularValues = bAlsoSetAngularValues;
		params.OptionalAngularStiffness = OptionalAngularStiffness;
		params.OptionalAngularDamping = OptionalAngularDamping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.SetGripRelativeTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		EBPVRResultSwitch                                  Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  NewRelativeTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::SetGripRelativeTransform(const struct FBPActorGripInformation& Grip, EBPVRResultSwitch* Result, const struct FTransform& NewRelativeTransform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.SetGripRelativeTransform");
		
		UGripMotionControllerComponent_SetGripRelativeTransform_Params params {};
		params.Grip = Grip;
		params.NewRelativeTransform = NewRelativeTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.SetGripPaused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		EBPVRResultSwitch                                  Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsPaused                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNoConstraintWhenPaused                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::SetGripPaused(const struct FBPActorGripInformation& Grip, EBPVRResultSwitch* Result, bool bIsPaused, bool bNoConstraintWhenPaused)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.SetGripPaused");
		
		UGripMotionControllerComponent_SetGripPaused_Params params {};
		params.Grip = Grip;
		params.bIsPaused = bIsPaused;
		params.bNoConstraintWhenPaused = bNoConstraintWhenPaused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.SetGripLateUpdateSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		EBPVRResultSwitch                                  Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGripLateUpdateSettings                            NewGripLateUpdateSetting                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::SetGripLateUpdateSetting(const struct FBPActorGripInformation& Grip, EBPVRResultSwitch* Result, EGripLateUpdateSettings NewGripLateUpdateSetting)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.SetGripLateUpdateSetting");
		
		UGripMotionControllerComponent_SetGripLateUpdateSetting_Params params {};
		params.Grip = Grip;
		params.NewGripLateUpdateSetting = NewGripLateUpdateSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.SetGripHybridLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		EBPVRResultSwitch                                  Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsLocked                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::SetGripHybridLock(const struct FBPActorGripInformation& Grip, EBPVRResultSwitch* Result, bool bIsLocked)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.SetGripHybridLock");
		
		UGripMotionControllerComponent_SetGripHybridLock_Params params {};
		params.Grip = Grip;
		params.bIsLocked = bIsLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.SetGripCollisionType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		EBPVRResultSwitch                                  Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGripCollisionType                                 NewGripCollisionType                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::SetGripCollisionType(const struct FBPActorGripInformation& Grip, EBPVRResultSwitch* Result, EGripCollisionType NewGripCollisionType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.SetGripCollisionType");
		
		UGripMotionControllerComponent_SetGripCollisionType_Params params {};
		params.Grip = Grip;
		params.NewGripCollisionType = NewGripCollisionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.SetGripAdditionTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		EBPVRResultSwitch                                  Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  NewAdditionTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bMakeGripRelative                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::SetGripAdditionTransform(const struct FBPActorGripInformation& Grip, EBPVRResultSwitch* Result, const struct FTransform& NewAdditionTransform, bool bMakeGripRelative)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.SetGripAdditionTransform");
		
		UGripMotionControllerComponent_SetGripAdditionTransform_Params params {};
		params.Grip = Grip;
		params.NewAdditionTransform = NewAdditionTransform;
		params.bMakeGripRelative = bMakeGripRelative;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.SetCustomPivotComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             NewCustomPivotComponent                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        PivotSocketName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::SetCustomPivotComponent(class USceneComponent* NewCustomPivotComponent, const class FName& PivotSocketName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.SetCustomPivotComponent");
		
		UGripMotionControllerComponent_SetCustomPivotComponent_Params params {};
		params.NewCustomPivotComponent = NewCustomPivotComponent;
		params.PivotSocketName = PivotSocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.Server_SendControllerTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPVRComponentPosRep                        NewTransform                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::Server_SendControllerTransform(const struct FBPVRComponentPosRep& NewTransform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.Server_SendControllerTransform");
		
		UGripMotionControllerComponent_Server_SendControllerTransform_Params params {};
		params.NewTransform = NewTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifySecondaryAttachmentChanged_Retain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      GripID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPSecondaryGripInfo                        SecondaryGripInfo                                          (ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FTransform_NetQuantize                      NewRelativeTransform                                       (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::Server_NotifySecondaryAttachmentChanged_Retain(unsigned char GripID, const struct FBPSecondaryGripInfo& SecondaryGripInfo, const struct FTransform_NetQuantize& NewRelativeTransform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifySecondaryAttachmentChanged_Retain");
		
		UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Retain_Params params {};
		params.GripID = GripID;
		params.SecondaryGripInfo = SecondaryGripInfo;
		params.NewRelativeTransform = NewRelativeTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifySecondaryAttachmentChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      GripID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPSecondaryGripInfo                        SecondaryGripInfo                                          (ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::Server_NotifySecondaryAttachmentChanged(unsigned char GripID, const struct FBPSecondaryGripInfo& SecondaryGripInfo)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifySecondaryAttachmentChanged");
		
		UGripMotionControllerComponent_Server_NotifySecondaryAttachmentChanged_Params params {};
		params.GripID = GripID;
		params.SecondaryGripInfo = SecondaryGripInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifyLocalGripRemoved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      GripID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform_NetQuantize                      TransformAtDrop                                            (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize100                      AngularVelocity                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize100                      LinearVelocity                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::Server_NotifyLocalGripRemoved(unsigned char GripID, const struct FTransform_NetQuantize& TransformAtDrop, const struct FVector_NetQuantize100& AngularVelocity, const struct FVector_NetQuantize100& LinearVelocity)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifyLocalGripRemoved");
		
		UGripMotionControllerComponent_Server_NotifyLocalGripRemoved_Params params {};
		params.GripID = GripID;
		params.TransformAtDrop = TransformAtDrop;
		params.AngularVelocity = AngularVelocity;
		params.LinearVelocity = LinearVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifyLocalGripAddedOrChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     newGrip                                                    (ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::Server_NotifyLocalGripAddedOrChanged(const struct FBPActorGripInformation& newGrip)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifyLocalGripAddedOrChanged");
		
		UGripMotionControllerComponent_Server_NotifyLocalGripAddedOrChanged_Params params {};
		params.newGrip = newGrip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifyHandledTransaction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      GripID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::Server_NotifyHandledTransaction(unsigned char GripID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifyHandledTransaction");
		
		UGripMotionControllerComponent_Server_NotifyHandledTransaction_Params params {};
		params.GripID = GripID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifyDropAndSocketGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      GripID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             SocketingParent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OptionalSocketName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform_NetQuantize                      RelativeTransformToParent                                  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWeldBodies                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::Server_NotifyDropAndSocketGrip(unsigned char GripID, class USceneComponent* SocketingParent, const class FName& OptionalSocketName, const struct FTransform_NetQuantize& RelativeTransformToParent, bool bWeldBodies)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.Server_NotifyDropAndSocketGrip");
		
		UGripMotionControllerComponent_Server_NotifyDropAndSocketGrip_Params params {};
		params.GripID = GripID;
		params.SocketingParent = SocketingParent;
		params.OptionalSocketName = OptionalSocketName;
		params.RelativeTransformToParent = RelativeTransformToParent;
		params.bWeldBodies = bWeldBodies;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.RemoveSecondaryAttachmentPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     GrippedObjectToRemoveAttachment                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LerpToTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::RemoveSecondaryAttachmentPoint(class UObject* GrippedObjectToRemoveAttachment, float LerpToTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.RemoveSecondaryAttachmentPoint");
		
		UGripMotionControllerComponent_RemoveSecondaryAttachmentPoint_Params params {};
		params.GrippedObjectToRemoveAttachment = GrippedObjectToRemoveAttachment;
		params.LerpToTime = LerpToTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.RemoveSecondaryAttachmentFromGripByID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      GripID                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LerpToTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::RemoveSecondaryAttachmentFromGripByID(unsigned char GripID, float LerpToTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.RemoveSecondaryAttachmentFromGripByID");
		
		UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGripByID_Params params {};
		params.GripID = GripID;
		params.LerpToTime = LerpToTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.RemoveSecondaryAttachmentFromGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     GripToRemoveAttachment                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		float                                              LerpToTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::RemoveSecondaryAttachmentFromGrip(const struct FBPActorGripInformation& GripToRemoveAttachment, float LerpToTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.RemoveSecondaryAttachmentFromGrip");
		
		UGripMotionControllerComponent_RemoveSecondaryAttachmentFromGrip_Params params {};
		params.GripToRemoveAttachment = GripToRemoveAttachment;
		params.LerpToTime = LerpToTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.PostTeleportMoveGrippedObjects
	 * 		Flags  -> ()
	 */
	void UGripMotionControllerComponent::PostTeleportMoveGrippedObjects()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.PostTeleportMoveGrippedObjects");
		
		UGripMotionControllerComponent_PostTeleportMoveGrippedObjects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.OnRep_ReplicatedControllerTransform
	 * 		Flags  -> ()
	 */
	void UGripMotionControllerComponent::OnRep_ReplicatedControllerTransform()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.OnRep_ReplicatedControllerTransform");
		
		UGripMotionControllerComponent_OnRep_ReplicatedControllerTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.OnRep_LocalTransaction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBPActorGripInformation>             OriginalArrayState                                         (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::OnRep_LocalTransaction(TArray<struct FBPActorGripInformation> OriginalArrayState)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.OnRep_LocalTransaction");
		
		UGripMotionControllerComponent_OnRep_LocalTransaction_Params params {};
		params.OriginalArrayState = OriginalArrayState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.OnRep_LocallyGrippedObjects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBPActorGripInformation>             OriginalArrayState                                         (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::OnRep_LocallyGrippedObjects(TArray<struct FBPActorGripInformation> OriginalArrayState)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.OnRep_LocallyGrippedObjects");
		
		UGripMotionControllerComponent_OnRep_LocallyGrippedObjects_Params params {};
		params.OriginalArrayState = OriginalArrayState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.OnRep_GrippedObjects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBPActorGripInformation>             OriginalArrayState                                         (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::OnRep_GrippedObjects(TArray<struct FBPActorGripInformation> OriginalArrayState)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.OnRep_GrippedObjects");
		
		UGripMotionControllerComponent_OnRep_GrippedObjects_Params params {};
		params.OriginalArrayState = OriginalArrayState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.NotifyDropAndSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     NewDrop                                                    (ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             SocketingParent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OptionalSocketName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform_NetQuantize                      RelativeTransformToParent                                  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWeldBodies                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::NotifyDropAndSocket(const struct FBPActorGripInformation& NewDrop, class USceneComponent* SocketingParent, const class FName& OptionalSocketName, const struct FTransform_NetQuantize& RelativeTransformToParent, bool bWeldBodies)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.NotifyDropAndSocket");
		
		UGripMotionControllerComponent_NotifyDropAndSocket_Params params {};
		params.NewDrop = NewDrop;
		params.SocketingParent = SocketingParent;
		params.OptionalSocketName = OptionalSocketName;
		params.RelativeTransformToParent = RelativeTransformToParent;
		params.bWeldBodies = bWeldBodies;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.NotifyDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     NewDrop                                                    (ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bSimulate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::NotifyDrop(const struct FBPActorGripInformation& NewDrop, bool bSimulate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.NotifyDrop");
		
		UGripMotionControllerComponent_NotifyDrop_Params params {};
		params.NewDrop = NewDrop;
		params.bSimulate = bSimulate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.NewControllerProfileLoaded
	 * 		Flags  -> ()
	 */
	void UGripMotionControllerComponent::NewControllerProfileLoaded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.NewControllerProfileLoaded");
		
		UGripMotionControllerComponent_NewControllerProfileLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.HasGrippedObjects
	 * 		Flags  -> ()
	 */
	bool UGripMotionControllerComponent::HasGrippedObjects()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.HasGrippedObjects");
		
		UGripMotionControllerComponent_HasGrippedObjects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GripObjectByInterface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ObjectToGrip                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  WorldOffset                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWorldOffsetIsRelative                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OptionalBoneToGripName                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OptionalSnapToSocketName                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSlotGrip                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::GripObjectByInterface(class UObject* ObjectToGrip, const struct FTransform& WorldOffset, bool bWorldOffsetIsRelative, const class FName& OptionalBoneToGripName, const class FName& OptionalSnapToSocketName, bool bIsSlotGrip)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GripObjectByInterface");
		
		UGripMotionControllerComponent_GripObjectByInterface_Params params {};
		params.ObjectToGrip = ObjectToGrip;
		params.WorldOffset = WorldOffset;
		params.bWorldOffsetIsRelative = bWorldOffsetIsRelative;
		params.OptionalBoneToGripName = OptionalBoneToGripName;
		params.OptionalSnapToSocketName = OptionalSnapToSocketName;
		params.bIsSlotGrip = bIsSlotGrip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GripObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ObjectToGrip                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  WorldOffset                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWorldOffsetIsRelative                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OptionalSnapToSocketName                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OptionalBoneToGripName                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGripCollisionType                                 GripCollisionType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGripLateUpdateSettings                            GripLateUpdateSetting                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGripMovementReplicationSettings                   GripMovementReplicationSetting                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GripStiffness                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GripDamping                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSlotGrip                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::GripObject(class UObject* ObjectToGrip, const struct FTransform& WorldOffset, bool bWorldOffsetIsRelative, const class FName& OptionalSnapToSocketName, const class FName& OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GripObject");
		
		UGripMotionControllerComponent_GripObject_Params params {};
		params.ObjectToGrip = ObjectToGrip;
		params.WorldOffset = WorldOffset;
		params.bWorldOffsetIsRelative = bWorldOffsetIsRelative;
		params.OptionalSnapToSocketName = OptionalSnapToSocketName;
		params.OptionalBoneToGripName = OptionalBoneToGripName;
		params.GripCollisionType = GripCollisionType;
		params.GripLateUpdateSetting = GripLateUpdateSetting;
		params.GripMovementReplicationSetting = GripMovementReplicationSetting;
		params.GripStiffness = GripStiffness;
		params.GripDamping = GripDamping;
		params.bIsSlotGrip = bIsSlotGrip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GripControllerIsTracked
	 * 		Flags  -> ()
	 */
	bool UGripMotionControllerComponent::GripControllerIsTracked()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GripControllerIsTracked");
		
		UGripMotionControllerComponent_GripControllerIsTracked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GripComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         ComponentToGrip                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  WorldOffset                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWorldOffsetIsRelative                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OptionalSnapToSocketName                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OptionalBoneToGripName                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGripCollisionType                                 GripCollisionType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGripLateUpdateSettings                            GripLateUpdateSetting                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGripMovementReplicationSettings                   GripMovementReplicationSetting                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GripStiffness                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GripDamping                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSlotGrip                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::GripComponent(class UPrimitiveComponent* ComponentToGrip, const struct FTransform& WorldOffset, bool bWorldOffsetIsRelative, const class FName& OptionalSnapToSocketName, const class FName& OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GripComponent");
		
		UGripMotionControllerComponent_GripComponent_Params params {};
		params.ComponentToGrip = ComponentToGrip;
		params.WorldOffset = WorldOffset;
		params.bWorldOffsetIsRelative = bWorldOffsetIsRelative;
		params.OptionalSnapToSocketName = OptionalSnapToSocketName;
		params.OptionalBoneToGripName = OptionalBoneToGripName;
		params.GripCollisionType = GripCollisionType;
		params.GripLateUpdateSetting = GripLateUpdateSetting;
		params.GripMovementReplicationSetting = GripMovementReplicationSetting;
		params.GripStiffness = GripStiffness;
		params.GripDamping = GripDamping;
		params.bIsSlotGrip = bIsSlotGrip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GripActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToGrip                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  WorldOffset                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWorldOffsetIsRelative                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OptionalSnapToSocketName                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OptionalBoneToGripName                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGripCollisionType                                 GripCollisionType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGripLateUpdateSettings                            GripLateUpdateSetting                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGripMovementReplicationSettings                   GripMovementReplicationSetting                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GripStiffness                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GripDamping                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSlotGrip                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::GripActor(class AActor* ActorToGrip, const struct FTransform& WorldOffset, bool bWorldOffsetIsRelative, const class FName& OptionalSnapToSocketName, const class FName& OptionalBoneToGripName, EGripCollisionType GripCollisionType, EGripLateUpdateSettings GripLateUpdateSetting, EGripMovementReplicationSettings GripMovementReplicationSetting, float GripStiffness, float GripDamping, bool bIsSlotGrip)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GripActor");
		
		UGripMotionControllerComponent_GripActor_Params params {};
		params.ActorToGrip = ActorToGrip;
		params.WorldOffset = WorldOffset;
		params.bWorldOffsetIsRelative = bWorldOffsetIsRelative;
		params.OptionalSnapToSocketName = OptionalSnapToSocketName;
		params.OptionalBoneToGripName = OptionalBoneToGripName;
		params.GripCollisionType = GripCollisionType;
		params.GripLateUpdateSetting = GripLateUpdateSetting;
		params.GripMovementReplicationSetting = GripMovementReplicationSetting;
		params.GripStiffness = GripStiffness;
		params.GripDamping = GripDamping;
		params.bIsSlotGrip = bIsSlotGrip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GetPivotTransform_BP
	 * 		Flags  -> ()
	 */
	struct FTransform UGripMotionControllerComponent::GetPivotTransform_BP()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetPivotTransform_BP");
		
		UGripMotionControllerComponent_GetPivotTransform_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GetPivotLocation_BP
	 * 		Flags  -> ()
	 */
	struct FVector UGripMotionControllerComponent::GetPivotLocation_BP()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetPivotLocation_BP");
		
		UGripMotionControllerComponent_GetPivotLocation_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GetPhysicsVelocities
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     AngularVelocity                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LinearVelocity                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::GetPhysicsVelocities(const struct FBPActorGripInformation& Grip, struct FVector* AngularVelocity, struct FVector* LinearVelocity)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetPhysicsVelocities");
		
		UGripMotionControllerComponent_GetPhysicsVelocities_Params params {};
		params.Grip = Grip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AngularVelocity != nullptr)
			*AngularVelocity = params.AngularVelocity;
		if (LinearVelocity != nullptr)
			*LinearVelocity = params.LinearVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GetPhysicsHandleSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FBPAdvancedPhysicsHandleSettings            PhysicsHandleSettingsOut                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::GetPhysicsHandleSettings(const struct FBPActorGripInformation& Grip, struct FBPAdvancedPhysicsHandleSettings* PhysicsHandleSettingsOut)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetPhysicsHandleSettings");
		
		UGripMotionControllerComponent_GetPhysicsHandleSettings_Params params {};
		params.Grip = Grip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PhysicsHandleSettingsOut != nullptr)
			*PhysicsHandleSettingsOut = params.PhysicsHandleSettingsOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GetPhysicsConstraintForce
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     AngularForce                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LinearForce                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::GetPhysicsConstraintForce(const struct FBPActorGripInformation& Grip, struct FVector* AngularForce, struct FVector* LinearForce)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetPhysicsConstraintForce");
		
		UGripMotionControllerComponent_GetPhysicsConstraintForce_Params params {};
		params.Grip = Grip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AngularForce != nullptr)
			*AngularForce = params.AngularForce;
		if (LinearForce != nullptr)
			*LinearForce = params.LinearForce;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GetIsSecondaryAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             ComponentToCheck                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPActorGripInformation                     Grip                                                       (Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::GetIsSecondaryAttachment(class USceneComponent* ComponentToCheck, struct FBPActorGripInformation* Grip)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetIsSecondaryAttachment");
		
		UGripMotionControllerComponent_GetIsSecondaryAttachment_Params params {};
		params.ComponentToCheck = ComponentToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Grip != nullptr)
			*Grip = params.Grip;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GetIsObjectHeld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ObjectToCheck                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::GetIsObjectHeld(class UObject* ObjectToCheck)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetIsObjectHeld");
		
		UGripMotionControllerComponent_GetIsObjectHeld_Params params {};
		params.ObjectToCheck = ObjectToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GetIsHeld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToCheck                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::GetIsHeld(class AActor* ActorToCheck)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetIsHeld");
		
		UGripMotionControllerComponent_GetIsHeld_Params params {};
		params.ActorToCheck = ActorToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GetIsComponentHeld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         ComponentToCheck                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::GetIsComponentHeld(class UPrimitiveComponent* ComponentToCheck)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetIsComponentHeld");
		
		UGripMotionControllerComponent_GetIsComponentHeld_Params params {};
		params.ComponentToCheck = ComponentToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GetHandType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControllerHand                                    hand                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::GetHandType(EControllerHand* hand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetHandType");
		
		UGripMotionControllerComponent_GetHandType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (hand != nullptr)
			*hand = params.hand;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GetGrippedObjects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             GrippedObjectsArray                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::GetGrippedObjects(TArray<class UObject*>* GrippedObjectsArray)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetGrippedObjects");
		
		UGripMotionControllerComponent_GetGrippedObjects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GrippedObjectsArray != nullptr)
			*GrippedObjectsArray = params.GrippedObjectsArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GetGrippedComponents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UPrimitiveComponent*>                 GrippedComponentsArray                                     (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::GetGrippedComponents(TArray<class UPrimitiveComponent*>* GrippedComponentsArray)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetGrippedComponents");
		
		UGripMotionControllerComponent_GetGrippedComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GrippedComponentsArray != nullptr)
			*GrippedComponentsArray = params.GrippedComponentsArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GetGrippedActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              GrippedActorArray                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::GetGrippedActors(TArray<class AActor*>* GrippedActorArray)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetGrippedActors");
		
		UGripMotionControllerComponent_GetGrippedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GrippedActorArray != nullptr)
			*GrippedActorArray = params.GrippedActorArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GetGripMass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		float                                              Mass                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::GetGripMass(const struct FBPActorGripInformation& Grip, float* Mass)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetGripMass");
		
		UGripMotionControllerComponent_GetGripMass_Params params {};
		params.Grip = Grip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mass != nullptr)
			*Mass = params.Mass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GetGripDistance_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ExpectedLocation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CurrentDistance                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::GetGripDistance_BP(struct FBPActorGripInformation* Grip, const struct FVector& ExpectedLocation, float* CurrentDistance)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetGripDistance_BP");
		
		UGripMotionControllerComponent_GetGripDistance_BP_Params params {};
		params.ExpectedLocation = ExpectedLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Grip != nullptr)
			*Grip = params.Grip;
		if (CurrentDistance != nullptr)
			*CurrentDistance = params.CurrentDistance;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ObjectToLookForGrip                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPVRResultSwitch                                  Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::GetGripByObject(struct FBPActorGripInformation* Grip, class UObject* ObjectToLookForGrip, EBPVRResultSwitch* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByObject");
		
		UGripMotionControllerComponent_GetGripByObject_Params params {};
		params.ObjectToLookForGrip = ObjectToLookForGrip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Grip != nullptr)
			*Grip = params.Grip;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      IDToLookForGrip                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPVRResultSwitch                                  Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::GetGripByID(struct FBPActorGripInformation* Grip, unsigned char IDToLookForGrip, EBPVRResultSwitch* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByID");
		
		UGripMotionControllerComponent_GetGripByID_Params params {};
		params.IDToLookForGrip = IDToLookForGrip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Grip != nullptr)
			*Grip = params.Grip;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         ComponentToLookForGrip                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPVRResultSwitch                                  Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::GetGripByComponent(struct FBPActorGripInformation* Grip, class UPrimitiveComponent* ComponentToLookForGrip, EBPVRResultSwitch* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByComponent");
		
		UGripMotionControllerComponent_GetGripByComponent_Params params {};
		params.ComponentToLookForGrip = ComponentToLookForGrip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Grip != nullptr)
			*Grip = params.Grip;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ActorToLookForGrip                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPVRResultSwitch                                  Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::GetGripByActor(struct FBPActorGripInformation* Grip, class AActor* ActorToLookForGrip, EBPVRResultSwitch* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetGripByActor");
		
		UGripMotionControllerComponent_GetGripByActor_Params params {};
		params.ActorToLookForGrip = ActorToLookForGrip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Grip != nullptr)
			*Grip = params.Grip;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GetControllerDeviceID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FXRDeviceId                                 DeviceID                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EBPVRResultSwitch                                  Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCheckOpenVROnly                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::GetControllerDeviceID(struct FXRDeviceId* DeviceID, EBPVRResultSwitch* Result, bool bCheckOpenVROnly)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetControllerDeviceID");
		
		UGripMotionControllerComponent_GetControllerDeviceID_Params params {};
		params.bCheckOpenVROnly = bCheckOpenVROnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DeviceID != nullptr)
			*DeviceID = params.DeviceID;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GetAllGripsNumber
	 * 		Flags  -> ()
	 */
	int32_t UGripMotionControllerComponent::GetAllGripsNumber()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetAllGripsNumber");
		
		UGripMotionControllerComponent_GetAllGripsNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.GetAllGrips
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBPActorGripInformation>             GripArray                                                  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::GetAllGrips(TArray<struct FBPActorGripInformation>* GripArray)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.GetAllGrips");
		
		UGripMotionControllerComponent_GetAllGrips_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GripArray != nullptr)
			*GripArray = params.GripArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.DropObjectByInterface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ObjectToDrop                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      GripIDToDrop                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OptionalAngularVelocity                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OptionalLinearVelocity                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::DropObjectByInterface(class UObject* ObjectToDrop, unsigned char GripIDToDrop, const struct FVector& OptionalAngularVelocity, const struct FVector& OptionalLinearVelocity)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.DropObjectByInterface");
		
		UGripMotionControllerComponent_DropObjectByInterface_Params params {};
		params.ObjectToDrop = ObjectToDrop;
		params.GripIDToDrop = GripIDToDrop;
		params.OptionalAngularVelocity = OptionalAngularVelocity;
		params.OptionalLinearVelocity = OptionalLinearVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.DropObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ObjectToDrop                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      GripIDToDrop                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSimulate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OptionalAngularVelocity                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OptionalLinearVelocity                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::DropObject(class UObject* ObjectToDrop, unsigned char GripIDToDrop, bool bSimulate, const struct FVector& OptionalAngularVelocity, const struct FVector& OptionalLinearVelocity)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.DropObject");
		
		UGripMotionControllerComponent_DropObject_Params params {};
		params.ObjectToDrop = ObjectToDrop;
		params.GripIDToDrop = GripIDToDrop;
		params.bSimulate = bSimulate;
		params.OptionalAngularVelocity = OptionalAngularVelocity;
		params.OptionalLinearVelocity = OptionalLinearVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.DropGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bSimulate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OptionalAngularVelocity                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OptionalLinearVelocity                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::DropGrip(const struct FBPActorGripInformation& Grip, bool bSimulate, const struct FVector& OptionalAngularVelocity, const struct FVector& OptionalLinearVelocity)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.DropGrip");
		
		UGripMotionControllerComponent_DropGrip_Params params {};
		params.Grip = Grip;
		params.bSimulate = bSimulate;
		params.OptionalAngularVelocity = OptionalAngularVelocity;
		params.OptionalLinearVelocity = OptionalLinearVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.DropComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         ComponentToDrop                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSimulate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OptionalAngularVelocity                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OptionalLinearVelocity                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::DropComponent(class UPrimitiveComponent* ComponentToDrop, bool bSimulate, const struct FVector& OptionalAngularVelocity, const struct FVector& OptionalLinearVelocity)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.DropComponent");
		
		UGripMotionControllerComponent_DropComponent_Params params {};
		params.ComponentToDrop = ComponentToDrop;
		params.bSimulate = bSimulate;
		params.OptionalAngularVelocity = OptionalAngularVelocity;
		params.OptionalLinearVelocity = OptionalLinearVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.DropAndSocketObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform_NetQuantize                      RelativeTransformToParent                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ObjectToDrop                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      GripIDToDrop                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             SocketingParent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OptionalSocketName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWeldBodies                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::DropAndSocketObject(const struct FTransform_NetQuantize& RelativeTransformToParent, class UObject* ObjectToDrop, unsigned char GripIDToDrop, class USceneComponent* SocketingParent, const class FName& OptionalSocketName, bool bWeldBodies)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.DropAndSocketObject");
		
		UGripMotionControllerComponent_DropAndSocketObject_Params params {};
		params.RelativeTransformToParent = RelativeTransformToParent;
		params.ObjectToDrop = ObjectToDrop;
		params.GripIDToDrop = GripIDToDrop;
		params.SocketingParent = SocketingParent;
		params.OptionalSocketName = OptionalSocketName;
		params.bWeldBodies = bWeldBodies;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.DropAndSocketGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     GripToDrop                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             SocketingParent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OptionalSocketName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform_NetQuantize                      RelativeTransformToParent                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bWeldBodies                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::DropAndSocketGrip(const struct FBPActorGripInformation& GripToDrop, class USceneComponent* SocketingParent, const class FName& OptionalSocketName, const struct FTransform_NetQuantize& RelativeTransformToParent, bool bWeldBodies)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.DropAndSocketGrip");
		
		UGripMotionControllerComponent_DropAndSocketGrip_Params params {};
		params.GripToDrop = GripToDrop;
		params.SocketingParent = SocketingParent;
		params.OptionalSocketName = OptionalSocketName;
		params.RelativeTransformToParent = RelativeTransformToParent;
		params.bWeldBodies = bWeldBodies;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.DropActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToDrop                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSimulate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OptionalAngularVelocity                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OptionalLinearVelocity                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::DropActor(class AActor* ActorToDrop, bool bSimulate, const struct FVector& OptionalAngularVelocity, const struct FVector& OptionalLinearVelocity)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.DropActor");
		
		UGripMotionControllerComponent_DropActor_Params params {};
		params.ActorToDrop = ActorToDrop;
		params.bSimulate = bSimulate;
		params.OptionalAngularVelocity = OptionalAngularVelocity;
		params.OptionalLinearVelocity = OptionalLinearVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.DestroyPhysicsHandle_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::DestroyPhysicsHandle_BP(const struct FBPActorGripInformation& Grip)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.DestroyPhysicsHandle_BP");
		
		UGripMotionControllerComponent_DestroyPhysicsHandle_BP_Params params {};
		params.Grip = Grip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.CreateGripRelativeAdditionTransform_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     GripToSample                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  AdditionTransform                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bGripRelative                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UGripMotionControllerComponent::CreateGripRelativeAdditionTransform_BP(const struct FBPActorGripInformation& GripToSample, const struct FTransform& AdditionTransform, bool bGripRelative)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.CreateGripRelativeAdditionTransform_BP");
		
		UGripMotionControllerComponent_CreateGripRelativeAdditionTransform_BP_Params params {};
		params.GripToSample = GripToSample;
		params.AdditionTransform = AdditionTransform;
		params.bGripRelative = bGripRelative;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.ConvertToGripRelativeTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  GrippedActorTransform                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InTransform                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FTransform UGripMotionControllerComponent::ConvertToGripRelativeTransform(const struct FTransform& GrippedActorTransform, const struct FTransform& InTransform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.ConvertToGripRelativeTransform");
		
		UGripMotionControllerComponent_ConvertToGripRelativeTransform_Params params {};
		params.GrippedActorTransform = GrippedActorTransform;
		params.InTransform = InTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.ConvertToControllerRelativeTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  InTransform                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FTransform UGripMotionControllerComponent::ConvertToControllerRelativeTransform(const struct FTransform& InTransform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.ConvertToControllerRelativeTransform");
		
		UGripMotionControllerComponent_ConvertToControllerRelativeTransform_Params params {};
		params.InTransform = InTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.Client_NotifyInvalidLocalGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     LocallyGrippedObject                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      GripID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::Client_NotifyInvalidLocalGrip(class UObject* LocallyGrippedObject, unsigned char GripID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.Client_NotifyInvalidLocalGrip");
		
		UGripMotionControllerComponent_Client_NotifyInvalidLocalGrip_Params params {};
		params.LocallyGrippedObject = LocallyGrippedObject;
		params.GripID = GripID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.CancelGlobalLerpToHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      GripID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGripMotionControllerComponent::CancelGlobalLerpToHand(unsigned char GripID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.CancelGlobalLerpToHand");
		
		UGripMotionControllerComponent_CancelGlobalLerpToHand_Params params {};
		params.GripID = GripID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.BP_IsLocallyControlled
	 * 		Flags  -> ()
	 */
	bool UGripMotionControllerComponent::BP_IsLocallyControlled()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.BP_IsLocallyControlled");
		
		UGripMotionControllerComponent_BP_IsLocallyControlled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.BP_HasGripMovementAuthority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::BP_HasGripMovementAuthority(const struct FBPActorGripInformation& Grip)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.BP_HasGripMovementAuthority");
		
		UGripMotionControllerComponent_BP_HasGripMovementAuthority_Params params {};
		params.Grip = Grip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.BP_HasGripAuthorityForObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ObjToCheck                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::BP_HasGripAuthorityForObject(class UObject* ObjToCheck)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.BP_HasGripAuthorityForObject");
		
		UGripMotionControllerComponent_BP_HasGripAuthorityForObject_Params params {};
		params.ObjToCheck = ObjToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.BP_HasGripAuthority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::BP_HasGripAuthority(const struct FBPActorGripInformation& Grip)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.BP_HasGripAuthority");
		
		UGripMotionControllerComponent_BP_HasGripAuthority_Params params {};
		params.Grip = Grip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.AddSecondaryAttachmentToGripByID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      GripID                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             SecondaryPointComponent                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  OriginalTransform                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bTransformIsAlreadyRelative                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LerpToTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSlotGrip                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SecondarySlotName                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::AddSecondaryAttachmentToGripByID(unsigned char GripID, class USceneComponent* SecondaryPointComponent, const struct FTransform& OriginalTransform, bool bTransformIsAlreadyRelative, float LerpToTime, bool bIsSlotGrip, const class FName& SecondarySlotName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.AddSecondaryAttachmentToGripByID");
		
		UGripMotionControllerComponent_AddSecondaryAttachmentToGripByID_Params params {};
		params.GripID = GripID;
		params.SecondaryPointComponent = SecondaryPointComponent;
		params.OriginalTransform = OriginalTransform;
		params.bTransformIsAlreadyRelative = bTransformIsAlreadyRelative;
		params.LerpToTime = LerpToTime;
		params.bIsSlotGrip = bIsSlotGrip;
		params.SecondarySlotName = SecondarySlotName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.AddSecondaryAttachmentToGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     GripToAddAttachment                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             SecondaryPointComponent                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  OriginalTransform                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bTransformIsAlreadyRelative                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LerpToTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSlotGrip                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SecondarySlotName                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::AddSecondaryAttachmentToGrip(const struct FBPActorGripInformation& GripToAddAttachment, class USceneComponent* SecondaryPointComponent, const struct FTransform& OriginalTransform, bool bTransformIsAlreadyRelative, float LerpToTime, bool bIsSlotGrip, const class FName& SecondarySlotName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.AddSecondaryAttachmentToGrip");
		
		UGripMotionControllerComponent_AddSecondaryAttachmentToGrip_Params params {};
		params.GripToAddAttachment = GripToAddAttachment;
		params.SecondaryPointComponent = SecondaryPointComponent;
		params.OriginalTransform = OriginalTransform;
		params.bTransformIsAlreadyRelative = bTransformIsAlreadyRelative;
		params.LerpToTime = LerpToTime;
		params.bIsSlotGrip = bIsSlotGrip;
		params.SecondarySlotName = SecondarySlotName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GripMotionControllerComponent.AddSecondaryAttachmentPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     GrippedObjectToAddAttachment                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             SecondaryPointComponent                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  OriginalTransform                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bTransformIsAlreadyRelative                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LerpToTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSlotGrip                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SecondarySlotName                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGripMotionControllerComponent::AddSecondaryAttachmentPoint(class UObject* GrippedObjectToAddAttachment, class USceneComponent* SecondaryPointComponent, const struct FTransform& OriginalTransform, bool bTransformIsAlreadyRelative, float LerpToTime, bool bIsSlotGrip, const class FName& SecondarySlotName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GripMotionControllerComponent.AddSecondaryAttachmentPoint");
		
		UGripMotionControllerComponent_AddSecondaryAttachmentPoint_Params params {};
		params.GrippedObjectToAddAttachment = GrippedObjectToAddAttachment;
		params.SecondaryPointComponent = SecondaryPointComponent;
		params.OriginalTransform = OriginalTransform;
		params.bTransformIsAlreadyRelative = bTransformIsAlreadyRelative;
		params.LerpToTime = LerpToTime;
		params.bIsSlotGrip = bIsSlotGrip;
		params.SecondarySlotName = SecondarySlotName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGripMotionControllerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGripMotionControllerComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.GripMotionControllerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableActor.SetGripPriority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewGripPriority                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGrippableActor::SetGripPriority(int32_t NewGripPriority)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.SetGripPriority");
		
		AGrippableActor_SetGripPriority_Params params {};
		params.NewGripPriority = NewGripPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableActor.SetDenyGripping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDenyGripping                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGrippableActor::SetDenyGripping(bool bDenyGripping)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.SetDenyGripping");
		
		AGrippableActor_SetDenyGripping_Params params {};
		params.bDenyGripping = bDenyGripping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableActor.Server_GetClientAuthReplication
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRepMovementVR                              newMovement                                                (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AGrippableActor::Server_GetClientAuthReplication(const struct FRepMovementVR& newMovement)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.Server_GetClientAuthReplication");
		
		AGrippableActor_Server_GetClientAuthReplication_Params params {};
		params.newMovement = newMovement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableActor.Server_EndClientAuthReplication
	 * 		Flags  -> ()
	 */
	void AGrippableActor::Server_EndClientAuthReplication()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.Server_EndClientAuthReplication");
		
		AGrippableActor_Server_EndClientAuthReplication_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableActor.RemoveFromClientReplicationBucket
	 * 		Flags  -> ()
	 */
	bool AGrippableActor::RemoveFromClientReplicationBucket()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.RemoveFromClientReplicationBucket");
		
		AGrippableActor_RemoveFromClientReplicationBucket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableActor.PollReplicationEvent
	 * 		Flags  -> ()
	 */
	bool AGrippableActor::PollReplicationEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.PollReplicationEvent");
		
		AGrippableActor_PollReplicationEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableActor.IsCurrentlyClientAuthThrowing
	 * 		Flags  -> ()
	 */
	bool AGrippableActor::IsCurrentlyClientAuthThrowing()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.IsCurrentlyClientAuthThrowing");
		
		AGrippableActor_IsCurrentlyClientAuthThrowing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableActor.CeaseReplicationBlocking
	 * 		Flags  -> ()
	 */
	void AGrippableActor::CeaseReplicationBlocking()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.CeaseReplicationBlocking");
		
		AGrippableActor_CeaseReplicationBlocking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableActor.AddToClientReplicationBucket
	 * 		Flags  -> ()
	 */
	bool AGrippableActor::AddToClientReplicationBucket()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableActor.AddToClientReplicationBucket");
		
		AGrippableActor_AddToClientReplicationBucket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGrippableActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGrippableActor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.GrippableActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableBoxComponent.SetGripPriority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewGripPriority                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGrippableBoxComponent::SetGripPriority(int32_t NewGripPriority)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.SetGripPriority");
		
		UGrippableBoxComponent_SetGripPriority_Params params {};
		params.NewGripPriority = NewGripPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableBoxComponent.SetDenyGripping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDenyGripping                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGrippableBoxComponent::SetDenyGripping(bool bDenyGripping)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableBoxComponent.SetDenyGripping");
		
		UGrippableBoxComponent_SetDenyGripping_Params params {};
		params.bDenyGripping = bDenyGripping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGrippableBoxComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGrippableBoxComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.GrippableBoxComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableCapsuleComponent.SetGripPriority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewGripPriority                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGrippableCapsuleComponent::SetGripPriority(int32_t NewGripPriority)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.SetGripPriority");
		
		UGrippableCapsuleComponent_SetGripPriority_Params params {};
		params.NewGripPriority = NewGripPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableCapsuleComponent.SetDenyGripping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDenyGripping                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGrippableCapsuleComponent::SetDenyGripping(bool bDenyGripping)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableCapsuleComponent.SetDenyGripping");
		
		UGrippableCapsuleComponent_SetDenyGripping_Params params {};
		params.bDenyGripping = bDenyGripping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGrippableCapsuleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGrippableCapsuleComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.GrippableCapsuleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGrippableCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGrippableCharacter::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.GrippableCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionalRepSkeletalMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionalRepSkeletalMeshComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.OptionalRepSkeletalMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableSkeletalMeshActor.SetGripPriority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewGripPriority                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGrippableSkeletalMeshActor::SetGripPriority(int32_t NewGripPriority)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.SetGripPriority");
		
		AGrippableSkeletalMeshActor_SetGripPriority_Params params {};
		params.NewGripPriority = NewGripPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableSkeletalMeshActor.SetDenyGripping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDenyGripping                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGrippableSkeletalMeshActor::SetDenyGripping(bool bDenyGripping)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.SetDenyGripping");
		
		AGrippableSkeletalMeshActor_SetDenyGripping_Params params {};
		params.bDenyGripping = bDenyGripping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableSkeletalMeshActor.Server_GetClientAuthReplication
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRepMovementVR                              newMovement                                                (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AGrippableSkeletalMeshActor::Server_GetClientAuthReplication(const struct FRepMovementVR& newMovement)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.Server_GetClientAuthReplication");
		
		AGrippableSkeletalMeshActor_Server_GetClientAuthReplication_Params params {};
		params.newMovement = newMovement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableSkeletalMeshActor.Server_EndClientAuthReplication
	 * 		Flags  -> ()
	 */
	void AGrippableSkeletalMeshActor::Server_EndClientAuthReplication()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.Server_EndClientAuthReplication");
		
		AGrippableSkeletalMeshActor_Server_EndClientAuthReplication_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableSkeletalMeshActor.RemoveFromClientReplicationBucket
	 * 		Flags  -> ()
	 */
	bool AGrippableSkeletalMeshActor::RemoveFromClientReplicationBucket()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.RemoveFromClientReplicationBucket");
		
		AGrippableSkeletalMeshActor_RemoveFromClientReplicationBucket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableSkeletalMeshActor.PollReplicationEvent
	 * 		Flags  -> ()
	 */
	bool AGrippableSkeletalMeshActor::PollReplicationEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.PollReplicationEvent");
		
		AGrippableSkeletalMeshActor_PollReplicationEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableSkeletalMeshActor.IsCurrentlyClientAuthThrowing
	 * 		Flags  -> ()
	 */
	bool AGrippableSkeletalMeshActor::IsCurrentlyClientAuthThrowing()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.IsCurrentlyClientAuthThrowing");
		
		AGrippableSkeletalMeshActor_IsCurrentlyClientAuthThrowing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableSkeletalMeshActor.CeaseReplicationBlocking
	 * 		Flags  -> ()
	 */
	void AGrippableSkeletalMeshActor::CeaseReplicationBlocking()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.CeaseReplicationBlocking");
		
		AGrippableSkeletalMeshActor_CeaseReplicationBlocking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableSkeletalMeshActor.AddToClientReplicationBucket
	 * 		Flags  -> ()
	 */
	bool AGrippableSkeletalMeshActor::AddToClientReplicationBucket()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshActor.AddToClientReplicationBucket");
		
		AGrippableSkeletalMeshActor_AddToClientReplicationBucket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGrippableSkeletalMeshActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGrippableSkeletalMeshActor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.GrippableSkeletalMeshActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableSkeletalMeshComponent.SetGripPriority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewGripPriority                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGrippableSkeletalMeshComponent::SetGripPriority(int32_t NewGripPriority)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.SetGripPriority");
		
		UGrippableSkeletalMeshComponent_SetGripPriority_Params params {};
		params.NewGripPriority = NewGripPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableSkeletalMeshComponent.SetDenyGripping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDenyGripping                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGrippableSkeletalMeshComponent::SetDenyGripping(bool bDenyGripping)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSkeletalMeshComponent.SetDenyGripping");
		
		UGrippableSkeletalMeshComponent_SetDenyGripping_Params params {};
		params.bDenyGripping = bDenyGripping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGrippableSkeletalMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGrippableSkeletalMeshComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.GrippableSkeletalMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableSphereComponent.SetGripPriority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewGripPriority                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGrippableSphereComponent::SetGripPriority(int32_t NewGripPriority)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.SetGripPriority");
		
		UGrippableSphereComponent_SetGripPriority_Params params {};
		params.NewGripPriority = NewGripPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableSphereComponent.SetDenyGripping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDenyGripping                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGrippableSphereComponent::SetDenyGripping(bool bDenyGripping)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableSphereComponent.SetDenyGripping");
		
		UGrippableSphereComponent_SetDenyGripping_Params params {};
		params.bDenyGripping = bDenyGripping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGrippableSphereComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGrippableSphereComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.GrippableSphereComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionalRepStaticMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionalRepStaticMeshComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.OptionalRepStaticMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableStaticMeshActor.SetGripPriority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewGripPriority                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGrippableStaticMeshActor::SetGripPriority(int32_t NewGripPriority)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.SetGripPriority");
		
		AGrippableStaticMeshActor_SetGripPriority_Params params {};
		params.NewGripPriority = NewGripPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableStaticMeshActor.SetDenyGripping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDenyGripping                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGrippableStaticMeshActor::SetDenyGripping(bool bDenyGripping)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.SetDenyGripping");
		
		AGrippableStaticMeshActor_SetDenyGripping_Params params {};
		params.bDenyGripping = bDenyGripping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableStaticMeshActor.Server_GetClientAuthReplication
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRepMovementVR                              newMovement                                                (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AGrippableStaticMeshActor::Server_GetClientAuthReplication(const struct FRepMovementVR& newMovement)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.Server_GetClientAuthReplication");
		
		AGrippableStaticMeshActor_Server_GetClientAuthReplication_Params params {};
		params.newMovement = newMovement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableStaticMeshActor.Server_EndClientAuthReplication
	 * 		Flags  -> ()
	 */
	void AGrippableStaticMeshActor::Server_EndClientAuthReplication()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.Server_EndClientAuthReplication");
		
		AGrippableStaticMeshActor_Server_EndClientAuthReplication_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableStaticMeshActor.RemoveFromClientReplicationBucket
	 * 		Flags  -> ()
	 */
	bool AGrippableStaticMeshActor::RemoveFromClientReplicationBucket()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.RemoveFromClientReplicationBucket");
		
		AGrippableStaticMeshActor_RemoveFromClientReplicationBucket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableStaticMeshActor.PollReplicationEvent
	 * 		Flags  -> ()
	 */
	bool AGrippableStaticMeshActor::PollReplicationEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.PollReplicationEvent");
		
		AGrippableStaticMeshActor_PollReplicationEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableStaticMeshActor.IsCurrentlyClientAuthThrowing
	 * 		Flags  -> ()
	 */
	bool AGrippableStaticMeshActor::IsCurrentlyClientAuthThrowing()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.IsCurrentlyClientAuthThrowing");
		
		AGrippableStaticMeshActor_IsCurrentlyClientAuthThrowing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableStaticMeshActor.CeaseReplicationBlocking
	 * 		Flags  -> ()
	 */
	void AGrippableStaticMeshActor::CeaseReplicationBlocking()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.CeaseReplicationBlocking");
		
		AGrippableStaticMeshActor_CeaseReplicationBlocking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableStaticMeshActor.AddToClientReplicationBucket
	 * 		Flags  -> ()
	 */
	bool AGrippableStaticMeshActor::AddToClientReplicationBucket()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshActor.AddToClientReplicationBucket");
		
		AGrippableStaticMeshActor_AddToClientReplicationBucket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGrippableStaticMeshActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGrippableStaticMeshActor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.GrippableStaticMeshActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableStaticMeshComponent.SetGripPriority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewGripPriority                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGrippableStaticMeshComponent::SetGripPriority(int32_t NewGripPriority)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.SetGripPriority");
		
		UGrippableStaticMeshComponent_SetGripPriority_Params params {};
		params.NewGripPriority = NewGripPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GrippableStaticMeshComponent.SetDenyGripping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDenyGripping                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGrippableStaticMeshComponent::SetDenyGripping(bool bDenyGripping)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GrippableStaticMeshComponent.SetDenyGripping");
		
		UGrippableStaticMeshComponent_SetDenyGripping_Params params {};
		params.bDenyGripping = bDenyGripping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGrippableStaticMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGrippableStaticMeshComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.GrippableStaticMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripScriptBase.Wants_DenyTeleport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              Controller                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVRGripScriptBase::Wants_DenyTeleport(class UGripMotionControllerComponent* Controller)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripScriptBase.Wants_DenyTeleport");
		
		UVRGripScriptBase_Wants_DenyTeleport_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripScriptBase.SetTickEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bTickEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGripScriptBase::SetTickEnabled(bool bTickEnabled)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripScriptBase.SetTickEnabled");
		
		UVRGripScriptBase_SetTickEnabled_Params params {};
		params.bTickEnabled = bTickEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripScriptBase.OnSecondaryGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              Controller                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             ReleasingSecondaryGripComponent                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UVRGripScriptBase::OnSecondaryGripRelease(class UGripMotionControllerComponent* Controller, class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripScriptBase.OnSecondaryGripRelease");
		
		UVRGripScriptBase_OnSecondaryGripRelease_Params params {};
		params.Controller = Controller;
		params.ReleasingSecondaryGripComponent = ReleasingSecondaryGripComponent;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripScriptBase.OnSecondaryGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              Controller                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             SecondaryGripComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UVRGripScriptBase::OnSecondaryGrip(class UGripMotionControllerComponent* Controller, class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripScriptBase.OnSecondaryGrip");
		
		UVRGripScriptBase_OnSecondaryGrip_Params params {};
		params.Controller = Controller;
		params.SecondaryGripComponent = SecondaryGripComponent;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripScriptBase.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSocketed                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGripScriptBase::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripScriptBase.OnGripRelease");
		
		UVRGripScriptBase_OnGripRelease_Params params {};
		params.ReleasingController = ReleasingController;
		params.GripInformation = GripInformation;
		params.bWasSocketed = bWasSocketed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripScriptBase.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UVRGripScriptBase::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripScriptBase.OnGrip");
		
		UVRGripScriptBase_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripScriptBase.OnEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGripScriptBase::OnEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripScriptBase.OnEndPlay");
		
		UVRGripScriptBase_OnEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripScriptBase.OnBeginPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     CallingOwner                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGripScriptBase::OnBeginPlay(class UObject* CallingOwner)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripScriptBase.OnBeginPlay");
		
		UVRGripScriptBase_OnBeginPlay_Params params {};
		params.CallingOwner = CallingOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripScriptBase.IsServer
	 * 		Flags  -> ()
	 */
	bool UVRGripScriptBase::IsServer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripScriptBase.IsServer");
		
		UVRGripScriptBase_IsServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripScriptBase.HasAuthority
	 * 		Flags  -> ()
	 */
	bool UVRGripScriptBase::HasAuthority()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripScriptBase.HasAuthority");
		
		UVRGripScriptBase_HasAuthority_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripScriptBase.GetWorldTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  WorldTransform                                             (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  ParentTransform                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FBPActorGripInformation                     Grip                                                       (Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         Root                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRootHasInterface                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bActorHasInterface                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsForTeleport                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVRGripScriptBase::GetWorldTransform(class UGripMotionControllerComponent* GrippingController, float DeltaTime, struct FTransform* WorldTransform, const struct FTransform& ParentTransform, struct FBPActorGripInformation* Grip, class AActor* Actor, class UPrimitiveComponent* Root, bool bRootHasInterface, bool bActorHasInterface, bool bIsForTeleport)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripScriptBase.GetWorldTransform");
		
		UVRGripScriptBase_GetWorldTransform_Params params {};
		params.GrippingController = GrippingController;
		params.DeltaTime = DeltaTime;
		params.ParentTransform = ParentTransform;
		params.Actor = Actor;
		params.Root = Root;
		params.bRootHasInterface = bRootHasInterface;
		params.bActorHasInterface = bActorHasInterface;
		params.bIsForTeleport = bIsForTeleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldTransform != nullptr)
			*WorldTransform = params.WorldTransform;
		if (Grip != nullptr)
			*Grip = params.Grip;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripScriptBase.GetParentTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bGetWorldTransform                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UVRGripScriptBase::GetParentTransform(bool bGetWorldTransform, const class FName& BoneName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripScriptBase.GetParentTransform");
		
		UVRGripScriptBase_GetParentTransform_Params params {};
		params.bGetWorldTransform = bGetWorldTransform;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripScriptBase.GetParentSceneComp
	 * 		Flags  -> ()
	 */
	class USceneComponent* UVRGripScriptBase::GetParentSceneComp()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripScriptBase.GetParentSceneComp");
		
		UVRGripScriptBase_GetParentSceneComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripScriptBase.GetParent
	 * 		Flags  -> ()
	 */
	class UObject* UVRGripScriptBase::GetParent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripScriptBase.GetParent");
		
		UVRGripScriptBase_GetParent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripScriptBase.GetOwner
	 * 		Flags  -> ()
	 */
	class AActor* UVRGripScriptBase::GetOwner()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripScriptBase.GetOwner");
		
		UVRGripScriptBase_GetOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripScriptBase.GetGripTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     Grip                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  ParentTransform                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FTransform UVRGripScriptBase::GetGripTransform(const struct FBPActorGripInformation& Grip, const struct FTransform& ParentTransform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripScriptBase.GetGripTransform");
		
		UVRGripScriptBase_GetGripTransform_Params params {};
		params.Grip = Grip;
		params.ParentTransform = ParentTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripScriptBase.GetGripScriptByClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      GripScriptClass                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPVRResultSwitch                                  Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVRGripScriptBase* UVRGripScriptBase::GetGripScriptByClass(class UObject* WorldContextObject, class UClass* GripScriptClass, EBPVRResultSwitch* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripScriptBase.GetGripScriptByClass");
		
		UVRGripScriptBase_GetGripScriptByClass_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GripScriptClass = GripScriptClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripScriptBase.ForceGripToDrop
	 * 		Flags  -> ()
	 */
	void UVRGripScriptBase::ForceGripToDrop()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripScriptBase.ForceGripToDrop");
		
		UVRGripScriptBase_ForceGripToDrop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRGripScriptBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRGripScriptBase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRGripScriptBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGS_Default.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGS_Default::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.GS_Default");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGS_ExtendedDefault.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGS_ExtendedDefault::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.GS_ExtendedDefault");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GS_GunTools.SetVirtualStockEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAllowVirtualStock                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGS_GunTools::SetVirtualStockEnabled(bool bAllowVirtualStock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GS_GunTools.SetVirtualStockEnabled");
		
		UGS_GunTools_SetVirtualStockEnabled_Params params {};
		params.bAllowVirtualStock = bAllowVirtualStock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GS_GunTools.SetVirtualStockComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             NewStockComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGS_GunTools::SetVirtualStockComponent(class USceneComponent* NewStockComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GS_GunTools.SetVirtualStockComponent");
		
		UGS_GunTools_SetVirtualStockComponent_Params params {};
		params.NewStockComponent = NewStockComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GS_GunTools.ResetRecoil
	 * 		Flags  -> ()
	 */
	void UGS_GunTools::ResetRecoil()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GS_GunTools.ResetRecoil");
		
		UGS_GunTools_ResetRecoil_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GS_GunTools.AddRecoilInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  RecoilAddition                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Optional_Location                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGS_GunTools::AddRecoilInstance(const struct FTransform& RecoilAddition, const struct FVector& Optional_Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GS_GunTools.AddRecoilInstance");
		
		UGS_GunTools_AddRecoilInstance_Params params {};
		params.RecoilAddition = RecoilAddition;
		params.Optional_Location = Optional_Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGS_GunTools.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGS_GunTools::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.GS_GunTools");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GS_InteractibleSettings.RemoveHandRotation
	 * 		Flags  -> ()
	 */
	void UGS_InteractibleSettings::RemoveHandRotation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GS_InteractibleSettings.RemoveHandRotation");
		
		UGS_InteractibleSettings_RemoveHandRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGS_InteractibleSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGS_InteractibleSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.GS_InteractibleSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGS_LerpToHand.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGS_LerpToHand::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.GS_LerpToHand");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GS_Melee.UpdateHandPositionAndRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPGripPair                                 HandPair                                                   (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  HandWorldTransform                                         (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LocDifference                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RotDifference                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateLocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateRotation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGS_Melee::UpdateHandPositionAndRotation(const struct FBPGripPair& HandPair, const struct FTransform& HandWorldTransform, struct FVector* LocDifference, float* RotDifference, bool bUpdateLocation, bool bUpdateRotation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GS_Melee.UpdateHandPositionAndRotation");
		
		UGS_Melee_UpdateHandPositionAndRotation_Params params {};
		params.HandPair = HandPair;
		params.HandWorldTransform = HandWorldTransform;
		params.bUpdateLocation = bUpdateLocation;
		params.bUpdateRotation = bUpdateRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocDifference != nullptr)
			*LocDifference = params.LocDifference;
		if (RotDifference != nullptr)
			*RotDifference = params.RotDifference;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GS_Melee.UpdateHandPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPGripPair                                 HandPair                                                   (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HandWorldPosition                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LocDifference                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGS_Melee::UpdateHandPosition(const struct FBPGripPair& HandPair, const struct FVector& HandWorldPosition, struct FVector* LocDifference)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GS_Melee.UpdateHandPosition");
		
		UGS_Melee_UpdateHandPosition_Params params {};
		params.HandPair = HandPair;
		params.HandWorldPosition = HandWorldPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocDifference != nullptr)
			*LocDifference = params.LocDifference;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GS_Melee.SetPrimaryAndSecondaryHands
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPGripPair                                 PrimaryGrip                                                (Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FBPGripPair                                 SecondaryGrip                                              (Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGS_Melee::SetPrimaryAndSecondaryHands(struct FBPGripPair* PrimaryGrip, struct FBPGripPair* SecondaryGrip)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GS_Melee.SetPrimaryAndSecondaryHands");
		
		UGS_Melee_SetPrimaryAndSecondaryHands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PrimaryGrip != nullptr)
			*PrimaryGrip = params.PrimaryGrip;
		if (SecondaryGrip != nullptr)
			*SecondaryGrip = params.SecondaryGrip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GS_Melee.SetIsLodged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLodged                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         LodgeComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGS_Melee::SetIsLodged(bool IsLodged, class UPrimitiveComponent* LodgeComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GS_Melee.SetIsLodged");
		
		UGS_Melee_SetIsLodged_Params params {};
		params.IsLodged = IsLodged;
		params.LodgeComponent = LodgeComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GS_Melee.OnLodgeHitCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SelfActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UGS_Melee::OnLodgeHitCallback(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GS_Melee.OnLodgeHitCallback");
		
		UGS_Melee_OnLodgeHitCallback_Params params {};
		params.SelfActor = SelfActor;
		params.OtherActor = OtherActor;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGS_Melee.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGS_Melee::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.GS_Melee");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGS_Physics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGS_Physics::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.GS_Physics");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.HandSocketComponent.GetTargetAnimation
	 * 		Flags  -> ()
	 */
	class UAnimSequence* UHandSocketComponent::GetTargetAnimation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.HandSocketComponent.GetTargetAnimation");
		
		UHandSocketComponent_GetTargetAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.HandSocketComponent.GetMeshRelativeTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsRightHand                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UHandSocketComponent::GetMeshRelativeTransform(bool bIsRightHand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.HandSocketComponent.GetMeshRelativeTransform");
		
		UHandSocketComponent_GetMeshRelativeTransform_Params params {};
		params.bIsRightHand = bIsRightHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.HandSocketComponent.GetHandSocketComponentFromObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ObjectToCheck                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UHandSocketComponent* UHandSocketComponent::GetHandSocketComponentFromObject(class UObject* ObjectToCheck, const class FName& SocketName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.HandSocketComponent.GetHandSocketComponentFromObject");
		
		UHandSocketComponent_GetHandSocketComponentFromObject_Params params {};
		params.ObjectToCheck = ObjectToCheck;
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.HandSocketComponent.GetBlendedPoseSnapShot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseSnapshot                               PoseSnapshot                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      TargetMesh                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSkipRootBone                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFlipHand                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHandSocketComponent::GetBlendedPoseSnapShot(struct FPoseSnapshot* PoseSnapshot, class USkeletalMeshComponent* TargetMesh, bool bSkipRootBone, bool bFlipHand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.HandSocketComponent.GetBlendedPoseSnapShot");
		
		UHandSocketComponent_GetBlendedPoseSnapShot_Params params {};
		params.TargetMesh = TargetMesh;
		params.bSkipRootBone = bSkipRootBone;
		params.bFlipHand = bFlipHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PoseSnapshot != nullptr)
			*PoseSnapshot = params.PoseSnapshot;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.HandSocketComponent.GetAnimationSequenceAsPoseSnapShot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimSequence*                               InAnimationSequence                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPoseSnapshot                               OutPoseSnapShot                                            (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      TargetMesh                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSkipRootBone                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFlipHand                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHandSocketComponent::GetAnimationSequenceAsPoseSnapShot(class UAnimSequence* InAnimationSequence, struct FPoseSnapshot* OutPoseSnapShot, class USkeletalMeshComponent* TargetMesh, bool bSkipRootBone, bool bFlipHand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.HandSocketComponent.GetAnimationSequenceAsPoseSnapShot");
		
		UHandSocketComponent_GetAnimationSequenceAsPoseSnapShot_Params params {};
		params.InAnimationSequence = InAnimationSequence;
		params.TargetMesh = TargetMesh;
		params.bSkipRootBone = bSkipRootBone;
		params.bFlipHand = bFlipHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPoseSnapShot != nullptr)
			*OutPoseSnapShot = params.OutPoseSnapShot;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHandSocketComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHandSocketComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.HandSocketComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHandSocketAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHandSocketAnimInstance::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.HandSocketAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNoRepSphereComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNoRepSphereComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.NoRepSphereComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInversePhysicsSkeletalMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInversePhysicsSkeletalMeshComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.InversePhysicsSkeletalMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOptionalRepGrippableSkeletalMeshActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOptionalRepGrippableSkeletalMeshActor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.OptionalRepGrippableSkeletalMeshActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UParentRelativeAttachmentComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParentRelativeAttachmentComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.ParentRelativeAttachmentComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.ReplicatedVRCameraComponent.Server_SendCameraTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPVRComponentPosRep                        NewTransform                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UReplicatedVRCameraComponent::Server_SendCameraTransform(const struct FBPVRComponentPosRep& NewTransform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.ReplicatedVRCameraComponent.Server_SendCameraTransform");
		
		UReplicatedVRCameraComponent_Server_SendCameraTransform_Params params {};
		params.NewTransform = NewTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.ReplicatedVRCameraComponent.OnRep_ReplicatedCameraTransform
	 * 		Flags  -> ()
	 */
	void UReplicatedVRCameraComponent::OnRep_ReplicatedCameraTransform()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.ReplicatedVRCameraComponent.OnRep_ReplicatedCameraTransform");
		
		UReplicatedVRCameraComponent_OnRep_ReplicatedCameraTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicatedVRCameraComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicatedVRCameraComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.ReplicatedVRCameraComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVRAIController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVRAIController::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRAIController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVRDetourCrowdAIController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVRDetourCrowdAIController::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRDetourCrowdAIController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISenseConfig_Sight_VR.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseConfig_Sight_VR::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.AISenseConfig_Sight_VR");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISense_Sight_VR.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Sight_VR::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.AISense_Sight_VR");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.UpdateLowGravMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVRBaseCharacter::UpdateLowGravMovement(float DeltaTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.UpdateLowGravMovement");
		
		AVRBaseCharacter_UpdateLowGravMovement_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.UpdateClimbingMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVRBaseCharacter::UpdateClimbingMovement(float DeltaTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.UpdateClimbingMovement");
		
		AVRBaseCharacter_UpdateClimbingMovement_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.StopNavigationMovement
	 * 		Flags  -> ()
	 */
	void AVRBaseCharacter::StopNavigationMovement()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.StopNavigationMovement");
		
		AVRBaseCharacter_StopNavigationMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.SetCharacterSizeVR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewRadius                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewHalfHeight                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateOverlaps                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVRBaseCharacter::SetCharacterSizeVR(float NewRadius, float NewHalfHeight, bool bUpdateOverlaps)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.SetCharacterSizeVR");
		
		AVRBaseCharacter_SetCharacterSizeVR_Params params {};
		params.NewRadius = NewRadius;
		params.NewHalfHeight = NewHalfHeight;
		params.bUpdateOverlaps = bUpdateOverlaps;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.SetCharacterHalfHeightVR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HalfHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateOverlaps                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVRBaseCharacter::SetCharacterHalfHeightVR(float HalfHeight, bool bUpdateOverlaps)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.SetCharacterHalfHeightVR");
		
		AVRBaseCharacter_SetCharacterHalfHeightVR_Params params {};
		params.HalfHeight = HalfHeight;
		params.bUpdateOverlaps = bUpdateOverlaps;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.SetActorRotationVR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    NewRot                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseYawOnly                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAccountForHMDRotation                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector AVRBaseCharacter::SetActorRotationVR(const struct FRotator& NewRot, bool bUseYawOnly, bool bAccountForHMDRotation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.SetActorRotationVR");
		
		AVRBaseCharacter_SetActorRotationVR_Params params {};
		params.NewRot = NewRot;
		params.bUseYawOnly = bUseYawOnly;
		params.bAccountForHMDRotation = bAccountForHMDRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.SetActorLocationAndRotationVR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NewRot                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseYawOnly                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAccountForHMDRotation                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTeleport                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector AVRBaseCharacter::SetActorLocationAndRotationVR(const struct FVector& NewLoc, const struct FRotator& NewRot, bool bUseYawOnly, bool bAccountForHMDRotation, bool bTeleport)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.SetActorLocationAndRotationVR");
		
		AVRBaseCharacter_SetActorLocationAndRotationVR_Params params {};
		params.NewLoc = NewLoc;
		params.NewRot = NewRot;
		params.bUseYawOnly = bUseYawOnly;
		params.bAccountForHMDRotation = bAccountForHMDRotation;
		params.bTeleport = bTeleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.Server_SetSeatedMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SeatParent                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetSeatedMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform_NetQuantize                      TargetTransform                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform_NetQuantize                      InitialRelCameraTransform                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              AllowedRadius                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AllowedRadiusThreshold                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bZeroToHead                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVRConjoinedMovementModes                          PostSeatedMovementMode                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVRBaseCharacter::Server_SetSeatedMode(class USceneComponent* SeatParent, bool bSetSeatedMode, const struct FTransform_NetQuantize& TargetTransform, const struct FTransform_NetQuantize& InitialRelCameraTransform, float AllowedRadius, float AllowedRadiusThreshold, bool bZeroToHead, EVRConjoinedMovementModes PostSeatedMovementMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.Server_SetSeatedMode");
		
		AVRBaseCharacter_Server_SetSeatedMode_Params params {};
		params.SeatParent = SeatParent;
		params.bSetSeatedMode = bSetSeatedMode;
		params.TargetTransform = TargetTransform;
		params.InitialRelCameraTransform = InitialRelCameraTransform;
		params.AllowedRadius = AllowedRadius;
		params.AllowedRadiusThreshold = AllowedRadiusThreshold;
		params.bZeroToHead = bZeroToHead;
		params.PostSeatedMovementMode = PostSeatedMovementMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.Server_SendTransformRightController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPVRComponentPosRep                        NewTransform                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AVRBaseCharacter::Server_SendTransformRightController(const struct FBPVRComponentPosRep& NewTransform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.Server_SendTransformRightController");
		
		AVRBaseCharacter_Server_SendTransformRightController_Params params {};
		params.NewTransform = NewTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.Server_SendTransformLeftController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPVRComponentPosRep                        NewTransform                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AVRBaseCharacter::Server_SendTransformLeftController(const struct FBPVRComponentPosRep& NewTransform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.Server_SendTransformLeftController");
		
		AVRBaseCharacter_Server_SendTransformLeftController_Params params {};
		params.NewTransform = NewTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.Server_SendTransformCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPVRComponentPosRep                        NewTransform                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AVRBaseCharacter::Server_SendTransformCamera(const struct FBPVRComponentPosRep& NewTransform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.Server_SendTransformCamera");
		
		AVRBaseCharacter_Server_SendTransformCamera_Params params {};
		params.NewTransform = NewTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.Server_ReZeroSeating
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform_NetQuantize                      NewTargetTransform                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform_NetQuantize                      NewInitialRelCameraTransform                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bZeroToHead                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVRBaseCharacter::Server_ReZeroSeating(const struct FTransform_NetQuantize& NewTargetTransform, const struct FTransform_NetQuantize& NewInitialRelCameraTransform, bool bZeroToHead)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.Server_ReZeroSeating");
		
		AVRBaseCharacter_Server_ReZeroSeating_Params params {};
		params.NewTargetTransform = NewTargetTransform;
		params.NewInitialRelCameraTransform = NewInitialRelCameraTransform;
		params.bZeroToHead = bZeroToHead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.RegenerateOffsetComponentToWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUpdateBounds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCalculatePureYaw                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVRBaseCharacter::RegenerateOffsetComponentToWorld(bool bUpdateBounds, bool bCalculatePureYaw)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.RegenerateOffsetComponentToWorld");
		
		AVRBaseCharacter_RegenerateOffsetComponentToWorld_Params params {};
		params.bUpdateBounds = bUpdateBounds;
		params.bCalculatePureYaw = bCalculatePureYaw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.ReceiveNavigationMoveCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPathFollowingResult                               PathingResult                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVRBaseCharacter::ReceiveNavigationMoveCompleted(EPathFollowingResult PathingResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.ReceiveNavigationMoveCompleted");
		
		AVRBaseCharacter_ReceiveNavigationMoveCompleted_Params params {};
		params.PathingResult = PathingResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.OnSeatThreshholdChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsWithinThreshold                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ToThresholdScaler                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVRBaseCharacter::OnSeatThreshholdChanged(bool bIsWithinThreshold, float ToThresholdScaler)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.OnSeatThreshholdChanged");
		
		AVRBaseCharacter_OnSeatThreshholdChanged_Params params {};
		params.bIsWithinThreshold = bIsWithinThreshold;
		params.ToThresholdScaler = ToThresholdScaler;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.OnSeatedModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewSeatedMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasAlreadySeated                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVRBaseCharacter::OnSeatedModeChanged(bool bNewSeatedMode, bool bWasAlreadySeated)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.OnSeatedModeChanged");
		
		AVRBaseCharacter_OnSeatedModeChanged_Params params {};
		params.bNewSeatedMode = bNewSeatedMode;
		params.bWasAlreadySeated = bWasAlreadySeated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.OnRep_SeatedCharInfo
	 * 		Flags  -> ()
	 */
	void AVRBaseCharacter::OnRep_SeatedCharInfo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.OnRep_SeatedCharInfo");
		
		AVRBaseCharacter_OnRep_SeatedCharInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.OnRep_CapsuleHeight
	 * 		Flags  -> ()
	 */
	void AVRBaseCharacter::OnRep_CapsuleHeight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.OnRep_CapsuleHeight");
		
		AVRBaseCharacter_OnRep_CapsuleHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.OnEndWallPushback
	 * 		Flags  -> ()
	 */
	void AVRBaseCharacter::OnEndWallPushback()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.OnEndWallPushback");
		
		AVRBaseCharacter_OnEndWallPushback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.OnCustomMoveActionPerformed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVRMoveAction                                      MoveActionType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     MoveActionVector                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    MoveActionRotator                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AVRBaseCharacter::OnCustomMoveActionPerformed(EVRMoveAction MoveActionType, const struct FVector& MoveActionVector, const struct FRotator& MoveActionRotator)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.OnCustomMoveActionPerformed");
		
		AVRBaseCharacter_OnCustomMoveActionPerformed_Params params {};
		params.MoveActionType = MoveActionType;
		params.MoveActionVector = MoveActionVector;
		params.MoveActionRotator = MoveActionRotator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.OnClimbingSteppedUp
	 * 		Flags  -> ()
	 */
	void AVRBaseCharacter::OnClimbingSteppedUp()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.OnClimbingSteppedUp");
		
		AVRBaseCharacter_OnClimbingSteppedUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.OnBeginWallPushback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResultOfImpact                                          (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bHadLocomotionInput                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HmdInput                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVRBaseCharacter::OnBeginWallPushback(const struct FHitResult& HitResultOfImpact, bool bHadLocomotionInput, const struct FVector& HmdInput)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.OnBeginWallPushback");
		
		AVRBaseCharacter_OnBeginWallPushback_Params params {};
		params.HitResultOfImpact = HitResultOfImpact;
		params.bHadLocomotionInput = bHadLocomotionInput;
		params.HmdInput = HmdInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.NotifyOfTeleport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bRegisterAsTeleport                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVRBaseCharacter::NotifyOfTeleport(bool bRegisterAsTeleport)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.NotifyOfTeleport");
		
		AVRBaseCharacter_NotifyOfTeleport_Params params {};
		params.bRegisterAsTeleport = bRegisterAsTeleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.K2_GetVRHeadLocation
	 * 		Flags  -> ()
	 */
	struct FVector AVRBaseCharacter::K2_GetVRHeadLocation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.K2_GetVRHeadLocation");
		
		AVRBaseCharacter_K2_GetVRHeadLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.HasPartialPath
	 * 		Flags  -> ()
	 */
	bool AVRBaseCharacter::HasPartialPath()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.HasPartialPath");
		
		AVRBaseCharacter_HasPartialPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.GetVRUpVector
	 * 		Flags  -> ()
	 */
	struct FVector AVRBaseCharacter::GetVRUpVector()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.GetVRUpVector");
		
		AVRBaseCharacter_GetVRUpVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.GetVRRotation
	 * 		Flags  -> ()
	 */
	struct FRotator AVRBaseCharacter::GetVRRotation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.GetVRRotation");
		
		AVRBaseCharacter_GetVRRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.GetVRRightVector
	 * 		Flags  -> ()
	 */
	struct FVector AVRBaseCharacter::GetVRRightVector()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.GetVRRightVector");
		
		AVRBaseCharacter_GetVRRightVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.GetVRLocation
	 * 		Flags  -> ()
	 */
	struct FVector AVRBaseCharacter::GetVRLocation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.GetVRLocation");
		
		AVRBaseCharacter_GetVRLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.GetVRForwardVector
	 * 		Flags  -> ()
	 */
	struct FVector AVRBaseCharacter::GetVRForwardVector()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.GetVRForwardVector");
		
		AVRBaseCharacter_GetVRForwardVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.GetTeleportLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     OriginalLocation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector AVRBaseCharacter::GetTeleportLocation(const struct FVector& OriginalLocation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.GetTeleportLocation");
		
		AVRBaseCharacter_GetTeleportLocation_Params params {};
		params.OriginalLocation = OriginalLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.GetMoveStatus
	 * 		Flags  -> ()
	 */
	EPathFollowingStatus AVRBaseCharacter::GetMoveStatus()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.GetMoveStatus");
		
		AVRBaseCharacter_GetMoveStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.GetCurrentNavigationPathPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             NavigationPointList                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool AVRBaseCharacter::GetCurrentNavigationPathPoints(TArray<struct FVector>* NavigationPointList)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.GetCurrentNavigationPathPoints");
		
		AVRBaseCharacter_GetCurrentNavigationPathPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NavigationPointList != nullptr)
			*NavigationPointList = params.NavigationPointList;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.ExtendedSimpleMoveToLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     GoalLocation                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              AcceptanceRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStopOnOverlap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUsePathfinding                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bProjectDestinationToNavigation                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCanStrafe                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowPartialPath                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVRBaseCharacter::ExtendedSimpleMoveToLocation(const struct FVector& GoalLocation, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.ExtendedSimpleMoveToLocation");
		
		AVRBaseCharacter_ExtendedSimpleMoveToLocation_Params params {};
		params.GoalLocation = GoalLocation;
		params.AcceptanceRadius = AcceptanceRadius;
		params.bStopOnOverlap = bStopOnOverlap;
		params.bUsePathfinding = bUsePathfinding;
		params.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
		params.bCanStrafe = bCanStrafe;
		params.FilterClass = FilterClass;
		params.bAllowPartialPath = bAllowPartialPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacter.AddActorWorldRotationVR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    DeltaRot                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseYawOnly                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector AVRBaseCharacter::AddActorWorldRotationVR(const struct FRotator& DeltaRot, bool bUseYawOnly)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacter.AddActorWorldRotationVR");
		
		AVRBaseCharacter_AddActorWorldRotationVR_Params params {};
		params.DeltaRot = DeltaRot;
		params.bUseYawOnly = bUseYawOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVRBaseCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVRBaseCharacter::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRBaseCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacterMovementComponent.SetReplicatedMovementMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVRConjoinedMovementModes                          NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRBaseCharacterMovementComponent::SetReplicatedMovementMode(EVRConjoinedMovementModes NewMovementMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.SetReplicatedMovementMode");
		
		UVRBaseCharacterMovementComponent_SetReplicatedMovementMode_Params params {};
		params.NewMovementMode = NewMovementMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacterMovementComponent.SetCrouchedHalfHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewCrouchedHalfHeight                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRBaseCharacterMovementComponent::SetCrouchedHalfHeight(float NewCrouchedHalfHeight)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.SetCrouchedHalfHeight");
		
		UVRBaseCharacterMovementComponent_SetCrouchedHalfHeight_Params params {};
		params.NewCrouchedHalfHeight = NewCrouchedHalfHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacterMovementComponent.SetClimbingMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsClimbing                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRBaseCharacterMovementComponent::SetClimbingMode(bool bIsClimbing)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.SetClimbingMode");
		
		UVRBaseCharacterMovementComponent_SetClimbingMode_Params params {};
		params.bIsClimbing = bIsClimbing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacterMovementComponent.RewindVRMovement
	 * 		Flags  -> ()
	 */
	struct FVector UVRBaseCharacterMovementComponent::RewindVRMovement()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.RewindVRMovement");
		
		UVRBaseCharacterMovementComponent_RewindVRMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_Teleport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TeleportLocation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    TeleportRotation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EVRMoveActionVelocityRetention                     VelocityRetention                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSkipEncroachmentCheck                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRBaseCharacterMovementComponent::PerformMoveAction_Teleport(const struct FVector& TeleportLocation, const struct FRotator& TeleportRotation, EVRMoveActionVelocityRetention VelocityRetention, bool bSkipEncroachmentCheck)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_Teleport");
		
		UVRBaseCharacterMovementComponent_PerformMoveAction_Teleport_Params params {};
		params.TeleportLocation = TeleportLocation;
		params.TeleportRotation = TeleportRotation;
		params.VelocityRetention = VelocityRetention;
		params.bSkipEncroachmentCheck = bSkipEncroachmentCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_StopAllMovement
	 * 		Flags  -> ()
	 */
	void UVRBaseCharacterMovementComponent::PerformMoveAction_StopAllMovement()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_StopAllMovement");
		
		UVRBaseCharacterMovementComponent_PerformMoveAction_StopAllMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_SnapTurn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SnapTurnDeltaYaw                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVRMoveActionVelocityRetention                     VelocityRetention                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFlagGripTeleport                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFlagCharacterTeleport                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRBaseCharacterMovementComponent::PerformMoveAction_SnapTurn(float SnapTurnDeltaYaw, EVRMoveActionVelocityRetention VelocityRetention, bool bFlagGripTeleport, bool bFlagCharacterTeleport)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_SnapTurn");
		
		UVRBaseCharacterMovementComponent_PerformMoveAction_SnapTurn_Params params {};
		params.SnapTurnDeltaYaw = SnapTurnDeltaYaw;
		params.VelocityRetention = VelocityRetention;
		params.bFlagGripTeleport = bFlagGripTeleport;
		params.bFlagCharacterTeleport = bFlagCharacterTeleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_SetRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewYaw                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVRMoveActionVelocityRetention                     VelocityRetention                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFlagGripTeleport                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFlagCharacterTeleport                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRBaseCharacterMovementComponent::PerformMoveAction_SetRotation(float NewYaw, EVRMoveActionVelocityRetention VelocityRetention, bool bFlagGripTeleport, bool bFlagCharacterTeleport)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_SetRotation");
		
		UVRBaseCharacterMovementComponent_PerformMoveAction_SetRotation_Params params {};
		params.NewYaw = NewYaw;
		params.VelocityRetention = VelocityRetention;
		params.bFlagGripTeleport = bFlagGripTeleport;
		params.bFlagCharacterTeleport = bFlagCharacterTeleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_Custom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVRMoveAction                                      MoveActionToPerform                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVRMoveActionDataReq                               DataRequirementsForMoveAction                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     MoveActionVector                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    MoveActionRotator                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVRBaseCharacterMovementComponent::PerformMoveAction_Custom(EVRMoveAction MoveActionToPerform, EVRMoveActionDataReq DataRequirementsForMoveAction, const struct FVector& MoveActionVector, const struct FRotator& MoveActionRotator)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.PerformMoveAction_Custom");
		
		UVRBaseCharacterMovementComponent_PerformMoveAction_Custom_Params params {};
		params.MoveActionToPerform = MoveActionToPerform;
		params.DataRequirementsForMoveAction = DataRequirementsForMoveAction;
		params.MoveActionVector = MoveActionVector;
		params.MoveActionRotator = MoveActionRotator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacterMovementComponent.GetReplicatedMovementMode
	 * 		Flags  -> ()
	 */
	EVRConjoinedMovementModes UVRBaseCharacterMovementComponent::GetReplicatedMovementMode()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.GetReplicatedMovementMode");
		
		UVRBaseCharacterMovementComponent_GetReplicatedMovementMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacterMovementComponent.GetCustomInputVector
	 * 		Flags  -> ()
	 */
	struct FVector UVRBaseCharacterMovementComponent::GetCustomInputVector()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.GetCustomInputVector");
		
		UVRBaseCharacterMovementComponent_GetCustomInputVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacterMovementComponent.ClearCustomReplicatedMovement
	 * 		Flags  -> ()
	 */
	void UVRBaseCharacterMovementComponent::ClearCustomReplicatedMovement()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.ClearCustomReplicatedMovement");
		
		UVRBaseCharacterMovementComponent_ClearCustomReplicatedMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRBaseCharacterMovementComponent.AddCustomReplicatedMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Movement                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRBaseCharacterMovementComponent::AddCustomReplicatedMovement(const struct FVector& Movement)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRBaseCharacterMovementComponent.AddCustomReplicatedMovement");
		
		UVRBaseCharacterMovementComponent_AddCustomReplicatedMovement_Params params {};
		params.Movement = Movement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRBaseCharacterMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRBaseCharacterMovementComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRBaseCharacterMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRButtonComponent.SetButtonToRestingPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLerpToPosition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRButtonComponent::SetButtonToRestingPosition(bool bLerpToPosition)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRButtonComponent.SetButtonToRestingPosition");
		
		UVRButtonComponent_SetButtonToRestingPosition_Params params {};
		params.bLerpToPosition = bLerpToPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRButtonComponent.SetButtonState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewButtonState                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCallButtonChangedEvent                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSnapIntoPosition                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRButtonComponent::SetButtonState(bool bNewButtonState, bool bCallButtonChangedEvent, bool bSnapIntoPosition)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRButtonComponent.SetButtonState");
		
		UVRButtonComponent_SetButtonState_Params params {};
		params.bNewButtonState = bNewButtonState;
		params.bCallButtonChangedEvent = bCallButtonChangedEvent;
		params.bSnapIntoPosition = bSnapIntoPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRButtonComponent.ResetInitialButtonLocation
	 * 		Flags  -> ()
	 */
	void UVRButtonComponent::ResetInitialButtonLocation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRButtonComponent.ResetInitialButtonLocation");
		
		UVRButtonComponent_ResetInitialButtonLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRButtonComponent.ReceiveButtonStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCurButtonState                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      LastInteractingActor                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         InteractingComponent                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRButtonComponent::ReceiveButtonStateChanged(bool bCurButtonState, class AActor* LastInteractingActor, class UPrimitiveComponent* InteractingComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRButtonComponent.ReceiveButtonStateChanged");
		
		UVRButtonComponent_ReceiveButtonStateChanged_Params params {};
		params.bCurButtonState = bCurButtonState;
		params.LastInteractingActor = LastInteractingActor;
		params.InteractingComponent = InteractingComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRButtonComponent.ReceiveButtonEndInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      LastInteractingActor                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         LastInteractingComponent                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRButtonComponent::ReceiveButtonEndInteraction(class AActor* LastInteractingActor, class UPrimitiveComponent* LastInteractingComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRButtonComponent.ReceiveButtonEndInteraction");
		
		UVRButtonComponent_ReceiveButtonEndInteraction_Params params {};
		params.LastInteractingActor = LastInteractingActor;
		params.LastInteractingComponent = LastInteractingComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRButtonComponent.ReceiveButtonBeginInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InteractingActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         InteractingComponent                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRButtonComponent::ReceiveButtonBeginInteraction(class AActor* InteractingActor, class UPrimitiveComponent* InteractingComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRButtonComponent.ReceiveButtonBeginInteraction");
		
		UVRButtonComponent_ReceiveButtonBeginInteraction_Params params {};
		params.InteractingActor = InteractingActor;
		params.InteractingComponent = InteractingComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRButtonComponent.OnRep_InitialRelativeTransform
	 * 		Flags  -> ()
	 */
	void UVRButtonComponent::OnRep_InitialRelativeTransform()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRButtonComponent.OnRep_InitialRelativeTransform");
		
		UVRButtonComponent_OnRep_InitialRelativeTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRButtonComponent.OnOverlapEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComp                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRButtonComponent::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRButtonComponent.OnOverlapEnd");
		
		UVRButtonComponent_OnOverlapEnd_Params params {};
		params.OverlappedComp = OverlappedComp;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRButtonComponent.OnOverlapBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComp                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UVRButtonComponent::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRButtonComponent.OnOverlapBegin");
		
		UVRButtonComponent_OnOverlapBegin_Params params {};
		params.OverlappedComp = OverlappedComp;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRButtonComponent.IsValidOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlapComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVRButtonComponent::IsValidOverlap(class UPrimitiveComponent* OverlapComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRButtonComponent.IsValidOverlap");
		
		UVRButtonComponent_IsValidOverlap_Params params {};
		params.OverlapComponent = OverlapComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRButtonComponent.IsButtonInUse
	 * 		Flags  -> ()
	 */
	bool UVRButtonComponent::IsButtonInUse()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRButtonComponent.IsButtonInUse");
		
		UVRButtonComponent_IsButtonInUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRButtonComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRButtonComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRButtonComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVRCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVRCharacter::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRCharacterMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRCharacterMovementComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRCharacterMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRDialComponent.SetGripPriority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewGripPriority                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRDialComponent::SetGripPriority(int32_t NewGripPriority)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.SetGripPriority");
		
		UVRDialComponent_SetGripPriority_Params params {};
		params.NewGripPriority = NewGripPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRDialComponent.SetDialAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DialAngle                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCallEvents                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRDialComponent::SetDialAngle(float DialAngle, bool bCallEvents)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.SetDialAngle");
		
		UVRDialComponent_SetDialAngle_Params params {};
		params.DialAngle = DialAngle;
		params.bCallEvents = bCallEvents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRDialComponent.ResetInitialDialLocation
	 * 		Flags  -> ()
	 */
	void UVRDialComponent::ResetInitialDialLocation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.ResetInitialDialLocation");
		
		UVRDialComponent_ResetInitialDialLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRDialComponent.ReceiveDialHitSnapAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DialMilestoneAngle                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRDialComponent::ReceiveDialHitSnapAngle(float DialMilestoneAngle)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.ReceiveDialHitSnapAngle");
		
		UVRDialComponent_ReceiveDialHitSnapAngle_Params params {};
		params.DialMilestoneAngle = DialMilestoneAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRDialComponent.ReceiveDialFinishedLerping
	 * 		Flags  -> ()
	 */
	void UVRDialComponent::ReceiveDialFinishedLerping()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.ReceiveDialFinishedLerping");
		
		UVRDialComponent_ReceiveDialFinishedLerping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRDialComponent.OnRep_InitialRelativeTransform
	 * 		Flags  -> ()
	 */
	void UVRDialComponent::OnRep_InitialRelativeTransform()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.OnRep_InitialRelativeTransform");
		
		UVRDialComponent_OnRep_InitialRelativeTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRDialComponent.AddDialAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DialAngleDelta                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCallEvents                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSkipSettingRot                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRDialComponent::AddDialAngle(float DialAngleDelta, bool bCallEvents, bool bSkipSettingRot)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRDialComponent.AddDialAngle");
		
		UVRDialComponent_AddDialAngle_Params params {};
		params.DialAngleDelta = DialAngleDelta;
		params.bCallEvents = bCallEvents;
		params.bSkipSettingRot = bSkipSettingRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRDialComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRDialComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRDialComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VREPhysicalAnimationComponent.SetWeldedBoneDriverPaused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPaused                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVREPhysicalAnimationComponent::SetWeldedBoneDriverPaused(bool bPaused)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VREPhysicalAnimationComponent.SetWeldedBoneDriverPaused");
		
		UVREPhysicalAnimationComponent_SetWeldedBoneDriverPaused_Params params {};
		params.bPaused = bPaused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VREPhysicalAnimationComponent.SetupWeldedBoneDriver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                BaseBoneNames                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UVREPhysicalAnimationComponent::SetupWeldedBoneDriver(TArray<class FName> BaseBoneNames)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VREPhysicalAnimationComponent.SetupWeldedBoneDriver");
		
		UVREPhysicalAnimationComponent_SetupWeldedBoneDriver_Params params {};
		params.BaseBoneNames = BaseBoneNames;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VREPhysicalAnimationComponent.RefreshWeldedBoneDriver
	 * 		Flags  -> ()
	 */
	void UVREPhysicalAnimationComponent::RefreshWeldedBoneDriver()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VREPhysicalAnimationComponent.RefreshWeldedBoneDriver");
		
		UVREPhysicalAnimationComponent_RefreshWeldedBoneDriver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VREPhysicalAnimationComponent.IsWeldedBoneDriverPaused
	 * 		Flags  -> ()
	 */
	bool UVREPhysicalAnimationComponent::IsWeldedBoneDriverPaused()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VREPhysicalAnimationComponent.IsWeldedBoneDriverPaused");
		
		UVREPhysicalAnimationComponent_IsWeldedBoneDriverPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVREPhysicalAnimationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVREPhysicalAnimationComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VREPhysicalAnimationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VREPhysicsConstraintComponent.SetConstraintToForceBased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseForceConstraint                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVREPhysicsConstraintComponent::SetConstraintToForceBased(bool bUseForceConstraint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VREPhysicsConstraintComponent.SetConstraintToForceBased");
		
		UVREPhysicsConstraintComponent_SetConstraintToForceBased_Params params {};
		params.bUseForceConstraint = bUseForceConstraint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VREPhysicsConstraintComponent.SetAngularOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    NewAngularOffset                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVREPhysicsConstraintComponent::SetAngularOffset(const struct FRotator& NewAngularOffset)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VREPhysicsConstraintComponent.SetAngularOffset");
		
		UVREPhysicsConstraintComponent_SetAngularOffset_Params params {};
		params.NewAngularOffset = NewAngularOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VREPhysicsConstraintComponent.GetLocalPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConstraintFrame                                   ConstraintFrame                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UVREPhysicsConstraintComponent::GetLocalPose(EConstraintFrame ConstraintFrame)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VREPhysicsConstraintComponent.GetLocalPose");
		
		UVREPhysicsConstraintComponent_GetLocalPose_Params params {};
		params.ConstraintFrame = ConstraintFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VREPhysicsConstraintComponent.GetGlobalPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConstraintFrame                                   ConstraintFrame                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  GlobalPose                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVREPhysicsConstraintComponent::GetGlobalPose(EConstraintFrame ConstraintFrame, struct FTransform* GlobalPose)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VREPhysicsConstraintComponent.GetGlobalPose");
		
		UVREPhysicsConstraintComponent_GetGlobalPose_Params params {};
		params.ConstraintFrame = ConstraintFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GlobalPose != nullptr)
			*GlobalPose = params.GlobalPose;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VREPhysicsConstraintComponent.GetCurrentLinearDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConstraintFrame                                   FrameOfReference                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UVREPhysicsConstraintComponent::GetCurrentLinearDistance(EConstraintFrame FrameOfReference)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VREPhysicsConstraintComponent.GetCurrentLinearDistance");
		
		UVREPhysicsConstraintComponent_GetCurrentLinearDistance_Params params {};
		params.FrameOfReference = FrameOfReference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VREPhysicsConstraintComponent.GetConstraintReferenceFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConstraintFrame                                   Frame                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  RefFrame                                                   (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVREPhysicsConstraintComponent::GetConstraintReferenceFrame(EConstraintFrame Frame, struct FTransform* RefFrame)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VREPhysicsConstraintComponent.GetConstraintReferenceFrame");
		
		UVREPhysicsConstraintComponent_GetConstraintReferenceFrame_Params params {};
		params.Frame = Frame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RefFrame != nullptr)
			*RefFrame = params.RefFrame;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VREPhysicsConstraintComponent.GetAngularOffset
	 * 		Flags  -> ()
	 */
	struct FRotator UVREPhysicsConstraintComponent::GetAngularOffset()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VREPhysicsConstraintComponent.GetAngularOffset");
		
		UVREPhysicsConstraintComponent_GetAngularOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVREPhysicsConstraintComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVREPhysicsConstraintComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VREPhysicsConstraintComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.UpdatePeakLowPassFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPLowPassPeakFilter                        TargetPeakFilter                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     newSample                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRExpansionFunctionLibrary::UpdatePeakLowPassFilter(struct FBPLowPassPeakFilter* TargetPeakFilter, const struct FVector& newSample)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.UpdatePeakLowPassFilter");
		
		UVRExpansionFunctionLibrary_UpdatePeakLowPassFilter_Params params {};
		params.newSample = newSample;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetPeakFilter != nullptr)
			*TargetPeakFilter = params.TargetPeakFilter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.SmoothUpdateLaserSpline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USplineComponent*                            LaserSplineComponent                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class USplineMeshComponent*>                LaserSplineMeshComponents                                  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InStartLocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InEndLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InForward                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LaserRadius                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRExpansionFunctionLibrary::SmoothUpdateLaserSpline(class USplineComponent* LaserSplineComponent, TArray<class USplineMeshComponent*> LaserSplineMeshComponents, const struct FVector& InStartLocation, const struct FVector& InEndLocation, const struct FVector& InForward, float LaserRadius)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.SmoothUpdateLaserSpline");
		
		UVRExpansionFunctionLibrary_SmoothUpdateLaserSpline_Params params {};
		params.LaserSplineComponent = LaserSplineComponent;
		params.LaserSplineMeshComponents = LaserSplineMeshComponents;
		params.InStartLocation = InStartLocation;
		params.InEndLocation = InEndLocation;
		params.InForward = InForward;
		params.LaserRadius = LaserRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.SetObjectsIgnoreCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         Prim1                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OptionalBoneName1                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         Prim2                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OptionalBoneName2                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnoreCollision                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRExpansionFunctionLibrary::SetObjectsIgnoreCollision(class UPrimitiveComponent* Prim1, const class FName& OptionalBoneName1, class UPrimitiveComponent* Prim2, const class FName& OptionalBoneName2, bool bIgnoreCollision)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.SetObjectsIgnoreCollision");
		
		UVRExpansionFunctionLibrary_SetObjectsIgnoreCollision_Params params {};
		params.Prim1 = Prim1;
		params.OptionalBoneName1 = OptionalBoneName1;
		params.Prim2 = Prim2;
		params.OptionalBoneName2 = OptionalBoneName2;
		params.bIgnoreCollision = bIgnoreCollision;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.RunEuroSmoothingFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPEuroLowPassFilter                        TargetEuroFilter                                           (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InRawValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SmoothedValue                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRExpansionFunctionLibrary::RunEuroSmoothingFilter(struct FBPEuroLowPassFilter* TargetEuroFilter, const struct FVector& InRawValue, float DeltaTime, struct FVector* SmoothedValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.RunEuroSmoothingFilter");
		
		UVRExpansionFunctionLibrary_RunEuroSmoothingFilter_Params params {};
		params.InRawValue = InRawValue;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetEuroFilter != nullptr)
			*TargetEuroFilter = params.TargetEuroFilter;
		if (SmoothedValue != nullptr)
			*SmoothedValue = params.SmoothedValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.RotateAroundPivot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    RotationDelta                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OriginalLocation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    OriginalRotation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     PivotPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NewRotation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseOriginalYawOnly                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRExpansionFunctionLibrary::RotateAroundPivot(const struct FRotator& RotationDelta, const struct FVector& OriginalLocation, const struct FRotator& OriginalRotation, const struct FVector& PivotPoint, struct FVector* NewLocation, struct FRotator* NewRotation, bool bUseOriginalYawOnly)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.RotateAroundPivot");
		
		UVRExpansionFunctionLibrary_RotateAroundPivot_Params params {};
		params.RotationDelta = RotationDelta;
		params.OriginalLocation = OriginalLocation;
		params.OriginalRotation = OriginalRotation;
		params.PivotPoint = PivotPoint;
		params.bUseOriginalYawOnly = bUseOriginalYawOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewLocation != nullptr)
			*NewLocation = params.NewLocation;
		if (NewRotation != nullptr)
			*NewRotation = params.NewRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.ResetPeakLowPassFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPLowPassPeakFilter                        TargetPeakFilter                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVRExpansionFunctionLibrary::ResetPeakLowPassFilter(struct FBPLowPassPeakFilter* TargetPeakFilter)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.ResetPeakLowPassFilter");
		
		UVRExpansionFunctionLibrary_ResetPeakLowPassFilter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetPeakFilter != nullptr)
			*TargetPeakFilter = params.TargetPeakFilter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.ResetEuroSmoothingFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPEuroLowPassFilter                        TargetEuroFilter                                           (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVRExpansionFunctionLibrary::ResetEuroSmoothingFilter(struct FBPEuroLowPassFilter* TargetEuroFilter)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.ResetEuroSmoothingFilter");
		
		UVRExpansionFunctionLibrary_ResetEuroSmoothingFilter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetEuroFilter != nullptr)
			*TargetEuroFilter = params.TargetEuroFilter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.NonAuthorityMinimumAreaRectangle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             InVerts                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     SampleSurfaceNormal                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutRectCenter                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    OutRectRotation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              OutSideLengthX                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutSideLengthY                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDebugDraw                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRExpansionFunctionLibrary::NonAuthorityMinimumAreaRectangle(class UObject* WorldContextObject, TArray<struct FVector> InVerts, const struct FVector& SampleSurfaceNormal, struct FVector* OutRectCenter, struct FRotator* OutRectRotation, float* OutSideLengthX, float* OutSideLengthY, bool bDebugDraw)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.NonAuthorityMinimumAreaRectangle");
		
		UVRExpansionFunctionLibrary_NonAuthorityMinimumAreaRectangle_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InVerts = InVerts;
		params.SampleSurfaceNormal = SampleSurfaceNormal;
		params.bDebugDraw = bDebugDraw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRectCenter != nullptr)
			*OutRectCenter = params.OutRectCenter;
		if (OutRectRotation != nullptr)
			*OutRectRotation = params.OutRectRotation;
		if (OutSideLengthX != nullptr)
			*OutSideLengthX = params.OutSideLengthX;
		if (OutSideLengthY != nullptr)
			*OutSideLengthY = params.OutSideLengthY;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.MatchesAnyTagsWithDirectParentTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                DirectParentTag                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       BaseContainer                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       OtherContainer                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UVRExpansionFunctionLibrary::MatchesAnyTagsWithDirectParentTag(const struct FGameplayTag& DirectParentTag, const struct FGameplayTagContainer& BaseContainer, const struct FGameplayTagContainer& OtherContainer)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.MatchesAnyTagsWithDirectParentTag");
		
		UVRExpansionFunctionLibrary_MatchesAnyTagsWithDirectParentTag_Params params {};
		params.DirectParentTag = DirectParentTag;
		params.BaseContainer = BaseContainer;
		params.OtherContainer = OtherContainer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeVector_NetQuantize100
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InVector                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector_NetQuantize100 UVRExpansionFunctionLibrary::MakeVector_NetQuantize100(const struct FVector& InVector)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeVector_NetQuantize100");
		
		UVRExpansionFunctionLibrary_MakeVector_NetQuantize100_Params params {};
		params.InVector = InVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeVector_NetQuantize10
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InVector                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector_NetQuantize10 UVRExpansionFunctionLibrary::MakeVector_NetQuantize10(const struct FVector& InVector)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeVector_NetQuantize10");
		
		UVRExpansionFunctionLibrary_MakeVector_NetQuantize10_Params params {};
		params.InVector = InVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeVector_NetQuantize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InVector                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector_NetQuantize UVRExpansionFunctionLibrary::MakeVector_NetQuantize(const struct FVector& InVector)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeVector_NetQuantize");
		
		UVRExpansionFunctionLibrary_MakeVector_NetQuantize_Params params {};
		params.InVector = InVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeTransform_NetQuantize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform_NetQuantize UVRExpansionFunctionLibrary::MakeTransform_NetQuantize(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.MakeTransform_NetQuantize");
		
		UVRExpansionFunctionLibrary_MakeTransform_NetQuantize_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.LowPassFilter_RollingAverage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     lastAverage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     newSample                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     newAverage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            numSamples                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRExpansionFunctionLibrary::LowPassFilter_RollingAverage(const struct FVector& lastAverage, const struct FVector& newSample, struct FVector* newAverage, int32_t numSamples)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.LowPassFilter_RollingAverage");
		
		UVRExpansionFunctionLibrary_LowPassFilter_RollingAverage_Params params {};
		params.lastAverage = lastAverage;
		params.newSample = newSample;
		params.numSamples = numSamples;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (newAverage != nullptr)
			*newAverage = params.newAverage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.LowPassFilter_Exponential
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     lastAverage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     newSample                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     newAverage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              sampleFactor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRExpansionFunctionLibrary::LowPassFilter_Exponential(const struct FVector& lastAverage, const struct FVector& newSample, struct FVector* newAverage, float sampleFactor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.LowPassFilter_Exponential");
		
		UVRExpansionFunctionLibrary_LowPassFilter_Exponential_Params params {};
		params.lastAverage = lastAverage;
		params.newSample = newSample;
		params.sampleFactor = sampleFactor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (newAverage != nullptr)
			*newAverage = params.newAverage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.IsInVREditorPreviewOrGame
	 * 		Flags  -> ()
	 */
	bool UVRExpansionFunctionLibrary::IsInVREditorPreviewOrGame()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.IsInVREditorPreviewOrGame");
		
		UVRExpansionFunctionLibrary_IsInVREditorPreviewOrGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.IsInVREditorPreview
	 * 		Flags  -> ()
	 */
	bool UVRExpansionFunctionLibrary::IsInVREditorPreview()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.IsInVREditorPreview");
		
		UVRExpansionFunctionLibrary_IsInVREditorPreview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetPeak_PeakLowPassFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPLowPassPeakFilter                        TargetPeakFilter                                           (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FVector UVRExpansionFunctionLibrary::GetPeak_PeakLowPassFilter(struct FBPLowPassPeakFilter* TargetPeakFilter)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetPeak_PeakLowPassFilter");
		
		UVRExpansionFunctionLibrary_GetPeak_PeakLowPassFilter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetPeakFilter != nullptr)
			*TargetPeakFilter = params.TargetPeakFilter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetIsHMDWorn
	 * 		Flags  -> ()
	 */
	EBPHMDWornState UVRExpansionFunctionLibrary::GetIsHMDWorn()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetIsHMDWorn");
		
		UVRExpansionFunctionLibrary_GetIsHMDWorn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetIsHMDConnected
	 * 		Flags  -> ()
	 */
	bool UVRExpansionFunctionLibrary::GetIsHMDConnected()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetIsHMDConnected");
		
		UVRExpansionFunctionLibrary_GetIsHMDConnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetIsActorMovable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToCheck                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVRExpansionFunctionLibrary::GetIsActorMovable(class AActor* ActorToCheck)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetIsActorMovable");
		
		UVRExpansionFunctionLibrary_GetIsActorMovable_Params params {};
		params.ActorToCheck = ActorToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetHMDType
	 * 		Flags  -> ()
	 */
	EBPHMDDeviceType UVRExpansionFunctionLibrary::GetHMDType()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetHMDType");
		
		UVRExpansionFunctionLibrary_GetHMDType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetHMDPureYaw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRotator                                    HMDRotation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRotator UVRExpansionFunctionLibrary::GetHMDPureYaw(const struct FRotator& HMDRotation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetHMDPureYaw");
		
		UVRExpansionFunctionLibrary_GetHMDPureYaw_Params params {};
		params.HMDRotation = HMDRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetHandFromMotionSourceName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MotionSource                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EControllerHand                                    hand                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVRExpansionFunctionLibrary::GetHandFromMotionSourceName(const class FName& MotionSource, EControllerHand* hand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetHandFromMotionSourceName");
		
		UVRExpansionFunctionLibrary_GetHandFromMotionSourceName_Params params {};
		params.MotionSource = MotionSource;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (hand != nullptr)
			*hand = params.hand;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetGripSlotInRangeByTypeName_Component
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SlotType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHadSlotInRange                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  SlotWorldTransform                                         (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        SlotName                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGripMotionControllerComponent*              QueryController                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRExpansionFunctionLibrary::GetGripSlotInRangeByTypeName_Component(const class FName& SlotType, class UPrimitiveComponent* Component, const struct FVector& WorldLocation, float MaxRange, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform, class FName* SlotName, class UGripMotionControllerComponent* QueryController)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetGripSlotInRangeByTypeName_Component");
		
		UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Component_Params params {};
		params.SlotType = SlotType;
		params.Component = Component;
		params.WorldLocation = WorldLocation;
		params.MaxRange = MaxRange;
		params.QueryController = QueryController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHadSlotInRange != nullptr)
			*bHadSlotInRange = params.bHadSlotInRange;
		if (SlotWorldTransform != nullptr)
			*SlotWorldTransform = params.SlotWorldTransform;
		if (SlotName != nullptr)
			*SlotName = params.SlotName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetGripSlotInRangeByTypeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        SlotType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHadSlotInRange                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  SlotWorldTransform                                         (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        SlotName                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGripMotionControllerComponent*              QueryController                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRExpansionFunctionLibrary::GetGripSlotInRangeByTypeName(const class FName& SlotType, class AActor* Actor, const struct FVector& WorldLocation, float MaxRange, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform, class FName* SlotName, class UGripMotionControllerComponent* QueryController)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetGripSlotInRangeByTypeName");
		
		UVRExpansionFunctionLibrary_GetGripSlotInRangeByTypeName_Params params {};
		params.SlotType = SlotType;
		params.Actor = Actor;
		params.WorldLocation = WorldLocation;
		params.MaxRange = MaxRange;
		params.QueryController = QueryController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHadSlotInRange != nullptr)
			*bHadSlotInRange = params.bHadSlotInRange;
		if (SlotWorldTransform != nullptr)
			*SlotWorldTransform = params.SlotWorldTransform;
		if (SlotName != nullptr)
			*SlotName = params.SlotName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetGameViewportClient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameViewportClient* UVRExpansionFunctionLibrary::GetGameViewportClient(class UObject* WorldContextObject)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetGameViewportClient");
		
		UVRExpansionFunctionLibrary_GetGameViewportClient_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetFirstGameplayTagWithExactParent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                DirectParentTag                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTagContainer                       BaseContainer                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                FoundTag                                                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVRExpansionFunctionLibrary::GetFirstGameplayTagWithExactParent(const struct FGameplayTag& DirectParentTag, const struct FGameplayTagContainer& BaseContainer, struct FGameplayTag* FoundTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.GetFirstGameplayTagWithExactParent");
		
		UVRExpansionFunctionLibrary_GetFirstGameplayTagWithExactParent_Params params {};
		params.DirectParentTag = DirectParentTag;
		params.BaseContainer = BaseContainer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundTag != nullptr)
			*FoundTag = params.FoundTag;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.EqualEqual_FBPActorGripInformation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPActorGripInformation                     A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FBPActorGripInformation                     B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UVRExpansionFunctionLibrary::EqualEqual_FBPActorGripInformation(const struct FBPActorGripInformation& A, const struct FBPActorGripInformation& B)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.EqualEqual_FBPActorGripInformation");
		
		UVRExpansionFunctionLibrary_EqualEqual_FBPActorGripInformation_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_TransformToTransformNetQuantize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  InTransform                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FTransform_NetQuantize UVRExpansionFunctionLibrary::Conv_TransformToTransformNetQuantize(const struct FTransform& InTransform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_TransformToTransformNetQuantize");
		
		UVRExpansionFunctionLibrary_Conv_TransformToTransformNetQuantize_Params params {};
		params.InTransform = InTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_GripPairToMotionController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPGripPair                                 GripPair                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	class UGripMotionControllerComponent* UVRExpansionFunctionLibrary::Conv_GripPairToMotionController(const struct FBPGripPair& GripPair)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_GripPairToMotionController");
		
		UVRExpansionFunctionLibrary_Conv_GripPairToMotionController_Params params {};
		params.GripPair = GripPair;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_GripPairToGripID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPGripPair                                 GripPair                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	unsigned char UVRExpansionFunctionLibrary::Conv_GripPairToGripID(const struct FBPGripPair& GripPair)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_GripPairToGripID");
		
		UVRExpansionFunctionLibrary_Conv_GripPairToGripID_Params params {};
		params.GripPair = GripPair;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_FVectorToFVectorNetQuantize100
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InVector                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector_NetQuantize100 UVRExpansionFunctionLibrary::Conv_FVectorToFVectorNetQuantize100(const struct FVector& InVector)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_FVectorToFVectorNetQuantize100");
		
		UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize100_Params params {};
		params.InVector = InVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_FVectorToFVectorNetQuantize10
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InVector                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector_NetQuantize10 UVRExpansionFunctionLibrary::Conv_FVectorToFVectorNetQuantize10(const struct FVector& InVector)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_FVectorToFVectorNetQuantize10");
		
		UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize10_Params params {};
		params.InVector = InVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_FVectorToFVectorNetQuantize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InVector                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector_NetQuantize UVRExpansionFunctionLibrary::Conv_FVectorToFVectorNetQuantize(const struct FVector& InVector)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.Conv_FVectorToFVectorNetQuantize");
		
		UVRExpansionFunctionLibrary_Conv_FVectorToFVectorNetQuantize_Params params {};
		params.InVector = InVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.BreakTransform_NetQuantize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform_NetQuantize                      InTransform                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Scale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRExpansionFunctionLibrary::BreakTransform_NetQuantize(const struct FTransform_NetQuantize& InTransform, struct FVector* Location, struct FRotator* Rotation, struct FVector* Scale)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.BreakTransform_NetQuantize");
		
		UVRExpansionFunctionLibrary_BreakTransform_NetQuantize_Params params {};
		params.InTransform = InTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
		if (Scale != nullptr)
			*Scale = params.Scale;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.BPQuat_FindBetween
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Vec1                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Vec2                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator UVRExpansionFunctionLibrary::BPQuat_FindBetween(const struct FVector& Vec1, const struct FVector& Vec2)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.BPQuat_FindBetween");
		
		UVRExpansionFunctionLibrary_BPQuat_FindBetween_Params params {};
		params.Vec1 = Vec1;
		params.Vec2 = Vec2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRExpansionFunctionLibrary.AddSceneComponentByClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Outer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  ComponentRelativeTransform                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class USceneComponent* UVRExpansionFunctionLibrary::AddSceneComponentByClass(class UObject* Outer, class UClass* Class, const struct FTransform& ComponentRelativeTransform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRExpansionFunctionLibrary.AddSceneComponentByClass");
		
		UVRExpansionFunctionLibrary_AddSceneComponentByClass_Params params {};
		params.Outer = Outer;
		params.Class = Class;
		params.ComponentRelativeTransform = ComponentRelativeTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRExpansionFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRExpansionFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRExpansionFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGameViewportClient.EventWindowClosing
	 * 		Flags  -> ()
	 */
	bool UVRGameViewportClient::EventWindowClosing()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGameViewportClient.EventWindowClosing");
		
		UVRGameViewportClient_EventWindowClosing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRGameViewportClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRGameViewportClient::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRGameViewportClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GesturesDatabase.RecalculateGestures
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bScaleToDatabase                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGesturesDatabase::RecalculateGestures(bool bScaleToDatabase)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GesturesDatabase.RecalculateGestures");
		
		UGesturesDatabase_RecalculateGestures_Params params {};
		params.bScaleToDatabase = bScaleToDatabase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GesturesDatabase.ImportSplineAsGesture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USplineComponent*                            HostSplineComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      GestureName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bKeepSplineCurves                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SegmentLen                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bScaleToDatabase                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGesturesDatabase::ImportSplineAsGesture(class USplineComponent* HostSplineComponent, const class FString& GestureName, bool bKeepSplineCurves, float SegmentLen, bool bScaleToDatabase)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GesturesDatabase.ImportSplineAsGesture");
		
		UGesturesDatabase_ImportSplineAsGesture_Params params {};
		params.HostSplineComponent = HostSplineComponent;
		params.GestureName = GestureName;
		params.bKeepSplineCurves = bKeepSplineCurves;
		params.SegmentLen = SegmentLen;
		params.bScaleToDatabase = bScaleToDatabase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.GesturesDatabase.FillSplineWithGesture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVRGesture                                  Gesture                                                    (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class USplineComponent*                            SplineComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCenterPointsOnSpline                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bScaleToBounds                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OptionalBounds                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseCurvedPoints                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFillInSplineMeshComponents                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UStaticMesh*                                 Mesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMaterial*                                   MeshMat                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGesturesDatabase::FillSplineWithGesture(struct FVRGesture* Gesture, class USplineComponent* SplineComponent, bool bCenterPointsOnSpline, bool bScaleToBounds, float OptionalBounds, bool bUseCurvedPoints, bool bFillInSplineMeshComponents, class UStaticMesh* Mesh, class UMaterial* MeshMat)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.GesturesDatabase.FillSplineWithGesture");
		
		UGesturesDatabase_FillSplineWithGesture_Params params {};
		params.SplineComponent = SplineComponent;
		params.bCenterPointsOnSpline = bCenterPointsOnSpline;
		params.bScaleToBounds = bScaleToBounds;
		params.OptionalBounds = OptionalBounds;
		params.bUseCurvedPoints = bUseCurvedPoints;
		params.bFillInSplineMeshComponents = bFillInSplineMeshComponents;
		params.Mesh = Mesh;
		params.MeshMat = MeshMat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Gesture != nullptr)
			*Gesture = params.Gesture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGesturesDatabase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGesturesDatabase::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.GesturesDatabase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGestureComponent.SaveRecording
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVRGesture                                  Recording                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      RecordingName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bScaleRecordingToDatabase                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGestureComponent::SaveRecording(struct FVRGesture* Recording, const class FString& RecordingName, bool bScaleRecordingToDatabase)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGestureComponent.SaveRecording");
		
		UVRGestureComponent_SaveRecording_Params params {};
		params.RecordingName = RecordingName;
		params.bScaleRecordingToDatabase = bScaleRecordingToDatabase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Recording != nullptr)
			*Recording = params.Recording;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGestureComponent.RecalculateGestureSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVRGesture                                  InputGesture                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UGesturesDatabase*                           GestureDB                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGestureComponent::RecalculateGestureSize(struct FVRGesture* InputGesture, class UGesturesDatabase* GestureDB)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGestureComponent.RecalculateGestureSize");
		
		UVRGestureComponent_RecalculateGestureSize_Params params {};
		params.GestureDB = GestureDB;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputGesture != nullptr)
			*InputGesture = params.InputGesture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGestureComponent.OnGestureDetected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      GestureType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DetectedGestureName                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DetectedGestureIndex                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGesturesDatabase*                           GestureDataBase                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGestureComponent::OnGestureDetected(unsigned char GestureType, class FString* DetectedGestureName, int32_t* DetectedGestureIndex, class UGesturesDatabase* GestureDataBase)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGestureComponent.OnGestureDetected");
		
		UVRGestureComponent_OnGestureDetected_Params params {};
		params.GestureType = GestureType;
		params.GestureDataBase = GestureDataBase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DetectedGestureName != nullptr)
			*DetectedGestureName = params.DetectedGestureName;
		if (DetectedGestureIndex != nullptr)
			*DetectedGestureIndex = params.DetectedGestureIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGestureComponent.EndRecording
	 * 		Flags  -> ()
	 */
	struct FVRGesture UVRGestureComponent::EndRecording()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGestureComponent.EndRecording");
		
		UVRGestureComponent_EndRecording_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGestureComponent.DrawDebugGesture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  StartTransform                                             (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVRGesture                                  GestureToDraw                                              (Parm, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPersistentLines                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      DepthPriority                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LifeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGestureComponent::DrawDebugGesture(class UObject* WorldContextObject, struct FTransform* StartTransform, const struct FVRGesture& GestureToDraw, const struct FColor& Color, bool bPersistentLines, unsigned char DepthPriority, float LifeTime, float Thickness)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGestureComponent.DrawDebugGesture");
		
		UVRGestureComponent_DrawDebugGesture_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GestureToDraw = GestureToDraw;
		params.Color = Color;
		params.bPersistentLines = bPersistentLines;
		params.DepthPriority = DepthPriority;
		params.LifeTime = LifeTime;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StartTransform != nullptr)
			*StartTransform = params.StartTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGestureComponent.ClearRecording
	 * 		Flags  -> ()
	 */
	void UVRGestureComponent::ClearRecording()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGestureComponent.ClearRecording");
		
		UVRGestureComponent_ClearRecording_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGestureComponent.BeginRecording
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bRunDetection                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFlattenGesture                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDrawGesture                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDrawAsSpline                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SamplingHTZ                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SampleBufferSize                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ClampingTolerance                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGestureComponent::BeginRecording(bool bRunDetection, bool bFlattenGesture, bool bDrawGesture, bool bDrawAsSpline, int32_t SamplingHTZ, int32_t SampleBufferSize, float ClampingTolerance)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGestureComponent.BeginRecording");
		
		UVRGestureComponent_BeginRecording_Params params {};
		params.bRunDetection = bRunDetection;
		params.bFlattenGesture = bFlattenGesture;
		params.bDrawGesture = bDrawGesture;
		params.bDrawAsSpline = bDrawAsSpline;
		params.SamplingHTZ = SamplingHTZ;
		params.SampleBufferSize = SampleBufferSize;
		params.ClampingTolerance = ClampingTolerance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRGestureComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRGestureComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRGestureComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGlobalSettings.SaveVirtualStockGlobalSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPVirtualStockSettings                     NewVirtualStockSettings                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVRGlobalSettings::SaveVirtualStockGlobalSettings(const struct FBPVirtualStockSettings& NewVirtualStockSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.SaveVirtualStockGlobalSettings");
		
		UVRGlobalSettings_SaveVirtualStockGlobalSettings_Params params {};
		params.NewVirtualStockSettings = NewVirtualStockSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGlobalSettings.SaveControllerProfiles
	 * 		Flags  -> ()
	 */
	void UVRGlobalSettings::SaveControllerProfiles()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.SaveControllerProfiles");
		
		UVRGlobalSettings_SaveControllerProfiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGlobalSettings.OverwriteControllerProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPVRControllerProfile                      OverwritingProfile                                         (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bSaveOutToConfig                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGlobalSettings::OverwriteControllerProfile(struct FBPVRControllerProfile* OverwritingProfile, bool bSaveOutToConfig)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.OverwriteControllerProfile");
		
		UVRGlobalSettings_OverwriteControllerProfile_Params params {};
		params.bSaveOutToConfig = bSaveOutToConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OverwritingProfile != nullptr)
			*OverwritingProfile = params.OverwritingProfile;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGlobalSettings.LoadControllerProfileByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ControllerProfileName                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetAsCurrentProfile                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVRGlobalSettings::LoadControllerProfileByName(const class FName& ControllerProfileName, bool bSetAsCurrentProfile)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.LoadControllerProfileByName");
		
		UVRGlobalSettings_LoadControllerProfileByName_Params params {};
		params.ControllerProfileName = ControllerProfileName;
		params.bSetAsCurrentProfile = bSetAsCurrentProfile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGlobalSettings.LoadControllerProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPVRControllerProfile                      ControllerProfile                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bSetAsCurrentProfile                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVRGlobalSettings::LoadControllerProfile(const struct FBPVRControllerProfile& ControllerProfile, bool bSetAsCurrentProfile)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.LoadControllerProfile");
		
		UVRGlobalSettings_LoadControllerProfile_Params params {};
		params.ControllerProfile = ControllerProfile;
		params.bSetAsCurrentProfile = bSetAsCurrentProfile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGlobalSettings.IsGlobalLerpEnabled
	 * 		Flags  -> ()
	 */
	bool UVRGlobalSettings::IsGlobalLerpEnabled()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.IsGlobalLerpEnabled");
		
		UVRGlobalSettings_IsGlobalLerpEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGlobalSettings.GetVirtualStockGlobalSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPVirtualStockSettings                     OutVirtualStockSettings                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVRGlobalSettings::GetVirtualStockGlobalSettings(struct FBPVirtualStockSettings* OutVirtualStockSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.GetVirtualStockGlobalSettings");
		
		UVRGlobalSettings_GetVirtualStockGlobalSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVirtualStockSettings != nullptr)
			*OutVirtualStockSettings = params.OutVirtualStockSettings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGlobalSettings.GetMeleeSurfaceGlobalSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBPHitSurfaceProperties>             OutMeleeSurfaceSettings                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UVRGlobalSettings::GetMeleeSurfaceGlobalSettings(TArray<struct FBPHitSurfaceProperties>* OutMeleeSurfaceSettings)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.GetMeleeSurfaceGlobalSettings");
		
		UVRGlobalSettings_GetMeleeSurfaceGlobalSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMeleeSurfaceSettings != nullptr)
			*OutMeleeSurfaceSettings = params.OutMeleeSurfaceSettings;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGlobalSettings.GetCurrentProfileName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHadLoadedProfile                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UVRGlobalSettings::GetCurrentProfileName(bool* bHadLoadedProfile)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.GetCurrentProfileName");
		
		UVRGlobalSettings_GetCurrentProfileName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHadLoadedProfile != nullptr)
			*bHadLoadedProfile = params.bHadLoadedProfile;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGlobalSettings.GetCurrentProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHadLoadedProfile                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FBPVRControllerProfile UVRGlobalSettings::GetCurrentProfile(bool* bHadLoadedProfile)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.GetCurrentProfile");
		
		UVRGlobalSettings_GetCurrentProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHadLoadedProfile != nullptr)
			*bHadLoadedProfile = params.bHadLoadedProfile;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGlobalSettings.GetControllerProfiles
	 * 		Flags  -> ()
	 */
	TArray<struct FBPVRControllerProfile> UVRGlobalSettings::GetControllerProfiles()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.GetControllerProfiles");
		
		UVRGlobalSettings_GetControllerProfiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGlobalSettings.GetControllerProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ControllerProfileName                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPVRControllerProfile                      OutProfile                                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UVRGlobalSettings::GetControllerProfile(const class FName& ControllerProfileName, struct FBPVRControllerProfile* OutProfile)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.GetControllerProfile");
		
		UVRGlobalSettings_GetControllerProfile_Params params {};
		params.ControllerProfileName = ControllerProfileName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutProfile != nullptr)
			*OutProfile = params.OutProfile;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGlobalSettings.DeleteControllerProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ControllerProfileName                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSaveOutToConfig                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGlobalSettings::DeleteControllerProfile(const class FName& ControllerProfileName, bool bSaveOutToConfig)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.DeleteControllerProfile");
		
		UVRGlobalSettings_DeleteControllerProfile_Params params {};
		params.ControllerProfileName = ControllerProfileName;
		params.bSaveOutToConfig = bSaveOutToConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGlobalSettings.AdjustTransformByGivenControllerProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPVRControllerProfile                      ControllerProfile                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  SocketTransform                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsRightHand                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UVRGlobalSettings::AdjustTransformByGivenControllerProfile(struct FBPVRControllerProfile* ControllerProfile, const struct FTransform& SocketTransform, bool bIsRightHand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.AdjustTransformByGivenControllerProfile");
		
		UVRGlobalSettings_AdjustTransformByGivenControllerProfile_Params params {};
		params.SocketTransform = SocketTransform;
		params.bIsRightHand = bIsRightHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ControllerProfile != nullptr)
			*ControllerProfile = params.ControllerProfile;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGlobalSettings.AdjustTransformByControllerProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        OptionalControllerProfileName                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  SocketTransform                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsRightHand                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UVRGlobalSettings::AdjustTransformByControllerProfile(const class FName& OptionalControllerProfileName, const struct FTransform& SocketTransform, bool bIsRightHand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.AdjustTransformByControllerProfile");
		
		UVRGlobalSettings_AdjustTransformByControllerProfile_Params params {};
		params.OptionalControllerProfileName = OptionalControllerProfileName;
		params.SocketTransform = SocketTransform;
		params.bIsRightHand = bIsRightHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGlobalSettings.AddControllerProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPVRControllerProfile                      NewProfile                                                 (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bSaveOutToConfig                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGlobalSettings::AddControllerProfile(struct FBPVRControllerProfile* NewProfile, bool bSaveOutToConfig)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGlobalSettings.AddControllerProfile");
		
		UVRGlobalSettings_AddControllerProfile_Params params {};
		params.bSaveOutToConfig = bSaveOutToConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewProfile != nullptr)
			*NewProfile = params.NewProfile;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRGlobalSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRGlobalSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRGlobalSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.TickGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGripInterface::TickGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, float DeltaTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.TickGrip");
		
		UVRGripInterface_TickGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.TeleportBehavior
	 * 		Flags  -> ()
	 */
	EGripInterfaceTeleportBehavior UVRGripInterface::TeleportBehavior()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.TeleportBehavior");
		
		UVRGripInterface_TeleportBehavior_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.SimulateOnDrop
	 * 		Flags  -> ()
	 */
	bool UVRGripInterface::SimulateOnDrop()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.SimulateOnDrop");
		
		UVRGripInterface_SimulateOnDrop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.SetHeld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              HoldingController                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      GripID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsHeld                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGripInterface::SetHeld(class UGripMotionControllerComponent* HoldingController, unsigned char GripID, bool bIsHeld)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.SetHeld");
		
		UVRGripInterface_SetHeld_Params params {};
		params.HoldingController = HoldingController;
		params.GripID = GripID;
		params.bIsHeld = bIsHeld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.SecondaryGripType
	 * 		Flags  -> ()
	 */
	ESecondaryGripType UVRGripInterface::SecondaryGripType()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.SecondaryGripType");
		
		UVRGripInterface_SecondaryGripType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.RequestsSocketing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             ParentToSocketTo                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OptionalSocketName                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform_NetQuantize                      RelativeTransform                                          (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UVRGripInterface::RequestsSocketing(class USceneComponent** ParentToSocketTo, class FName* OptionalSocketName, struct FTransform_NetQuantize* RelativeTransform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.RequestsSocketing");
		
		UVRGripInterface_RequestsSocketing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ParentToSocketTo != nullptr)
			*ParentToSocketTo = params.ParentToSocketTo;
		if (OptionalSocketName != nullptr)
			*OptionalSocketName = params.OptionalSocketName;
		if (RelativeTransform != nullptr)
			*RelativeTransform = params.RelativeTransform;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.OnUsed
	 * 		Flags  -> ()
	 */
	void UVRGripInterface::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.OnUsed");
		
		UVRGripInterface_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.OnSecondaryUsed
	 * 		Flags  -> ()
	 */
	void UVRGripInterface::OnSecondaryUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.OnSecondaryUsed");
		
		UVRGripInterface_OnSecondaryUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.OnSecondaryGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GripOwningController                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             ReleasingSecondaryGripComponent                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UVRGripInterface::OnSecondaryGripRelease(class UGripMotionControllerComponent* GripOwningController, class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.OnSecondaryGripRelease");
		
		UVRGripInterface_OnSecondaryGripRelease_Params params {};
		params.GripOwningController = GripOwningController;
		params.ReleasingSecondaryGripComponent = ReleasingSecondaryGripComponent;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.OnSecondaryGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GripOwningController                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             SecondaryGripComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UVRGripInterface::OnSecondaryGrip(class UGripMotionControllerComponent* GripOwningController, class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.OnSecondaryGrip");
		
		UVRGripInterface_OnSecondaryGrip_Params params {};
		params.GripOwningController = GripOwningController;
		params.SecondaryGripComponent = SecondaryGripComponent;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.OnInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EInputEvent                                        KeyEvent                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGripInterface::OnInput(const struct FKey& Key, EInputEvent KeyEvent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.OnInput");
		
		UVRGripInterface_OnInput_Params params {};
		params.Key = Key;
		params.KeyEvent = KeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSocketed                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGripInterface::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.OnGripRelease");
		
		UVRGripInterface_OnGripRelease_Params params {};
		params.ReleasingController = ReleasingController;
		params.GripInformation = GripInformation;
		params.bWasSocketed = bWasSocketed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UVRGripInterface::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.OnGrip");
		
		UVRGripInterface_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.OnEndUsed
	 * 		Flags  -> ()
	 */
	void UVRGripInterface::OnEndUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.OnEndUsed");
		
		UVRGripInterface_OnEndUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.OnEndSecondaryUsed
	 * 		Flags  -> ()
	 */
	void UVRGripInterface::OnEndSecondaryUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.OnEndSecondaryUsed");
		
		UVRGripInterface_OnEndSecondaryUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.OnChildGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bWasSocketed                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGripInterface::OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.OnChildGripRelease");
		
		UVRGripInterface_OnChildGripRelease_Params params {};
		params.ReleasingController = ReleasingController;
		params.GripInformation = GripInformation;
		params.bWasSocketed = bWasSocketed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.OnChildGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UVRGripInterface::OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.OnChildGrip");
		
		UVRGripInterface_OnChildGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.IsHeld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FBPGripPair>                         HoldingControllers                                         (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsHeld                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGripInterface::IsHeld(TArray<struct FBPGripPair>* HoldingControllers, bool* bIsHeld)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.IsHeld");
		
		UVRGripInterface_IsHeld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HoldingControllers != nullptr)
			*HoldingControllers = params.HoldingControllers;
		if (bIsHeld != nullptr)
			*bIsHeld = params.bIsHeld;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.GripMovementReplicationType
	 * 		Flags  -> ()
	 */
	EGripMovementReplicationSettings UVRGripInterface::GripMovementReplicationType()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.GripMovementReplicationType");
		
		UVRGripInterface_GripMovementReplicationType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.GripLateUpdateSetting
	 * 		Flags  -> ()
	 */
	EGripLateUpdateSettings UVRGripInterface::GripLateUpdateSetting()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.GripLateUpdateSetting");
		
		UVRGripInterface_GripLateUpdateSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.GripBreakDistance
	 * 		Flags  -> ()
	 */
	float UVRGripInterface::GripBreakDistance()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.GripBreakDistance");
		
		UVRGripInterface_GripBreakDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.GetPrimaryGripType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSlot                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EGripCollisionType UVRGripInterface::GetPrimaryGripType(bool bIsSlot)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.GetPrimaryGripType");
		
		UVRGripInterface_GetPrimaryGripType_Params params {};
		params.bIsSlot = bIsSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.GetGripStiffnessAndDamping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              GripStiffnessOut                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GripDampingOut                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGripInterface::GetGripStiffnessAndDamping(float* GripStiffnessOut, float* GripDampingOut)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.GetGripStiffnessAndDamping");
		
		UVRGripInterface_GetGripStiffnessAndDamping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GripStiffnessOut != nullptr)
			*GripStiffnessOut = params.GripStiffnessOut;
		if (GripDampingOut != nullptr)
			*GripDampingOut = params.GripDampingOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.GetGripScripts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UVRGripScriptBase*>                   ArrayReference                                             (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UVRGripInterface::GetGripScripts(TArray<class UVRGripScriptBase*>* ArrayReference)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.GetGripScripts");
		
		UVRGripInterface_GetGripScripts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayReference != nullptr)
			*ArrayReference = params.ArrayReference;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.DenyGripping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GripInitiator                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVRGripInterface::DenyGripping(class UGripMotionControllerComponent* GripInitiator)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.DenyGripping");
		
		UVRGripInterface_DenyGripping_Params params {};
		params.GripInitiator = GripInitiator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.ClosestGripSlotInRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSecondarySlot                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHadSlotInRange                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  SlotWorldTransform                                         (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        SlotName                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGripMotionControllerComponent*              CallingController                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OverridePrefix                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGripInterface::ClosestGripSlotInRange(const struct FVector& WorldLocation, bool bSecondarySlot, bool* bHadSlotInRange, struct FTransform* SlotWorldTransform, class FName* SlotName, class UGripMotionControllerComponent* CallingController, const class FName& OverridePrefix)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.ClosestGripSlotInRange");
		
		UVRGripInterface_ClosestGripSlotInRange_Params params {};
		params.WorldLocation = WorldLocation;
		params.bSecondarySlot = bSecondarySlot;
		params.CallingController = CallingController;
		params.OverridePrefix = OverridePrefix;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHadSlotInRange != nullptr)
			*bHadSlotInRange = params.bHadSlotInRange;
		if (SlotWorldTransform != nullptr)
			*SlotWorldTransform = params.SlotWorldTransform;
		if (SlotName != nullptr)
			*SlotName = params.SlotName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.AllowsMultipleGrips
	 * 		Flags  -> ()
	 */
	bool UVRGripInterface::AllowsMultipleGrips()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.AllowsMultipleGrips");
		
		UVRGripInterface_AllowsMultipleGrips_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripInterface.AdvancedGripSettings
	 * 		Flags  -> ()
	 */
	struct FBPAdvGripSettings UVRGripInterface::AdvancedGripSettings()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripInterface.AdvancedGripSettings");
		
		UVRGripInterface_AdvancedGripSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRGripInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRGripInterface::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRGripInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRGripScriptBaseBP.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRGripScriptBaseBP::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRGripScriptBaseBP.ReceiveTick");
		
		UVRGripScriptBaseBP_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRGripScriptBaseBP.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRGripScriptBaseBP::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRGripScriptBaseBP");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_OnGripInit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             InteractibleComp                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FBPVRInteractibleBaseData                   BaseDataToInit                                             (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVRInteractibleFunctionLibrary::Interactible_OnGripInit(class USceneComponent* InteractibleComp, struct FBPActorGripInformation* GripInformation, struct FBPVRInteractibleBaseData* BaseDataToInit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_OnGripInit");
		
		UVRInteractibleFunctionLibrary_Interactible_OnGripInit_Params params {};
		params.InteractibleComp = InteractibleComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GripInformation != nullptr)
			*GripInformation = params.GripInformation;
		if (BaseDataToInit != nullptr)
			*BaseDataToInit = params.BaseDataToInit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetThresholdSnappedValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ValueToSnap                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SnapIncrement                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SnapThreshold                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVRInteractibleFunctionLibrary::Interactible_GetThresholdSnappedValue(float ValueToSnap, float SnapIncrement, float SnapThreshold)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetThresholdSnappedValue");
		
		UVRInteractibleFunctionLibrary_Interactible_GetThresholdSnappedValue_Params params {};
		params.ValueToSnap = ValueToSnap;
		params.SnapIncrement = SnapIncrement;
		params.SnapThreshold = SnapThreshold;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetCurrentRelativeTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SceneComponentToCheck                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPVRInteractibleBaseData                   BaseData                                                   (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FTransform UVRInteractibleFunctionLibrary::Interactible_GetCurrentRelativeTransform(class USceneComponent* SceneComponentToCheck, struct FBPVRInteractibleBaseData* BaseData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetCurrentRelativeTransform");
		
		UVRInteractibleFunctionLibrary_Interactible_GetCurrentRelativeTransform_Params params {};
		params.SceneComponentToCheck = SceneComponentToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BaseData != nullptr)
			*BaseData = params.BaseData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetCurrentParentTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SceneComponentToCheck                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FTransform UVRInteractibleFunctionLibrary::Interactible_GetCurrentParentTransform(class USceneComponent* SceneComponentToCheck)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetCurrentParentTransform");
		
		UVRInteractibleFunctionLibrary_Interactible_GetCurrentParentTransform_Params params {};
		params.SceneComponentToCheck = SceneComponentToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetAngleAroundAxisDelta
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVRInteractibleAxis                                AxisToCalc                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     CurInteractorLocation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InitialAngle                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVRInteractibleFunctionLibrary::Interactible_GetAngleAroundAxisDelta(EVRInteractibleAxis AxisToCalc, const struct FVector& CurInteractorLocation, float InitialAngle)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetAngleAroundAxisDelta");
		
		UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxisDelta_Params params {};
		params.AxisToCalc = AxisToCalc;
		params.CurInteractorLocation = CurInteractorLocation;
		params.InitialAngle = InitialAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetAngleAroundAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVRInteractibleAxis                                AxisToCalc                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     CurInteractorLocation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVRInteractibleFunctionLibrary::Interactible_GetAngleAroundAxis(EVRInteractibleAxis AxisToCalc, const struct FVector& CurInteractorLocation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_GetAngleAroundAxis");
		
		UVRInteractibleFunctionLibrary_Interactible_GetAngleAroundAxis_Params params {};
		params.AxisToCalc = AxisToCalc;
		params.CurInteractorLocation = CurInteractorLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_BeginPlayInit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             InteractibleComp                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBPVRInteractibleBaseData                   BaseDataToInit                                             (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVRInteractibleFunctionLibrary::Interactible_BeginPlayInit(class USceneComponent* InteractibleComp, struct FBPVRInteractibleBaseData* BaseDataToInit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRInteractibleFunctionLibrary.Interactible_BeginPlayInit");
		
		UVRInteractibleFunctionLibrary_Interactible_BeginPlayInit_Params params {};
		params.InteractibleComp = InteractibleComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BaseDataToInit != nullptr)
			*BaseDataToInit = params.BaseDataToInit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRInteractibleFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRInteractibleFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRInteractibleFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRLeverComponent.SetLeverAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewAngle                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     DualAxisForwardVector                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowThrowingEvents                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRLeverComponent::SetLeverAngle(float NewAngle, const struct FVector& DualAxisForwardVector, bool bAllowThrowingEvents)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.SetLeverAngle");
		
		UVRLeverComponent_SetLeverAngle_Params params {};
		params.NewAngle = NewAngle;
		params.DualAxisForwardVector = DualAxisForwardVector;
		params.bAllowThrowingEvents = bAllowThrowingEvents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRLeverComponent.SetIsLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewLockedState                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRLeverComponent::SetIsLocked(bool bNewLockedState)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.SetIsLocked");
		
		UVRLeverComponent_SetIsLocked_Params params {};
		params.bNewLockedState = bNewLockedState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRLeverComponent.SetGripPriority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewGripPriority                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRLeverComponent::SetGripPriority(int32_t NewGripPriority)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.SetGripPriority");
		
		UVRLeverComponent_SetGripPriority_Params params {};
		params.NewGripPriority = NewGripPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRLeverComponent.ResetInitialLeverLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAllowThrowingEvents                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRLeverComponent::ResetInitialLeverLocation(bool bAllowThrowingEvents)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.ResetInitialLeverLocation");
		
		UVRLeverComponent_ResetInitialLeverLocation_Params params {};
		params.bAllowThrowingEvents = bAllowThrowingEvents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRLeverComponent.ReceiveLeverStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LeverStatus                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EVRInteractibleLeverEventType                      LeverStatusType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LeverAngleAtTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FullLeverAngleAtTime                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRLeverComponent::ReceiveLeverStateChanged(bool LeverStatus, EVRInteractibleLeverEventType LeverStatusType, float LeverAngleAtTime, float FullLeverAngleAtTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.ReceiveLeverStateChanged");
		
		UVRLeverComponent_ReceiveLeverStateChanged_Params params {};
		params.LeverStatus = LeverStatus;
		params.LeverStatusType = LeverStatusType;
		params.LeverAngleAtTime = LeverAngleAtTime;
		params.FullLeverAngleAtTime = FullLeverAngleAtTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRLeverComponent.ReceiveLeverFinishedLerping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              LeverFinalAngle                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRLeverComponent::ReceiveLeverFinishedLerping(float LeverFinalAngle)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.ReceiveLeverFinishedLerping");
		
		UVRLeverComponent_ReceiveLeverFinishedLerping_Params params {};
		params.LeverFinalAngle = LeverFinalAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRLeverComponent.ReCalculateCurrentAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAllowThrowingEvents                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVRLeverComponent::ReCalculateCurrentAngle(bool bAllowThrowingEvents)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.ReCalculateCurrentAngle");
		
		UVRLeverComponent_ReCalculateCurrentAngle_Params params {};
		params.bAllowThrowingEvents = bAllowThrowingEvents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRLeverComponent.OnRep_InitialRelativeTransform
	 * 		Flags  -> ()
	 */
	void UVRLeverComponent::OnRep_InitialRelativeTransform()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLeverComponent.OnRep_InitialRelativeTransform");
		
		UVRLeverComponent_OnRep_InitialRelativeTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRLeverComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRLeverComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRLeverComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRLogComponent.SetConsoleText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRLogComponent::SetConsoleText(const class FString& Text)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLogComponent.SetConsoleText");
		
		UVRLogComponent_SetConsoleText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRLogComponent.SendKeyEventToConsole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EInputEvent                                        KeyEvent                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRLogComponent::SendKeyEventToConsole(const struct FKey& Key, EInputEvent KeyEvent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLogComponent.SendKeyEventToConsole");
		
		UVRLogComponent_SendKeyEventToConsole_Params params {};
		params.Key = Key;
		params.KeyEvent = KeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRLogComponent.DrawConsoleToRenderTarget2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBPVRConsoleDrawType                               DrawType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTextureRenderTarget2D*                      Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ScrollOffset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceDraw                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVRLogComponent::DrawConsoleToRenderTarget2D(EBPVRConsoleDrawType DrawType, class UTextureRenderTarget2D* Texture, float ScrollOffset, bool bForceDraw)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLogComponent.DrawConsoleToRenderTarget2D");
		
		UVRLogComponent_DrawConsoleToRenderTarget2D_Params params {};
		params.DrawType = DrawType;
		params.Texture = Texture;
		params.ScrollOffset = ScrollOffset;
		params.bForceDraw = bForceDraw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRLogComponent.AppendTextToConsole
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReturnAtEnd                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRLogComponent::AppendTextToConsole(const class FString& Text, bool bReturnAtEnd)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRLogComponent.AppendTextToConsole");
		
		UVRLogComponent_AppendTextToConsole_Params params {};
		params.Text = Text;
		params.bReturnAtEnd = bReturnAtEnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRLogComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRLogComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRLogComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRMountComponent.SetGripPriority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewGripPriority                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRMountComponent::SetGripPriority(int32_t NewGripPriority)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.SetGripPriority");
		
		UVRMountComponent_SetGripPriority_Params params {};
		params.NewGripPriority = NewGripPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRMountComponent.ResetInitialMountLocation
	 * 		Flags  -> ()
	 */
	void UVRMountComponent::ResetInitialMountLocation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRMountComponent.ResetInitialMountLocation");
		
		UVRMountComponent_ResetInitialMountLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRMountComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRMountComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRMountComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRPathFollowingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRPathFollowingComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRPathFollowingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVRPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVRPlayerController::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRPlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVRPlayerStart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVRPlayerStart::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRPlayerStart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.RenderTargetReplicationProxy.SendNextDataBlob
	 * 		Flags  -> ()
	 */
	void ARenderTargetReplicationProxy::SendNextDataBlob()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.RenderTargetReplicationProxy.SendNextDataBlob");
		
		ARenderTargetReplicationProxy_SendNextDataBlob_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.RenderTargetReplicationProxy.SendLocalDrawOperations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FRenderManagerOperation>             LocalRenderOperationStoreList                              (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ARenderTargetReplicationProxy::SendLocalDrawOperations(TArray<struct FRenderManagerOperation> LocalRenderOperationStoreList)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.RenderTargetReplicationProxy.SendLocalDrawOperations");
		
		ARenderTargetReplicationProxy_SendLocalDrawOperations_Params params {};
		params.LocalRenderOperationStoreList = LocalRenderOperationStoreList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.RenderTargetReplicationProxy.ReceiveTextureBlob
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              TextureBlob                                                (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            LocationInData                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BlobCount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARenderTargetReplicationProxy::ReceiveTextureBlob(TArray<unsigned char> TextureBlob, int32_t LocationInData, int32_t BlobCount)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.RenderTargetReplicationProxy.ReceiveTextureBlob");
		
		ARenderTargetReplicationProxy_ReceiveTextureBlob_Params params {};
		params.TextureBlob = TextureBlob;
		params.LocationInData = LocationInData;
		params.BlobCount = BlobCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.RenderTargetReplicationProxy.ReceiveTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPVRReplicatedTextureStore                 TextureData                                                (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ARenderTargetReplicationProxy::ReceiveTexture(const struct FBPVRReplicatedTextureStore& TextureData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.RenderTargetReplicationProxy.ReceiveTexture");
		
		ARenderTargetReplicationProxy_ReceiveTexture_Params params {};
		params.TextureData = TextureData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.RenderTargetReplicationProxy.OnRep_Manager
	 * 		Flags  -> ()
	 */
	void ARenderTargetReplicationProxy::OnRep_Manager()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.RenderTargetReplicationProxy.OnRep_Manager");
		
		ARenderTargetReplicationProxy_OnRep_Manager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.RenderTargetReplicationProxy.InitTextureSend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TotalDataCount                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BlobCount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EPixelFormat                                       PixelFormat                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsZipped                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARenderTargetReplicationProxy::InitTextureSend(int32_t Width, int32_t Height, int32_t TotalDataCount, int32_t BlobCount, EPixelFormat PixelFormat, bool bIsZipped)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.RenderTargetReplicationProxy.InitTextureSend");
		
		ARenderTargetReplicationProxy_InitTextureSend_Params params {};
		params.Width = Width;
		params.Height = Height;
		params.TotalDataCount = TotalDataCount;
		params.BlobCount = BlobCount;
		params.PixelFormat = PixelFormat;
		params.bIsZipped = bIsZipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.RenderTargetReplicationProxy.Ack_ReceiveTextureBlob
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BlobCount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARenderTargetReplicationProxy::Ack_ReceiveTextureBlob(int32_t BlobCount)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.RenderTargetReplicationProxy.Ack_ReceiveTextureBlob");
		
		ARenderTargetReplicationProxy_Ack_ReceiveTextureBlob_Params params {};
		params.BlobCount = BlobCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.RenderTargetReplicationProxy.Ack_InitTextureSend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TotalDataCount                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARenderTargetReplicationProxy::Ack_InitTextureSend(int32_t TotalDataCount)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.RenderTargetReplicationProxy.Ack_InitTextureSend");
		
		ARenderTargetReplicationProxy_Ack_InitTextureSend_Params params {};
		params.TotalDataCount = TotalDataCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARenderTargetReplicationProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARenderTargetReplicationProxy::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.RenderTargetReplicationProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRRenderTargetManager.SendDrawOperations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FRenderManagerOperation>             RenderOperationStoreList                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVRRenderTargetManager::SendDrawOperations(TArray<struct FRenderManagerOperation> RenderOperationStoreList)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRRenderTargetManager.SendDrawOperations");
		
		UVRRenderTargetManager_SendDrawOperations_Params params {};
		params.RenderOperationStoreList = RenderOperationStoreList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRRenderTargetManager.GenerateTrisFromBoxPlaneIntersection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         PrimToBoxCheck                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  WorldTransformOfPlane                                      (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FPlane                                      LocalProjectionPlane                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   PlaneSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      UVColor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FCanvasUVTri>                        OutTris                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UVRRenderTargetManager::GenerateTrisFromBoxPlaneIntersection(class UPrimitiveComponent* PrimToBoxCheck, const struct FTransform& WorldTransformOfPlane, const struct FPlane& LocalProjectionPlane, const struct FVector2D& PlaneSize, const struct FColor& UVColor, TArray<struct FCanvasUVTri>* OutTris)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRRenderTargetManager.GenerateTrisFromBoxPlaneIntersection");
		
		UVRRenderTargetManager_GenerateTrisFromBoxPlaneIntersection_Params params {};
		params.PrimToBoxCheck = PrimToBoxCheck;
		params.WorldTransformOfPlane = WorldTransformOfPlane;
		params.LocalProjectionPlane = LocalProjectionPlane;
		params.PlaneSize = PlaneSize;
		params.UVColor = UVColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTris != nullptr)
			*OutTris = params.OutTris;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRRenderTargetManager.DrawPoll
	 * 		Flags  -> ()
	 */
	void UVRRenderTargetManager::DrawPoll()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRRenderTargetManager.DrawPoll");
		
		UVRRenderTargetManager_DrawPoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRRenderTargetManager.AddTextureDrawOperation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  TextureToDisplay                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRRenderTargetManager::AddTextureDrawOperation(const struct FVector2D& Position, class UTexture2D* TextureToDisplay)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRRenderTargetManager.AddTextureDrawOperation");
		
		UVRRenderTargetManager_AddTextureDrawOperation_Params params {};
		params.Position = Position;
		params.TextureToDisplay = TextureToDisplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRRenderTargetManager.AddMaterialTrianglesDrawOperation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FCanvasUVTri>                        Tris                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class UMaterial*                                   Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRRenderTargetManager::AddMaterialTrianglesDrawOperation(TArray<struct FCanvasUVTri> Tris, class UMaterial* Material)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRRenderTargetManager.AddMaterialTrianglesDrawOperation");
		
		UVRRenderTargetManager_AddMaterialTrianglesDrawOperation_Params params {};
		params.Tris = Tris;
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRRenderTargetManager.AddLineDrawOperation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Point1                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   Point2                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRRenderTargetManager::AddLineDrawOperation(const struct FVector2D& Point1, const struct FVector2D& Point2, const struct FColor& Color, int32_t Thickness)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRRenderTargetManager.AddLineDrawOperation");
		
		UVRRenderTargetManager_AddLineDrawOperation_Params params {};
		params.Point1 = Point1;
		params.Point2 = Point2;
		params.Color = Color;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRRenderTargetManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRRenderTargetManager::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRRenderTargetManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRRootComponent.SetTrackingPaused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPaused                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRRootComponent::SetTrackingPaused(bool bPaused)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRRootComponent.SetTrackingPaused");
		
		UVRRootComponent_SetTrackingPaused_Params params {};
		params.bPaused = bPaused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRRootComponent.SetCapsuleSizeVR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewRadius                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewHalfHeight                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateOverlaps                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRRootComponent::SetCapsuleSizeVR(float NewRadius, float NewHalfHeight, bool bUpdateOverlaps)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRRootComponent.SetCapsuleSizeVR");
		
		UVRRootComponent_SetCapsuleSizeVR_Params params {};
		params.NewRadius = NewRadius;
		params.NewHalfHeight = NewHalfHeight;
		params.bUpdateOverlaps = bUpdateOverlaps;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRRootComponent.SetCapsuleHalfHeightVR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HalfHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateOverlaps                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRRootComponent::SetCapsuleHalfHeightVR(float HalfHeight, bool bUpdateOverlaps)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRRootComponent.SetCapsuleHalfHeightVR");
		
		UVRRootComponent_SetCapsuleHalfHeightVR_Params params {};
		params.HalfHeight = HalfHeight;
		params.bUpdateOverlaps = bUpdateOverlaps;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRRootComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRRootComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRRootComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVRSimpleCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVRSimpleCharacter::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRSimpleCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRSimpleCharacterMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRSimpleCharacterMovementComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRSimpleCharacterMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRSliderComponent.SetSplineComponentToFollow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USplineComponent*                            SplineToFollow                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRSliderComponent::SetSplineComponentToFollow(class USplineComponent* SplineToFollow)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.SetSplineComponentToFollow");
		
		UVRSliderComponent_SetSplineComponentToFollow_Params params {};
		params.SplineToFollow = SplineToFollow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRSliderComponent.SetSliderProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewSliderProgress                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRSliderComponent::SetSliderProgress(float NewSliderProgress)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.SetSliderProgress");
		
		UVRSliderComponent_SetSliderProgress_Params params {};
		params.NewSliderProgress = NewSliderProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRSliderComponent.SetIsLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewLockedState                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRSliderComponent::SetIsLocked(bool bNewLockedState)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.SetIsLocked");
		
		UVRSliderComponent_SetIsLocked_Params params {};
		params.bNewLockedState = bNewLockedState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRSliderComponent.SetGripPriority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewGripPriority                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRSliderComponent::SetGripPriority(int32_t NewGripPriority)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.SetGripPriority");
		
		UVRSliderComponent_SetGripPriority_Params params {};
		params.NewGripPriority = NewGripPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRSliderComponent.ResetInitialSliderLocation
	 * 		Flags  -> ()
	 */
	void UVRSliderComponent::ResetInitialSliderLocation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.ResetInitialSliderLocation");
		
		UVRSliderComponent_ResetInitialSliderLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRSliderComponent.ReceiveSliderHitPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SliderProgressPoint                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRSliderComponent::ReceiveSliderHitPoint(float SliderProgressPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.ReceiveSliderHitPoint");
		
		UVRSliderComponent_ReceiveSliderHitPoint_Params params {};
		params.SliderProgressPoint = SliderProgressPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRSliderComponent.ReceiveSliderFinishedLerping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FinalProgress                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRSliderComponent::ReceiveSliderFinishedLerping(float FinalProgress)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.ReceiveSliderFinishedLerping");
		
		UVRSliderComponent_ReceiveSliderFinishedLerping_Params params {};
		params.FinalProgress = FinalProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRSliderComponent.OnRep_InitialRelativeTransform
	 * 		Flags  -> ()
	 */
	void UVRSliderComponent::OnRep_InitialRelativeTransform()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.OnRep_InitialRelativeTransform");
		
		UVRSliderComponent_OnRep_InitialRelativeTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRSliderComponent.CalculateSliderProgress
	 * 		Flags  -> ()
	 */
	float UVRSliderComponent::CalculateSliderProgress()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRSliderComponent.CalculateSliderProgress");
		
		UVRSliderComponent_CalculateSliderProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRSliderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRSliderComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRSliderComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRStereoWidgetRenderComponent.SetWidgetAndInit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      NewWidgetClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRStereoWidgetRenderComponent::SetWidgetAndInit(class UClass* NewWidgetClass)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRStereoWidgetRenderComponent.SetWidgetAndInit");
		
		UVRStereoWidgetRenderComponent_SetWidgetAndInit_Params params {};
		params.NewWidgetClass = NewWidgetClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRStereoWidgetRenderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRStereoWidgetRenderComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRStereoWidgetRenderComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRStereoWidgetComponent.SetPriority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InPriority                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRStereoWidgetComponent::SetPriority(int32_t InPriority)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRStereoWidgetComponent.SetPriority");
		
		UVRStereoWidgetComponent_SetPriority_Params params {};
		params.InPriority = InPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRStereoWidgetComponent.GetPriority
	 * 		Flags  -> ()
	 */
	int32_t UVRStereoWidgetComponent::GetPriority()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRStereoWidgetComponent.GetPriority");
		
		UVRStereoWidgetComponent_GetPriority_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRStereoWidgetComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRStereoWidgetComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRStereoWidgetComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRTrackedParentInterface.SetTrackedParent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         NewParentComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WaistRadius                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPVRWaistTrackingMode                             WaistTrackingMode                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVRTrackedParentInterface::SetTrackedParent(class UPrimitiveComponent* NewParentComponent, float WaistRadius, EBPVRWaistTrackingMode WaistTrackingMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRTrackedParentInterface.SetTrackedParent");
		
		UVRTrackedParentInterface_SetTrackedParent_Params params {};
		params.NewParentComponent = NewParentComponent;
		params.WaistRadius = WaistRadius;
		params.WaistTrackingMode = WaistTrackingMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVRTrackedParentInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVRTrackedParentInterface::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRTrackedParentInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRVehiclePawn.SetBindToInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 CController                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBindToInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AVRVehiclePawn::SetBindToInput(class AController* CController, bool bBindToInput)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRVehiclePawn.SetBindToInput");
		
		AVRVehiclePawn_SetBindToInput_Params params {};
		params.CController = CController;
		params.bBindToInput = bBindToInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRVehiclePawn.ForceSecondaryPossession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AVRVehiclePawn::ForceSecondaryPossession(class AController* NewController)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRVehiclePawn.ForceSecondaryPossession");
		
		AVRVehiclePawn_ForceSecondaryPossession_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVRVehiclePawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVRVehiclePawn::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRVehiclePawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRWheeledVehicle.SetOverrideController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AVRWheeledVehicle::SetOverrideController(class AController* NewController)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRWheeledVehicle.SetOverrideController");
		
		AVRWheeledVehicle_SetOverrideController_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRWheeledVehicle.SetBindToInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 CController                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBindToInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AVRWheeledVehicle::SetBindToInput(class AController* CController, bool bBindToInput)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRWheeledVehicle.SetBindToInput");
		
		AVRWheeledVehicle_SetBindToInput_Params params {};
		params.CController = CController;
		params.bBindToInput = bBindToInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function VRExpansionPlugin.VRWheeledVehicle.ForceSecondaryPossession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AVRWheeledVehicle::ForceSecondaryPossession(class AController* NewController)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function VRExpansionPlugin.VRWheeledVehicle.ForceSecondaryPossession");
		
		AVRWheeledVehicle_ForceSecondaryPossession_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVRWheeledVehicle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVRWheeledVehicle::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VRExpansionPlugin.VRWheeledVehicle");
		return ptr;
	}

}


