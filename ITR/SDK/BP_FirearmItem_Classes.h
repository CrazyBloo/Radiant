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
	 * BlueprintGeneratedClass BP_FirearmItem.BP_FirearmItem_C
	 * Size -> 0x0618 (FullSize[0x0C10] - InheritedSize[0x05F8])
	 */
	class ABP_FirearmItem_C : public ABPA_BaseItem_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     FirePoint;                                               // 0x0600(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   MeleeColider;                                            // 0x0608(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_RecoilAlpha_9546524E4C2EB11D2EAAFDB128F52AA0; // 0x0610(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_9546524E4C2EB11D2EAAFDB128F52AA0;  // 0x0614(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KYY7[0x3];                                   // 0x0615(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0618(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        FireTimer;                                               // 0x0620(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       CanBeFired;                                              // 0x0628(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U73R[0x7];                                   // 0x0629(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TEDS[0x8];                                   // 0x0638(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPActorGripInformation                             MyGrip;                                                  // 0x0640(0x01E0) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference
		struct FTransform                                          AdditionTransformLerp;                                   // 0x0820(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SecondaryGripped;                                        // 0x0850(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_22W7[0xF];                                   // 0x0851(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPActorGripInformation                             MyGripSecondary;                                         // 0x0860(0x01E0) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference
		bool                                                       Debug;                                                   // 0x0A40(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0B5D[0x3];                                   // 0x0A41(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MeleeDamage;                                             // 0x0A44(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             DispOnGrip;                                              // 0x0A48(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             DispUnGrip;                                              // 0x0A58(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      BulletSpreadHalfAngle;                                   // 0x0A68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_50LX[0x4];                                   // 0x0A6C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             BulletFired;                                             // 0x0A70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       MeleeCooldown;                                           // 0x0A80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QJEL[0x3];                                   // 0x0A81(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxBotAmmo;                                              // 0x0A84(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OptimalRange;                                            // 0x0A88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentBotAmmo;                                          // 0x0A8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AttachmentsLocked;                                       // 0x0A90(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W9O9[0x7];                                   // 0x0A91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              attach_tmp;                                              // 0x0A98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SilencerEffectFactor;                                    // 0x0AA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CJ9Z[0x4];                                   // 0x0AA4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        BotFireTimer;                                            // 0x0AA8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      Diviation;                                               // 0x0AB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7K92[0x4];                                   // 0x0AB4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Target;                                                  // 0x0AB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BotIsFiring;                                             // 0x0AC0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7DAK[0x3];                                   // 0x0AC1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TargetLoc;                                               // 0x0AC4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          BarrelTransform;                                         // 0x0AD0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            BulletRot;                                               // 0x0B00(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    BurstCounter;                                            // 0x0B0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShotLoudness;                                            // 0x0B10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MuzzleVelocity;                                          // 0x0B14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     MuzzleFlash;                                             // 0x0B18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          Cue_Fire;                                                // 0x0B20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          Cue_FireSilenced;                                        // 0x0B28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnBotFired;                                              // 0x0B30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FGameplayTag                                        BotAmmoType;                                             // 0x0B40(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      Temperature;                                             // 0x0B48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxVisualRecoil;                                         // 0x0B4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGripMotionControllerComponent*                      SecondaryController;                                     // 0x0B50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AttachmentDistance;                                      // 0x0B58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CommentCounter;                                          // 0x0B5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BarrelLength;                                            // 0x0B60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BotAccuracy;                                             // 0x0B64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SmoothDelay;                                             // 0x0B68(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PJI0[0x7];                                   // 0x0B69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGS_Smoothing_C*                                     GSSmoothRef;                                             // 0x0B70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UGS_GunTools*                                        GSGun;                                                   // 0x0B78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       VirtualStockEnabled;                                     // 0x0B80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H8ZU[0x3];                                   // 0x0B81(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMinMaxFloat                                        JamChance;                                               // 0x0B84(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FMinMaxFloat                                        JamDurability;                                           // 0x0B8C(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		float                                                      TrajectoryOffsetHalfAngle;                               // 0x0B94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UAttachmentSlotComponent*>                    AttachmentSlots;                                         // 0x0B98(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FTimerHandle                                        BotBurstTimer;                                           // 0x0BA8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnBurstFinished;                                         // 0x0BB0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class AActor*                                              WeaponProxy;                                             // 0x0BC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APawn*                                               BotOwner;                                                // 0x0BC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CleanableVertices_1;                                     // 0x0BD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TOOO[0x4];                                   // 0x0BD4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStaticMeshComponent*>                        CleanableMeshes_1;                                       // 0x0BD8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class USoundAttenuation*                                   BotFireAttenuation;                                      // 0x0BE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          Cue_BotFire;                                             // 0x0BF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BotFireVolumeMult;                                       // 0x0BF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SPK0[0x4];                                   // 0x0BFC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     SmoothingSoundLoop;                                      // 0x0C00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseAttachSmtTick;                                       // 0x0C08(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NR27[0x3];                                   // 0x0C09(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AttachmentSmoothing;                                     // 0x0C0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetCleanableVertices(int32_t* NumCleanableVert);
		void GetCleanableMeshes(TArray<class UStaticMeshComponent*>* CleanableMeshes);
		void GetRepairDurabilityRange(const struct FGameplayTag& Requestor, struct FMinMaxFloat* DurabilityRange);
		void GetRefsForRepair(const struct FGameplayTag& RepairRequestor, bool* Valid, class UBPC_ItemDurability_C** DurabilityComponent, class UTextureRenderTarget2D** RT);
		bool IsSmoothingScriptOn();
		struct FWeaponInfo GetWeaponInfo();
		bool IsLoadingLocked();
		void GetAmmoContainerData(struct FAmmoContainerData* Data);
		void GetAmmoContainerInfo(struct FPRAmmoContainerInfo* Info);
		void GetSmoothingScript(class UGS_Smoothing_C** SmoothingScript);
		void GetCleaningBarrelLength(float* Length);
		void GetShootingPointTransform(struct FTransform* Transform, class UPrimitiveComponent** Parent);
		void IsSmoothingDisabled(bool* bIsDisabled);
		float GetCurrentMaxSmoothing();
		void CheckMeshtoSightAlignment(class UStaticMeshComponent* MeshToAlign, class UCameraComponent* VrCamera, bool* bIsAligned, float* WeaponSmootingAlpha);
		void SwitchSmoothing(bool bSwitchOn);
		class AActor* GetParentFromFirearmOrProxy();
		void AttachFirePointToProxy(const class FName& FirePointsocket);
		bool IsFireMode(EWeaponFireMode FireMode);
		void NextFireMode(bool* Changed, EWeaponFireMode* FireMode);
		void GetReliability(float* Reliability);
		void IsGoingtoJam(bool* jammed);
		void GetRecoil(struct FTransform* Recoil);
		void GetGunScript(class UGS_GunTools** Gun);
		void IsOn(bool* On);
		void IsAttachmentSlotBusy(EItemSlot socket, bool* busy);
		void UpdateVirtualStock();
		EPRHandPoseType GetDefaultPoseType();
		void Reconfigure(class UInventoryItem* InventoryItem, bool* success);
		void IsItemActorAttachmentsLocked(bool* Result);
		void PerUsageDamage();
		void IsItemSelfAttachment(class UInventoryItem* Item, bool* Attachment);
		void UpdateAccuracy();
		void GetAttachmentsList(TArray<class FString>* Attachments);
		void UpdateSilencerEffects();
		void IsSilencerAttached(bool* SilencerAttached);
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void RequestUpdateMaterial();
		void OnAmmoAdded();
		void OnAmmoRemoved();
		void SetLoadingLock(bool lock);
		void OutOfAmmo();
		void ReloadFinished();
		void PlayerWeaponFired();
		void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
		void OnEndUsed();
		void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
		void EndFireGun();
		void OnSecondaryGrip(class UGripMotionControllerComponent* GripOwningController, class USceneComponent* SecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
		void OnSecondaryGripRelease(class UGripMotionControllerComponent* GripOwningController, class USceneComponent* ReleasingSecondaryGripComponent, const struct FBPActorGripInformation& GripInformation);
		void BndEvt__MeleeColider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void GripLock();
		void GripUnlock();
		void SetItemActorAttachmentsLock(bool lock);
		void OnReconfigure();
		void OnBulletFired();
		void BotConfigure();
		void PlayFireHandHaptics();
		void ThumbLeft();
		void OnFiremodeChanged(EWeaponFireMode FireMode, bool PlaySound);
		void OnUsed();
		void VisualRecoil();
		void OnItemTaken(class UInventoryItem* InventoryItem);
		void SubtileComment(const class FText& Text);
		void VirtualStockToggle(bool On);
		void SetAdditionalSmoothing(float SmoothAlpha);
		void SetupCleaning();
		void ApplyRecoil();
		void UpdateAttachmentSlots();
		void AttachmentAttached(class AActor* Actor);
		void AttachmentDetached(class AActor* Actor);
		void FireGun(class AActor* Target, float Diviation, bool BurstFire, const struct FVector& TargetLoc, float FireRateMult, int32_t BurstModeCount);
		void BotFire();
		void StopFire();
		void UpdateTargetLoc(const struct FVector& TargetLoc);
		void BotBurstFire();
		void EnableAllSlots();
		void ToggleAttachments();
		void OnShotVFX(const struct FVector& TargetLoc);
		void OnSecondaryUsed();
		void PlayFeedbackHaptics();
		void UpdateFireMode();
		void ExtractRound(bool isRoundChambered, bool isBulletFired, const struct FTransform& Transform, float AmmoImpulse, float ShellImpulse, const struct FGameplayTag& AmmoTag);
		void SmoothingToggle();
		void ReceiveTick(float DeltaSeconds);
		void SmoothingTick();
		void UpdateSmoothingAttachment(bool bUseLocalAlpha, float NewMaxSmoothAlpha, bool bIsAdd);
		void ExecuteUbergraph_BP_FirearmItem(int32_t EntryPoint);
		void OnBurstFinished__DelegateSignature();
		void OnBotFired__DelegateSignature();
		void BulletFired__DelegateSignature();
		void DispUnGrip__DelegateSignature();
		void DispOnGrip__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
