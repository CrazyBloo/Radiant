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
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.GetShootingPointTransform
	 */
	struct ABP_Firearm_PumpAction_C_GetShootingPointTransform_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 Parent;                                                  // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P54H[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.IsBoltFullInn
	 */
	struct ABP_Firearm_PumpAction_C_IsBoltFullInn_Params
	{
	public:
		bool                                                       Inn;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.IsBoltFullOut
	 */
	struct ABP_Firearm_PumpAction_C_IsBoltFullOut_Params
	{
	public:
		bool                                                       Out;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.GetChamberedAmmoTag
	 */
	struct ABP_Firearm_PumpAction_C_GetChamberedAmmoTag_Params
	{
	public:
		struct FGameplayTag                                        chamberedAmmoTag;                                        // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.GetAttachmentsList
	 */
	struct ABP_Firearm_PumpAction_C_GetAttachmentsList_Params
	{
	public:
		TArray<class FString>                                      Attachments;                                             // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.isRoundChambered
	 */
	struct ABP_Firearm_PumpAction_C_isRoundChambered_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.UpdateChamberedRoundMesh
	 */
	struct ABP_Firearm_PumpAction_C_UpdateChamberedRoundMesh_Params
	{	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.DestroyMag
	 */
	struct ABP_Firearm_PumpAction_C_DestroyMag_Params
	{	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.UpdateBulletsInMag
	 */
	struct ABP_Firearm_PumpAction_C_UpdateBulletsInMag_Params
	{	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.LoadRound
	 */
	struct ABP_Firearm_PumpAction_C_LoadRound_Params
	{	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnUsed
	 */
	struct ABP_Firearm_PumpAction_C_OnUsed_Params
	{	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.FireBullet
	 */
	struct ABP_Firearm_PumpAction_C_FireBullet_Params
	{	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.ReceiveTick
	 */
	struct ABP_Firearm_PumpAction_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.Jamed_RoundSpawn
	 */
	struct ABP_Firearm_PumpAction_C_Jamed_RoundSpawn_Params
	{
	public:
		bool                                                       Chamber;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.Unjam
	 */
	struct ABP_Firearm_PumpAction_C_Unjam_Params
	{	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnReconfigure
	 */
	struct ABP_Firearm_PumpAction_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.Grip Unlock
	 */
	struct ABP_Firearm_PumpAction_C_Grip_Unlock_Params
	{	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.Grip Lock
	 */
	struct ABP_Firearm_PumpAction_C_Grip_Lock_Params
	{	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.blockMainGrip
	 */
	struct ABP_Firearm_PumpAction_C_blockMainGrip_Params
	{
	public:
		bool                                                       bLock;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnChildGrip
	 */
	struct ABP_Firearm_PumpAction_C_OnChildGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D3U2[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnChildGripRelease
	 */
	struct ABP_Firearm_PumpAction_C_OnChildGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_00WK[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.ReceiveBeginPlay
	 */
	struct ABP_Firearm_PumpAction_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.BoltInn
	 */
	struct ABP_Firearm_PumpAction_C_BoltInn_Params
	{	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.BoltOUT
	 */
	struct ABP_Firearm_PumpAction_C_BoltOUT_Params
	{	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnGripRelease
	 */
	struct ABP_Firearm_PumpAction_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0QW1[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnGrip
	 */
	struct ABP_Firearm_PumpAction_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KNB5[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnSecondaryGrip
	 */
	struct ABP_Firearm_PumpAction_C_OnSecondaryGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GripOwningController;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     SecondaryGripComponent;                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.EjectMag
	 */
	struct ABP_Firearm_PumpAction_C_EjectMag_Params
	{	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.DropEjectedMag
	 */
	struct ABP_Firearm_PumpAction_C_DropEjectedMag_Params
	{	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnFiremodeChanged
	 */
	struct ABP_Firearm_PumpAction_C_OnFiremodeChanged_Params
	{
	public:
		EWeaponFireMode                                            FireMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlaySound;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.DestroyComp
	 */
	struct ABP_Firearm_PumpAction_C_DestroyComp_Params
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Firearm_PumpAction_C_BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0YK3[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.CallForSemiAuto
	 */
	struct ABP_Firearm_PumpAction_C_CallForSemiAuto_Params
	{	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnSecondaryUsed
	 */
	struct ABP_Firearm_PumpAction_C_OnSecondaryUsed_Params
	{	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.ExtractRound
	 */
	struct ABP_Firearm_PumpAction_C_ExtractRound_Params
	{
	public:
		bool                                                       isRoundChambered;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isBulletFired;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SQKD[0xE];                                   // 0x0002(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      AmmoImpulse;                                             // 0x0040(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ShellImpulse;                                            // 0x0044(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        AmmoTag;                                                 // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.OnSecondaryGripRelease
	 */
	struct ABP_Firearm_PumpAction_C_OnSecondaryGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      GripOwningController;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     ReleasingSecondaryGripComponent;                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Firearm_PumpAction.BP_Firearm_PumpAction_C.ExecuteUbergraph_BP_Firearm_PumpAction
	 */
	struct ABP_Firearm_PumpAction_C_ExecuteUbergraph_BP_Firearm_PumpAction_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FUUE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
