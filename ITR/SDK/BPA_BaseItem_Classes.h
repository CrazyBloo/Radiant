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
	 * BlueprintGeneratedClass BPA_BaseItem.BPA_BaseItem_C
	 * Size -> 0x0188 (FullSize[0x05F8] - InheritedSize[0x0470])
	 */
	class ABPA_BaseItem_C : public ARadiusBaseItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0470(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_GripSound;                                         // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_ItemDurability_C*                               BPC_ItemDurability;                                      // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UC_ImpactSounds_C*                                   C_ImpactSounds;                                          // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class UMaterialInstanceDynamic*>                    MaterialInstances;                                       // 0x0490(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class APawn*                                               Ownedby;                                                 // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayTag                                        ItemTypeTag;                                             // 0x04A8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       DropSoundPlayed;                                         // 0x04B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KBW0[0x7];                                   // 0x04B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        terrainCheckTimer;                                       // 0x04B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    terrainCheckCount;                                       // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N8WU[0x4];                                   // 0x04C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        allSocketNames;                                          // 0x04C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UInventoryItem*                                      inventoryItemRef;                                        // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Preconfigured;                                           // 0x04E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_DQ3N[0x7];                                   // 0x04E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomUID;                                               // 0x04E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bNotUnique;                                              // 0x04F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_JG6P[0x7];                                   // 0x04F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                CustomAdditionalTags;                                    // 0x0500(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		float                                                      CustomDurabilityRatio;                                   // 0x0510(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_QA6F[0x4];                                   // 0x0514(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          Sound_PickUP;                                            // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       poseTriggered;                                           // 0x0520(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3OGA[0x3];                                   // 0x0521(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LastHitLoc;                                              // 0x0524(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTarget2D*                              CurrentRT;                                               // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SimulateOnHit;                                           // 0x0538(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Allowsimulation;                                         // 0x0539(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_74FH[0x6];                                   // 0x053A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDrop;                                                  // 0x0540(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FRotator                                            RotationOnGround;                                        // 0x0550(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_28HD[0x4];                                   // 0x055C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGS_LerpToHand*                                      LerptoHandScript;                                        // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnReconfigureDone;                                       // 0x0568(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              UnknownData_0X0U[0x8];                                   // 0x0578(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LastGoodTransform;                                       // 0x0580(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DurabilityDestroyDelay;                                  // 0x05B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KP11[0x4];                                   // 0x05B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStaticMeshComponent*>                        ComponentCache;                                          // 0x05B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       PrimaryTriggerPressed;                                   // 0x05C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SecondaryTriggerPressed;                                 // 0x05C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RV7Y[0x2];                                   // 0x05CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PrimaryTriggerThreshold;                                 // 0x05CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SecondaryTriggerThreshold;                               // 0x05D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CleanableVertices;                                       // 0x05D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UStaticMeshComponent*>                        CleanableMeshes;                                         // 0x05D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             OnTriggerChanged;                                        // 0x05E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetLightItem(bool* IsOn, class ABPA_BaseItem_C** Item);
		void DenyHolstering(bool* Deny);
		void GetGSLerpToHand(class UGS_LerpToHand** LerpToHandScript);
		void IsOn(bool* On);
		void IsItemActorAttachmentsLocked(bool* Result);
		class UInventoryItem* InitInventoryItem();
		bool IsInitInventoryItem();
		void InitCleanState();
		void CacheComponents();
		struct FGameplayTag GetAttachmentTypeID();
		bool UpdateInventoryItemLocation();
		struct FTransform GetPoseShift(EPRHandPoseType poseType);
		class UInventoryItem* GetPreparedItem();
		EPRHandPoseType GetDefaultPoseType();
		struct FGameplayTag GetTypeID();
		bool IsItemInDelivery();
		struct FPRItemInfo GetItemInfo();
		class FString GetActorUID();
		class UInventoryItem* GetInventoryItem();
		float GetCurrentCondition();
		float GetCurrentWeight();
		bool DropItemOnGround();
		void GetAttachmentsList(TArray<class FString>* Attachments);
		float GetConditionPercent();
		void GetItemCenterTransform(bool* socket, struct FTransform* itemCenterTransform);
		void Reconfigure(class UInventoryItem* InventoryItem, bool* success);
		void GetAllAttachments(TArray<class AActor*>* Attachments);
		void CheckMark(const struct FGameplayTag& markTag, bool* set);
		void SetMark(const struct FGameplayTag& markTag, bool* set);
		void RemoveMark(const struct FGameplayTag& markTag, bool exactMatch);
		void TogglePhysCollisions(bool On);
		void DropGlow(bool On);
		void OnItemCreated();
		void CheckInventoryItem();
		void UpdateMass();
		void FindVisibleLoc(const struct FVector& originLoc, bool* found, struct FVector* Location);
		void CheckVisibility(const struct FVector& Loc, bool* Visible);
		void GetSocketSuffix(bool Primary, class FString* Suffix);
		void GetRootPrimitive(class UPrimitiveComponent** RootPrimitive);
		void PlayDropSound();
		void MeshDestruction();
		void CreateMaterialInstances();
		void UpdateMaterialDamage();
		void UnHide();
		void HideEverything();
		void VisibilityToogle(bool SetVisbile);
		void UserConstructionScript();
		void PlayerInteract(EHand_EHand hand, class UPrimitiveComponent* Controller);
		void EjectMag();
		void ThumbUp();
		void ThumbLeft();
		void ThumbRight();
		void Inspect(bool On);
		void Use();
		void TutLock();
		void TutUnlock();
		void SetItemActorAttachmentsLock(bool lock);
		void DropEjectedMag();
		void RequestRecoil(const struct FVector& Recoil);
		void TakenByHolder(const class FString& Name);
		void SetAttachedCollision(bool Attached);
		void GameplayTrigger();
		void ToggleAttachments();
		void ReceiveBeginPlay();
		void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
		void FixPosition();
		void HealthEndedOverride();
		void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
		void OnStart();
		void Bind();
		void Unbind();
		void OnReconfigure();
		void BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void StartPositionChecks();
		void StopPositionCheck();
		void CheckIfUnderTerrain0();
		void BndEvt__BPC_ItemDurability_K2Node_ComponentBoundEvent_2_OnDestroyed__DelegateSignature();
		void OnTransitionEndOnceEventDelegate();
		void UpdateActorTags();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void StartClean();
		void NightGlow(bool On);
		void RequestPositionCheck(bool On);
		void BeginItemPositionChecks();
		void RequestPhysicsCollision(bool On, const class FName& Requestor);
		void SetDenyGrip(bool DenyGrip);
		void Hide(bool Show);
		void OnRootHit(const struct FVector& Impulse);
		void BndEvt__BPA_BaseItem_BPC_ItemDurability_K2Node_ComponentBoundEvent_0_OnDurabilityChange__DelegateSignature();
		void SetDistanceGripEnable(bool enable);
		void ZeroVelocity();
		void PrimaryTrigger(float AxisValue);
		void SecondaryTrigger(float AxisValue);
		void PlayDropSounds(const struct FHitResult& Hit, const struct FVector& HitImpulse, bool IsHeld);
		void DisableItemPhysics();
		void Setup(const struct FBaseItemSpawnInfo& BaseItemSpawnInfo);
		void OnAddedToHolster(class UHolsterComponent* Holster);
		void ResetInventoryItemRef();
		void OnGameStartedEventDelegate();
		void ExecuteUbergraph_BPA_BaseItem(int32_t EntryPoint);
		void OnTriggerChanged__DelegateSignature(bool bIsPrimary);
		void OnReconfigureDone__DelegateSignature();
		void OnDrop__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
