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
	 * Function BTT_MoveToPOIActor.BTT_MoveToPOIActor_C.OnMoveFinished_E8DF58754BC47E1EB30724A11857BD0D
	 */
	struct UBTT_MoveToPOIActor_C_OnMoveFinished_E8DF58754BC47E1EB30724A11857BD0D_Params
	{
	public:
		EPathFollowingResult                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CBZM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AAIController*                                       AIController;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_MoveToPOIActor.BTT_MoveToPOIActor_C.OnRequestFailed_E8DF58754BC47E1EB30724A11857BD0D
	 */
	struct UBTT_MoveToPOIActor_C_OnRequestFailed_E8DF58754BC47E1EB30724A11857BD0D_Params
	{	};

	/**
	 * Function BTT_MoveToPOIActor.BTT_MoveToPOIActor_C.StuckCheck
	 */
	struct UBTT_MoveToPOIActor_C_StuckCheck_Params
	{	};

	/**
	 * Function BTT_MoveToPOIActor.BTT_MoveToPOIActor_C.ReceiveExecute
	 */
	struct UBTT_MoveToPOIActor_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_MoveToPOIActor.BTT_MoveToPOIActor_C.CheckDistance
	 */
	struct UBTT_MoveToPOIActor_C_CheckDistance_Params
	{	};

	/**
	 * Function BTT_MoveToPOIActor.BTT_MoveToPOIActor_C.ReceiveAbortAI
	 */
	struct UBTT_MoveToPOIActor_C_ReceiveAbortAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_MoveToPOIActor.BTT_MoveToPOIActor_C.ExecuteUbergraph_BTT_MoveToPOIActor
	 */
	struct UBTT_MoveToPOIActor_C_ExecuteUbergraph_BTT_MoveToPOIActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
