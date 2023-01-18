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
	 * Function BP_TutorStep_MoveHere.BP_TutorStep_MoveHere_C.OccupyWidget
	 */
	struct ABP_TutorStep_MoveHere_C_OccupyWidget_Params
	{	};

	/**
	 * Function BP_TutorStep_MoveHere.BP_TutorStep_MoveHere_C.DoExecute
	 */
	struct ABP_TutorStep_MoveHere_C_DoExecute_Params
	{	};

	/**
	 * Function BP_TutorStep_MoveHere.BP_TutorStep_MoveHere_C.CheckPlayer
	 */
	struct ABP_TutorStep_MoveHere_C_CheckPlayer_Params
	{	};

	/**
	 * Function BP_TutorStep_MoveHere.BP_TutorStep_MoveHere_C.DoStop
	 */
	struct ABP_TutorStep_MoveHere_C_DoStop_Params
	{	};

	/**
	 * Function BP_TutorStep_MoveHere.BP_TutorStep_MoveHere_C.DoPrepare
	 */
	struct ABP_TutorStep_MoveHere_C_DoPrepare_Params
	{	};

	/**
	 * Function BP_TutorStep_MoveHere.BP_TutorStep_MoveHere_C.SkipStep
	 */
	struct ABP_TutorStep_MoveHere_C_SkipStep_Params
	{	};

	/**
	 * Function BP_TutorStep_MoveHere.BP_TutorStep_MoveHere_C.ReceiveEndPlay
	 */
	struct ABP_TutorStep_MoveHere_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorStep_MoveHere.BP_TutorStep_MoveHere_C.ExecuteUbergraph_BP_TutorStep_MoveHere
	 */
	struct ABP_TutorStep_MoveHere_C_ExecuteUbergraph_BP_TutorStep_MoveHere_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_036B[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
