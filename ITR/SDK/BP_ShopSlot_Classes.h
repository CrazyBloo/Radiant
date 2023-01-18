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
	 * BlueprintGeneratedClass BP_ShopSlot.BP_ShopSlot_C
	 * Size -> 0x00C0 (FullSize[0x0358] - InheritedSize[0x0298])
	 */
	class ABP_ShopSlot_C : public AShopSlot
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetComponent*                                    Widget_SlotUI;                                           // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    Widget_Price;                                            // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Pivot_Item;                                              // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_PriceBG;                                              // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Cell;                                                    // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_Size_F98191A5435546D76DD4D4893FE9D587;        // 0x02C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_F98191A5435546D76DD4D4893FE9D587;  // 0x02CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4ALB[0x3];                                   // 0x02CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPlusPressed;                                           // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class ABP_ShopBin_C*                                       shopBinRef;                                              // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Locked;                                                  // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZHGV[0x3];                                   // 0x02F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        ItemTag;                                                 // 0x02F4(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0FSS[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              itemActor;                                               // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              itemClass;                                               // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWBP_TradeSlot_C*                                    widgetUI;                                                // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWBP_SimpleText_C*                                   widgetPrice;                                             // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Disabled;                                                // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HQYG[0x7];                                   // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_ShopComputer_C*                                  ShopCompRef;                                             // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              ComponentToReturnItemActorTo[0x28];                      // 0x0330(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void InitCleanState();
		void InitReferences(class ABP_ShopBin_C** shopBinRef, class ABP_ShopComputer_C** ShopComputerRef);
		void GetBinContentResultTags(TArray<struct FGameplayTag>* Tags);
		void GetItemsPrice(TArray<struct FGameplayTag>* Tags, int32_t* Price);
		void GetItem(struct FGameplayTag* ItemTag, class AActor** itemActor, class UClass** itemClass);
		void UpdatePrice();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void OnPlusClicked();
		void ButtonPlus();
		void ButtonMinus();
		void ShowUI();
		void OnMinusClicked();
		void HideUI();
		void CloseUI();
		void ReceiveBeginPlay();
		void OnBinStateChanged();
		void UpdateUI();
		void OnBinContentChanged();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnLevelStarted(const struct FGameplayTag& LevelTag);
		void SetLock(bool bLock, bool bAnnounce);
		void UpdateSlot(class USceneComponent* componentToReturnActorTo, const struct FGameplayTag& GameplayTag, class AActor* actorToAttach);
		void Clear();
		void ExecuteUbergraph_BP_ShopSlot(int32_t EntryPoint);
		void OnPlusPressed__DelegateSignature(class ABP_ShopSlot_C* Slot);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
