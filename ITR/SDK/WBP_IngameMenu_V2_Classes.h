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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass WBP_IngameMenu_V2.WBP_IngameMenu_V2_C
	 * Size -> 0x00AB (FullSize[0x030B] - InheritedSize[0x0260])
	 */
	class UWBP_IngameMenu_V2_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    NotifyIronman;                                           // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWBP_Block_ControlsLayout_C*                         Block_ControlsLayout;                                    // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Block_DifficultyConfig_C*                       Block_DifficultyConfig;                                  // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Block_Confirm_C*                                Block_ExitConfirm;                                       // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Block_Saves_C*                                  Block_Saves;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Block_IngameSettings_C*                         Block_Settings;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Block_SettingsGraphics_C*                       Block_SettingsGraphics;                                  // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Block_Slots_C*                                  Block_Slots;                                             // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Center_C*                                Button_Controls;                                         // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Center_C*                                Button_Exit;                                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Center_C*                                Button_Load;                                             // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Center_C*                                Button_MainMenu;                                         // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Center_C*                                Button_Resume;                                           // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Center_C*                                Button_Save;                                             // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Center_C*                                Button_Settings;                                         // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Center_C*                                Button_Unstuck;                                          // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CP_Menu;                                                 // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Background;                                        // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Block_Text_C*                                   IronmanWarning;                                          // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_Version;                                            // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       saving;                                                  // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       exitToMenu;                                              // 0x0309(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       started;                                                 // 0x030A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnGameStartedEventDelegate();
		void Construct();
		void Destruct();
		void BndEvt__Button_Resume_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
		void BndEvt__WBP_Button_Unstuck_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
		void BndEvt__Button_Load_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature();
		void BndEvt__Button_Save_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature();
		void BndEvt__Button_Settings_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature();
		void BndEvt__Button_MainMenu_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature();
		void BndEvt__Button_Exit_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature();
		void BndEvt__Block_Settings_K2Node_ComponentBoundEvent_11_OnBack__DelegateSignature();
		void BndEvt__Block_ExitConfirm_K2Node_ComponentBoundEvent_12_OnSelected__DelegateSignature(bool confirm);
		void BndEvt__Button_Load_K2Node_ComponentBoundEvent_2_OnPressedDisabled__DelegateSignature();
		void BndEvt__Button_Save_K2Node_ComponentBoundEvent_3_OnPressedDisabled__DelegateSignature();
		void BndEvt__Button_Controls_K2Node_ComponentBoundEvent_13_OnPressed__DelegateSignature();
		void BndEvt__Block_ControlsLayout_K2Node_ComponentBoundEvent_14_OnBack__DelegateSignature();
		void BndEvt__Block_Settings_K2Node_ComponentBoundEvent_15_OnDifficultyConfig__DelegateSignature();
		void BndEvt__Block_DifficultyConfig_K2Node_ComponentBoundEvent_16_OnBack__DelegateSignature();
		void BndEvt__Block_Settings_K2Node_ComponentBoundEvent_17_OnGraphicsConfig__DelegateSignature();
		void BndEvt__Block_SettingsGraphics_K2Node_ComponentBoundEvent_18_OnBack__DelegateSignature();
		void BndEvt__WBP_IngameMenu_V2_Block_Saves_K2Node_ComponentBoundEvent_19_OnSelected__DelegateSignature(int32_t SlotNr, int32_t SaveNr);
		void BndEvt__WBP_IngameMenu_V2_Block_Saves_K2Node_ComponentBoundEvent_20_OnBack__DelegateSignature();
		void BndEvt__WBP_IngameMenu_V2_Block_Saves_K2Node_ComponentBoundEvent_9_OnSlots__DelegateSignature();
		void BndEvt__WBP_IngameMenu_V2_Block_Slots_K2Node_ComponentBoundEvent_10_OnSelected__DelegateSignature(int32_t SlotNr);
		void ExecuteUbergraph_WBP_IngameMenu_V2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
