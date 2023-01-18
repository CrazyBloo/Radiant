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
	 * BlueprintGeneratedClass BPA_Probe.BPA_Probe_C
	 * Size -> 0x0019 (FullSize[0x02B1] - InheritedSize[0x0298])
	 */
	class ABPA_Probe_C : public APRBasicActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       Box;                                                     // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UC_ImpactSounds_C*                                   C_ImpactSounds;                                          // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       Delay;                                                   // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool DropItemOnGround();
		class FString GetActorUID();
		void GetAttachmentsList(TArray<class FString>* Attachments);
		struct FGameplayTag GetAttachmentTypeID();
		float GetConditionPercent();
		float GetCurrentCondition();
		float GetCurrentWeight();
		EPRHandPoseType GetDefaultPoseType();
		class UInventoryItem* GetInventoryItem();
		void GetItemCenterTransform(bool* socket, struct FTransform* itemCenterTransform);
		struct FPRItemInfo GetItemInfo();
		void GetItemVisibility(bool* bIsVisible);
		struct FTransform GetPoseShift(EPRHandPoseType poseType);
		class UInventoryItem* GetPreparedItem();
		void GetProxyMode(bool* bUseProxy);
		struct FGameplayTag GetTypeID();
		bool IsItemInDelivery();
		void Reconfigure(class UInventoryItem* InventoryItem, bool* success);
		bool UpdateInventoryItemLocation();
		void DisableItemPhysics();
		void InitBought();
		void OnAddedToHolster(class UHolsterComponent* Holster);
		void OnProxyDisabled();
		void OnProxyEnabled();
		void OnProxySystemReady();
		void OnRemovedFromHolster(class UHolsterComponent* Holster);
		void RegisterMeshComponentsAndOmittableColliders();
		void SetDistanceGripEnable(bool enable);
		void SetItemVisibility(bool bNewVisibility);
		void SetProxyMode(bool bUseProxy);
		void SetupProxySystem(bool bStartWithProxy, bool bStartVisible);
		void StopUse();
		void UpdateAttachmentSlots();
		void UpdateFireMode();
		void Damage(float Damage, class USceneComponent* HitComponent);
		void ReceiveBeginPlay();
		void Thrown();
		void BndEvt__BPA_Probe_Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void ExecuteUbergraph_BPA_Probe(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
