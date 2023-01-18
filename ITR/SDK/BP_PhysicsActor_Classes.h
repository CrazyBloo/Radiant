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
	 * BlueprintGeneratedClass BP_PhysicsActor.BP_PhysicsActor_C
	 * Size -> 0x0060 (FullSize[0x0460] - InheritedSize[0x0400])
	 */
	class ABP_PhysicsActor_C : public AGrippableActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UC_ImpactSounds_C*                                   C_ImpactSounds;                                          // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       DropSoundPlayed;                                         // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SFYL[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         Mesh;                                                    // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FTimerHandle                                        Timer;                                                   // 0x0428(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LastHitLoc;                                              // 0x0430(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XP0X[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InstanceId;                                              // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FGameplayTag                                        LevelId;                                                 // 0x0450(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UGS_LerpToHand*                                      LerptoHandScript;                                        // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetLightItem(bool* IsOn, class ABPA_BaseItem_C** Item);
		void IsItemActorAttachmentsLocked(bool* Result);
		void IsOn(bool* On);
		void GetGSLerpToHand(class UGS_LerpToHand** LerpToHandScript);
		void DenyHolstering(bool* Deny);
		class FString GetInstanceID();
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
		void RequestRecoil(const struct FVector& Recoil);
		void RequestPositionCheck(bool On);
		void BeginItemPositionChecks();
		void RequestPhysicsCollision(bool On, const class FName& Requestor);
		void SetDenyGrip(bool DenyGrip);
		void TakenByHolder(const class FString& Name);
		void SetAttachedCollision(bool Attached);
		void GameplayTrigger();
		void ToggleAttachments();
		void PrimaryTrigger(float AxisValue);
		void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void SetMesh();
		void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
		void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
		void RemoveOwner();
		void ReceiveBeginPlay();
		void Kill();
		void KillDelayed(float Delay);
		void OnGameStartedEventDelegate();
		void ExecuteUbergraph_BP_PhysicsActor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
