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
	 * Function BP_TutorialZone.BP_TutorialZone_C.CheckInside
	 */
	struct ABP_TutorialZone_C_CheckInside_Params
	{	};

	/**
	 * Function BP_TutorialZone.BP_TutorialZone_C.SpeedControll
	 */
	struct ABP_TutorialZone_C_SpeedControll_Params
	{	};

	/**
	 * Function BP_TutorialZone.BP_TutorialZone_C.Activate
	 */
	struct ABP_TutorialZone_C_Activate_Params
	{	};

	/**
	 * Function BP_TutorialZone.BP_TutorialZone_C.Deactivate
	 */
	struct ABP_TutorialZone_C_Deactivate_Params
	{	};

	/**
	 * Function BP_TutorialZone.BP_TutorialZone_C.OnLevelStarted
	 */
	struct ABP_TutorialZone_C_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorialZone.BP_TutorialZone_C.OnTransitionStartOnce
	 */
	struct ABP_TutorialZone_C_OnTransitionStartOnce_Params
	{	};

	/**
	 * Function BP_TutorialZone.BP_TutorialZone_C.ExecuteUbergraph_BP_TutorialZone
	 */
	struct ABP_TutorialZone_C_ExecuteUbergraph_BP_TutorialZone_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D63N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
