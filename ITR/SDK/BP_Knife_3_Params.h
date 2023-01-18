﻿#pragma once

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
	 * Function BP_Knife_3.BP_Knife_2_C.IsSmoothingScriptOn
	 */
	struct ABP_Knife_2_C_IsSmoothingScriptOn_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.GetWeaponInfo
	 */
	struct ABP_Knife_2_C_GetWeaponInfo_Params
	{
	public:
		struct FWeaponInfo                                         ReturnValue;                                             // 0x0000(0x0110)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.GetSmoothingScript
	 */
	struct ABP_Knife_2_C_GetSmoothingScript_Params
	{
	public:
		class UGS_Smoothing_C*                                     SmoothingScript;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.GetCleaningBarrelLength
	 */
	struct ABP_Knife_2_C_GetCleaningBarrelLength_Params
	{
	public:
		float                                                      Length;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.GetShootingPointTransform
	 */
	struct ABP_Knife_2_C_GetShootingPointTransform_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 Parent;                                                  // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.Offset By Penetration Depth
	 */
	struct ABP_Knife_2_C_OffsetByPenetrationDepth_Params
	{	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.IsThrowLimitVelocity
	 */
	struct ABP_Knife_2_C_IsThrowLimitVelocity_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LB4J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Velocity;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.GetDefaultPoseType
	 */
	struct ABP_Knife_2_C_GetDefaultPoseType_Params
	{
	public:
		EPRHandPoseType                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.GetSocketSuffix
	 */
	struct ABP_Knife_2_C_GetSocketSuffix_Params
	{
	public:
		bool                                                       Primary;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S8LM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Suffix;                                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.ContaminationDamage
	 */
	struct ABP_Knife_2_C_ContaminationDamage_Params
	{	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.BndEvt__MeleeDamageColider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Knife_2_C_BndEvt__MeleeDamageColider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.BndEvt__ThrownMeleeDamageColider_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Knife_2_C_BndEvt__ThrownMeleeDamageColider_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.UpdateSmoothingAttachment
	 */
	struct ABP_Knife_2_C_UpdateSmoothingAttachment_Params
	{
	public:
		bool                                                       bUseLocalAlpha;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DB7U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      NewMaxSmoothAlpha;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsAdd;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.SmoothingToggle
	 */
	struct ABP_Knife_2_C_SmoothingToggle_Params
	{	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.ReceiveTick
	 */
	struct ABP_Knife_2_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.OnUsed
	 */
	struct ABP_Knife_2_C_OnUsed_Params
	{	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.OnEndUsed
	 */
	struct ABP_Knife_2_C_OnEndUsed_Params
	{	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.SetAdditionalSmoothing
	 */
	struct ABP_Knife_2_C_SetAdditionalSmoothing_Params
	{
	public:
		float                                                      SmoothAlpha;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.OnGrip
	 */
	struct ABP_Knife_2_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z48S[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.CheckContamination
	 */
	struct ABP_Knife_2_C_CheckContamination_Params
	{	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.StartContamination
	 */
	struct ABP_Knife_2_C_StartContamination_Params
	{	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.MeshDestruction
	 */
	struct ABP_Knife_2_C_MeshDestruction_Params
	{	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.OnStart
	 */
	struct ABP_Knife_2_C_OnStart_Params
	{	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.VirtualStockToggle
	 */
	struct ABP_Knife_2_C_VirtualStockToggle_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.AttachmentDetached
	 */
	struct ABP_Knife_2_C_AttachmentDetached_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.AttachmentAttached
	 */
	struct ABP_Knife_2_C_AttachmentAttached_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.UpdateTargetLoc
	 */
	struct ABP_Knife_2_C_UpdateTargetLoc_Params
	{
	public:
		struct FVector                                             TargetLoc;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.PlayerWeaponFired
	 */
	struct ABP_Knife_2_C_PlayerWeaponFired_Params
	{	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.ThrowItem
	 */
	struct ABP_Knife_2_C_ThrowItem_Params
	{	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.ThumbLeft
	 */
	struct ABP_Knife_2_C_ThumbLeft_Params
	{	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.ReloadFinished
	 */
	struct ABP_Knife_2_C_ReloadFinished_Params
	{	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.OnGripRelease
	 */
	struct ABP_Knife_2_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VOOG[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.DisableTick
	 */
	struct ABP_Knife_2_C_DisableTick_Params
	{	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.OutOfAmmo
	 */
	struct ABP_Knife_2_C_OutOfAmmo_Params
	{	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.StopFire
	 */
	struct ABP_Knife_2_C_StopFire_Params
	{	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.FireGun
	 */
	struct ABP_Knife_2_C_FireGun_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Diviation;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       BurstFire;                                               // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_COJ9[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             TargetLoc;                                               // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FireRateMult;                                            // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    BurstModeCount;                                          // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.EnableGravity
	 */
	struct ABP_Knife_2_C_EnableGravity_Params
	{	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.DoThrowItem
	 */
	struct ABP_Knife_2_C_DoThrowItem_Params
	{	};

	/**
	 * Function BP_Knife_3.BP_Knife_2_C.ExecuteUbergraph_BP_Knife_3
	 */
	struct ABP_Knife_2_C_ExecuteUbergraph_BP_Knife_3_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
