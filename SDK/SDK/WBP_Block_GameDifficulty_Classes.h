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
	 * WidgetBlueprintGeneratedClass WBP_Block_GameDifficulty.WBP_Block_GameDifficulty_C
	 * Size -> 0x0098 (FullSize[0x02F8] - InheritedSize[0x0260])
	 */
	class UWBP_Block_GameDifficulty_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWBP_CheckButton_C*                                  Check_PlayerOnMap;                                       // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_CheckButton_C*                                  Check_Sleep;                                             // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_CheckButton_C*                                  Check_Tips;                                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CP_Count;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ListSelector_C*                                 Selector_AnomalyAmount;                                  // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ListSelector_C*                                 Selector_AnomalyDamage;                                  // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ListSelector_C*                                 Selector_EnemyCount;                                     // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ListSelector_C*                                 Selector_EnemyDamage;                                    // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ListSelector_C*                                 Selector_EnemyHealth;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ListSelector_C*                                 Selector_EnemySense;                                     // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ListSelector_C*                                 Selector_Hunger;                                         // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ListSelector_C*                                 Selector_ItemDurability;                                 // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ListSelector_C*                                 Selector_ItemSell;                                       // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ListSelector_C*                                 Selector_LoseOnDeath;                                    // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ListSelector_C*                                 Selector_MissionReward;                                  // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ListSelector_C*                                 Selector_Preset;                                         // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ListSelector_C*                                 Selector_Tide;                                           // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ListSelector_C*                                 Selector_Tracers;                                        // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void GetDifficulty(struct FRadiusGameDifficulty* GameDifficulty);
		void Setup();
		void SetupSelectors();
		void Construct();
		void BndEvt__Selector_Preset_K2Node_ComponentBoundEvent_0_OnChanged__DelegateSignature();
		void BndEvt__Check_PlayerOnMap_K2Node_ComponentBoundEvent_1_CheckBoxPressed__DelegateSignature();
		void BndEvt__Check_Sleep_K2Node_ComponentBoundEvent_2_CheckBoxPressed__DelegateSignature();
		void BndEvt__Selector_EnemySence_K2Node_ComponentBoundEvent_4_OnChanged__DelegateSignature();
		void BndEvt__Selector_LoseOnDeath_K2Node_ComponentBoundEvent_5_OnChanged__DelegateSignature();
		void UpdatePreset();
		void BndEvt__Check_Tips_K2Node_ComponentBoundEvent_6_CheckBoxPressed__DelegateSignature();
		void BndEvt__WBP_Block_GameDifficulty_Selector_AnomalyAmount_K2Node_ComponentBoundEvent_3_OnChanged__DelegateSignature();
		void BndEvt__WBP_Block_GameDifficulty_Selector_AnomalyDamage_K2Node_ComponentBoundEvent_7_OnChanged__DelegateSignature();
		void BndEvt__WBP_Block_GameDifficulty_Selector_EnemyCount_K2Node_ComponentBoundEvent_8_OnChanged__DelegateSignature();
		void BndEvt__WBP_Block_GameDifficulty_Selector_EnemyDamage_K2Node_ComponentBoundEvent_9_OnChanged__DelegateSignature();
		void BndEvt__WBP_Block_GameDifficulty_Selector_EnemyHealth_K2Node_ComponentBoundEvent_10_OnChanged__DelegateSignature();
		void BndEvt__WBP_Block_GameDifficulty_Selector_Hunger_K2Node_ComponentBoundEvent_11_OnChanged__DelegateSignature();
		void BndEvt__WBP_Block_GameDifficulty_Selector_ItemDurability_K2Node_ComponentBoundEvent_12_OnChanged__DelegateSignature();
		void BndEvt__WBP_Block_GameDifficulty_Selector_ItemSell_K2Node_ComponentBoundEvent_13_OnChanged__DelegateSignature();
		void BndEvt__WBP_Block_GameDifficulty_Selector_MissionReward_K2Node_ComponentBoundEvent_14_OnChanged__DelegateSignature();
		void BndEvt__WBP_Block_GameDifficulty_Selector_Tide_K2Node_ComponentBoundEvent_15_OnChanged__DelegateSignature();
		void BndEvt__WBP_Block_GameDifficulty_Selector_Tracers_K2Node_ComponentBoundEvent_16_OnChanged__DelegateSignature();
		void ExecuteUbergraph_WBP_Block_GameDifficulty(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
