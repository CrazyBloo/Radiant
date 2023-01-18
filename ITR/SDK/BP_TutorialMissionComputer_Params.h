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
	 * Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.CheckPlayerLevelBlock
	 */
	struct ABP_TutorialMissionComputer_C_CheckPlayerLevelBlock_Params
	{	};

	/**
	 * Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.PrepareCassetteRecord
	 */
	struct ABP_TutorialMissionComputer_C_PrepareCassetteRecord_Params
	{	};

	/**
	 * Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.UpdateCurrentPage
	 */
	struct ABP_TutorialMissionComputer_C_UpdateCurrentPage_Params
	{
	public:
		bool                                                       notUpdated;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_89M5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.OnLevelStarted
	 */
	struct ABP_TutorialMissionComputer_C_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.ReceiveTick
	 */
	struct ABP_TutorialMissionComputer_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.GoToMissions
	 */
	struct ABP_TutorialMissionComputer_C_GoToMissions_Params
	{	};

	/**
	 * Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.GoToMainPage
	 */
	struct ABP_TutorialMissionComputer_C_GoToMainPage_Params
	{	};

	/**
	 * Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.GoToTapes
	 */
	struct ABP_TutorialMissionComputer_C_GoToTapes_Params
	{	};

	/**
	 * Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.GoToExecuting
	 */
	struct ABP_TutorialMissionComputer_C_GoToExecuting_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.GoToBriefing
	 */
	struct ABP_TutorialMissionComputer_C_GoToBriefing_Params
	{	};

	/**
	 * Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.ReceiveBeginPlay
	 */
	struct ABP_TutorialMissionComputer_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.BndEvt__BPC_RecordPlayer_K2Node_ComponentBoundEvent_4_OnRecordFinished__DelegateSignature
	 */
	struct ABP_TutorialMissionComputer_C_BndEvt__BPC_RecordPlayer_K2Node_ComponentBoundEvent_4_OnRecordFinished__DelegateSignature_Params
	{	};

	/**
	 * Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.CheckDist
	 */
	struct ABP_TutorialMissionComputer_C_CheckDist_Params
	{	};

	/**
	 * Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_TutorialMissionComputer_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SFII[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.BndEvt__Box_OnOff_Overlap_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_TutorialMissionComputer_C_BndEvt__Box_OnOff_Overlap_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.GoToNotice
	 */
	struct ABP_TutorialMissionComputer_C_GoToNotice_Params
	{	};

	/**
	 * Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.NoticeAccepted
	 */
	struct ABP_TutorialMissionComputer_C_NoticeAccepted_Params
	{	};

	/**
	 * Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.SetTurnedOff
	 */
	struct ABP_TutorialMissionComputer_C_SetTurnedOff_Params
	{	};

	/**
	 * Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.EnableCassetes
	 */
	struct ABP_TutorialMissionComputer_C_EnableCassetes_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.BndEvt__VRButton_K2Node_ComponentBoundEvent_5_VRButtonStateChangedSignature__DelegateSignature
	 */
	struct ABP_TutorialMissionComputer_C_BndEvt__VRButton_K2Node_ComponentBoundEvent_5_VRButtonStateChangedSignature__DelegateSignature_Params
	{
	public:
		bool                                                       ButtonState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ELQX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InteractingActor;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 InteractingComponent;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.OnPlayerLevelChangeEvent
	 */
	struct ABP_TutorialMissionComputer_C_OnPlayerLevelChangeEvent_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.ExecuteUbergraph_BP_TutorialMissionComputer
	 */
	struct ABP_TutorialMissionComputer_C_ExecuteUbergraph_BP_TutorialMissionComputer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TutorialMissionComputer.BP_TutorialMissionComputer_C.OnComputerUnlocked__DelegateSignature
	 */
	struct ABP_TutorialMissionComputer_C_OnComputerUnlocked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
