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
	 * BlueprintGeneratedClass BP_ItemInfo.BP_ItemInfo_C
	 * Size -> 0x0041 (FullSize[0x02C1] - InheritedSize[0x0280])
	 */
	class ABP_ItemInfo_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetComponent*                                    CheatUpgrades;                                           // 0x0288(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Pivot_Second;                                            // 0x0290(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Pivot_First;                                             // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    Widget;                                                  // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWBP_ItemInfo_C*                                     widgetInfo;                                              // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UInventoryItem*                                      Item;                                                    // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UCameraComponent*                                    cameraRef;                                               // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NoUnlock;                                                // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void IsHelpShown(bool* shown);
		void IsItemOfType(const struct FGameplayTag& ItemTypeID, bool* Match);
		void IsAttachmentsLocked(bool* Locked);
		void SetVisibility(bool Show);
		void GetLockButtonLocation(struct FVector* Location);
		void GetUnlockButtonLocation(struct FVector* Location);
		void GetHelpButtonLocation(struct FVector* Location);
		void updateTransform(const struct FVector& Location);
		void ReceiveBeginPlay();
		void HideInfo();
		void ShowInfo(class UInventoryItem* InventoryItem, bool unlock);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ToggleInfo(class UInventoryItem* InventoryItem, bool unlock);
		void UpdateInfoWidget(bool unlock);
		void UpdateDurability();
		void KillCheats();
		void OnApplyCheatyUpgrades();
		void ExecuteUbergraph_BP_ItemInfo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
