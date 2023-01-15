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
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.GetAttackDistance
	 */
	struct UMeleeContinousAttackComponent_C_GetAttackDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.GetFirePointComponent
	 */
	struct UMeleeContinousAttackComponent_C_GetFirePointComponent_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.GetWeaponActor
	 */
	struct UMeleeContinousAttackComponent_C_GetWeaponActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.IsAttacking
	 */
	struct UMeleeContinousAttackComponent_C_IsAttacking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.IsAttackValid
	 */
	struct UMeleeContinousAttackComponent_C_IsAttackValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.IsReadyToAttack
	 */
	struct UMeleeContinousAttackComponent_C_IsReadyToAttack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZK1V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.IsReloading
	 */
	struct UMeleeContinousAttackComponent_C_IsReloading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.NeedWaitForFinish
	 */
	struct UMeleeContinousAttackComponent_C_NeedWaitForFinish_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.ToggleState
	 */
	struct UMeleeContinousAttackComponent_C_ToggleState_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.IsInRange
	 */
	struct UMeleeContinousAttackComponent_C_IsInRange_Params
	{
	public:
		bool                                                       InRange;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.Reload
	 */
	struct UMeleeContinousAttackComponent_C_Reload_Params
	{	};

	/**
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.ReceiveBeginPlay
	 */
	struct UMeleeContinousAttackComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.SetWeaponVisible
	 */
	struct UMeleeContinousAttackComponent_C_SetWeaponVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.OwnerInitialised
	 */
	struct UMeleeContinousAttackComponent_C_OwnerInitialised_Params
	{	};

	/**
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.OnOutOfAmmo
	 */
	struct UMeleeContinousAttackComponent_C_OnOutOfAmmo_Params
	{	};

	/**
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.DestroyWeapon
	 */
	struct UMeleeContinousAttackComponent_C_DestroyWeapon_Params
	{	};

	/**
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.TestAttack
	 */
	struct UMeleeContinousAttackComponent_C_TestAttack_Params
	{	};

	/**
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.HitTest
	 */
	struct UMeleeContinousAttackComponent_C_HitTest_Params
	{	};

	/**
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.StartAttack
	 */
	struct UMeleeContinousAttackComponent_C_StartAttack_Params
	{	};

	/**
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.StopAttack
	 */
	struct UMeleeContinousAttackComponent_C_StopAttack_Params
	{	};

	/**
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.OnMeleeAttackHit
	 */
	struct UMeleeContinousAttackComponent_C_OnMeleeAttackHit_Params
	{	};

	/**
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.ExecuteUbergraph_MeleeContinousAttackComponent
	 */
	struct UMeleeContinousAttackComponent_C_ExecuteUbergraph_MeleeContinousAttackComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GI7A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.OnMeleeSwing__DelegateSignature
	 */
	struct UMeleeContinousAttackComponent_C_OnMeleeSwing__DelegateSignature_Params
	{	};

	/**
	 * Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.OnTargetHit__DelegateSignature
	 */
	struct UMeleeContinousAttackComponent_C_OnTargetHit__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
