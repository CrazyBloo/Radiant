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
	 * BlueprintGeneratedClass BP_ShopBin.BP_ShopBin_C
	 * Size -> 0x0138 (FullSize[0x03D0] - InheritedSize[0x0298])
	 */
	class ABP_ShopBin_C : public APRBasicActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       Box;                                                     // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     SFX;                                                     // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Cube;                                                    // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Points_AmmoBox;                                          // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Points_Equip;                                            // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Points_Attachments;                                      // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Points_Primary;                                          // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Points_Secondary;                                        // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Points_Mags;                                             // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene22;                                                 // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   capsule;                                                 // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene21;                                                 // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      DoorHideAnim_Pitch_EE6E20E940C0E91D417570A2FA7ADE30;     // 0x0308(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         DoorHideAnim__Direction_EE6E20E940C0E91D417570A2FA7ADE30; // 0x030C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UJFN[0x3];                                   // 0x030D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  DoorHideAnim;                                            // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DoorLockAnim_PitchAlpha_8EF0F3994A3F57E87FA26A9FD674B6AF; // 0x0318(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         DoorLockAnim__Direction_8EF0F3994A3F57E87FA26A9FD674B6AF; // 0x031C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7PQB[0x3];                                   // 0x031D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  DoorLockAnim;                                            // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnContentChanged;                                        // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EShopBinState                                              State;                                                   // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_74OM[0x7];                                   // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_ShopComputer_C*                                  ShopCompRef;                                             // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      binContent;                                              // 0x0348(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnDoorStateChanged;                                      // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FGameplayTag>                                itemsToAdd;                                              // 0x0368(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FGameplayTag>                                itemsToRemove;                                           // 0x0378(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       disableContentUpdate;                                    // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       removeAll;                                               // 0x0389(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       locking;                                                 // 0x038A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Locked;                                                  // 0x038B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       hideOnLock;                                              // 0x038C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M8H0[0x3];                                   // 0x038D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      tmp;                                                     // 0x0390(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      DoorClosedAngle;                                         // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DoorOpenedAngle;                                         // 0x03A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      boughtContent;                                           // 0x03A8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       FreeMode;                                                // 0x03B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y4OK[0x7];                                   // 0x03B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnNoMoreSpace;                                           // 0x03C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void TrySpawnItem(class UClass* itemClass, class USceneComponent* foundPoint, bool* bHasSpawned, class ABPA_BaseItem_C** itemActor);
		void PlaySfx(class USoundBase* Sound);
		void IsFreeMode(bool* State);
		void GetItemRequiredLevel(const struct FGameplayTag& ItemTag, int32_t* PlayerLevel);
		void GetItemPrice(const struct FGameplayTag& ItemTag, int32_t* Price);
		void GetBoughtBinContent(TArray<class AActor*>* boughtContent);
		void MarkBinContentBought();
		void GetAddRemoveItems(TArray<struct FGameplayTag>* itemsToAdd, TArray<struct FGameplayTag>* itemsToRemove);
		void IsBinContains(const struct FGameplayTag& ItemTag, bool* Contain);
		void GetState(EShopBinState* State);
		void IsCanChange(bool* canChange);
		void RemoveItemFromBin(const struct FGameplayTag& ItemTag);
		void FindPointInBin(TArray<class USceneComponent*>* Points, bool* found, class USceneComponent** Result);
		void AllowedSpawnLocInBin(class USceneComponent* Point, struct FVector* Result, bool* found);
		void SpawnItemInBin(const struct FGameplayTag& ItemTag);
		void GetBinTotalPrice(int32_t* totalPrice);
		void UpdateContent(bool* Changed);
		void GetBinContent(TArray<class AActor*>* binContent);
		void DoorLockAnim__FinishedFunc();
		void DoorLockAnim__UpdateFunc();
		void DoorHideAnim__FinishedFunc();
		void DoorHideAnim__UpdateFunc();
		void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void LockBin(bool lock);
		void UpdateBinContent();
		void AddItemToBin(const struct FGameplayTag& ItemTag);
		void RemoveItem(const struct FGameplayTag& ItemTag);
		void RemoveAllItems();
		void UpdateBinState();
		void HideBin(bool hide);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnLevelStarted(const struct FGameplayTag& LevelTag);
		void PhysicsSweep();
		void OnItemDroppedEvent(class AActor* Actor);
		void ExecuteUbergraph_BP_ShopBin(int32_t EntryPoint);
		void OnNoMoreSpace__DelegateSignature();
		void OnDoorStateChanged__DelegateSignature();
		void OnContentChanged__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
