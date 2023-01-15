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
	 * Function FireArmedComponent.FireArmedComponent_C.GetAttackDistance
	 */
	struct UFireArmedComponent_C_GetAttackDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FireArmedComponent.FireArmedComponent_C.GetFirePointComponent
	 */
	struct UFireArmedComponent_C_GetFirePointComponent_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FireArmedComponent.FireArmedComponent_C.GetWeaponActor
	 */
	struct UFireArmedComponent_C_GetWeaponActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FireArmedComponent.FireArmedComponent_C.IsAttacking
	 */
	struct UFireArmedComponent_C_IsAttacking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FireArmedComponent.FireArmedComponent_C.IsAttackValid
	 */
	struct UFireArmedComponent_C_IsAttackValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FireArmedComponent.FireArmedComponent_C.IsReadyToAttack
	 */
	struct UFireArmedComponent_C_IsReadyToAttack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FireArmedComponent.FireArmedComponent_C.IsReloading
	 */
	struct UFireArmedComponent_C_IsReloading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FireArmedComponent.FireArmedComponent_C.NeedWaitForFinish
	 */
	struct UFireArmedComponent_C_NeedWaitForFinish_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FireArmedComponent.FireArmedComponent_C.CheckFriendlyFire
	 */
	struct UFireArmedComponent_C_CheckFriendlyFire_Params
	{
	public:
		bool                                                       ClearToFire;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9HWR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FireArmedComponent.FireArmedComponent_C.GetFireLocation
	 */
	struct UFireArmedComponent_C_GetFireLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FireArmedComponent.FireArmedComponent_C.SpawnWeapon
	 */
	struct UFireArmedComponent_C_SpawnWeapon_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FAQD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FireArmedComponent.FireArmedComponent_C.OwnerInitialised
	 */
	struct UFireArmedComponent_C_OwnerInitialised_Params
	{	};

	/**
	 * Function FireArmedComponent.FireArmedComponent_C.OnMeleeAttackHit
	 */
	struct UFireArmedComponent_C_OnMeleeAttackHit_Params
	{	};

	/**
	 * Function FireArmedComponent.FireArmedComponent_C.OnBotFired
	 */
	struct UFireArmedComponent_C_OnBotFired_Params
	{	};

	/**
	 * Function FireArmedComponent.FireArmedComponent_C.OnOutOfAmmo
	 */
	struct UFireArmedComponent_C_OnOutOfAmmo_Params
	{	};

	/**
	 * Function FireArmedComponent.FireArmedComponent_C.StopAttack
	 */
	struct UFireArmedComponent_C_StopAttack_Params
	{	};

	/**
	 * Function FireArmedComponent.FireArmedComponent_C.StartAttack
	 */
	struct UFireArmedComponent_C_StartAttack_Params
	{	};

	/**
	 * Function FireArmedComponent.FireArmedComponent_C.DestroyWeapon
	 */
	struct UFireArmedComponent_C_DestroyWeapon_Params
	{	};

	/**
	 * Function FireArmedComponent.FireArmedComponent_C.SetWeaponVisible
	 */
	struct UFireArmedComponent_C_SetWeaponVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FireArmedComponent.FireArmedComponent_C.ReceiveBeginPlay
	 */
	struct UFireArmedComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function FireArmedComponent.FireArmedComponent_C.Reload
	 */
	struct UFireArmedComponent_C_Reload_Params
	{	};

	/**
	 * Function FireArmedComponent.FireArmedComponent_C.ExecuteUbergraph_FireArmedComponent
	 */
	struct UFireArmedComponent_C_ExecuteUbergraph_FireArmedComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FireArmedComponent.FireArmedComponent_C.OnShotsLimitEvent__DelegateSignature
	 */
	struct UFireArmedComponent_C_OnShotsLimitEvent__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
