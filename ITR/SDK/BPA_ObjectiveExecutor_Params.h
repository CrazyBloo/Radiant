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
	 * Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.GetPoints
	 */
	struct ABPA_ObjectiveExecutor_C_GetPoints_Params
	{
	public:
		TArray<struct FVector>                                     Points;                                                  // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.CheckSSVs
	 */
	struct ABPA_ObjectiveExecutor_C_CheckSSVs_Params
	{
	public:
		bool                                                       ready;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7WDZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.Initialize
	 */
	struct ABPA_ObjectiveExecutor_C_Initialize_Params
	{
	public:
		class UMissionData*                                        Mission;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMissionAbstractObjectiveData*                       Objective;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.OnTransitionEnd
	 */
	struct ABPA_ObjectiveExecutor_C_OnTransitionEnd_Params
	{	};

	/**
	 * Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.Execute
	 */
	struct ABPA_ObjectiveExecutor_C_Execute_Params
	{	};

	/**
	 * Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.OnTransitionStart
	 */
	struct ABPA_ObjectiveExecutor_C_OnTransitionStart_Params
	{	};

	/**
	 * Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.ReceiveTick
	 */
	struct ABPA_ObjectiveExecutor_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.ExecuteUbergraph_BPA_ObjectiveExecutor
	 */
	struct ABPA_ObjectiveExecutor_C_ExecuteUbergraph_BPA_ObjectiveExecutor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
