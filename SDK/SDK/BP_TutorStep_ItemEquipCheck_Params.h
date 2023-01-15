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
	 * Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.KillMarks
	 */
	struct ABP_TutorStep_ItemEquipCheck_C_KillMarks_Params
	{	};

	/**
	 * Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.FindItemActor
	 */
	struct ABP_TutorStep_ItemEquipCheck_C_FindItemActor_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3V6O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.DoExecute
	 */
	struct ABP_TutorStep_ItemEquipCheck_C_DoExecute_Params
	{	};

	/**
	 * Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.CheckIfPickedUp
	 */
	struct ABP_TutorStep_ItemEquipCheck_C_CheckIfPickedUp_Params
	{	};

	/**
	 * Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.FinishStep
	 */
	struct ABP_TutorStep_ItemEquipCheck_C_FinishStep_Params
	{	};

	/**
	 * Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.ReceiveTick
	 */
	struct ABP_TutorStep_ItemEquipCheck_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.DoStop
	 */
	struct ABP_TutorStep_ItemEquipCheck_C_DoStop_Params
	{	};

	/**
	 * Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.DoPrepare
	 */
	struct ABP_TutorStep_ItemEquipCheck_C_DoPrepare_Params
	{	};

	/**
	 * Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.OnLevelPrepare
	 */
	struct ABP_TutorStep_ItemEquipCheck_C_OnLevelPrepare_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.SkipStep
	 */
	struct ABP_TutorStep_ItemEquipCheck_C_SkipStep_Params
	{	};

	/**
	 * Function BP_TutorStep_ItemEquipCheck.BP_TutorStep_ItemEquipCheck_C.ExecuteUbergraph_BP_TutorStep_ItemEquipCheck
	 */
	struct ABP_TutorStep_ItemEquipCheck_C_ExecuteUbergraph_BP_TutorStep_ItemEquipCheck_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DGMO[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
