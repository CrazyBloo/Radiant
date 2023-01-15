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
	 * Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.CheckNPCTags
	 */
	struct ABP_Anomaly_Pandemonium_C_CheckNPCTags_Params
	{	};

	/**
	 * Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.UserConstructionScript
	 */
	struct ABP_Anomaly_Pandemonium_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.ReceiveDestroyed
	 */
	struct ABP_Anomaly_Pandemonium_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.OnGameStarted
	 */
	struct ABP_Anomaly_Pandemonium_C_OnGameStarted_Params
	{	};

	/**
	 * Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.ReceiveTick
	 */
	struct ABP_Anomaly_Pandemonium_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.SpawnChar
	 */
	struct ABP_Anomaly_Pandemonium_C_SpawnChar_Params
	{	};

	/**
	 * Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.OnLevelStarted
	 */
	struct ABP_Anomaly_Pandemonium_C_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.OnTransitionStart
	 */
	struct ABP_Anomaly_Pandemonium_C_OnTransitionStart_Params
	{	};

	/**
	 * Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.OnGameShutdownEvent
	 */
	struct ABP_Anomaly_Pandemonium_C_OnGameShutdownEvent_Params
	{	};

	/**
	 * Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.OnOverlapTimer
	 */
	struct ABP_Anomaly_Pandemonium_C_OnOverlapTimer_Params
	{	};

	/**
	 * Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.OnSetupEvent
	 */
	struct ABP_Anomaly_Pandemonium_C_OnSetupEvent_Params
	{	};

	/**
	 * Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.OnCharEndPlay
	 */
	struct ABP_Anomaly_Pandemonium_C_OnCharEndPlay_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEndPlayReason                                             EndPlayReason;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.ExecuteUbergraph_BP_Anomaly_Pandemonium
	 */
	struct ABP_Anomaly_Pandemonium_C_ExecuteUbergraph_BP_Anomaly_Pandemonium_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
