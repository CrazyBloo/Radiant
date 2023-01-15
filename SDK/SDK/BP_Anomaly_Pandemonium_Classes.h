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
	 * BlueprintGeneratedClass BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C
	 * Size -> 0x0088 (FullSize[0x0470] - InheritedSize[0x03E8])
	 */
	class ABP_Anomaly_Pandemonium_C : public ABPA_Anomaly_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UResizableDecalComponent*                            ResizableDecal;                                          // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Arrow;                                                   // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DecalMaterial;                                           // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      delayTimer;                                              // 0x0418(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpawnDelay;                                              // 0x041C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<struct FGameplayTag>                                Chars;                                                   // 0x0420(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<class ABPA_Char_C*>                                 spawnedChars;                                            // 0x0430(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		int32_t                                                    MaxChars;                                                // 0x0440(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       OverheadMaxCharsOnTriggerCount;                          // 0x0444(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_WL2E[0x3];                                   // 0x0445(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        NPCTag;                                                  // 0x0448(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector                                             npcLoc;                                                  // 0x0450(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       spawning;                                                // 0x045C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UY7Z[0x3];                                   // 0x045D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMinMaxFloat                                        SpawnDistanceRadiusMultiplierRange;                      // 0x0460(0x0008) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn
		struct FMinMaxFloat                                        CharsIdleRadiusMultiplierRange;                          // 0x0468(0x0008) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn

	public:
		void CheckNPCTags();
		void UserConstructionScript();
		void ReceiveDestroyed();
		void OnGameStarted();
		void ReceiveTick(float DeltaSeconds);
		void SpawnChar();
		void OnLevelStarted(const struct FGameplayTag& LevelTag);
		void OnTransitionStart();
		void OnGameShutdownEvent();
		void OnOverlapTimer();
		void OnSetupEvent();
		void OnCharEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BP_Anomaly_Pandemonium(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
