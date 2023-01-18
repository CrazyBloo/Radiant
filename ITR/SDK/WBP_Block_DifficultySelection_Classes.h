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
	 * WidgetBlueprintGeneratedClass WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C
	 * Size -> 0x0148 (FullSize[0x03A8] - InheritedSize[0x0260])
	 */
	class UWBP_Block_DifficultySelection_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_Button_Fixed_C*                                 Btn_Preset_Custom;                                       // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Fixed_C*                                 Btn_Preset_Easy;                                         // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Fixed_C*                                 Btn_Preset_Hard;                                         // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Fixed_C*                                 Btn_Preset_Normal;                                       // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Back_C*                                  Button_Back;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Button_Fixed_C*                                 Button_Start;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_CheckBox_C*                                     CheckBox_Ironman;                                        // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_CheckBox_C*                                     CheckBox_Tutorial;                                       // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Background;                                        // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_Preset_Custom;                                      // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_Preset_Easy;                                        // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_Preset_Hard;                                        // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_Preset_Normal;                                      // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VB_CustomDifficulty;                                     // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VB_main;                                                 // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Block_GameDifficulty_C*                         WBP_Block_GameDifficulty;                                // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnDifficultySelected;                                    // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       HideBackground;                                          // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_LJY9[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EPRGameDifficultyPreset, class UWBP_Button_Fixed_C*>  PresetButtons;                                           // 0x0300(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		EPRGameDifficultyPreset                                    SelectedPreset;                                          // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OLCK[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EPRGameDifficultyPreset, class UTextBlock*>           PresetTexts;                                             // 0x0358(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void GetStartWithTutorial(bool* bWithTutorial);
		void SelectPreset(EPRGameDifficultyPreset Preset);
		void Construct();
		void BndEvt__Button_Start_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Custom_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature();
		void BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Easy_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature();
		void BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Normal_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature();
		void BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Realistic_K2Node_ComponentBoundEvent_4_ButtonPressed__DelegateSignature();
		void BndEvt__WBP_Block_DifficultySelection_Button_Back_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature();
		void ExecuteUbergraph_WBP_Block_DifficultySelection(int32_t EntryPoint);
		void OnDifficultySelected__DelegateSignature(const struct FRadiusGameDifficulty& Difficulty, bool Tutorial, bool Ironman);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
