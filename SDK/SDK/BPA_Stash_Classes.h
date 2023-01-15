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
	 * BlueprintGeneratedClass BPA_Stash.BPA_Stash_C
	 * Size -> 0x0038 (FullSize[0x0358] - InheritedSize[0x0320])
	 */
	class ABPA_Stash_C : public ABP_LootSpawnPoint_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0320(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StorageBody;                                             // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_IndicatorLamp;                                        // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStorageDoorComponent*                               StorageDoor;                                             // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             StashOpened;                                             // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FGameplayTag                                        StashTypeTag;                                            // 0x0350(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash

	public:
		void SetLocked(bool Locked);
		void OnDoorStateChanged();
		void OnLevelStarted(const struct FGameplayTag& LevelTag);
		void SpawnLoot();
		void Setup(const struct FStashSpawnInfo& StashSpawnInfo);
		void ExecuteUbergraph_BPA_Stash(int32_t EntryPoint);
		void StashOpened__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
