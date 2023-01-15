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
	 * Function BP_Anomaly_Stomper.BP_Anomaly_Stomper_C.Movement
	 */
	struct ABP_Anomaly_Stomper_C_Movement_Params
	{	};

	/**
	 * Function BP_Anomaly_Stomper.BP_Anomaly_Stomper_C.Step_Effects
	 */
	struct ABP_Anomaly_Stomper_C_Step_Effects_Params
	{	};

	/**
	 * Function BP_Anomaly_Stomper.BP_Anomaly_Stomper_C.OnLevelStarted
	 */
	struct ABP_Anomaly_Stomper_C_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Stomper.BP_Anomaly_Stomper_C.ExecuteUbergraph_BP_Anomaly_Stomper
	 */
	struct ABP_Anomaly_Stomper_C_ExecuteUbergraph_BP_Anomaly_Stomper_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
