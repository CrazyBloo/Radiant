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
	 * Function BP_ObjectiveExecutor_Tutorial.BP_ObjectiveExecutor_Tutorial_C.OnTutorialSequenceFinishedEvent
	 */
	struct ABP_ObjectiveExecutor_Tutorial_C_OnTutorialSequenceFinishedEvent_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ObjectiveExecutor_Tutorial.BP_ObjectiveExecutor_Tutorial_C.Execute
	 */
	struct ABP_ObjectiveExecutor_Tutorial_C_Execute_Params
	{	};

	/**
	 * Function BP_ObjectiveExecutor_Tutorial.BP_ObjectiveExecutor_Tutorial_C.ExecuteUbergraph_BP_ObjectiveExecutor_Tutorial
	 */
	struct ABP_ObjectiveExecutor_Tutorial_C_ExecuteUbergraph_BP_ObjectiveExecutor_Tutorial_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HNGQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
