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
	 * BlueprintGeneratedClass BP_MagItem.BP_MagItem_C
	 * Size -> 0x0057 (FullSize[0x0698] - InheritedSize[0x0641])
	 */
	class ABP_MagItem_C : public ABPA_AmmoContainer_C
	{
	public:
		unsigned char                                              UnknownData_6LKO[0x7];                                   // 0x0641(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0648(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     BulletParent;                                            // 0x0650(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class USceneComponent*>                             BulletPointsArray;                                       // 0x0658(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UStaticMeshComponent*>                        Mag_BulletMeshArray;                                     // 0x0668(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       SpawnFinished;                                           // 0x0678(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_944O[0x7];                                   // 0x0679(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                CustomAmmo;                                              // 0x0680(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		class USoundBase*                                          MagUnloadSound;                                          // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetCleanableVertices(int32_t* NumCleanableVert);
		void GetCleanableMeshes(TArray<class UStaticMeshComponent*>* CleanableMeshes);
		void GetRepairDurabilityRange(const struct FGameplayTag& Requestor, struct FMinMaxFloat* DurabilityRange);
		void GetRefsForRepair(const struct FGameplayTag& RepairRequestor, bool* Valid, class UBPC_ItemDurability_C** DurabilityComponent, class UTextureRenderTarget2D** RT);
		void DetachMagItemFromWeaponItem();
		void GetMaxAmmoInMag(int32_t* Result);
		void Reconfigure(class UInventoryItem* InventoryItem, bool* success);
		void GetAmmoInMag(int32_t* AmmoInMag);
		void RefillBulletPoints();
		void GetEmptyPoint(class USceneComponent** Point, int32_t* Index);
		void GetBulletMeshesCount(int32_t* BulletMeshesCount);
		void RemoveAmmo(struct FGameplayTag* AmmoTag);
		void UpdateBullets();
		void UpdateItemWeight();
		void SpawnBullets();
		void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
		void FillMag();
		void OnReconfigure();
		void OnItemCreated();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnAmmoAdded();
		void OnAmmoRemoved();
		void FillContainerWithFirst();
		void SetAttachedCollision(bool Attached);
		void SetupCleaning();
		void RequestUpdateMaterial();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_MagItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
