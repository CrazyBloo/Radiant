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
	 * Function BP_RadiusShrapnelProjectile.BP_RadiusShrapnelProjectile_C.BndEvt__BP_RadiusShrapnelProjectile_ShrapnelComponent_K2Node_ComponentBoundEvent_0_ShrapnelComponentImpact__DelegateSignature
	 */
	struct ABP_RadiusShrapnelProjectile_C_BndEvt__BP_RadiusShrapnelProjectile_ShrapnelComponent_K2Node_ComponentBoundEvent_0_ShrapnelComponentImpact__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		float                                                      Scale;                                                   // 0x0088(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RadiusShrapnelProjectile.BP_RadiusShrapnelProjectile_C.BndEvt__BP_RadiusShrapnelProjectile_ShrapnelComponent_K2Node_ComponentBoundEvent_1_ShrapnelComponentApplyDamage__DelegateSignature
	 */
	struct ABP_RadiusShrapnelProjectile_C_BndEvt__BP_RadiusShrapnelProjectile_ShrapnelComponent_K2Node_ComponentBoundEvent_1_ShrapnelComponentApplyDamage__DelegateSignature_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsPearce;                                                // 0x000C(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_RadiusShrapnelProjectile.BP_RadiusShrapnelProjectile_C.ExecuteUbergraph_BP_RadiusShrapnelProjectile
	 */
	struct ABP_RadiusShrapnelProjectile_C_ExecuteUbergraph_BP_RadiusShrapnelProjectile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
