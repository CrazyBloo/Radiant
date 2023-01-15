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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass WBP_MainMenu.WBP_MainMenu_C
	 * Size -> 0x00B0 (FullSize[0x0310] - InheritedSize[0x0260])
	 */
	class UWBP_MainMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Block_Confirm_C*                                Block_ConfirmExit;                                       // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Block_Confirm_C*                                Block_ConfirmNewGame;                                    // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Block_ControlsLayout_C*                         Block_ControlsLayout;                                    // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Block_Credits_C*                                Block_Credits;                                           // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Block_DifficultySelection_C*                    Block_DifficultySelection;                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Block_Saves_C*                                  Block_Saves;                                             // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Block_MainSettings_C*                           Block_Settings;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Block_SettingsGraphics_C*                       Block_SettingsGraphics;                                  // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Block_Slots_C*                                  Block_Slots;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Logo;                                              // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Right_C*                                 Menu_Button_Continue;                                    // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Right_C*                                 Menu_Button_Controls;                                    // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Right_C*                                 Menu_Button_Credits;                                     // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Right_C*                                 Menu_Button_Exit;                                        // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Right_C*                                 Menu_Button_Load;                                        // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Right_C*                                 Menu_Button_NewGame;                                     // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Right_C*                                 Menu_Button_Settings;                                    // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_Version;                                            // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       newGameSelection;                                        // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       newGameTutorialSkip;                                     // 0x02F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRadiusGameDifficulty                               newGameDifficulty;                                       // 0x02FA(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       newGameIronman;                                          // 0x030A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QWYM[0x1];                                   // 0x030B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    selectedSlot;                                            // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OpenGameSaveSelection();
		void OpenExitGame();
		void OpenSettings();
		void OpenGameSlotSelection(bool newGame);
		void ResetMenu();
		void Construct();
		void BndEvt__Element_DifficultySelection_K2Node_ComponentBoundEvent_7_OnDifficultySelected__DelegateSignature(const struct FRadiusGameDifficulty& Difficulty, bool Tutorial, bool Ironman);
		void OnContinueGame();
		void BndEvt__WBP_Confirm_K2Node_ComponentBoundEvent_9_OnSelected__DelegateSignature(bool confirm);
		void BndEvt__Button_Continue_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature();
		void BndEvt__Button_NewGame_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature();
		void BndEvt__Menu_Button_Load_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
		void BndEvt__Menu_Button_Settings_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature();
		void BndEvt__Menu_Button_Exit_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature();
		void BndEvt__Menu_Button_Controls_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature();
		void BndEvt__Block_Settings_K2Node_ComponentBoundEvent_4_OnGraphicsConfig__DelegateSignature();
		void BndEvt__Block_SettingsGraphics_K2Node_ComponentBoundEvent_5_OnBack__DelegateSignature();
		void BndEvt__WBP_MainMenu_Block_Slots_K2Node_ComponentBoundEvent_13_OnSelected__DelegateSignature(int32_t SlotNr);
		void BndEvt__WBP_MainMenu_Block_Saves_K2Node_ComponentBoundEvent_14_OnSelected__DelegateSignature(int32_t SlotNr, int32_t SaveNr);
		void BndEvt__WBP_MainMenu_Block_Saves_K2Node_ComponentBoundEvent_15_OnBack__DelegateSignature();
		void BndEvt__WBP_MainMenu_Block_ConfirmNewGame_K2Node_ComponentBoundEvent_8_OnSelected__DelegateSignature(bool confirm);
		void DoStartNewGame();
		void BndEvt__WBP_MainMenu_Menu_Button_Credits_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
		void ExecuteUbergraph_WBP_MainMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
