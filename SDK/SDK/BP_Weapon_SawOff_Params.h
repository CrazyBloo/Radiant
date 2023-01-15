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
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.GetShootingPointTransform
	 */
	struct ABP_Weapon_SawOff_C_GetShootingPointTransform_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 Parent;                                                  // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0HV7[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.HasRound
	 */
	struct ABP_Weapon_SawOff_C_HasRound_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.GetChamberedAmmoTag
	 */
	struct ABP_Weapon_SawOff_C_GetChamberedAmmoTag_Params
	{
	public:
		struct FGameplayTag                                        chamberedAmmoTag;                                        // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.GetChamberedAmmoInfo
	 */
	struct ABP_Weapon_SawOff_C_GetChamberedAmmoInfo_Params
	{
	public:
		struct FAmmoInfo                                           AmmoInfo;                                                // 0x0000(0x0058)  (Parm, OutParm)
	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.GetAmmoContainerData
	 */
	struct ABP_Weapon_SawOff_C_GetAmmoContainerData_Params
	{
	public:
		struct FAmmoContainerData                                  Data;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.UpdateItem
	 */
	struct ABP_Weapon_SawOff_C_UpdateItem_Params
	{	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.GetIsLoaded
	 */
	struct ABP_Weapon_SawOff_C_GetIsLoaded_Params
	{
	public:
		bool                                                       IsLoaded;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I8Z8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.GetIsArmed
	 */
	struct ABP_Weapon_SawOff_C_GetIsArmed_Params
	{
	public:
		bool                                                       Armed;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.DetachAmmo
	 */
	struct ABP_Weapon_SawOff_C_DetachAmmo_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.AttachAmmo
	 */
	struct ABP_Weapon_SawOff_C_AttachAmmo_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CheckHeld;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UpdateInvItem;                                           // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_94J8[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.LerpRecoil
	 */
	struct ABP_Weapon_SawOff_C_LerpRecoil_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.Fire
	 */
	struct ABP_Weapon_SawOff_C_Fire_Params
	{
	public:
		EGunBarrel                                                 Barrel;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       success;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.LockTimeline__FinishedFunc
	 */
	struct ABP_Weapon_SawOff_C_LockTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.LockTimeline__UpdateFunc
	 */
	struct ABP_Weapon_SawOff_C_LockTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.ReceiveTick
	 */
	struct ABP_Weapon_SawOff_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.EjectMag
	 */
	struct ABP_Weapon_SawOff_C_EjectMag_Params
	{	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.OnUsed
	 */
	struct ABP_Weapon_SawOff_C_OnUsed_Params
	{	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.SetLocked
	 */
	struct ABP_Weapon_SawOff_C_SetLocked_Params
	{
	public:
		bool                                                       NewLocked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.OnStart
	 */
	struct ABP_Weapon_SawOff_C_OnStart_Params
	{	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.OnBarrelPositionChanged
	 */
	struct ABP_Weapon_SawOff_C_OnBarrelPositionChanged_Params
	{	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Weapon_SawOff_C_BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QW4O[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.ThumbLeft
	 */
	struct ABP_Weapon_SawOff_C_ThumbLeft_Params
	{	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.OnGrip
	 */
	struct ABP_Weapon_SawOff_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EHJB[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.OnGripRelease
	 */
	struct ABP_Weapon_SawOff_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0VMJ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.OnReconfigure
	 */
	struct ABP_Weapon_SawOff_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.OnAmmoRemoved
	 */
	struct ABP_Weapon_SawOff_C_OnAmmoRemoved_Params
	{	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.DestroyComp
	 */
	struct ABP_Weapon_SawOff_C_DestroyComp_Params
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.StopUse
	 */
	struct ABP_Weapon_SawOff_C_StopUse_Params
	{	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.InitMagComponent
	 */
	struct ABP_Weapon_SawOff_C_InitMagComponent_Params
	{	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.UpdateShells
	 */
	struct ABP_Weapon_SawOff_C_UpdateShells_Params
	{
	public:
		EGunBarrel                                                 Barrel;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Weapon_SawOff.BP_Weapon_SawOff_C.ExecuteUbergraph_BP_Weapon_SawOff
	 */
	struct ABP_Weapon_SawOff_C_ExecuteUbergraph_BP_Weapon_SawOff_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
