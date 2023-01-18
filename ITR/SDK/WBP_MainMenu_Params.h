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
	 * Function WBP_MainMenu.WBP_MainMenu_C.OpenGameSaveSelection
	 */
	struct UWBP_MainMenu_C_OpenGameSaveSelection_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.OpenExitGame
	 */
	struct UWBP_MainMenu_C_OpenExitGame_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.OpenSettings
	 */
	struct UWBP_MainMenu_C_OpenSettings_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.OpenGameSlotSelection
	 */
	struct UWBP_MainMenu_C_OpenGameSlotSelection_Params
	{
	public:
		bool                                                       newGame;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.ResetMenu
	 */
	struct UWBP_MainMenu_C_ResetMenu_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.Construct
	 */
	struct UWBP_MainMenu_C_Construct_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Element_DifficultySelection_K2Node_ComponentBoundEvent_7_OnDifficultySelected__DelegateSignature
	 */
	struct UWBP_MainMenu_C_BndEvt__Element_DifficultySelection_K2Node_ComponentBoundEvent_7_OnDifficultySelected__DelegateSignature_Params
	{
	public:
		struct FRadiusGameDifficulty                               Difficulty;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       Tutorial;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Ironman;                                                 // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.OnContinueGame
	 */
	struct UWBP_MainMenu_C_OnContinueGame_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_Confirm_K2Node_ComponentBoundEvent_9_OnSelected__DelegateSignature
	 */
	struct UWBP_MainMenu_C_BndEvt__WBP_Confirm_K2Node_ComponentBoundEvent_9_OnSelected__DelegateSignature_Params
	{
	public:
		bool                                                       confirm;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature
	 */
	struct UWBP_MainMenu_C_BndEvt__Button_Continue_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Button_NewGame_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature
	 */
	struct UWBP_MainMenu_C_BndEvt__Button_NewGame_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Menu_Button_Load_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 */
	struct UWBP_MainMenu_C_BndEvt__Menu_Button_Load_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Menu_Button_Settings_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature
	 */
	struct UWBP_MainMenu_C_BndEvt__Menu_Button_Settings_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Menu_Button_Exit_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature
	 */
	struct UWBP_MainMenu_C_BndEvt__Menu_Button_Exit_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Menu_Button_Controls_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
	 */
	struct UWBP_MainMenu_C_BndEvt__Menu_Button_Controls_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Block_Settings_K2Node_ComponentBoundEvent_4_OnGraphicsConfig__DelegateSignature
	 */
	struct UWBP_MainMenu_C_BndEvt__Block_Settings_K2Node_ComponentBoundEvent_4_OnGraphicsConfig__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Block_SettingsGraphics_K2Node_ComponentBoundEvent_5_OnBack__DelegateSignature
	 */
	struct UWBP_MainMenu_C_BndEvt__Block_SettingsGraphics_K2Node_ComponentBoundEvent_5_OnBack__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_MainMenu_Block_Slots_K2Node_ComponentBoundEvent_13_OnSelected__DelegateSignature
	 */
	struct UWBP_MainMenu_C_BndEvt__WBP_MainMenu_Block_Slots_K2Node_ComponentBoundEvent_13_OnSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    SlotNr;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_MainMenu_Block_Saves_K2Node_ComponentBoundEvent_14_OnSelected__DelegateSignature
	 */
	struct UWBP_MainMenu_C_BndEvt__WBP_MainMenu_Block_Saves_K2Node_ComponentBoundEvent_14_OnSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    SlotNr;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SaveNr;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_MainMenu_Block_Saves_K2Node_ComponentBoundEvent_15_OnBack__DelegateSignature
	 */
	struct UWBP_MainMenu_C_BndEvt__WBP_MainMenu_Block_Saves_K2Node_ComponentBoundEvent_15_OnBack__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_MainMenu_Block_ConfirmNewGame_K2Node_ComponentBoundEvent_8_OnSelected__DelegateSignature
	 */
	struct UWBP_MainMenu_C_BndEvt__WBP_MainMenu_Block_ConfirmNewGame_K2Node_ComponentBoundEvent_8_OnSelected__DelegateSignature_Params
	{
	public:
		bool                                                       confirm;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.DoStartNewGame
	 */
	struct UWBP_MainMenu_C_DoStartNewGame_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_MainMenu_Menu_Button_Credits_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UWBP_MainMenu_C_BndEvt__WBP_MainMenu_Menu_Button_Credits_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MainMenu.WBP_MainMenu_C.ExecuteUbergraph_WBP_MainMenu
	 */
	struct UWBP_MainMenu_C_ExecuteUbergraph_WBP_MainMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
