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
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.GetAttackDistance
	 */
	struct UMeleeOnceAttackComponent_C_GetAttackDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.GetFirePointComponent
	 */
	struct UMeleeOnceAttackComponent_C_GetFirePointComponent_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.GetWeaponActor
	 */
	struct UMeleeOnceAttackComponent_C_GetWeaponActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.IsAttacking
	 */
	struct UMeleeOnceAttackComponent_C_IsAttacking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.IsAttackValid
	 */
	struct UMeleeOnceAttackComponent_C_IsAttackValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.IsReadyToAttack
	 */
	struct UMeleeOnceAttackComponent_C_IsReadyToAttack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.IsReloading
	 */
	struct UMeleeOnceAttackComponent_C_IsReloading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.NeedWaitForFinish
	 */
	struct UMeleeOnceAttackComponent_C_NeedWaitForFinish_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.IsInRange
	 */
	struct UMeleeOnceAttackComponent_C_IsInRange_Params
	{
	public:
		bool                                                       InRange;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.HitTest
	 */
	struct UMeleeOnceAttackComponent_C_HitTest_Params
	{	};

	/**
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.StartAttack
	 */
	struct UMeleeOnceAttackComponent_C_StartAttack_Params
	{	};

	/**
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.StopAttack
	 */
	struct UMeleeOnceAttackComponent_C_StopAttack_Params
	{	};

	/**
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.OnMeleeAttackHit
	 */
	struct UMeleeOnceAttackComponent_C_OnMeleeAttackHit_Params
	{	};

	/**
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.ReceiveBeginPlay
	 */
	struct UMeleeOnceAttackComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.SetWeaponVisible
	 */
	struct UMeleeOnceAttackComponent_C_SetWeaponVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.Reload
	 */
	struct UMeleeOnceAttackComponent_C_Reload_Params
	{	};

	/**
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.OwnerInitialised
	 */
	struct UMeleeOnceAttackComponent_C_OwnerInitialised_Params
	{	};

	/**
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.OnOutOfAmmo
	 */
	struct UMeleeOnceAttackComponent_C_OnOutOfAmmo_Params
	{	};

	/**
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.DestroyWeapon
	 */
	struct UMeleeOnceAttackComponent_C_DestroyWeapon_Params
	{	};

	/**
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.TestAttack
	 */
	struct UMeleeOnceAttackComponent_C_TestAttack_Params
	{	};

	/**
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.ReceiveTick
	 */
	struct UMeleeOnceAttackComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.ExecuteUbergraph_MeleeOnceAttackComponent
	 */
	struct UMeleeOnceAttackComponent_C_ExecuteUbergraph_MeleeOnceAttackComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.AttackStarted__DelegateSignature
	 */
	struct UMeleeOnceAttackComponent_C_AttackStarted__DelegateSignature_Params
	{	};

	/**
	 * Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.OnTargetHit__DelegateSignature
	 */
	struct UMeleeOnceAttackComponent_C_OnTargetHit__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
