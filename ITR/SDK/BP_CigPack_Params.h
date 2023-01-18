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
	 * Function BP_CigPack.BP_CigPack_C.RefillBulletPoints
	 */
	struct ABP_CigPack_C_RefillBulletPoints_Params
	{	};

	/**
	 * Function BP_CigPack.BP_CigPack_C.ProcessTriggerOverlap
	 */
	struct ABP_CigPack_C_ProcessTriggerOverlap_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CigPack.BP_CigPack_C.InitBought
	 */
	struct ABP_CigPack_C_InitBought_Params
	{	};

	/**
	 * Function BP_CigPack.BP_CigPack_C.OnUsed
	 */
	struct ABP_CigPack_C_OnUsed_Params
	{	};

	/**
	 * Function BP_CigPack.BP_CigPack_C.ExecuteUbergraph_BP_CigPack
	 */
	struct ABP_CigPack_C_ExecuteUbergraph_BP_CigPack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
