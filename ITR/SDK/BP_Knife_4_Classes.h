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
	 * BlueprintGeneratedClass BP_Knife_4.BP_Knife_3_C
	 * Size -> 0x032D (FullSize[0x0999] - InheritedSize[0x066C])
	 */
	class ABP_Knife_3_C : public ABPA_BaseItem_Throwable_C
	{
	public:
		unsigned char                                              UnknownData_5O1O[0x4];                                   // 0x066C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0670(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       ThrownDamageColider;                                     // 0x0678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       HeldDamageColider;                                       // 0x0680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGripMotionControllerComponent*                      GrippingControllerSecondary;                             // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MeleeCooldown;                                           // 0x0690(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4X47[0x3];                                   // 0x0691(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MeleeDamage;                                             // 0x0694(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RotAlpha;                                                // 0x0698(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7XJR[0x4];                                   // 0x069C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFImpactEffects                                     ImpactParticles;                                         // 0x06A0(0x00C8) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1TZ9[0x8];                                   // 0x0768(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBPActorGripInformation                             GRipInfo;                                                // 0x0770(0x01E0) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference
		float                                                      ContDamage;                                              // 0x0950(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JTG1[0x4];                                   // 0x0954(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            ContParticles;                                           // 0x0958(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APawn*                                               Player;                                                  // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APawn*                                               thrownBy;                                                // 0x0968(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isHeldByBlade;                                           // 0x0970(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isAlternateHeld;                                         // 0x0971(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J0RY[0x6];                                   // 0x0972(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        DisableTickTimer;                                        // 0x0978(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ThrowVelocity;                                           // 0x0980(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PenetrationDepth;                                        // 0x098C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        GravityTimer;                                            // 0x0990(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsThrown;                                               // 0x0998(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool IsSmoothingScriptOn();
		struct FWeaponInfo GetWeaponInfo();
		void GetSmoothingScript(class UGS_Smoothing_C** SmoothingScript);
		void GetCleaningBarrelLength(float* Length);
		void GetShootingPointTransform(struct FTransform* Transform, class UPrimitiveComponent** Parent);
		void OffsetByPenetrationDepth();
		void IsThrowLimitVelocity(bool* State, float* Velocity);
		EPRHandPoseType GetDefaultPoseType();
		void GetSocketSuffix(bool Primary, class FString* Suffix);
		void ContaminationDamage();
		void BndEvt__MeleeDamageColider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void BndEvt__ThrownMeleeDamageColider_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void UpdateSmoothingAttachment(bool bUseLocalAlpha, float NewMaxSmoothAlpha, bool bIsAdd);
		void SmoothingToggle();
		void ReceiveTick(float DeltaSeconds);
		void OnUsed();
		void OnEndUsed();
		void SetAdditionalSmoothing(float SmoothAlpha);
		void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
		void CheckContamination();
		void StartContamination();
		void MeshDestruction();
		void OnStart();
		void VirtualStockToggle(bool On);
		void AttachmentDetached(class AActor* Actor);
		void AttachmentAttached(class AActor* Actor);
		void UpdateTargetLoc(const struct FVector& TargetLoc);
		void PlayerWeaponFired();
		void ThrowItem();
		void ThumbLeft();
		void ReloadFinished();
		void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
		void DisableTick();
		void OutOfAmmo();
		void StopFire();
		void FireGun(class AActor* Target, float Diviation, bool BurstFire, const struct FVector& TargetLoc, float FireRateMult, int32_t BurstModeCount);
		void EnableGravity();
		void DoThrowItem();
		void ExecuteUbergraph_BP_Knife_4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
