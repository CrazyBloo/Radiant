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
	 * Function BP_MissionExecutor.BP_MissionExecutor_C.SpawnAdditionalMonsters
	 */
	struct ABP_MissionExecutor_C_SpawnAdditionalMonsters_Params
	{	};

	/**
	 * Function BP_MissionExecutor.BP_MissionExecutor_C.SpawnAdditionalCorpses
	 */
	struct ABP_MissionExecutor_C_SpawnAdditionalCorpses_Params
	{	};

	/**
	 * Function BP_MissionExecutor.BP_MissionExecutor_C.OnTransitionStart
	 */
	struct ABP_MissionExecutor_C_OnTransitionStart_Params
	{	};

	/**
	 * Function BP_MissionExecutor.BP_MissionExecutor_C.ReceiveEndPlay
	 */
	struct ABP_MissionExecutor_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MissionExecutor.BP_MissionExecutor_C.OnTransitionEnd
	 */
	struct ABP_MissionExecutor_C_OnTransitionEnd_Params
	{	};

	/**
	 * Function BP_MissionExecutor.BP_MissionExecutor_C.ExecuteUbergraph_BP_MissionExecutor
	 */
	struct ABP_MissionExecutor_C_ExecuteUbergraph_BP_MissionExecutor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
