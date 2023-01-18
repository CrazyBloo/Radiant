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
	 * Function WBP_Cheats.WBP_Cheats_C.UpdateSaveLocationText
	 */
	struct UWBP_Cheats_C_UpdateSaveLocationText_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.HaveGameplayElements
	 */
	struct UWBP_Cheats_C_HaveGameplayElements_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5LOS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.HaveRunningTutorial
	 */
	struct UWBP_Cheats_C_HaveRunningTutorial_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_74ZS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.CheckCheatButtons
	 */
	struct UWBP_Cheats_C_CheckCheatButtons_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatStartMission_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__btn_CheatStartMission_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_CB_Selection_MissionCategory_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_CB_Selection_MissionCategory_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_CB_Selection_MissionId_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_CB_Selection_MissionId_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.OnMissionSelected
	 */
	struct UWBP_Cheats_C_OnMissionSelected_Params
	{
	public:
		class FString                                              MissionInstanceId;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.SetupMissions
	 */
	struct UWBP_Cheats_C_SetupMissions_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.UpdateMissionButton
	 */
	struct UWBP_Cheats_C_UpdateMissionButton_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.UpdateMissionList
	 */
	struct UWBP_Cheats_C_UpdateMissionList_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.Construct
	 */
	struct UWBP_Cheats_C_Construct_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatMoney_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__btn_CheatMoney_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatNextQuest_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__btn_CheatNextQuest_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.UpdateDebugValues
	 */
	struct UWBP_Cheats_C_UpdateDebugValues_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatShowAnoms_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__btn_CheatShowAnoms_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_cheatSpeed_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__btn_cheatSpeed_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_GodMode_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__btn_GodMode_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatInvis_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__btn_CheatInvis_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatAddBeginerStuff_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__btn_CheatAddBeginerStuff_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatDeleteNPCs_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__btn_CheatDeleteNPCs_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.UpdateDateTime
	 */
	struct UWBP_Cheats_C_UpdateDateTime_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.UpdateValuesEvent
	 */
	struct UWBP_Cheats_C_UpdateValuesEvent_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatSkipTutorialStep_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__btn_CheatSkipTutorialStep_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatFinishSequencer_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__btn_CheatFinishSequencer_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatAddTime8_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__btn_CheatAddTime8_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatNightvision_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__btn_CheatNightvision_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.Destruct
	 */
	struct UWBP_Cheats_C_Destruct_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_StopTime_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__btn_StopTime_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__BtnCheatMoney100_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__BtnCheatMoney100_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__BtnCheatMoney10000_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__BtnCheatMoney10000_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatAddTime2_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__btn_CheatAddTime2_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_SwitchTutorialBoxes_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__btn_SwitchTutorialBoxes_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__Slider_Stamina_K2Node_ComponentBoundEvent_15_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__Slider_Stamina_K2Node_ComponentBoundEvent_15_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__Slider_Rest_K2Node_ComponentBoundEvent_16_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__Slider_Rest_K2Node_ComponentBoundEvent_16_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__Slider_Health_K2Node_ComponentBoundEvent_17_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__Slider_Health_K2Node_ComponentBoundEvent_17_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__Slider_Nutrition_K2Node_ComponentBoundEvent_18_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__Slider_Nutrition_K2Node_ComponentBoundEvent_18_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatNoClip_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__btn_CheatNoClip_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__CB_Spawn_Selection_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__CB_Spawn_Selection_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__CB_Selection_Secondary_K2Node_ComponentBoundEvent_23_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__CB_Selection_Secondary_K2Node_ComponentBoundEvent_23_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__CB_Selection_Misc_K2Node_ComponentBoundEvent_24_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__CB_Selection_Misc_K2Node_ComponentBoundEvent_24_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__CB_Selection_Ammo_K2Node_ComponentBoundEvent_25_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__CB_Selection_Ammo_K2Node_ComponentBoundEvent_25_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__CB_Selection_Attach_K2Node_ComponentBoundEvent_22_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__CB_Selection_Attach_K2Node_ComponentBoundEvent_22_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_CB_Selection_Mags_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_CB_Selection_Mags_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_Cheat_PlayerLevel_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_Cheat_PlayerLevel_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatOpenAllLevels_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_CheatOpenAllLevels_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatTide_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_CheatTide_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_cb_TeleportToLevel_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_cb_TeleportToLevel_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.UpdateStatsValues
	 */
	struct UWBP_Cheats_C_UpdateStatsValues_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_ShowControllers_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_ShowControllers_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_CB_Selection_Cassette_Story_K2Node_ComponentBoundEvent_19_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_CB_Selection_Cassette_Story_K2Node_ComponentBoundEvent_19_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatCrashTest_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_CheatCrashTest_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatReset_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_CheatReset_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_CB_Selection_Achievement_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_CB_Selection_Achievement_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatAchievementsLog_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_CheatAchievementsLog_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_CB_Reload_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_CB_Reload_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_Tab_Missions_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_Tab_Missions_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_Tab_Cheats_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_Tab_Cheats_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.ShowCheats
	 */
	struct UWBP_Cheats_C_ShowCheats_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatDeleteLoot_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_CheatDeleteLoot_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_SaveLocationToggle_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_SaveLocationToggle_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_SaveCopyScopedToAlt_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_SaveCopyScopedToAlt_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_SaveCopyAltToScoped_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_SaveCopyAltToScoped_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_StartProfile_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_StartProfile_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_StopProfile_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_StopProfile_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_Tab_Stats_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_Tab_Stats_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_CB_NoRandom_K2Node_ComponentBoundEvent_42_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_CB_NoRandom_K2Node_ComponentBoundEvent_42_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatSkipTutorial_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_CheatSkipTutorial_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatDeleteSelect_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_CheatDeleteSelect_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_Tab_Profiling_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_Tab_Profiling_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_StartPCProfile_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_StartPCProfile_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatPrintShopBin_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_CheatPrintShopBin_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Cheats.WBP_Cheats_C.ExecuteUbergraph_WBP_Cheats
	 */
	struct UWBP_Cheats_C_ExecuteUbergraph_WBP_Cheats_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
