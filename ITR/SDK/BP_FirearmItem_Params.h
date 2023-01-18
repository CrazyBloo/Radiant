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
	 * Function BP_FirearmItem.BP_FirearmItem_C.GetCleanableVertices
	 */
	struct ABP_FirearmItem_C_GetCleanableVertices_Params
	{
	public:
		int32_t                                                    NumCleanableVert;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.GetCleanableMeshes
	 */
	struct ABP_FirearmItem_C_GetCleanableMeshes_Params
	{
	public:
		TArray<class UStaticMeshComponent*>                        CleanableMeshes;                                         // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.GetRepairDurabilityRange
	 */
	struct ABP_FirearmItem_C_GetRepairDurabilityRange_Params
	{
	public:
		struct FGameplayTag                                        Requestor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FMinMaxFloat                                        DurabilityRange;                                         // 0x0008(0x0008)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.GetRefsForRepair
	 */
	struct ABP_FirearmItem_C_GetRefsForRepair_Params
	{
	public:
		struct FGameplayTag                                        RepairRequestor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_94SX[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBPC_ItemDurability_C*                               DurabilityComponent;                                     // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTextureRenderTarget2D*                              RT;                                                      // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.IsSmoothingScriptOn
	 */
	struct ABP_FirearmItem_C_IsSmoothingScriptOn_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E3HC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.GetWeaponInfo
	 */
	struct ABP_FirearmItem_C_GetWeaponInfo_Params
	{
	public:
		struct FWeaponInfo                                         ReturnValue;                                             // 0x0000(0x0110)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.IsLoadingLocked
	 */
	struct ABP_FirearmItem_C_IsLoadingLocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.GetAmmoContainerData
	 */
	struct ABP_FirearmItem_C_GetAmmoContainerData_Params
	{
	public:
		struct FAmmoContainerData                                  Data;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.GetAmmoContainerInfo
	 */
	struct ABP_FirearmItem_C_GetAmmoContainerInfo_Params
	{
	public:
		struct FPRAmmoContainerInfo                                Info;                                                    // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.GetSmoothingScript
	 */
	struct ABP_FirearmItem_C_GetSmoothingScript_Params
	{
	public:
		class UGS_Smoothing_C*                                     SmoothingScript;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.GetCleaningBarrelLength
	 */
	struct ABP_FirearmItem_C_GetCleaningBarrelLength_Params
	{
	public:
		float                                                      Length;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.GetShootingPointTransform
	 */
	struct ABP_FirearmItem_C_GetShootingPointTransform_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 Parent;                                                  // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.IsSmoothingDisabled
	 */
	struct ABP_FirearmItem_C_IsSmoothingDisabled_Params
	{
	public:
		bool                                                       bIsDisabled;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KPOI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.GetCurrentMaxSmoothing
	 */
	struct ABP_FirearmItem_C_GetCurrentMaxSmoothing_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CCEP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.Check Mesh to Sight Alignment
	 */
	struct ABP_FirearmItem_C_CheckMeshtoSightAlignment_Params
	{
	public:
		class UStaticMeshComponent*                                MeshToAlign;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCameraComponent*                                    VrCamera;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsAligned;                                              // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7TNC[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      WeaponSmootingAlpha;                                     // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.SwitchSmoothing
	 */
	struct ABP_FirearmItem_C_SwitchSmoothing_Params
	{
	public:
		bool                                                       bSwitchOn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FGUT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.GetParentFromFirearmOrProxy
	 */
	struct ABP_FirearmItem_C_GetParentFromFirearmOrProxy_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.AttachFirePointToProxy
	 */
	struct ABP_FirearmItem_C_AttachFirePointToProxy_Params
	{
	public:
		class FName                                                FirePointsocket;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.IsFireMode
	 */
	struct ABP_FirearmItem_C_IsFireMode_Params
	{
	public:
		EWeaponFireMode                                            FireMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8SD5[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.Next Fire Mode
	 */
	struct ABP_FirearmItem_C_NextFireMode_Params
	{
	public:
		bool                                                       Changed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EWeaponFireMode                                            FireMode;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_196F[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.GetReliability
	 */
	struct ABP_FirearmItem_C_GetReliability_Params
	{
	public:
		float                                                      Reliability;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GXSX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.Is Going to Jam
	 */
	struct ABP_FirearmItem_C_IsGoingtoJam_Params
	{
	public:
		bool                                                       jammed;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DKV0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.GetRecoil
	 */
	struct ABP_FirearmItem_C_GetRecoil_Params
	{
	public:
		struct FTransform                                          Recoil;                                                  // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.GetGunScript
	 */
	struct ABP_FirearmItem_C_GetGunScript_Params
	{
	public:
		class UGS_GunTools*                                        Gun;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.IsOn
	 */
	struct ABP_FirearmItem_C_IsOn_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZDY6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.Is Attachment Slot Busy
	 */
	struct ABP_FirearmItem_C_IsAttachmentSlotBusy_Params
	{
	public:
		EItemSlot                                                  socket;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       busy;                                                    // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1TVX[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.UpdateVirtualStock
	 */
	struct ABP_FirearmItem_C_UpdateVirtualStock_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.GetDefaultPoseType
	 */
	struct ABP_FirearmItem_C_GetDefaultPoseType_Params
	{
	public:
		EPRHandPoseType                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6HZU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.Reconfigure
	 */
	struct ABP_FirearmItem_C_Reconfigure_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.IsItemActorAttachmentsLocked
	 */
	struct ABP_FirearmItem_C_IsItemActorAttachmentsLocked_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.PerUsageDamage
	 */
	struct ABP_FirearmItem_C_PerUsageDamage_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.IsItemSelfAttachment
	 */
	struct ABP_FirearmItem_C_IsItemSelfAttachment_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Attachment;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.Update Accuracy
	 */
	struct ABP_FirearmItem_C_UpdateAccuracy_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.GetAttachmentsList
	 */
	struct ABP_FirearmItem_C_GetAttachmentsList_Params
	{
	public:
		TArray<class FString>                                      Attachments;                                             // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.UpdateSilencerEffects
	 */
	struct ABP_FirearmItem_C_UpdateSilencerEffects_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.IsSilencerAttached
	 */
	struct ABP_FirearmItem_C_IsSilencerAttached_Params
	{
	public:
		bool                                                       SilencerAttached;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EUGN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.Timeline_0__FinishedFunc
	 */
	struct ABP_FirearmItem_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.Timeline_0__UpdateFunc
	 */
	struct ABP_FirearmItem_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.RequestUpdateMaterial
	 */
	struct ABP_FirearmItem_C_RequestUpdateMaterial_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.OnAmmoAdded
	 */
	struct ABP_FirearmItem_C_OnAmmoAdded_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.OnAmmoRemoved
	 */
	struct ABP_FirearmItem_C_OnAmmoRemoved_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.SetLoadingLock
	 */
	struct ABP_FirearmItem_C_SetLoadingLock_Params
	{
	public:
		bool                                                       lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.OutOfAmmo
	 */
	struct ABP_FirearmItem_C_OutOfAmmo_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.ReloadFinished
	 */
	struct ABP_FirearmItem_C_ReloadFinished_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.PlayerWeaponFired
	 */
	struct ABP_FirearmItem_C_PlayerWeaponFired_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.OnGrip
	 */
	struct ABP_FirearmItem_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_04E1[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.OnEndUsed
	 */
	struct ABP_FirearmItem_C_OnEndUsed_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.OnGripRelease
	 */
	struct ABP_FirearmItem_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GJRH[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.EndFireGun
	 */
	struct ABP_FirearmItem_C_EndFireGun_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.OnSecondaryGrip
	 */
	struct ABP_FirearmItem_C_OnSecondaryGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GripOwningController;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     SecondaryGripComponent;                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.OnSecondaryGripRelease
	 */
	struct ABP_FirearmItem_C_OnSecondaryGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      GripOwningController;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     ReleasingSecondaryGripComponent;                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.BndEvt__MeleeColider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_FirearmItem_C_BndEvt__MeleeColider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.Grip Lock
	 */
	struct ABP_FirearmItem_C_GripLock_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.Grip Unlock
	 */
	struct ABP_FirearmItem_C_GripUnlock_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.SetItemActorAttachmentsLock
	 */
	struct ABP_FirearmItem_C_SetItemActorAttachmentsLock_Params
	{
	public:
		bool                                                       lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.OnReconfigure
	 */
	struct ABP_FirearmItem_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.OnBulletFired
	 */
	struct ABP_FirearmItem_C_OnBulletFired_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.BotConfigure
	 */
	struct ABP_FirearmItem_C_BotConfigure_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.PlayFireHandHaptics
	 */
	struct ABP_FirearmItem_C_PlayFireHandHaptics_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.ThumbLeft
	 */
	struct ABP_FirearmItem_C_ThumbLeft_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.OnFiremodeChanged
	 */
	struct ABP_FirearmItem_C_OnFiremodeChanged_Params
	{
	public:
		EWeaponFireMode                                            FireMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlaySound;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.OnUsed
	 */
	struct ABP_FirearmItem_C_OnUsed_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.VisualRecoil
	 */
	struct ABP_FirearmItem_C_VisualRecoil_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.OnItemTaken
	 */
	struct ABP_FirearmItem_C_OnItemTaken_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.SubtileComment
	 */
	struct ABP_FirearmItem_C_SubtileComment_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.VirtualStockToggle
	 */
	struct ABP_FirearmItem_C_VirtualStockToggle_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.SetAdditionalSmoothing
	 */
	struct ABP_FirearmItem_C_SetAdditionalSmoothing_Params
	{
	public:
		float                                                      SmoothAlpha;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.SetupCleaning
	 */
	struct ABP_FirearmItem_C_SetupCleaning_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.ApplyRecoil
	 */
	struct ABP_FirearmItem_C_ApplyRecoil_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.UpdateAttachmentSlots
	 */
	struct ABP_FirearmItem_C_UpdateAttachmentSlots_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.AttachmentAttached
	 */
	struct ABP_FirearmItem_C_AttachmentAttached_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.AttachmentDetached
	 */
	struct ABP_FirearmItem_C_AttachmentDetached_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.FireGun
	 */
	struct ABP_FirearmItem_C_FireGun_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Diviation;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       BurstFire;                                               // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VM24[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             TargetLoc;                                               // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FireRateMult;                                            // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    BurstModeCount;                                          // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.BotFire
	 */
	struct ABP_FirearmItem_C_BotFire_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.StopFire
	 */
	struct ABP_FirearmItem_C_StopFire_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.UpdateTargetLoc
	 */
	struct ABP_FirearmItem_C_UpdateTargetLoc_Params
	{
	public:
		struct FVector                                             TargetLoc;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.BotBurstFire
	 */
	struct ABP_FirearmItem_C_BotBurstFire_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.EnableAllSlots
	 */
	struct ABP_FirearmItem_C_EnableAllSlots_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.ToggleAttachments
	 */
	struct ABP_FirearmItem_C_ToggleAttachments_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.OnShotVFX
	 */
	struct ABP_FirearmItem_C_OnShotVFX_Params
	{
	public:
		struct FVector                                             TargetLoc;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.OnSecondaryUsed
	 */
	struct ABP_FirearmItem_C_OnSecondaryUsed_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.PlayFeedbackHaptics
	 */
	struct ABP_FirearmItem_C_PlayFeedbackHaptics_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.UpdateFireMode
	 */
	struct ABP_FirearmItem_C_UpdateFireMode_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.ExtractRound
	 */
	struct ABP_FirearmItem_C_ExtractRound_Params
	{
	public:
		bool                                                       isRoundChambered;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isBulletFired;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U03J[0xE];                                   // 0x0002(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      AmmoImpulse;                                             // 0x0040(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ShellImpulse;                                            // 0x0044(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        AmmoTag;                                                 // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.SmoothingToggle
	 */
	struct ABP_FirearmItem_C_SmoothingToggle_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.ReceiveTick
	 */
	struct ABP_FirearmItem_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.SmoothingTick
	 */
	struct ABP_FirearmItem_C_SmoothingTick_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.UpdateSmoothingAttachment
	 */
	struct ABP_FirearmItem_C_UpdateSmoothingAttachment_Params
	{
	public:
		bool                                                       bUseLocalAlpha;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M8VB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      NewMaxSmoothAlpha;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsAdd;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.ExecuteUbergraph_BP_FirearmItem
	 */
	struct ABP_FirearmItem_C_ExecuteUbergraph_BP_FirearmItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.OnBurstFinished__DelegateSignature
	 */
	struct ABP_FirearmItem_C_OnBurstFinished__DelegateSignature_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.OnBotFired__DelegateSignature
	 */
	struct ABP_FirearmItem_C_OnBotFired__DelegateSignature_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.BulletFired__DelegateSignature
	 */
	struct ABP_FirearmItem_C_BulletFired__DelegateSignature_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.DispUnGrip__DelegateSignature
	 */
	struct ABP_FirearmItem_C_DispUnGrip__DelegateSignature_Params
	{	};

	/**
	 * Function BP_FirearmItem.BP_FirearmItem_C.DispOnGrip__DelegateSignature
	 */
	struct ABP_FirearmItem_C_DispOnGrip__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
