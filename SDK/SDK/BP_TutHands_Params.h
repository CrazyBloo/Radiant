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
	 * Function BP_TutHands.BP_TutHands_C.Scale__FinishedFunc
	 */
	struct ABP_TutHands_C_Scale__FinishedFunc_Params
	{	};

	/**
	 * Function BP_TutHands.BP_TutHands_C.Scale__UpdateFunc
	 */
	struct ABP_TutHands_C_Scale__UpdateFunc_Params
	{	};

	/**
	 * Function BP_TutHands.BP_TutHands_C.ReceiveBeginPlay
	 */
	struct ABP_TutHands_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TutHands.BP_TutHands_C.ReceiveEndPlay
	 */
	struct ABP_TutHands_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutHands.BP_TutHands_C.ReceiveDestroyed
	 */
	struct ABP_TutHands_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_TutHands.BP_TutHands_C.ExecuteUbergraph_BP_TutHands
	 */
	struct ABP_TutHands_C_ExecuteUbergraph_BP_TutHands_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
