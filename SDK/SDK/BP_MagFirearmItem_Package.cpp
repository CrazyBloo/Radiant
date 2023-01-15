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
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.GetReliability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Reliability                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagFirearmItem_C::GetReliability(float* Reliability)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.GetReliability");
		
		ABP_MagFirearmItem_C_GetReliability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Reliability != nullptr)
			*Reliability = params.Reliability;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.GetShootingPointTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         Parent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagFirearmItem_C::GetShootingPointTransform(struct FTransform* Transform, class UPrimitiveComponent** Parent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.GetShootingPointTransform");
		
		ABP_MagFirearmItem_C_GetShootingPointTransform_Params params {};
		
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
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.GetPoseShift
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRHandPoseType                                    poseType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FTransform ABP_MagFirearmItem_C::GetPoseShift(EPRHandPoseType poseType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.GetPoseShift");
		
		ABP_MagFirearmItem_C_GetPoseShift_Params params {};
		params.poseType = poseType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.Reconfigure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MagFirearmItem_C::Reconfigure(class UInventoryItem* InventoryItem, bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.Reconfigure");
		
		ABP_MagFirearmItem_C_Reconfigure_Params params {};
		params.InventoryItem = InventoryItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.GetChamberedAmmoTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                chamberedAmmoTag                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagFirearmItem_C::GetChamberedAmmoTag(struct FGameplayTag* chamberedAmmoTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.GetChamberedAmmoTag");
		
		ABP_MagFirearmItem_C_GetChamberedAmmoTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (chamberedAmmoTag != nullptr)
			*chamberedAmmoTag = params.chamberedAmmoTag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.GetAttachmentsList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Attachments                                                (Parm, OutParm)
	 */
	void ABP_MagFirearmItem_C::GetAttachmentsList(TArray<class FString>* Attachments)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.GetAttachmentsList");
		
		ABP_MagFirearmItem_C_GetAttachmentsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attachments != nullptr)
			*Attachments = params.Attachments;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.isRoundChambered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MagFirearmItem_C::isRoundChambered(bool* Return)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.isRoundChambered");
		
		ABP_MagFirearmItem_C_isRoundChambered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.UpdateChamberedRoundMesh
	 * 		Flags  -> ()
	 */
	void ABP_MagFirearmItem_C::UpdateChamberedRoundMesh()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.UpdateChamberedRoundMesh");
		
		ABP_MagFirearmItem_C_UpdateChamberedRoundMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.UpdateBulletsInMag
	 * 		Flags  -> ()
	 */
	void ABP_MagFirearmItem_C::UpdateBulletsInMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.UpdateBulletsInMag");
		
		ABP_MagFirearmItem_C_UpdateBulletsInMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.SpawnMagInWeapon
	 * 		Flags  -> ()
	 */
	void ABP_MagFirearmItem_C::SpawnMagInWeapon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.SpawnMagInWeapon");
		
		ABP_MagFirearmItem_C_SpawnMagInWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.OnChildGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_MagFirearmItem_C::OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.OnChildGrip");
		
		ABP_MagFirearmItem_C_OnChildGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.OnChildGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MagFirearmItem_C::OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.OnChildGripRelease");
		
		ABP_MagFirearmItem_C_OnChildGripRelease_Params params {};
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
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.LoadCycle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               jammed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MagFirearmItem_C::LoadCycle(bool jammed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.LoadCycle");
		
		ABP_MagFirearmItem_C_LoadCycle_Params params {};
		params.jammed = jammed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.Event_BoltMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Forward                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               goingToJam                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BoltOnly                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               MakeFX                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FullCycle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              FXAlpha                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagFirearmItem_C::Event_BoltMove(bool Forward, bool goingToJam, float Speed, bool BoltOnly, bool MakeFX, bool FullCycle, float FXAlpha)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.Event_BoltMove");
		
		ABP_MagFirearmItem_C_Event_BoltMove_Params params {};
		params.Forward = Forward;
		params.goingToJam = goingToJam;
		params.Speed = Speed;
		params.BoltOnly = BoltOnly;
		params.MakeFX = MakeFX;
		params.FullCycle = FullCycle;
		params.FXAlpha = FXAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABP_MagFirearmItem_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.OnUsed");
		
		ABP_MagFirearmItem_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.FireBullet
	 * 		Flags  -> ()
	 */
	void ABP_MagFirearmItem_C::FireBullet()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.FireBullet");
		
		ABP_MagFirearmItem_C_FireBullet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagFirearmItem_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.ReceiveTick");
		
		ABP_MagFirearmItem_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.Jamed_RoundSpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Chamber                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MagFirearmItem_C::Jamed_RoundSpawn(bool Chamber)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.Jamed_RoundSpawn");
		
		ABP_MagFirearmItem_C_Jamed_RoundSpawn_Params params {};
		params.Chamber = Chamber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.Unjam
	 * 		Flags  -> ()
	 */
	void ABP_MagFirearmItem_C::Unjam()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.Unjam");
		
		ABP_MagFirearmItem_C_Unjam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_MagFirearmItem_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.OnReconfigure");
		
		ABP_MagFirearmItem_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.Grip Unlock
	 * 		Flags  -> ()
	 */
	void ABP_MagFirearmItem_C::Grip_Unlock()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.Grip Unlock");
		
		ABP_MagFirearmItem_C_Grip_Unlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.Grip Lock
	 * 		Flags  -> ()
	 */
	void ABP_MagFirearmItem_C::Grip_Lock()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.Grip Lock");
		
		ABP_MagFirearmItem_C_Grip_Lock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.SafetyVisual
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponFireMode                                    FireMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagFirearmItem_C::SafetyVisual(EWeaponFireMode FireMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.SafetyVisual");
		
		ABP_MagFirearmItem_C_SafetyVisual_Params params {};
		params.FireMode = FireMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.OnFiremodeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponFireMode                                    FireMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PlaySound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MagFirearmItem_C::OnFiremodeChanged(EWeaponFireMode FireMode, bool PlaySound)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.OnFiremodeChanged");
		
		ABP_MagFirearmItem_C_OnFiremodeChanged_Params params {};
		params.FireMode = FireMode;
		params.PlaySound = PlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.PlayFireSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              PitchMult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagFirearmItem_C::PlayFireSound(float PitchMult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.PlayFireSound");
		
		ABP_MagFirearmItem_C_PlayFireSound_Params params {};
		params.PitchMult = PitchMult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.StopFireSound
	 * 		Flags  -> ()
	 */
	void ABP_MagFirearmItem_C::StopFireSound()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.StopFireSound");
		
		ABP_MagFirearmItem_C_StopFireSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.EndFireGun
	 * 		Flags  -> ()
	 */
	void ABP_MagFirearmItem_C::EndFireGun()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.EndFireGun");
		
		ABP_MagFirearmItem_C_EndFireGun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.FireFX
	 * 		Flags  -> ()
	 */
	void ABP_MagFirearmItem_C::FireFX()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.FireFX");
		
		ABP_MagFirearmItem_C_FireFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.ThumbLeft
	 * 		Flags  -> ()
	 */
	void ABP_MagFirearmItem_C::ThumbLeft()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.ThumbLeft");
		
		ABP_MagFirearmItem_C_ThumbLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.Request Recoil
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Recoil                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagFirearmItem_C::Request_Recoil(const struct FVector& Recoil)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.Request Recoil");
		
		ABP_MagFirearmItem_C_Request_Recoil_Params params {};
		params.Recoil = Recoil;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.EjectMag
	 * 		Flags  -> ()
	 */
	void ABP_MagFirearmItem_C::EjectMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.EjectMag");
		
		ABP_MagFirearmItem_C_EjectMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.DropEjectedMag
	 * 		Flags  -> ()
	 */
	void ABP_MagFirearmItem_C::DropEjectedMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.DropEjectedMag");
		
		ABP_MagFirearmItem_C_DropEjectedMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MagFirearmItem_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.OnGripRelease");
		
		ABP_MagFirearmItem_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.AttachmentDetached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagFirearmItem_C::AttachmentDetached(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.AttachmentDetached");
		
		ABP_MagFirearmItem_C_AttachmentDetached_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.ExtractRound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isRoundChambered                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isBulletFired                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              AmmoImpulse                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ShellImpulse                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                AmmoTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagFirearmItem_C::ExtractRound(bool isRoundChambered, bool isBulletFired, const struct FTransform& Transform, float AmmoImpulse, float ShellImpulse, const struct FGameplayTag& AmmoTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.ExtractRound");
		
		ABP_MagFirearmItem_C_ExtractRound_Params params {};
		params.isRoundChambered = isRoundChambered;
		params.isBulletFired = isBulletFired;
		params.Transform = Transform;
		params.AmmoImpulse = AmmoImpulse;
		params.ShellImpulse = ShellImpulse;
		params.AmmoTag = AmmoTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.FireBullet_Unconditional
	 * 		Flags  -> ()
	 */
	void ABP_MagFirearmItem_C::FireBullet_Unconditional()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.FireBullet_Unconditional");
		
		ABP_MagFirearmItem_C_FireBullet_Unconditional_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MagFirearmItem_C::Hide(bool Show)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.Hide");
		
		ABP_MagFirearmItem_C_Hide_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.UpdateFireMode
	 * 		Flags  -> ()
	 */
	void ABP_MagFirearmItem_C::UpdateFireMode()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.UpdateFireMode");
		
		ABP_MagFirearmItem_C_UpdateFireMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.SKBoltAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Finish                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Forward                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_MagFirearmItem_C::SKBoltAnimation(bool Finish, bool Forward)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.SKBoltAnimation");
		
		ABP_MagFirearmItem_C_SKBoltAnimation_Params params {};
		params.Finish = Finish;
		params.Forward = Forward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.BoltAnim
	 * 		Flags  -> ()
	 */
	void ABP_MagFirearmItem_C::BoltAnim()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.BoltAnim");
		
		ABP_MagFirearmItem_C_BoltAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MagFirearmItem.BP_MagFirearmItem_C.ExecuteUbergraph_BP_MagFirearmItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MagFirearmItem_C::ExecuteUbergraph_BP_MagFirearmItem(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MagFirearmItem.BP_MagFirearmItem_C.ExecuteUbergraph_BP_MagFirearmItem");
		
		ABP_MagFirearmItem_C_ExecuteUbergraph_BP_MagFirearmItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MagFirearmItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MagFirearmItem_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MagFirearmItem.BP_MagFirearmItem_C");
		return ptr;
	}

}


