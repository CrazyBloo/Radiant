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
	 * Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.UpdateMissingItemsList
	 */
	struct ABP_Tutorial_Mission_C_UpdateMissingItemsList_Params
	{	};

	/**
	 * Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.FindItemActor
	 */
	struct ABP_Tutorial_Mission_C_FindItemActor_Params
	{
	public:
		struct FGameplayTag                                        ItemTag;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		bool                                                       success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2JLW[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.GetMissingItem
	 */
	struct ABP_Tutorial_Mission_C_GetMissingItem_Params
	{
	public:
		class AActor*                                              missingActor;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.GetItemNotInInventory
	 */
	struct ABP_Tutorial_Mission_C_GetItemNotInInventory_Params
	{
	public:
		TArray<class AActor*>                                      ItemsArray;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class ABPA_BaseItem_C*                                     itemActor;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.GetCurrentStep
	 */
	struct ABP_Tutorial_Mission_C_GetCurrentStep_Params
	{
	public:
		class ABPA_TutorStep_C*                                    step;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.UserConstructionScript
	 */
	struct ABP_Tutorial_Mission_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.ExecuteNextStep
	 */
	struct ABP_Tutorial_Mission_C_ExecuteNextStep_Params
	{	};

	/**
	 * Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.IncrementAndContinue
	 */
	struct ABP_Tutorial_Mission_C_IncrementAndContinue_Params
	{	};

	/**
	 * Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.MissingItemsCheck
	 */
	struct ABP_Tutorial_Mission_C_MissingItemsCheck_Params
	{	};

	/**
	 * Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.StopStep
	 */
	struct ABP_Tutorial_Mission_C_StopStep_Params
	{	};

	/**
	 * Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.StopSequenceAndShowMissingItem
	 */
	struct ABP_Tutorial_Mission_C_StopSequenceAndShowMissingItem_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.FinishStep
	 */
	struct ABP_Tutorial_Mission_C_FinishStep_Params
	{	};

	/**
	 * Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.FinishSequencer
	 */
	struct ABP_Tutorial_Mission_C_FinishSequencer_Params
	{	};

	/**
	 * Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.ReceiveEndPlay
	 */
	struct ABP_Tutorial_Mission_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.ReceiveTick
	 */
	struct ABP_Tutorial_Mission_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.OnLevelPrepare
	 */
	struct ABP_Tutorial_Mission_C_OnLevelPrepare_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.OnTransitionEnd
	 */
	struct ABP_Tutorial_Mission_C_OnTransitionEnd_Params
	{	};

	/**
	 * Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.DoRunTutorial
	 */
	struct ABP_Tutorial_Mission_C_DoRunTutorial_Params
	{	};

	/**
	 * Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.OnTransitionStartOnceEvent
	 */
	struct ABP_Tutorial_Mission_C_OnTransitionStartOnceEvent_Params
	{	};

	/**
	 * Function BP_Tutorial_Mission.BP_Tutorial_Mission_C.ExecuteUbergraph_BP_Tutorial_Mission
	 */
	struct ABP_Tutorial_Mission_C_ExecuteUbergraph_BP_Tutorial_Mission_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
