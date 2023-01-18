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
	 * Function BP_Anomaly_Sigil.BP_Anomaly_Sigil_C.UserConstructionScript
	 */
	struct ABP_Anomaly_Sigil_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Anomaly_Sigil.BP_Anomaly_Sigil_C.ReceiveDestroyed
	 */
	struct ABP_Anomaly_Sigil_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_Anomaly_Sigil.BP_Anomaly_Sigil_C.OnGameStarted
	 */
	struct ABP_Anomaly_Sigil_C_OnGameStarted_Params
	{	};

	/**
	 * Function BP_Anomaly_Sigil.BP_Anomaly_Sigil_C.OnOverlapTimer
	 */
	struct ABP_Anomaly_Sigil_C_OnOverlapTimer_Params
	{	};

	/**
	 * Function BP_Anomaly_Sigil.BP_Anomaly_Sigil_C.OverlapLeavingTriggered
	 */
	struct ABP_Anomaly_Sigil_C_OverlapLeavingTriggered_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Sigil.BP_Anomaly_Sigil_C.ExecuteUbergraph_BP_Anomaly_Sigil
	 */
	struct ABP_Anomaly_Sigil_C_ExecuteUbergraph_BP_Anomaly_Sigil_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KEIH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
