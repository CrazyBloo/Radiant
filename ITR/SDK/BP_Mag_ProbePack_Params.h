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
	 * Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.GetThrowVelocity
	 */
	struct ABP_Mag_ProbePack_C_GetThrowVelocity_Params
	{
	public:
		float                                                      Mult;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             LinVel;                                                  // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             AngVel;                                                  // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D6L1[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.CacheVelocity
	 */
	struct ABP_Mag_ProbePack_C_CacheVelocity_Params
	{	};

	/**
	 * Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.TryDropAmmo
	 */
	struct ABP_Mag_ProbePack_C_TryDropAmmo_Params
	{	};

	/**
	 * Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.TryTakeOutAmmo
	 */
	struct ABP_Mag_ProbePack_C_TryTakeOutAmmo_Params
	{	};

	/**
	 * Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.StartCacheVelocity
	 */
	struct ABP_Mag_ProbePack_C_StartCacheVelocity_Params
	{	};

	/**
	 * Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.CacheTimer
	 */
	struct ABP_Mag_ProbePack_C_CacheTimer_Params
	{	};

	/**
	 * Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.ThrowItem
	 */
	struct ABP_Mag_ProbePack_C_ThrowItem_Params
	{	};

	/**
	 * Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.OnEndUsed
	 */
	struct ABP_Mag_ProbePack_C_OnEndUsed_Params
	{	};

	/**
	 * Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.StopUse
	 */
	struct ABP_Mag_ProbePack_C_StopUse_Params
	{	};

	/**
	 * Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.OnStart
	 */
	struct ABP_Mag_ProbePack_C_OnStart_Params
	{	};

	/**
	 * Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.OnUsed
	 */
	struct ABP_Mag_ProbePack_C_OnUsed_Params
	{	};

	/**
	 * Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.ExecuteUbergraph_BP_Mag_ProbePack
	 */
	struct ABP_Mag_ProbePack_C_ExecuteUbergraph_BP_Mag_ProbePack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
