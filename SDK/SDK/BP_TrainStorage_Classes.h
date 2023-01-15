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
	 * BlueprintGeneratedClass BP_TrainStorage.BP_TrainStorage_C
	 * Size -> 0x0170 (FullSize[0x0408] - InheritedSize[0x0298])
	 */
	class ABP_TrainStorage_C : public APRBasicActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     DoorRepearSfx;                                           // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     DoorDeliverySfx;                                         // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Ambient;                                                 // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     SFX;                                                     // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    WC_Page_Block;                                           // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    WC_Page_MissionSelection;                                // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Hub_Store_Red_Lamp_01_a;                              // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Pivot_Delivery;                                          // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    WC_Page_Upgrade;                                         // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    WC_Page_Debriefing;                                      // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    WC_Page_Repair;                                          // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    WC_Page_Delivery;                                        // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    WC_Page_Selection;                                       // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    WC_Page_Background;                                      // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Trigger_Delivery;                                        // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStorageDoorComponent*                               Door_Delivery;                                           // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Trigger_Repair;                                          // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Pivot_Continue;                                          // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStorageDoorComponent*                               Door_Repair;                                             // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Arrow;                                                   // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class UStorageDoorComponent*>                       doors;                                                   // 0x0348(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UBoxComponent*>                               Triggers;                                                // 0x0358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    ActorsInDeliveryCell;                                    // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BH3Y[0x4];                                   // 0x036C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCellContentChanged;                                    // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class AActor*>                                      repairActors;                                            // 0x0380(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       ActorsInWeaponCell;                                      // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6RQK[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWBP_MCPage_Empty_C*                                 pageBackground;                                          // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWBP_Page_StorageSelection_C*                        pageSelection;                                           // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWBP_MCPage_StorageDeliveryMissions_C*               pageMissionSelection;                                    // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWBP_MCPage_StorageDelivery_C*                       pageDelivery;                                            // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWBP_Page_StorageRepair_C*                           pageRepair;                                              // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWBP_Page_StorageUpgrade_C*                          pageUpgrade;                                             // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UWBP_SecurityLevelBlock_C*                           pageSecurityLevelBlock;                                  // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWBP_MCPage_Debriefing_C*                            pageDebriefing;                                          // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                triggersCollisionProfile;                                // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FullWeaponRepaired;                                      // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FreeMode;                                                // 0x03E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPlayerLevelBlock;                                      // 0x03E2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UP96[0x5];                                   // 0x03E3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USoundBase*>                                  DoorsOpenSfx;                                            // 0x03E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class USoundBase*>                                  DoorsCloseSfx;                                           // 0x03F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void StopSfx();
		void PlaySfx(class USoundBase* Sound, int32_t ChannelIndex);
		void CheckPlayerLevelBlock();
		void ResetDeliveryBulb();
		void HighlightDeliveryBulb(bool success);
		void EnableRepiarModeOnly();
		void FillterDeliveryBaseItems(TArray<class AActor*>* Items, TArray<class AActor*>* Actors);
		void CheckWrongItems(class UMissionData* MissionData, bool* State);
		void InitButtonApplyRepair();
		void IsUpgrade(bool* Result);
		void LockComputer(bool lock);
		void SpawnRepairActors();
		void IsRepair(bool* Result);
		void IsDelivery(bool* Result);
		void RepairItems(bool* success);
		void CheckTags(const struct FGameplayTag& ItemTag, TArray<struct FGameplayTag>* targetTags, bool* found, int32_t* Index);
		void CheckDelivery(class UMissionData* MissionData, bool finishObjectives, bool* success, bool* excessive);
		void unlock(int32_t Index, const class FScriptDelegate& stateChangedDelegate, const class FScriptDelegate& beginOverlapDelegate, const class FScriptDelegate& endOverlapDelegate);
		void LockAll();
		void GetCurrentIndex(bool Delivery, int32_t* Index);
		void GetCellItems(bool Delivery, TArray<class AActor*>* cellItems, TArray<class AActor*>* AllItems);
		void IsActive(bool* Active);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void UpdateDoors();
		void GoToSelection();
		void GoToDelivery(const class FString& MissionInstanceId);
		void GoToRepair();
		void OnLevelStarted(const struct FGameplayTag& LevelTag);
		void OnItemDroppedEvent(class AActor* Actor);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void GoToUpgrade();
		void UpgradeItem(class UInventoryItem* Itrem, TArray<struct FUpgradeInfo>* Install, TArray<struct FUpgradeInfo>* Remove);
		void GoToMissionSelection();
		void OnPlayerLevelChangeEvent(int32_t Value);
		void OnCompletePressed();
		void OnDeliveryBackPressed();
		void OnMissionSelected(const class FString& InstanceId);
		void UpgradeOnPressedEvent();
		void BackOnPressedEvent();
		void DebriefingOkOnPressedEvent();
		void OnMissionFinishedEvent(class UMissionData* MissionData);
		void DeliveryOnPressedEvent();
		void RepairOnPressedEvent();
		void StartRepairItems();
		void UpdateWeaponCell();
		void OnEndOverlapRepair(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnBeginOverlapRepair(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnDoorStateChangedWeapon();
		void UpdateDeliveryCell();
		void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnDoorStateChanged();
		void ExecuteUbergraph_BP_TrainStorage(int32_t EntryPoint);
		void OnCellContentChanged__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
