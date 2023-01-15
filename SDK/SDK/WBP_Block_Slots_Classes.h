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
	 * WidgetBlueprintGeneratedClass WBP_Block_Slots.WBP_Block_Slots_C
	 * Size -> 0x0042 (FullSize[0x02A2] - InheritedSize[0x0260])
	 */
	class UWBP_Block_Slots_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_Background;                                        // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Slot_C*                                         Slot_2;                                                  // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Slot_C*                                         Slot_3;                                                  // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Slot_C*                                         Slot_4;                                                  // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_Slot_C*                                         Slot_5;                                                  // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSelected;                                              // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       NoDisable;                                               // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       DisableIronman;                                          // 0x02A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void Construct();
		void RefreshList();
		void PreConstruct(bool IsDesignTime);
		void Update();
		void BndEvt__Slot_1_K2Node_ComponentBoundEvent_0_OnSlotSelected__DelegateSignature(int32_t SlotNr);
		void BndEvt__Slot_2_K2Node_ComponentBoundEvent_1_OnSlotSelected__DelegateSignature(int32_t SlotNr);
		void BndEvt__Slot_3_K2Node_ComponentBoundEvent_2_OnSlotSelected__DelegateSignature(int32_t SlotNr);
		void BndEvt__WBP_Block_Slots_Slot_4_K2Node_ComponentBoundEvent_3_OnSlotSelected__DelegateSignature(int32_t SlotNr);
		void ExecuteUbergraph_WBP_Block_Slots(int32_t EntryPoint);
		void OnSelected__DelegateSignature(int32_t SlotNr);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
