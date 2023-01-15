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
	 * BlueprintGeneratedClass BP_Corpse.BP_Corpse_C
	 * Size -> 0x0020 (FullSize[0x0340] - InheritedSize[0x0320])
	 */
	class ABP_Corpse_C : public ABP_LootSpawnPoint_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0320(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class UStaticMesh*>                                 meshVars;                                                // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void UpdateCorpseMesh();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnLevelStarted(const struct FGameplayTag& LevelTag);
		void ExecuteUbergraph_BP_Corpse(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
