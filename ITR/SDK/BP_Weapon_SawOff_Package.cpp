/**
 * Name: Into_The_Radius_VR
 * Version: 2.5.1
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
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.GetShootingPointTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         Parent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_SawOff_C::GetShootingPointTransform(struct FTransform* Transform, class UPrimitiveComponent** Parent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.GetShootingPointTransform");
		
		ABP_Weapon_SawOff_C_GetShootingPointTransform_Params params {};
		
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
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.HasRound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Weapon_SawOff_C::HasRound(bool* Return)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.HasRound");
		
		ABP_Weapon_SawOff_C_HasRound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.GetChamberedAmmoTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                chamberedAmmoTag                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_SawOff_C::GetChamberedAmmoTag(struct FGameplayTag* chamberedAmmoTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.GetChamberedAmmoTag");
		
		ABP_Weapon_SawOff_C_GetChamberedAmmoTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (chamberedAmmoTag != nullptr)
			*chamberedAmmoTag = params.chamberedAmmoTag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.GetChamberedAmmoInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAmmoInfo                                   AmmoInfo                                                   (Parm, OutParm)
	 */
	void ABP_Weapon_SawOff_C::GetChamberedAmmoInfo(struct FAmmoInfo* AmmoInfo)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.GetChamberedAmmoInfo");
		
		ABP_Weapon_SawOff_C_GetChamberedAmmoInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoInfo != nullptr)
			*AmmoInfo = params.AmmoInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.GetAmmoContainerData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAmmoContainerData                          Data                                                       (Parm, OutParm)
	 */
	void ABP_Weapon_SawOff_C::GetAmmoContainerData(struct FAmmoContainerData* Data)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.GetAmmoContainerData");
		
		ABP_Weapon_SawOff_C_GetAmmoContainerData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.UpdateItem
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_SawOff_C::UpdateItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.UpdateItem");
		
		ABP_Weapon_SawOff_C_UpdateItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.GetIsLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLoaded                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Weapon_SawOff_C::GetIsLoaded(bool* IsLoaded)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.GetIsLoaded");
		
		ABP_Weapon_SawOff_C_GetIsLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsLoaded != nullptr)
			*IsLoaded = params.IsLoaded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.GetIsArmed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Armed                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Weapon_SawOff_C::GetIsArmed(bool* Armed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.GetIsArmed");
		
		ABP_Weapon_SawOff_C_GetIsArmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Armed != nullptr)
			*Armed = params.Armed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.DetachAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_SawOff_C::DetachAmmo(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.DetachAmmo");
		
		ABP_Weapon_SawOff_C_DetachAmmo_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.AttachAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CheckHeld                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UpdateInvItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Weapon_SawOff_C::AttachAmmo(class AActor* Actor, bool CheckHeld, bool UpdateInvItem)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.AttachAmmo");
		
		ABP_Weapon_SawOff_C_AttachAmmo_Params params {};
		params.Actor = Actor;
		params.CheckHeld = CheckHeld;
		params.UpdateInvItem = UpdateInvItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.LerpRecoil
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_SawOff_C::LerpRecoil(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.LerpRecoil");
		
		ABP_Weapon_SawOff_C_LerpRecoil_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.Fire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGunBarrel                                         Barrel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Weapon_SawOff_C::Fire(EGunBarrel Barrel, bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.Fire");
		
		ABP_Weapon_SawOff_C_Fire_Params params {};
		params.Barrel = Barrel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.LockTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_SawOff_C::LockTimeline__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.LockTimeline__FinishedFunc");
		
		ABP_Weapon_SawOff_C_LockTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.LockTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_SawOff_C::LockTimeline__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.LockTimeline__UpdateFunc");
		
		ABP_Weapon_SawOff_C_LockTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_SawOff_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.ReceiveTick");
		
		ABP_Weapon_SawOff_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.EjectMag
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_SawOff_C::EjectMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.EjectMag");
		
		ABP_Weapon_SawOff_C_EjectMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_SawOff_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.OnUsed");
		
		ABP_Weapon_SawOff_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.SetLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewLocked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Weapon_SawOff_C::SetLocked(bool NewLocked)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.SetLocked");
		
		ABP_Weapon_SawOff_C_SetLocked_Params params {};
		params.NewLocked = NewLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.OnStart
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_SawOff_C::OnStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.OnStart");
		
		ABP_Weapon_SawOff_C_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.OnBarrelPositionChanged
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_SawOff_C::OnBarrelPositionChanged()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.OnBarrelPositionChanged");
		
		ABP_Weapon_SawOff_C_OnBarrelPositionChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Weapon_SawOff_C::BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_Weapon_SawOff_C_BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
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
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.ThumbLeft
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_SawOff_C::ThumbLeft()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.ThumbLeft");
		
		ABP_Weapon_SawOff_C_ThumbLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Weapon_SawOff_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.OnGrip");
		
		ABP_Weapon_SawOff_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Weapon_SawOff_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.OnGripRelease");
		
		ABP_Weapon_SawOff_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_SawOff_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.OnReconfigure");
		
		ABP_Weapon_SawOff_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.OnAmmoRemoved
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_SawOff_C::OnAmmoRemoved()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.OnAmmoRemoved");
		
		ABP_Weapon_SawOff_C_OnAmmoRemoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.DestroyComp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SceneComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_SawOff_C::DestroyComp(class USceneComponent* SceneComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.DestroyComp");
		
		ABP_Weapon_SawOff_C_DestroyComp_Params params {};
		params.SceneComponent = SceneComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.StopUse
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_SawOff_C::StopUse()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.StopUse");
		
		ABP_Weapon_SawOff_C_StopUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.InitMagComponent
	 * 		Flags  -> ()
	 */
	void ABP_Weapon_SawOff_C::InitMagComponent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.InitMagComponent");
		
		ABP_Weapon_SawOff_C_InitMagComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.UpdateShells
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EGunBarrel                                         Barrel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_SawOff_C::UpdateShells(EGunBarrel Barrel)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.UpdateShells");
		
		ABP_Weapon_SawOff_C_UpdateShells_Params params {};
		params.Barrel = Barrel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.ExecuteUbergraph_BP_Weapon_SawOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_SawOff_C::ExecuteUbergraph_BP_Weapon_SawOff(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.ExecuteUbergraph_BP_Weapon_SawOff");
		
		ABP_Weapon_SawOff_C_ExecuteUbergraph_BP_Weapon_SawOff_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Weapon_SawOff_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Weapon_SawOff_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_SawOff.BP_Weapon_SawOff_C");
		return ptr;
	}

}


