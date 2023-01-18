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
	 * WidgetBlueprintGeneratedClass WBP_ListSelector.WBP_ListSelector_C
	 * Size -> 0x0061 (FullSize[0x02C1] - InheritedSize[0x0260])
	 */
	class UWBP_ListSelector_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_Left;                                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_Right;                                            // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text;                                                    // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FText>                                        Variants;                                                // 0x0280(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       Enabled;                                                 // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NT1H[0x3];                                   // 0x0291(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Index;                                                   // 0x0294(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnChanged;                                               // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    minCycleOverride;                                        // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    maxCycleOverride;                                        // 0x02AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<int32_t>                                            IndexesOverride;                                         // 0x02B0(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       CycleRound;                                              // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		int32_t GetMaxIndex();
		int32_t GetMinIndex();
		void SetupSelector(TArray<class FText>* Variants, TArray<int32_t>* IndexesOverride, int32_t Index);
		void SetSelectorIndex(int32_t Index);
		void GetSelectorIndex(int32_t* Index);
		void UpdateButtons();
		void UpdateText();
		void SetSelectorEnabled(bool Enabled);
		void IsSelectorEnabled(bool* returnvalue);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
		void ExecuteUbergraph_WBP_ListSelector(int32_t EntryPoint);
		void OnChanged__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
