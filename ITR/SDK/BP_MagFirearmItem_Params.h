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
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.GetReliability
	 */
	struct ABP_MagFirearmItem_C_GetReliability_Params
	{
	public:
		float                                                      Reliability;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.GetShootingPointTransform
	 */
	struct ABP_MagFirearmItem_C_GetShootingPointTransform_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 Parent;                                                  // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WJL7[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.GetPoseShift
	 */
	struct ABP_MagFirearmItem_C_GetPoseShift_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_78NY[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.Reconfigure
	 */
	struct ABP_MagFirearmItem_C_Reconfigure_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D4VV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.GetChamberedAmmoTag
	 */
	struct ABP_MagFirearmItem_C_GetChamberedAmmoTag_Params
	{
	public:
		struct FGameplayTag                                        chamberedAmmoTag;                                        // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.GetAttachmentsList
	 */
	struct ABP_MagFirearmItem_C_GetAttachmentsList_Params
	{
	public:
		TArray<class FString>                                      Attachments;                                             // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.isRoundChambered
	 */
	struct ABP_MagFirearmItem_C_isRoundChambered_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.UpdateChamberedRoundMesh
	 */
	struct ABP_MagFirearmItem_C_UpdateChamberedRoundMesh_Params
	{	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.UpdateBulletsInMag
	 */
	struct ABP_MagFirearmItem_C_UpdateBulletsInMag_Params
	{	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.SpawnMagInWeapon
	 */
	struct ABP_MagFirearmItem_C_SpawnMagInWeapon_Params
	{	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.OnChildGrip
	 */
	struct ABP_MagFirearmItem_C_OnChildGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DTQH[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.OnChildGripRelease
	 */
	struct ABP_MagFirearmItem_C_OnChildGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OCOM[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.LoadCycle
	 */
	struct ABP_MagFirearmItem_C_LoadCycle_Params
	{
	public:
		bool                                                       jammed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.Event_BoltMove
	 */
	struct ABP_MagFirearmItem_C_Event_BoltMove_Params
	{
	public:
		bool                                                       Forward;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       goingToJam;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CFL9[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Speed;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       BoltOnly;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       MakeFX;                                                  // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FullCycle;                                               // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SLZI[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      FXAlpha;                                                 // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.OnUsed
	 */
	struct ABP_MagFirearmItem_C_OnUsed_Params
	{	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.FireBullet
	 */
	struct ABP_MagFirearmItem_C_FireBullet_Params
	{	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.ReceiveTick
	 */
	struct ABP_MagFirearmItem_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.Jamed_RoundSpawn
	 */
	struct ABP_MagFirearmItem_C_Jamed_RoundSpawn_Params
	{
	public:
		bool                                                       Chamber;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.Unjam
	 */
	struct ABP_MagFirearmItem_C_Unjam_Params
	{	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.OnReconfigure
	 */
	struct ABP_MagFirearmItem_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.Grip Unlock
	 */
	struct ABP_MagFirearmItem_C_GripUnlock_Params
	{	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.Grip Lock
	 */
	struct ABP_MagFirearmItem_C_GripLock_Params
	{	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.SafetyVisual
	 */
	struct ABP_MagFirearmItem_C_SafetyVisual_Params
	{
	public:
		EWeaponFireMode                                            FireMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.OnFiremodeChanged
	 */
	struct ABP_MagFirearmItem_C_OnFiremodeChanged_Params
	{
	public:
		EWeaponFireMode                                            FireMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlaySound;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.PlayFireSound
	 */
	struct ABP_MagFirearmItem_C_PlayFireSound_Params
	{
	public:
		float                                                      PitchMult;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.StopFireSound
	 */
	struct ABP_MagFirearmItem_C_StopFireSound_Params
	{	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.EndFireGun
	 */
	struct ABP_MagFirearmItem_C_EndFireGun_Params
	{	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.FireFX
	 */
	struct ABP_MagFirearmItem_C_FireFX_Params
	{	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.ThumbLeft
	 */
	struct ABP_MagFirearmItem_C_ThumbLeft_Params
	{	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.Request Recoil
	 */
	struct ABP_MagFirearmItem_C_RequestRecoil_Params
	{
	public:
		struct FVector                                             Recoil;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.EjectMag
	 */
	struct ABP_MagFirearmItem_C_EjectMag_Params
	{	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.DropEjectedMag
	 */
	struct ABP_MagFirearmItem_C_DropEjectedMag_Params
	{	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.OnGripRelease
	 */
	struct ABP_MagFirearmItem_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4XN4[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.AttachmentDetached
	 */
	struct ABP_MagFirearmItem_C_AttachmentDetached_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.ExtractRound
	 */
	struct ABP_MagFirearmItem_C_ExtractRound_Params
	{
	public:
		bool                                                       isRoundChambered;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isBulletFired;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2I1Z[0xE];                                   // 0x0002(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      AmmoImpulse;                                             // 0x0040(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ShellImpulse;                                            // 0x0044(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        AmmoTag;                                                 // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.FireBullet_Unconditional
	 */
	struct ABP_MagFirearmItem_C_FireBullet_Unconditional_Params
	{	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.Hide
	 */
	struct ABP_MagFirearmItem_C_Hide_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.UpdateFireMode
	 */
	struct ABP_MagFirearmItem_C_UpdateFireMode_Params
	{	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.SKBoltAnimation
	 */
	struct ABP_MagFirearmItem_C_SKBoltAnimation_Params
	{
	public:
		bool                                                       Finish;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Forward;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.BoltAnim
	 */
	struct ABP_MagFirearmItem_C_BoltAnim_Params
	{	};

	/**
	 * Function BP_MagFirearmItem.BP_MagFirearmItem_C.ExecuteUbergraph_BP_MagFirearmItem
	 */
	struct ABP_MagFirearmItem_C_ExecuteUbergraph_BP_MagFirearmItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
