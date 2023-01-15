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
	 * Function BP_Anomaly_Gas.BP_Anomaly_Gas_C.UserConstructionScript
	 */
	struct ABP_Anomaly_Gas_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Anomaly_Gas.BP_Anomaly_Gas_C.ReceiveTick
	 */
	struct ABP_Anomaly_Gas_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Gas.BP_Anomaly_Gas_C.SplineSet
	 */
	struct ABP_Anomaly_Gas_C_SplineSet_Params
	{	};

	/**
	 * Function BP_Anomaly_Gas.BP_Anomaly_Gas_C.OnLevelStarted
	 */
	struct ABP_Anomaly_Gas_C_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Gas.BP_Anomaly_Gas_C.OnOverlapTimer
	 */
	struct ABP_Anomaly_Gas_C_OnOverlapTimer_Params
	{	};

	/**
	 * Function BP_Anomaly_Gas.BP_Anomaly_Gas_C.OnSetupEvent
	 */
	struct ABP_Anomaly_Gas_C_OnSetupEvent_Params
	{	};

	/**
	 * Function BP_Anomaly_Gas.BP_Anomaly_Gas_C.ExecuteUbergraph_BP_Anomaly_Gas
	 */
	struct ABP_Anomaly_Gas_C_ExecuteUbergraph_BP_Anomaly_Gas_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MXZW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
