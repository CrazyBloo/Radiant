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
	 * Function BPA_Tutorial.BPA_Tutorial_C.GetStepIndex
	 */
	struct ABPA_Tutorial_C_GetStepIndex_Params
	{
	public:
		int32_t                                                    stepIndex;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Tutorial.BPA_Tutorial_C.IsEnabled
	 */
	struct ABPA_Tutorial_C_IsEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M3ER[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_Tutorial.BPA_Tutorial_C.IsFinished
	 */
	struct ABPA_Tutorial_C_IsFinished_Params
	{
	public:
		bool                                                       Finished;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1EDR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_Tutorial.BPA_Tutorial_C.SetStepIndex
	 */
	struct ABPA_Tutorial_C_SetStepIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KDE1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_Tutorial.BPA_Tutorial_C.IncStepIndex
	 */
	struct ABPA_Tutorial_C_IncStepIndex_Params
	{	};

	/**
	 * Function BPA_Tutorial.BPA_Tutorial_C.GetNextStep
	 */
	struct ABPA_Tutorial_C_GetNextStep_Params
	{
	public:
		class ABPA_TutorStep_C*                                    step;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Tutorial.BPA_Tutorial_C.ResetMessageWidget
	 */
	struct ABPA_Tutorial_C_ResetMessageWidget_Params
	{	};

	/**
	 * Function BPA_Tutorial.BPA_Tutorial_C.GetMessageWidget
	 */
	struct ABPA_Tutorial_C_GetMessageWidget_Params
	{
	public:
		class UWidgetComponent*                                    Component;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWBP_TutorialText_C*                                 Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Tutorial.BPA_Tutorial_C.StopTutorial
	 */
	struct ABPA_Tutorial_C_StopTutorial_Params
	{	};

	/**
	 * Function BPA_Tutorial.BPA_Tutorial_C.RunTutorial
	 */
	struct ABPA_Tutorial_C_RunTutorial_Params
	{	};

	/**
	 * Function BPA_Tutorial.BPA_Tutorial_C.SetTutorialRunning
	 */
	struct ABPA_Tutorial_C_SetTutorialRunning_Params
	{
	public:
		bool                                                       running;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Tutorial.BPA_Tutorial_C.IsTutorialRunning
	 */
	struct ABPA_Tutorial_C_IsTutorialRunning_Params
	{
	public:
		bool                                                       running;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Tutorial.BPA_Tutorial_C.InitTutorialSteps
	 */
	struct ABPA_Tutorial_C_InitTutorialSteps_Params
	{	};

	/**
	 * Function BPA_Tutorial.BPA_Tutorial_C.OnTransitionEnd
	 */
	struct ABPA_Tutorial_C_OnTransitionEnd_Params
	{	};

	/**
	 * Function BPA_Tutorial.BPA_Tutorial_C.DoRunTutorial
	 */
	struct ABPA_Tutorial_C_DoRunTutorial_Params
	{	};

	/**
	 * Function BPA_Tutorial.BPA_Tutorial_C.DoStopTutorial
	 */
	struct ABPA_Tutorial_C_DoStopTutorial_Params
	{	};

	/**
	 * Function BPA_Tutorial.BPA_Tutorial_C.ReceiveBeginPlay
	 */
	struct ABPA_Tutorial_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPA_Tutorial.BPA_Tutorial_C.OnTransitionStart
	 */
	struct ABPA_Tutorial_C_OnTransitionStart_Params
	{	};

	/**
	 * Function BPA_Tutorial.BPA_Tutorial_C.SetDisabled
	 */
	struct ABPA_Tutorial_C_SetDisabled_Params
	{	};

	/**
	 * Function BPA_Tutorial.BPA_Tutorial_C.ExecuteUbergraph_BPA_Tutorial
	 */
	struct ABPA_Tutorial_C_ExecuteUbergraph_BPA_Tutorial_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TLER[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
