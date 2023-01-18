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
	 * BlueprintGeneratedClass BP_SpawnFurnitureBySockets.BP_SpawnFurnitureBySockets_C
	 * Size -> 0x0158 (FullSize[0x03F0] - InheritedSize[0x0298])
	 */
	class ABP_SpawnFurnitureBySockets_C : public APRBasicActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         FurnitureMesh;                                           // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FName, struct FFurnitureSocketVariables>        SocketConfig;                                            // 0x02B0(0x0050) Edit, BlueprintVisible
		bool                                                       Box_Door_Disable;                                        // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S5F7[0x7];                                   // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USpawnSlotComponent*>                         LootSlots;                                               // 0x0308(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class USpawnSlotComponent*>                         SpawnSlots;                                              // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FTimerHandle                                        PlayerCheckTimer;                                        // 0x0328(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FString                                              InstanceId;                                              // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		int32_t                                                    LootPoints;                                              // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayTag                                        LootTable;                                               // 0x0344(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T70I[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class USceneComponent*>                  SocketComponent;                                         // 0x0350(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UPRItemConfig*>                               CustomLootConfigs;                                       // 0x03A0(0x0010) Edit, BlueprintVisible
		int32_t                                                    SlotsWithLoot;                                           // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SlotsWithDecor;                                          // 0x03B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UInventoryItem*>                              SpawnedItems;                                            // 0x03B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       AttachSpawned;                                           // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6S6Q[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             MeshConstructed;                                         // 0x03D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UPrimitiveComponent*>                         Decorations;                                             // 0x03E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		class FString GetInstanceID();
		void GetDoorComponents(TArray<class ABP_Door_C*>* doors, TArray<class ABP_Box_C*>* Boxes);
		void SaveMeshTransforms();
		void DeleteMesh();
		void ConstructMesh(TMap<class FName, struct FTransform> SlotTransforms, TArray<class FName>* BrokenSockets);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void CollectSpawnSlots();
		void OnLevelStarted(const struct FGameplayTag& LevelTag);
		void CheckDistanceEvent();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnGameDataSave();
		void Debug_ConstructMesh();
		void GenerateLoot();
		void SpawnLoot();
		void ExecuteUbergraph_BP_SpawnFurnitureBySockets(int32_t EntryPoint);
		void MeshConstructed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
