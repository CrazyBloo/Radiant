﻿/**
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
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.GetWeaponInfo
	 * 		Flags  -> ()
	 */
	struct FWeaponInfo ABP_Knife_3_C::GetWeaponInfo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.GetWeaponInfo");
		
		ABP_Knife_3_C_GetWeaponInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.GetCleaningBarrelLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Length                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Knife_3_C::GetCleaningBarrelLength(float* Length)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.GetCleaningBarrelLength");
		
		ABP_Knife_3_C_GetCleaningBarrelLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Length != nullptr)
			*Length = params.Length;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.GetShootingPointTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         Parent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Knife_3_C::GetShootingPointTransform(struct FTransform* Transform, class UPrimitiveComponent** Parent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.GetShootingPointTransform");
		
		ABP_Knife_3_C_GetShootingPointTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Transform != nullptr)
			*Transform = params.Transform;
		if (Parent != nullptr)
			*Parent = params.Parent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.Offset By Penetration Depth
	 * 		Flags  -> ()
	 */
	void ABP_Knife_3_C::Offset_By_Penetration_Depth()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.Offset By Penetration Depth");
		
		ABP_Knife_3_C_Offset_By_Penetration_Depth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.IsThrowLimitVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Knife_3_C::IsThrowLimitVelocity(bool* State, float* Velocity)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.IsThrowLimitVelocity");
		
		ABP_Knife_3_C_IsThrowLimitVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.GetDefaultPoseType
	 * 		Flags  -> ()
	 */
	EPRHandPoseType ABP_Knife_3_C::GetDefaultPoseType()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.GetDefaultPoseType");
		
		ABP_Knife_3_C_GetDefaultPoseType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.GetSocketSuffix
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Primary                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Suffix                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Knife_3_C::GetSocketSuffix(bool Primary, class FString* Suffix)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.GetSocketSuffix");
		
		ABP_Knife_3_C_GetSocketSuffix_Params params {};
		params.Primary = Primary;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Suffix != nullptr)
			*Suffix = params.Suffix;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.ContaminationDamage
	 * 		Flags  -> ()
	 */
	void ABP_Knife_3_C::ContaminationDamage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.ContaminationDamage");
		
		ABP_Knife_3_C_ContaminationDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.BndEvt__MeleeDamageColider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Knife_3_C::BndEvt__MeleeDamageColider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.BndEvt__MeleeDamageColider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
		
		ABP_Knife_3_C_BndEvt__MeleeDamageColider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.BndEvt__ThrownMeleeDamageColider_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Knife_3_C::BndEvt__ThrownMeleeDamageColider_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.BndEvt__ThrownMeleeDamageColider_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
		
		ABP_Knife_3_C_BndEvt__ThrownMeleeDamageColider_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Knife_3_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.ReceiveTick");
		
		ABP_Knife_3_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABP_Knife_3_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.OnUsed");
		
		ABP_Knife_3_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.OnEndUsed
	 * 		Flags  -> ()
	 */
	void ABP_Knife_3_C::OnEndUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.OnEndUsed");
		
		ABP_Knife_3_C_OnEndUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.SetAdditionalSmoothing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Knife_3_C::SetAdditionalSmoothing(bool TurnOn, float Alpha)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.SetAdditionalSmoothing");
		
		ABP_Knife_3_C_SetAdditionalSmoothing_Params params {};
		params.TurnOn = TurnOn;
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Knife_3_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.OnGrip");
		
		ABP_Knife_3_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.CheckContamination
	 * 		Flags  -> ()
	 */
	void ABP_Knife_3_C::CheckContamination()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.CheckContamination");
		
		ABP_Knife_3_C_CheckContamination_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.StartContamination
	 * 		Flags  -> ()
	 */
	void ABP_Knife_3_C::StartContamination()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.StartContamination");
		
		ABP_Knife_3_C_StartContamination_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.MeshDestruction
	 * 		Flags  -> ()
	 */
	void ABP_Knife_3_C::MeshDestruction()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.MeshDestruction");
		
		ABP_Knife_3_C_MeshDestruction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.OnStart
	 * 		Flags  -> ()
	 */
	void ABP_Knife_3_C::OnStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.OnStart");
		
		ABP_Knife_3_C_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.VirtualStockToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Knife_3_C::VirtualStockToggle(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.VirtualStockToggle");
		
		ABP_Knife_3_C_VirtualStockToggle_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.AttachmentDetached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Knife_3_C::AttachmentDetached(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.AttachmentDetached");
		
		ABP_Knife_3_C_AttachmentDetached_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.AttachmentAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Knife_3_C::AttachmentAttached(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.AttachmentAttached");
		
		ABP_Knife_3_C_AttachmentAttached_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.UpdateTargetLoc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TargetLoc                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Knife_3_C::UpdateTargetLoc(const struct FVector& TargetLoc)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.UpdateTargetLoc");
		
		ABP_Knife_3_C_UpdateTargetLoc_Params params {};
		params.TargetLoc = TargetLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.PlayerWeaponFired
	 * 		Flags  -> ()
	 */
	void ABP_Knife_3_C::PlayerWeaponFired()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.PlayerWeaponFired");
		
		ABP_Knife_3_C_PlayerWeaponFired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.ThrowItem
	 * 		Flags  -> ()
	 */
	void ABP_Knife_3_C::ThrowItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.ThrowItem");
		
		ABP_Knife_3_C_ThrowItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.ThumbLeft
	 * 		Flags  -> ()
	 */
	void ABP_Knife_3_C::ThumbLeft()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.ThumbLeft");
		
		ABP_Knife_3_C_ThumbLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.ReloadFinished
	 * 		Flags  -> ()
	 */
	void ABP_Knife_3_C::ReloadFinished()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.ReloadFinished");
		
		ABP_Knife_3_C_ReloadFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Knife_3_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.OnGripRelease");
		
		ABP_Knife_3_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.DisableTick
	 * 		Flags  -> ()
	 */
	void ABP_Knife_3_C::DisableTick()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.DisableTick");
		
		ABP_Knife_3_C_DisableTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.OutOfAmmo
	 * 		Flags  -> ()
	 */
	void ABP_Knife_3_C::OutOfAmmo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.OutOfAmmo");
		
		ABP_Knife_3_C_OutOfAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.StopFire
	 * 		Flags  -> ()
	 */
	void ABP_Knife_3_C::StopFire()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.StopFire");
		
		ABP_Knife_3_C_StopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.FireGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Diviation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BurstFire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TargetLoc                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FireRateMult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BurstModeCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Knife_3_C::FireGun(class AActor* Target, float Diviation, bool BurstFire, const struct FVector& TargetLoc, float FireRateMult, int32_t BurstModeCount)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.FireGun");
		
		ABP_Knife_3_C_FireGun_Params params {};
		params.Target = Target;
		params.Diviation = Diviation;
		params.BurstFire = BurstFire;
		params.TargetLoc = TargetLoc;
		params.FireRateMult = FireRateMult;
		params.BurstModeCount = BurstModeCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.EnableGravity
	 * 		Flags  -> ()
	 */
	void ABP_Knife_3_C::EnableGravity()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.EnableGravity");
		
		ABP_Knife_3_C_EnableGravity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.DoThrowItem
	 * 		Flags  -> ()
	 */
	void ABP_Knife_3_C::DoThrowItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.DoThrowItem");
		
		ABP_Knife_3_C_DoThrowItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Knife_4.BP_Knife_3_C.ExecuteUbergraph_BP_Knife_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Knife_3_C::ExecuteUbergraph_BP_Knife_4(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Knife_4.BP_Knife_3_C.ExecuteUbergraph_BP_Knife_4");
		
		ABP_Knife_3_C_ExecuteUbergraph_BP_Knife_4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Knife_3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Knife_3_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Knife_4.BP_Knife_3_C");
		return ptr;
	}

}


