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
	 * Function BP_Anomaly_Ship.BP_Anomaly_Ship_C.ReceiveBeginPlay
	 */
	struct ABP_Anomaly_Ship_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Anomaly_Ship.BP_Anomaly_Ship_C.ReceiveTick
	 */
	struct ABP_Anomaly_Ship_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Ship.BP_Anomaly_Ship_C.ExecuteUbergraph_BP_Anomaly_Ship
	 */
	struct ABP_Anomaly_Ship_C_ExecuteUbergraph_BP_Anomaly_Ship_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
