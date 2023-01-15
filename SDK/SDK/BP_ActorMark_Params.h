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
	 * Function BP_ActorMark.BP_ActorMark_C.Reconstruct
	 */
	struct ABP_ActorMark_C_Reconstruct_Params
	{	};

	/**
	 * Function BP_ActorMark.BP_ActorMark_C.ReceiveTick
	 */
	struct ABP_ActorMark_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ActorMark.BP_ActorMark_C.ReceiveEndPlay
	 */
	struct ABP_ActorMark_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ActorMark.BP_ActorMark_C.OnGameStarted
	 */
	struct ABP_ActorMark_C_OnGameStarted_Params
	{	};

	/**
	 * Function BP_ActorMark.BP_ActorMark_C.ReceiveBeginPlay
	 */
	struct ABP_ActorMark_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ActorMark.BP_ActorMark_C.ExecuteUbergraph_BP_ActorMark
	 */
	struct ABP_ActorMark_C_ExecuteUbergraph_BP_ActorMark_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H4ED[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
