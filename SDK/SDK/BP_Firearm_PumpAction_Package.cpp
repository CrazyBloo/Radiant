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
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.GetShootingPointTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         Parent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_PumpAction_C::GetShootingPointTransform(struct FTransform* Transform, class UPrimitiveComponent** Parent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.GetShootingPointTransform");
		
		ABP_Firearm_PumpAction_C_GetShootingPointTransform_Params params {};
		
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
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.IsBoltFullInn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Inn                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Firearm_PumpAction_C::IsBoltFullInn(bool* Inn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.IsBoltFullInn");
		
		ABP_Firearm_PumpAction_C_IsBoltFullInn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Inn != nullptr)
			*Inn = params.Inn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.IsBoltFullOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Firearm_PumpAction_C::IsBoltFullOut(bool* Out)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.IsBoltFullOut");
		
		ABP_Firearm_PumpAction_C_IsBoltFullOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.GetChamberedAmmoTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                chamberedAmmoTag                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_PumpAction_C::GetChamberedAmmoTag(struct FGameplayTag* chamberedAmmoTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.GetChamberedAmmoTag");
		
		ABP_Firearm_PumpAction_C_GetChamberedAmmoTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (chamberedAmmoTag != nullptr)
			*chamberedAmmoTag = params.chamberedAmmoTag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.GetAttachmentsList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Attachments                                                (Parm, OutParm)
	 */
	void ABP_Firearm_PumpAction_C::GetAttachmentsList(TArray<class FString>* Attachments)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.GetAttachmentsList");
		
		ABP_Firearm_PumpAction_C_GetAttachmentsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attachments != nullptr)
			*Attachments = params.Attachments;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.isRoundChambered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Firearm_PumpAction_C::isRoundChambered(bool* Return)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.isRoundChambered");
		
		ABP_Firearm_PumpAction_C_isRoundChambered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.UpdateChamberedRoundMesh
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_PumpAction_C::UpdateChamberedRoundMesh()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.UpdateChamberedRoundMesh");
		
		ABP_Firearm_PumpAction_C_UpdateChamberedRoundMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.DestroyMag
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_PumpAction_C::DestroyMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.DestroyMag");
		
		ABP_Firearm_PumpAction_C_DestroyMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.UpdateBulletsInMag
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_PumpAction_C::UpdateBulletsInMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.UpdateBulletsInMag");
		
		ABP_Firearm_PumpAction_C_UpdateBulletsInMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.LoadRound
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_PumpAction_C::LoadRound()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.LoadRound");
		
		ABP_Firearm_PumpAction_C_LoadRound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_PumpAction_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnUsed");
		
		ABP_Firearm_PumpAction_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.FireBullet
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_PumpAction_C::FireBullet()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.FireBullet");
		
		ABP_Firearm_PumpAction_C_FireBullet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_PumpAction_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.ReceiveTick");
		
		ABP_Firearm_PumpAction_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.Jamed_RoundSpawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Chamber                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Firearm_PumpAction_C::Jamed_RoundSpawn(bool Chamber)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.Jamed_RoundSpawn");
		
		ABP_Firearm_PumpAction_C_Jamed_RoundSpawn_Params params {};
		params.Chamber = Chamber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.Unjam
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_PumpAction_C::Unjam()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.Unjam");
		
		ABP_Firearm_PumpAction_C_Unjam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_PumpAction_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnReconfigure");
		
		ABP_Firearm_PumpAction_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.Grip Unlock
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_PumpAction_C::Grip_Unlock()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.Grip Unlock");
		
		ABP_Firearm_PumpAction_C_Grip_Unlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.Grip Lock
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_PumpAction_C::Grip_Lock()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.Grip Lock");
		
		ABP_Firearm_PumpAction_C_Grip_Lock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.blockMainGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLock                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Firearm_PumpAction_C::blockMainGrip(bool bLock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.blockMainGrip");
		
		ABP_Firearm_PumpAction_C_blockMainGrip_Params params {};
		params.bLock = bLock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnChildGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Firearm_PumpAction_C::OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnChildGrip");
		
		ABP_Firearm_PumpAction_C_OnChildGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnChildGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Firearm_PumpAction_C::OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnChildGripRelease");
		
		ABP_Firearm_PumpAction_C_OnChildGripRelease_Params params {};
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
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_PumpAction_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.ReceiveBeginPlay");
		
		ABP_Firearm_PumpAction_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.BoltInn
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_PumpAction_C::BoltInn()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.BoltInn");
		
		ABP_Firearm_PumpAction_C_BoltInn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.BoltOUT
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_PumpAction_C::BoltOUT()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.BoltOUT");
		
		ABP_Firearm_PumpAction_C_BoltOUT_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Firearm_PumpAction_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnGripRelease");
		
		ABP_Firearm_PumpAction_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Firearm_PumpAction_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnGrip");
		
		ABP_Firearm_PumpAction_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnSecondaryGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GripOwningController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             SecondaryGripComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Firearm_PumpAction_C::OnSecondaryGrip(class UGripMotionControllerComponent* GripOwningController, class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnSecondaryGrip");
		
		ABP_Firearm_PumpAction_C_OnSecondaryGrip_Params params {};
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
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.EjectMag
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_PumpAction_C::EjectMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.EjectMag");
		
		ABP_Firearm_PumpAction_C_EjectMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.DropEjectedMag
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_PumpAction_C::DropEjectedMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.DropEjectedMag");
		
		ABP_Firearm_PumpAction_C_DropEjectedMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnFiremodeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponFireMode                                    FireMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PlaySound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Firearm_PumpAction_C::OnFiremodeChanged(EWeaponFireMode FireMode, bool PlaySound)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnFiremodeChanged");
		
		ABP_Firearm_PumpAction_C_OnFiremodeChanged_Params params {};
		params.FireMode = FireMode;
		params.PlaySound = PlaySound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.DestroyComp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SceneComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_PumpAction_C::DestroyComp(class USceneComponent* SceneComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.DestroyComp");
		
		ABP_Firearm_PumpAction_C_DestroyComp_Params params {};
		params.SceneComponent = SceneComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Firearm_PumpAction_C::BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_Firearm_PumpAction_C_BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.CallForSemiAuto
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_PumpAction_C::CallForSemiAuto()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.CallForSemiAuto");
		
		ABP_Firearm_PumpAction_C_CallForSemiAuto_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnSecondaryUsed
	 * 		Flags  -> ()
	 */
	void ABP_Firearm_PumpAction_C::OnSecondaryUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnSecondaryUsed");
		
		ABP_Firearm_PumpAction_C_OnSecondaryUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.ExtractRound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isRoundChambered                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isBulletFired                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              AmmoImpulse                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ShellImpulse                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                AmmoTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_PumpAction_C::ExtractRound(bool isRoundChambered, bool isBulletFired, const struct FTransform& Transform, float AmmoImpulse, float ShellImpulse, const struct FGameplayTag& AmmoTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.ExtractRound");
		
		ABP_Firearm_PumpAction_C_ExtractRound_Params params {};
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
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnSecondaryGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GripOwningController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             ReleasingSecondaryGripComponent                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Firearm_PumpAction_C::OnSecondaryGripRelease(class UGripMotionControllerComponent* GripOwningController, class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnSecondaryGripRelease");
		
		ABP_Firearm_PumpAction_C_OnSecondaryGripRelease_Params params {};
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
	 * 		Name   -> Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.ExecuteUbergraph_BP_Firearm_PumpAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Firearm_PumpAction_C::ExecuteUbergraph_BP_Firearm_PumpAction(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.ExecuteUbergraph_BP_Firearm_PumpAction");
		
		ABP_Firearm_PumpAction_C_ExecuteUbergraph_BP_Firearm_PumpAction_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Firearm_PumpAction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Firearm_PumpAction_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Firearm_PumpAction.BP_Firearm_PumpAction_C");
		return ptr;
	}

}


