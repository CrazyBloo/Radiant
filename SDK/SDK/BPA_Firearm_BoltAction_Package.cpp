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
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.IsCanLoadRound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Firearm_BoltAction_C::IsCanLoadRound(bool* Return)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.IsCanLoadRound");
		
		ABPA_Firearm_BoltAction_C_IsCanLoadRound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.GetShootingPointTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         Parent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Firearm_BoltAction_C::GetShootingPointTransform(struct FTransform* Transform, class UPrimitiveComponent** Parent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.GetShootingPointTransform");
		
		ABPA_Firearm_BoltAction_C_GetShootingPointTransform_Params params {};
		
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
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.GetChamberedAmmoTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                chamberedAmmoTag                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Firearm_BoltAction_C::GetChamberedAmmoTag(struct FGameplayTag* chamberedAmmoTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.GetChamberedAmmoTag");
		
		ABPA_Firearm_BoltAction_C_GetChamberedAmmoTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (chamberedAmmoTag != nullptr)
			*chamberedAmmoTag = params.chamberedAmmoTag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.GetAttachmentsList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Attachments                                                (Parm, OutParm)
	 */
	void ABPA_Firearm_BoltAction_C::GetAttachmentsList(TArray<class FString>* Attachments)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.GetAttachmentsList");
		
		ABPA_Firearm_BoltAction_C_GetAttachmentsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attachments != nullptr)
			*Attachments = params.Attachments;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.isRoundChambered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Firearm_BoltAction_C::isRoundChambered(bool* Return)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.isRoundChambered");
		
		ABPA_Firearm_BoltAction_C_isRoundChambered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.UpdateChamberedRoundMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                AmmoTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BulletFired                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Firearm_BoltAction_C::UpdateChamberedRoundMesh(const struct FGameplayTag& AmmoTag, bool BulletFired)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.UpdateChamberedRoundMesh");
		
		ABPA_Firearm_BoltAction_C_UpdateChamberedRoundMesh_Params params {};
		params.AmmoTag = AmmoTag;
		params.BulletFired = BulletFired;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.LoadRound
	 * 		Flags  -> ()
	 */
	void ABPA_Firearm_BoltAction_C::LoadRound()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.LoadRound");
		
		ABPA_Firearm_BoltAction_C_LoadRound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABPA_Firearm_BoltAction_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.OnUsed");
		
		ABPA_Firearm_BoltAction_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.FireBullet
	 * 		Flags  -> ()
	 */
	void ABPA_Firearm_BoltAction_C::FireBullet()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.FireBullet");
		
		ABPA_Firearm_BoltAction_C_FireBullet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Firearm_BoltAction_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.ReceiveTick");
		
		ABPA_Firearm_BoltAction_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.Jamed_RoundSpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Chamber                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Firearm_BoltAction_C::Jamed_RoundSpawn(bool Chamber)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.Jamed_RoundSpawn");
		
		ABPA_Firearm_BoltAction_C_Jamed_RoundSpawn_Params params {};
		params.Chamber = Chamber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.Unjam
	 * 		Flags  -> ()
	 */
	void ABPA_Firearm_BoltAction_C::Unjam()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.Unjam");
		
		ABPA_Firearm_BoltAction_C_Unjam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABPA_Firearm_BoltAction_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.OnReconfigure");
		
		ABPA_Firearm_BoltAction_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.Grip Unlock
	 * 		Flags  -> ()
	 */
	void ABPA_Firearm_BoltAction_C::Grip_Unlock()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.Grip Unlock");
		
		ABPA_Firearm_BoltAction_C_Grip_Unlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.Grip Lock
	 * 		Flags  -> ()
	 */
	void ABPA_Firearm_BoltAction_C::Grip_Lock()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.Grip Lock");
		
		ABPA_Firearm_BoltAction_C_Grip_Lock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.blockMainGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLock                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Firearm_BoltAction_C::blockMainGrip(bool bLock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.blockMainGrip");
		
		ABPA_Firearm_BoltAction_C_blockMainGrip_Params params {};
		params.bLock = bLock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Firearm_BoltAction_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.OnGripRelease");
		
		ABPA_Firearm_BoltAction_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABPA_Firearm_BoltAction_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.OnGrip");
		
		ABPA_Firearm_BoltAction_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.OnFiremodeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponFireMode                                    FireMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PlaySound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Firearm_BoltAction_C::OnFiremodeChanged(EWeaponFireMode FireMode, bool PlaySound)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.OnFiremodeChanged");
		
		ABPA_Firearm_BoltAction_C_OnFiremodeChanged_Params params {};
		params.FireMode = FireMode;
		params.PlaySound = PlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABPA_Firearm_BoltAction_C::BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABPA_Firearm_BoltAction_C_BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.BndEvt__WeaponBolt_K2Node_ComponentBoundEvent_1_NoParamsDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponBoltState                                   prevState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Firearm_BoltAction_C::BndEvt__WeaponBolt_K2Node_ComponentBoundEvent_1_NoParamsDelegate__DelegateSignature(EWeaponBoltState prevState)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.BndEvt__WeaponBolt_K2Node_ComponentBoundEvent_1_NoParamsDelegate__DelegateSignature");
		
		ABPA_Firearm_BoltAction_C_BndEvt__WeaponBolt_K2Node_ComponentBoundEvent_1_NoParamsDelegate__DelegateSignature_Params params {};
		params.prevState = prevState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.UpdateAmmoInBolt
	 * 		Flags  -> ()
	 */
	void ABPA_Firearm_BoltAction_C::UpdateAmmoInBolt()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.UpdateAmmoInBolt");
		
		ABPA_Firearm_BoltAction_C_UpdateAmmoInBolt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.ExtractRound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isRoundChambered                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isBulletFired                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              AmmoImpulse                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ShellImpulse                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                AmmoTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Firearm_BoltAction_C::ExtractRound(bool isRoundChambered, bool isBulletFired, const struct FTransform& Transform, float AmmoImpulse, float ShellImpulse, const struct FGameplayTag& AmmoTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.ExtractRound");
		
		ABPA_Firearm_BoltAction_C_ExtractRound_Params params {};
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
	 * 		Name   -> Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.ExecuteUbergraph_BPA_Firearm_BoltAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Firearm_BoltAction_C::ExecuteUbergraph_BPA_Firearm_BoltAction(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.ExecuteUbergraph_BPA_Firearm_BoltAction");
		
		ABPA_Firearm_BoltAction_C_ExecuteUbergraph_BPA_Firearm_BoltAction_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_Firearm_BoltAction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_Firearm_BoltAction_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C");
		return ptr;
	}

}


