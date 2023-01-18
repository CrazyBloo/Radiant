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
	 * Function CubitUniProjectile.CubitUniProjectile_C.UserConstructionScript
	 */
	struct ACubitUniProjectile_C_UserConstructionScript_Params
	{	};

	/**
	 * Function CubitUniProjectile.CubitUniProjectile_C.RicochetON
	 */
	struct ACubitUniProjectile_C_RicochetON_Params
	{	};

	/**
	 * Function CubitUniProjectile.CubitUniProjectile_C.ReceiveTick
	 */
	struct ACubitUniProjectile_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CubitUniProjectile.CubitUniProjectile_C.SpawnFX
	 */
	struct ACubitUniProjectile_C_SpawnFX_Params
	{	};

	/**
	 * Function CubitUniProjectile.CubitUniProjectile_C.BndEvt__Projectile_K2Node_ComponentBoundEvent_9_OnProjectileStopDelegate__DelegateSignature
	 */
	struct ACubitUniProjectile_C_BndEvt__Projectile_K2Node_ComponentBoundEvent_9_OnProjectileStopDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function CubitUniProjectile.CubitUniProjectile_C.Kill Projectile NO FX
	 */
	struct ACubitUniProjectile_C_KillProjectileNOFX_Params
	{	};

	/**
	 * Function CubitUniProjectile.CubitUniProjectile_C.ReceiveBeginPlay
	 */
	struct ACubitUniProjectile_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function CubitUniProjectile.CubitUniProjectile_C.BndEvt__Projectile_K2Node_ComponentBoundEvent_132_OnProjectileBounceDelegate__DelegateSignature
	 */
	struct ACubitUniProjectile_C_BndEvt__Projectile_K2Node_ComponentBoundEvent_132_OnProjectileBounceDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             ImpactVelocity;                                          // 0x0088(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CubitUniProjectile.CubitUniProjectile_C.ExecuteUbergraph_CubitUniProjectile
	 */
	struct ACubitUniProjectile_C_ExecuteUbergraph_CubitUniProjectile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
