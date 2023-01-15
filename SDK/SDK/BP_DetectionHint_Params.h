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
	 * Function BP_DetectionHint.BP_DetectionHint_C.OnGameStarted
	 */
	struct ABP_DetectionHint_C_OnGameStarted_Params
	{	};

	/**
	 * Function BP_DetectionHint.BP_DetectionHint_C.ReceiveEndPlay
	 */
	struct ABP_DetectionHint_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DetectionHint.BP_DetectionHint_C.ReceiveTick
	 */
	struct ABP_DetectionHint_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DetectionHint.BP_DetectionHint_C.ExecuteUbergraph_BP_DetectionHint
	 */
	struct ABP_DetectionHint_C_ExecuteUbergraph_BP_DetectionHint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
