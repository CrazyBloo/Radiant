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
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.IsCanLoadRound
	 */
	struct ABPA_Firearm_BoltAction_C_IsCanLoadRound_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.GetShootingPointTransform
	 */
	struct ABPA_Firearm_BoltAction_C_GetShootingPointTransform_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 Parent;                                                  // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TSCD[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.GetChamberedAmmoTag
	 */
	struct ABPA_Firearm_BoltAction_C_GetChamberedAmmoTag_Params
	{
	public:
		struct FGameplayTag                                        chamberedAmmoTag;                                        // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.GetAttachmentsList
	 */
	struct ABPA_Firearm_BoltAction_C_GetAttachmentsList_Params
	{
	public:
		TArray<class FString>                                      Attachments;                                             // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.isRoundChambered
	 */
	struct ABPA_Firearm_BoltAction_C_isRoundChambered_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.UpdateChamberedRoundMesh
	 */
	struct ABPA_Firearm_BoltAction_C_UpdateChamberedRoundMesh_Params
	{
	public:
		struct FGameplayTag                                        AmmoTag;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		bool                                                       BulletFired;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.LoadRound
	 */
	struct ABPA_Firearm_BoltAction_C_LoadRound_Params
	{	};

	/**
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.OnUsed
	 */
	struct ABPA_Firearm_BoltAction_C_OnUsed_Params
	{	};

	/**
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.FireBullet
	 */
	struct ABPA_Firearm_BoltAction_C_FireBullet_Params
	{	};

	/**
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.ReceiveTick
	 */
	struct ABPA_Firearm_BoltAction_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.Jamed_RoundSpawn
	 */
	struct ABPA_Firearm_BoltAction_C_Jamed_RoundSpawn_Params
	{
	public:
		bool                                                       Chamber;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.Unjam
	 */
	struct ABPA_Firearm_BoltAction_C_Unjam_Params
	{	};

	/**
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.OnReconfigure
	 */
	struct ABPA_Firearm_BoltAction_C_OnReconfigure_Params
	{	};

	/**
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.Grip Unlock
	 */
	struct ABPA_Firearm_BoltAction_C_GripUnlock_Params
	{	};

	/**
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.Grip Lock
	 */
	struct ABPA_Firearm_BoltAction_C_GripLock_Params
	{	};

	/**
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.blockMainGrip
	 */
	struct ABPA_Firearm_BoltAction_C_blockMainGrip_Params
	{
	public:
		bool                                                       bLock;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.OnGripRelease
	 */
	struct ABPA_Firearm_BoltAction_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JWET[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.OnGrip
	 */
	struct ABPA_Firearm_BoltAction_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I110[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.OnFiremodeChanged
	 */
	struct ABPA_Firearm_BoltAction_C_OnFiremodeChanged_Params
	{
	public:
		EWeaponFireMode                                            FireMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlaySound;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABPA_Firearm_BoltAction_C_BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QRYL[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.BndEvt__WeaponBolt_K2Node_ComponentBoundEvent_1_NoParamsDelegate__DelegateSignature
	 */
	struct ABPA_Firearm_BoltAction_C_BndEvt__WeaponBolt_K2Node_ComponentBoundEvent_1_NoParamsDelegate__DelegateSignature_Params
	{
	public:
		EWeaponBoltState                                           prevState;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.UpdateAmmoInBolt
	 */
	struct ABPA_Firearm_BoltAction_C_UpdateAmmoInBolt_Params
	{	};

	/**
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.ExtractRound
	 */
	struct ABPA_Firearm_BoltAction_C_ExtractRound_Params
	{
	public:
		bool                                                       isRoundChambered;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isBulletFired;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1UCO[0xE];                                   // 0x0002(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      AmmoImpulse;                                             // 0x0040(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ShellImpulse;                                            // 0x0044(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        AmmoTag;                                                 // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Firearm_BoltAction.BPA_Firearm_BoltAction_C.ExecuteUbergraph_BPA_Firearm_BoltAction
	 */
	struct ABPA_Firearm_BoltAction_C_ExecuteUbergraph_BPA_Firearm_BoltAction_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
