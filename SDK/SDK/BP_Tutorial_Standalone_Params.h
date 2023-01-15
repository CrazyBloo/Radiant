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
	 * Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.KillTutor
	 */
	struct ABP_Tutorial_Standalone_C_KillTutor_Params
	{	};

	/**
	 * Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.RestoreTiedItems
	 */
	struct ABP_Tutorial_Standalone_C_RestoreTiedItems_Params
	{	};

	/**
	 * Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.UserConstructionScript
	 */
	struct ABP_Tutorial_Standalone_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Tutorial_Standalone_C_BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YH8A[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.DoRunTutorial
	 */
	struct ABP_Tutorial_Standalone_C_DoRunTutorial_Params
	{	};

	/**
	 * Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.DoStopTutorial
	 */
	struct ABP_Tutorial_Standalone_C_DoStopTutorial_Params
	{	};

	/**
	 * Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.ReceiveTick
	 */
	struct ABP_Tutorial_Standalone_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.ResetTutorial
	 */
	struct ABP_Tutorial_Standalone_C_ResetTutorial_Params
	{	};

	/**
	 * Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.RunNextStep
	 */
	struct ABP_Tutorial_Standalone_C_RunNextStep_Params
	{	};

	/**
	 * Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.OnStepFinish
	 */
	struct ABP_Tutorial_Standalone_C_OnStepFinish_Params
	{	};

	/**
	 * Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.ReceiveBeginPlay
	 */
	struct ABP_Tutorial_Standalone_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.StopStep
	 */
	struct ABP_Tutorial_Standalone_C_StopStep_Params
	{	};

	/**
	 * Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.CheckStartActor
	 */
	struct ABP_Tutorial_Standalone_C_CheckStartActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.OnTransitionEnd
	 */
	struct ABP_Tutorial_Standalone_C_OnTransitionEnd_Params
	{	};

	/**
	 * Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.EventOnTutorialStart
	 */
	struct ABP_Tutorial_Standalone_C_EventOnTutorialStart_Params
	{
	public:
		struct FGameplayTag                                        Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.OnGamePaused
	 */
	struct ABP_Tutorial_Standalone_C_OnGamePaused_Params
	{
	public:
		bool                                                       bPaused;                                                 // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.CheckShowParticles
	 */
	struct ABP_Tutorial_Standalone_C_CheckShowParticles_Params
	{	};

	/**
	 * Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.OnStepFinishEvent
	 */
	struct ABP_Tutorial_Standalone_C_OnStepFinishEvent_Params
	{	};

	/**
	 * Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.OnTransitionStartOnceEvent
	 */
	struct ABP_Tutorial_Standalone_C_OnTransitionStartOnceEvent_Params
	{	};

	/**
	 * Function BP_Tutorial_Standalone.BP_Tutorial_Standalone_C.ExecuteUbergraph_BP_Tutorial_Standalone
	 */
	struct ABP_Tutorial_Standalone_C_ExecuteUbergraph_BP_Tutorial_Standalone_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JQBC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
