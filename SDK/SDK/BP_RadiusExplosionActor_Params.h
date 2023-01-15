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
	 * Function BP_RadiusExplosionActor.BP_RadiusExplosionActor_C.IsInAir
	 */
	struct ABP_RadiusExplosionActor_C_IsInAir_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YL0C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RadiusExplosionActor.BP_RadiusExplosionActor_C.UserConstructionScript
	 */
	struct ABP_RadiusExplosionActor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_RadiusExplosionActor.BP_RadiusExplosionActor_C.Timeline_0__FinishedFunc
	 */
	struct ABP_RadiusExplosionActor_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_RadiusExplosionActor.BP_RadiusExplosionActor_C.Timeline_0__UpdateFunc
	 */
	struct ABP_RadiusExplosionActor_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_RadiusExplosionActor.BP_RadiusExplosionActor_C.VisRecoil
	 */
	struct ABP_RadiusExplosionActor_C_VisRecoil_Params
	{
	public:
		struct FVector                                             ExplosionPos;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RadiusExplosionActor.BP_RadiusExplosionActor_C.Launch
	 */
	struct ABP_RadiusExplosionActor_C_Launch_Params
	{	};

	/**
	 * Function BP_RadiusExplosionActor.BP_RadiusExplosionActor_C.ExecuteUbergraph_BP_RadiusExplosionActor
	 */
	struct ABP_RadiusExplosionActor_C_ExecuteUbergraph_BP_RadiusExplosionActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B0KT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
