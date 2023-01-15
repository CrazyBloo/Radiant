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
	 * Function BTT_Bot_MoveTo.BTT_Bot_MoveTo_C.OnMoveFinished_D58B79B44B571A442B6CC2866D51D9C6
	 */
	struct UBTT_Bot_MoveTo_C_OnMoveFinished_D58B79B44B571A442B6CC2866D51D9C6_Params
	{
	public:
		EPathFollowingResult                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T5HZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AAIController*                                       AIController;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_Bot_MoveTo.BTT_Bot_MoveTo_C.OnRequestFailed_D58B79B44B571A442B6CC2866D51D9C6
	 */
	struct UBTT_Bot_MoveTo_C_OnRequestFailed_D58B79B44B571A442B6CC2866D51D9C6_Params
	{	};

	/**
	 * Function BTT_Bot_MoveTo.BTT_Bot_MoveTo_C.ReceiveExecuteAI
	 */
	struct UBTT_Bot_MoveTo_C_ReceiveExecuteAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_Bot_MoveTo.BTT_Bot_MoveTo_C.ExecuteUbergraph_BTT_Bot_MoveTo
	 */
	struct UBTT_Bot_MoveTo_C_ExecuteUbergraph_BTT_Bot_MoveTo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
