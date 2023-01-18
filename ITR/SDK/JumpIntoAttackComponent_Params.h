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
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.GetAttackDistance
	 */
	struct UJumpIntoAttackComponent_C_GetAttackDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.GetFirePointComponent
	 */
	struct UJumpIntoAttackComponent_C_GetFirePointComponent_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.GetWeaponActor
	 */
	struct UJumpIntoAttackComponent_C_GetWeaponActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.IsAttacking
	 */
	struct UJumpIntoAttackComponent_C_IsAttacking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.IsAttackValid
	 */
	struct UJumpIntoAttackComponent_C_IsAttackValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.IsReadyToAttack
	 */
	struct UJumpIntoAttackComponent_C_IsReadyToAttack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.IsReloading
	 */
	struct UJumpIntoAttackComponent_C_IsReloading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.NeedWaitForFinish
	 */
	struct UJumpIntoAttackComponent_C_NeedWaitForFinish_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.DoUnstuck
	 */
	struct UJumpIntoAttackComponent_C_DoUnstuck_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.DoStuck
	 */
	struct UJumpIntoAttackComponent_C_DoStuck_Params
	{
	public:
		struct FVector                                             Point;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x000C(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.InstigateDamage
	 */
	struct UJumpIntoAttackComponent_C_InstigateDamage_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.JumpFX
	 */
	struct UJumpIntoAttackComponent_C_JumpFX_Params
	{	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.CheckJumpUp
	 */
	struct UJumpIntoAttackComponent_C_CheckJumpUp_Params
	{	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.DestroyWeapon
	 */
	struct UJumpIntoAttackComponent_C_DestroyWeapon_Params
	{	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.ReceiveBeginPlay
	 */
	struct UJumpIntoAttackComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.CheckFinish
	 */
	struct UJumpIntoAttackComponent_C_CheckFinish_Params
	{	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.SetWeaponVisible
	 */
	struct UJumpIntoAttackComponent_C_SetWeaponVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.ResolveStuck
	 */
	struct UJumpIntoAttackComponent_C_ResolveStuck_Params
	{	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.Reload
	 */
	struct UJumpIntoAttackComponent_C_Reload_Params
	{	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OwnerInitialised
	 */
	struct UJumpIntoAttackComponent_C_OwnerInitialised_Params
	{	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnOutOfAmmo
	 */
	struct UJumpIntoAttackComponent_C_OnOutOfAmmo_Params
	{	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnMeleeAttackHit
	 */
	struct UJumpIntoAttackComponent_C_OnMeleeAttackHit_Params
	{	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.ReceiveTick
	 */
	struct UJumpIntoAttackComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.StartAttack
	 */
	struct UJumpIntoAttackComponent_C_StartAttack_Params
	{	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.StopAttack
	 */
	struct UJumpIntoAttackComponent_C_StopAttack_Params
	{	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnCapsuleHit
	 */
	struct UJumpIntoAttackComponent_C_OnCapsuleHit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.ExecuteUbergraph_JumpIntoAttackComponent
	 */
	struct UJumpIntoAttackComponent_C_ExecuteUbergraph_JumpIntoAttackComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnBounce__DelegateSignature
	 */
	struct UJumpIntoAttackComponent_C_OnBounce__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnJumpUp__DelegateSignature
	 */
	struct UJumpIntoAttackComponent_C_OnJumpUp__DelegateSignature_Params
	{	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnUnstuck__DelegateSignature
	 */
	struct UJumpIntoAttackComponent_C_OnUnstuck__DelegateSignature_Params
	{	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnStuck__DelegateSignature
	 */
	struct UJumpIntoAttackComponent_C_OnStuck__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnAttackLaunched__DelegateSignature
	 */
	struct UJumpIntoAttackComponent_C_OnAttackLaunched__DelegateSignature_Params
	{	};

	/**
	 * Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnDamageInstigated__DelegateSignature
	 */
	struct UJumpIntoAttackComponent_C_OnDamageInstigated__DelegateSignature_Params
	{
	public:
		class AActor*                                              To;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
