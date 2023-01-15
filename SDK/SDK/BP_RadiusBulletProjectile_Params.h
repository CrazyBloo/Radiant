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
	 * Function BP_RadiusBulletProjectile.BP_RadiusBulletProjectile_C.OnSpawnImpact
	 */
	struct ABP_RadiusBulletProjectile_C_OnSpawnImpact_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		float                                                      Scale;                                                   // 0x0088(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RadiusBulletProjectile.BP_RadiusBulletProjectile_C.BndEvt__BP_RadiusBulletProjectile_BulletComponent_K2Node_ComponentBoundEvent_2_BulletComponentRicochet__DelegateSignature
	 */
	struct ABP_RadiusBulletProjectile_C_BndEvt__BP_RadiusBulletProjectile_BulletComponent_K2Node_ComponentBoundEvent_2_BulletComponentRicochet__DelegateSignature_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Force;                                                   // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsPenetration;                                           // 0x0018(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RadiusBulletProjectile.BP_RadiusBulletProjectile_C.BndEvt__BP_RadiusBulletProjectile_BulletImpulseComponent_K2Node_ComponentBoundEvent_0_BulletImpulseWhistle__DelegateSignature
	 */
	struct ABP_RadiusBulletProjectile_C_BndEvt__BP_RadiusBulletProjectile_BulletImpulseComponent_K2Node_ComponentBoundEvent_0_BulletImpulseWhistle__DelegateSignature_Params
	{	};

	/**
	 * Function BP_RadiusBulletProjectile.BP_RadiusBulletProjectile_C.K2_OnReset
	 */
	struct ABP_RadiusBulletProjectile_C_K2_OnReset_Params
	{	};

	/**
	 * Function BP_RadiusBulletProjectile.BP_RadiusBulletProjectile_C.ExecuteUbergraph_BP_RadiusBulletProjectile
	 */
	struct ABP_RadiusBulletProjectile_C_ExecuteUbergraph_BP_RadiusBulletProjectile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
