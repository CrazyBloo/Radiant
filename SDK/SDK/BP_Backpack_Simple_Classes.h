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
	 * BlueprintGeneratedClass BP_Backpack_Simple.BP_Backpack_Simple_C
	 * Size -> 0x00C0 (FullSize[0x04F0] - InheritedSize[0x0430])
	 */
	class ABP_Backpack_Simple_C : public ABackpackSimple
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0430(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPRGrippableStaticMeshComponent*                     StaticMesh2;                                             // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCableComponent*                                     Cable;                                                   // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                Holder_Slot_SleepingBag_ChildActor;                      // 0x0450(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Pivot_GripPoint;                                         // 0x0458(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                Holder_Slot_PrimaryWeapon_ChildActor;                    // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                Holder_BackPack_ChildActor;                              // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Pivot_Main;                                              // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       IsClosed;                                                // 0x0480(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsHolding;                                               // 0x0481(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsEquipped;                                              // 0x0482(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J17K[0x5];                                   // 0x0483(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Holder_BackPack_C*                               Backpack_Holder;                                         // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDist;                                                 // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WNB7[0x4];                                   // 0x0494(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        CheckDistTimer;                                          // 0x0498(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       LerpingBack;                                             // 0x04A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y0XJ[0x3];                                   // 0x04A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LerpValue;                                               // 0x04A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Holder_Slot_C*                                   PrimaryWeapon_Holder;                                    // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Holder_Slot_C*                                   SleepingBag_Holder;                                      // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RelativeLocationWeightMesh;                              // 0x04B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Alpha;                                                   // 0x04C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Gripped;                                                 // 0x04C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9GR0[0x7];                                   // 0x04C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        LerpWidthTimer;                                          // 0x04D0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ABPA_BaseItem_C*                                     As_BPA_Base_Item;                                        // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxDistanceTrinket;                                      // 0x04E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XDI6[0x4];                                   // 0x04E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        ReturnWeightTimer;                                       // 0x04E8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void GetLightItem(bool* IsOn, class ABPA_BaseItem_C** Item);
		void DenyHolstering(bool* Deny);
		void GetGSLerpToHand(class UGS_LerpToHand** LerpToHandScript);
		void IsOn(bool* On);
		void IsItemActorAttachmentsLocked(bool* Result);
		bool CheckDistanceWeightTrinket();
		void LerpSetWorldLocAndRot();
		class USceneComponent* GetPivotGripPoint();
		bool CheckEquipped();
		class APRHolder* GetHolderSleepingBag();
		class APRHolder* GetHolderPrimaryWeapon();
		class APRHolder* GetHolderBackpack();
		void GetItemVisibility(bool* bIsVisible);
		void GetProxyMode(bool* bUseProxy);
		struct FGameplayTag GetAttachmentTypeID();
		bool UpdateInventoryItemLocation();
		EPRHandPoseType GetDefaultPoseType();
		struct FTransform GetPoseShift(EPRHandPoseType poseType);
		class UInventoryItem* GetPreparedItem();
		struct FGameplayTag GetTypeID();
		bool IsItemInDelivery();
		struct FPRItemInfo GetItemInfo();
		bool DropItemOnGround();
		class FString GetActorUID();
		void GetAttachmentsList(TArray<class FString>* Attachments);
		float GetConditionPercent();
		float GetCurrentCondition();
		float GetCurrentWeight();
		class UInventoryItem* GetInventoryItem();
		void GetItemCenterTransform(bool* socket, struct FTransform* itemCenterTransform);
		void Reconfigure(class UInventoryItem* InventoryItem, bool* success);
		void CheckDistance(bool* Restored);
		void Get_BP_Holder_Backpack(class ABP_Holder_BackPack_C** BP);
		void SetState(bool Closed);
		void UserConstructionScript();
		void OnTransitionEndOnceEventDelegate();
		void PlayerInteract(EHand_EHand hand, class UPrimitiveComponent* Controller);
		void EjectMag();
		void ThumbUp();
		void Bind();
		void ThumbLeft();
		void ThumbRight();
		void Inspect(bool On);
		void Unbind();
		void Use();
		void TutLock();
		void TutUnlock();
		void Hide(bool Show);
		void SetItemActorAttachmentsLock(bool lock);
		void DropEjectedMag();
		void NightGlow(bool On);
		void SecondaryTrigger(float AxisValue);
		void Request_Recoil(const struct FVector& Recoil);
		void RequestPositionCheck(bool On);
		void BeginItemPositionChecks();
		void RequestPhysicsCollision(bool On, const class FName& Requestor);
		void SetDenyGrip(bool DenyGrip);
		void TakenByHolder(const class FString& Name);
		void SetAttachedCollision(bool Attached);
		void GameplayTrigger();
		void ToggleAttachments();
		void PrimaryTrigger(float AxisValue);
		void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
		void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void OnStart();
		void OnGameStartedEventDelegate();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void LerpToHolster();
		void RefreshState();
		void OnReturned();
		void OnUnequipped();
		void BndEvt__BP_Backpack_Simple_StaticMesh_K2Node_ComponentBoundEvent_0_VROnGripSignature__DelegateSignature(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
		void BndEvt__BP_Backpack_Simple_StaticMesh_K2Node_ComponentBoundEvent_1_VROnDropSignature__DelegateSignature(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
		void CustomTimeline();
		void ReturnWeight();
		void E2(class AActor* Actor);
		void E1(class UInventoryItem* InventoryItem);
		void ExecuteUbergraph_BP_Backpack_Simple(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
