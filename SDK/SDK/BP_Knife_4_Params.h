#pragma once

/**
 * Name: Into_The_Radius_VR
 * Version: 2.4
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
	 * Function BP_Knife_4.BP_Knife_3_C.GetWeaponInfo
	 */
	struct ABP_Knife_3_C_GetWeaponInfo_Params
	{
	public:
		struct FWeaponInfo                                         ReturnValue;                                             // 0x0000(0x0108)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.GetCleaningBarrelLength
	 */
	struct ABP_Knife_3_C_GetCleaningBarrelLength_Params
	{
	public:
		float                                                      Length;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.GetShootingPointTransform
	 */
	struct ABP_Knife_3_C_GetShootingPointTransform_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 Parent;                                                  // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.Offset By Penetration Depth
	 */
	struct ABP_Knife_3_C_Offset_By_Penetration_Depth_Params
	{	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.IsThrowLimitVelocity
	 */
	struct ABP_Knife_3_C_IsThrowLimitVelocity_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6S1L[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Velocity;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.GetDefaultPoseType
	 */
	struct ABP_Knife_3_C_GetDefaultPoseType_Params
	{
	public:
		EPRHandPoseType                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.GetSocketSuffix
	 */
	struct ABP_Knife_3_C_GetSocketSuffix_Params
	{
	public:
		bool                                                       Primary;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ATQR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Suffix;                                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.ContaminationDamage
	 */
	struct ABP_Knife_3_C_ContaminationDamage_Params
	{	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.BndEvt__MeleeDamageColider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Knife_3_C_BndEvt__MeleeDamageColider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.BndEvt__ThrownMeleeDamageColider_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_Knife_3_C_BndEvt__ThrownMeleeDamageColider_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.ReceiveTick
	 */
	struct ABP_Knife_3_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.OnUsed
	 */
	struct ABP_Knife_3_C_OnUsed_Params
	{	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.OnEndUsed
	 */
	struct ABP_Knife_3_C_OnEndUsed_Params
	{	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.SetAdditionalSmoothing
	 */
	struct ABP_Knife_3_C_SetAdditionalSmoothing_Params
	{
	public:
		bool                                                       TurnOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q8MB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Alpha;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.OnGrip
	 */
	struct ABP_Knife_3_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JUN2[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.CheckContamination
	 */
	struct ABP_Knife_3_C_CheckContamination_Params
	{	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.StartContamination
	 */
	struct ABP_Knife_3_C_StartContamination_Params
	{	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.MeshDestruction
	 */
	struct ABP_Knife_3_C_MeshDestruction_Params
	{	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.OnStart
	 */
	struct ABP_Knife_3_C_OnStart_Params
	{	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.VirtualStockToggle
	 */
	struct ABP_Knife_3_C_VirtualStockToggle_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.AttachmentDetached
	 */
	struct ABP_Knife_3_C_AttachmentDetached_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.AttachmentAttached
	 */
	struct ABP_Knife_3_C_AttachmentAttached_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.UpdateTargetLoc
	 */
	struct ABP_Knife_3_C_UpdateTargetLoc_Params
	{
	public:
		struct FVector                                             TargetLoc;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.PlayerWeaponFired
	 */
	struct ABP_Knife_3_C_PlayerWeaponFired_Params
	{	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.ThrowItem
	 */
	struct ABP_Knife_3_C_ThrowItem_Params
	{	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.ThumbLeft
	 */
	struct ABP_Knife_3_C_ThumbLeft_Params
	{	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.ReloadFinished
	 */
	struct ABP_Knife_3_C_ReloadFinished_Params
	{	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.OnGripRelease
	 */
	struct ABP_Knife_3_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6LYX[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.DisableTick
	 */
	struct ABP_Knife_3_C_DisableTick_Params
	{	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.OutOfAmmo
	 */
	struct ABP_Knife_3_C_OutOfAmmo_Params
	{	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.StopFire
	 */
	struct ABP_Knife_3_C_StopFire_Params
	{	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.FireGun
	 */
	struct ABP_Knife_3_C_FireGun_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Diviation;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       BurstFire;                                               // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_020A[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             TargetLoc;                                               // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FireRateMult;                                            // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    BurstModeCount;                                          // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.EnableGravity
	 */
	struct ABP_Knife_3_C_EnableGravity_Params
	{	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.DoThrowItem
	 */
	struct ABP_Knife_3_C_DoThrowItem_Params
	{	};

	/**
	 * Function BP_Knife_4.BP_Knife_3_C.ExecuteUbergraph_BP_Knife_4
	 */
	struct ABP_Knife_3_C_ExecuteUbergraph_BP_Knife_4_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
