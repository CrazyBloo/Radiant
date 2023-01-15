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
	 * Function BotShootingComponent.BotShootingComponent_C.GetAttackDistance
	 */
	struct UBotShootingComponent_C_GetAttackDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.GetFirePointComponent
	 */
	struct UBotShootingComponent_C_GetFirePointComponent_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.GetWeaponActor
	 */
	struct UBotShootingComponent_C_GetWeaponActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.IsAttacking
	 */
	struct UBotShootingComponent_C_IsAttacking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.IsAttackValid
	 */
	struct UBotShootingComponent_C_IsAttackValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.IsReadyToAttack
	 */
	struct UBotShootingComponent_C_IsReadyToAttack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FMC3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.IsReloading
	 */
	struct UBotShootingComponent_C_IsReloading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.NeedWaitForFinish
	 */
	struct UBotShootingComponent_C_NeedWaitForFinish_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.GetWeaponLocation
	 */
	struct UBotShootingComponent_C_GetWeaponLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.UpdateLowAmmo
	 */
	struct UBotShootingComponent_C_UpdateLowAmmo_Params
	{	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.Update BBHasAmmo
	 */
	struct UBotShootingComponent_C_Update_BBHasAmmo_Params
	{	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.GetFirearmRef
	 */
	struct UBotShootingComponent_C_GetFirearmRef_Params
	{
	public:
		class ABP_FirearmItem_C*                                   FirearmRef;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.CheckFriendlyFire
	 */
	struct UBotShootingComponent_C_CheckFriendlyFire_Params
	{
	public:
		bool                                                       ClearToFire;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_95LV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.GetFireLocation
	 */
	struct UBotShootingComponent_C_GetFireLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5JZB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.SpawnWeapon
	 */
	struct UBotShootingComponent_C_SpawnWeapon_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8UX3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.ReceiveBeginPlay
	 */
	struct UBotShootingComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.OwnerInitialised
	 */
	struct UBotShootingComponent_C_OwnerInitialised_Params
	{	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.OnMeleeAttackHit
	 */
	struct UBotShootingComponent_C_OnMeleeAttackHit_Params
	{	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.BurstFinished
	 */
	struct UBotShootingComponent_C_BurstFinished_Params
	{	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.OnOutOfAmmo
	 */
	struct UBotShootingComponent_C_OnOutOfAmmo_Params
	{	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.StopAttack
	 */
	struct UBotShootingComponent_C_StopAttack_Params
	{	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.StartAttack
	 */
	struct UBotShootingComponent_C_StartAttack_Params
	{	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.Reload
	 */
	struct UBotShootingComponent_C_Reload_Params
	{	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.OwnerInitialized
	 */
	struct UBotShootingComponent_C_OwnerInitialized_Params
	{	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.DestroyWeapon
	 */
	struct UBotShootingComponent_C_DestroyWeapon_Params
	{	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.SetWeaponVisible
	 */
	struct UBotShootingComponent_C_SetWeaponVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.OnBotFired
	 */
	struct UBotShootingComponent_C_OnBotFired_Params
	{	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.ExecuteUbergraph_BotShootingComponent
	 */
	struct UBotShootingComponent_C_ExecuteUbergraph_BotShootingComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.PreFire__DelegateSignature
	 */
	struct UBotShootingComponent_C_PreFire__DelegateSignature_Params
	{	};

	/**
	 * Function BotShootingComponent.BotShootingComponent_C.OnShotsLimitEvent__DelegateSignature
	 */
	struct UBotShootingComponent_C_OnShotsLimitEvent__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
