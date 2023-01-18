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
	 * BlueprintGeneratedClass BP_AnomalyField.BP_AnomalyField_C
	 * Size -> 0x00BD (FullSize[0x0355] - InheritedSize[0x0298])
	 */
	class ABP_AnomalyField_C : public APRBasicActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMaterialBillboardComponent*                         MaterialBillboard;                                       // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FString                                              UID;                                                     // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      Radius;                                                  // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WZFD[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      AnomalyClassArray;                                       // 0x02D0(0x0010) Edit, BlueprintVisible
		int32_t                                                    Number;                                                  // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Random;                                                  // 0x02E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       spawning;                                                // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V4LG[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        checkTimer;                                              // 0x02F0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<struct FParallelepiped>                             blocks;                                                  // 0x02F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class ABPA_Anomaly_C*>                              existingAnomalies;                                       // 0x0308(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ABP_AnomalyField_C*>                          existingFields;                                          // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ABPA_Anomaly_C*>                              spawnedAnomalies;                                        // 0x0328(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		struct FVector                                             fieldCenterLocation;                                     // 0x0338(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      defaultAnomalyRadius;                                    // 0x0344(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    invalidPoints;                                           // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TestPointsCount;                                         // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RadiusIncrease;                                          // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       spawnSaved;                                              // 0x0354(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool CheckPreparator(const struct FVector& Location);
		bool IsPreparing();
		class FString GetInstanceID();
		void Debug(const struct FTransform& Transform);
		void PrepareVariables();
		void FixScale();
		void CheckUID();
		void CheckPlayer(const struct FVector& Point, float Radius, bool* bLock);
		void PrepareBlocks();
		void CheckAnomalySpawn(bool* success, class UClass** Class);
		void CheckBlocks(const struct FVector& Point, float Radius, bool* bLocked);
		void GetSpawnPoint(float Radius, bool* success, struct FVector* Point);
		void SpawnAnomaly();
		void UserConstructionScript();
		void DoSpawn();
		void CheckIfPlayerInRange();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnTransitionStartOnceEvent();
		void ReceiveTick(float DeltaSeconds);
		void ForceSpawn();
		void EndSpawn();
		void OnLevelPrepare(const struct FGameplayTag& LevelTag);
		void ExecuteUbergraph_BP_AnomalyField(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
