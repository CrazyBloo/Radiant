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
	 * BlueprintGeneratedClass BPC_InternalMag.BPC_InternalMag_C
	 * Size -> 0x0088 (FullSize[0x0168] - InheritedSize[0x00E0])
	 */
	class UBPC_InternalMag_C : public UPRBasicActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UStaticMeshComponent*>                        Mag_BulletMeshArray;                                     // 0x00E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UInventoryItem*                                      inventoryItemRef;                                        // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USceneComponent*>                             BulletPointsArray;                                       // 0x0100(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class USceneComponent*                                     BulletParent;                                            // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ammoWeight;                                              // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayTag                                        ItemTypeTag;                                             // 0x011C(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      lockTime;                                                // 0x0124(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              tmpContainerToLoad;                                      // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       loadingLocked;                                           // 0x0130(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N3PA[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             RequestDestroyComponent;                                 // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ReqestEjectComponent;                                    // 0x0148(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       AlwaysRefillMeshes;                                      // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_8XX9[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          AmmoLoadSound;                                           // 0x0160(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetAmmoContainerData(struct FAmmoContainerData* Data);
		void GetAmmoContainerInfo(struct FPRAmmoContainerInfo* Info);
		bool IsLoadingLocked();
		void CheckLoadingConditions(class UInventoryItem* ammoItem, bool* CanLoad);
		class UStaticMeshComponent* DoSpawn(const struct FGameplayTag& ItemTypeID, int32_t Index);
		void GetNextAmmoInMag(bool* HasAmmo, struct FGameplayTag* Output);
		void DelayLoading();
		void LoadAmmo(class AActor* AmmoActor, bool* success);
		void GetMaxAmmoInMag(int32_t* Result);
		void RefillBulletPoints();
		void RemoveAmmo(bool NoUpdate, struct FGameplayTag* AmmoTag);
		void UpdateItemWeight();
		void UpdateBullets();
		void GetEmptyPoint(class USceneComponent** Point, int32_t* Index);
		void GetAmmoInMag(int32_t* AmmoInMag);
		void GetBulletMeshesCount(int32_t* Count);
		void SpawnBullets();
		void ReceiveTick(float DeltaSeconds);
		void FillMag();
		void OnAmmoAdded();
		void OnAmmoRemoved();
		void SetLoadingLock(bool lock);
		void ProcessTriggerOverlap(class AActor* Actor);
		void ExecuteUbergraph_BPC_InternalMag(int32_t EntryPoint);
		void ReqestEjectComponent__DelegateSignature();
		void RequestDestroyComponent__DelegateSignature(class USceneComponent* SceneComponent);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
