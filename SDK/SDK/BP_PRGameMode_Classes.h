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
	 * BlueprintGeneratedClass BP_PRGameMode.BP_PRGameMode_C
	 * Size -> 0x0130 (FullSize[0x0520] - InheritedSize[0x03F0])
	 */
	class ABP_PRGameMode_C : public APRGameMode
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SpawnAttempt;                                            // 0x0400(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RIMR[0x4];                                   // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_MissionExecutor_C*                               missionExecutor;                                         // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NoiseValueFootsteps;                                     // 0x0410(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NoiseValueWeaponSound;                                   // 0x0414(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NoiseValueWeaponShot;                                    // 0x0418(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DamageValueMultiplier;                                   // 0x041C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    cheatNearbyNPCs;                                         // 0x0420(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G336[0x4];                                   // 0x0424(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      nearbyNPCs;                                              // 0x0428(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       cheatSpeed;                                              // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       cheatGodMode;                                            // 0x0439(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       cheatInvisibility;                                       // 0x043A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZJHP[0x1];                                   // 0x043B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartTime;                                               // 0x043C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EyeOpenCloseDone;                                        // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CMLN[0x7];                                   // 0x0441(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              debugPrintInventoryString;                               // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      AutosavePeriod;                                          // 0x0458(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    cheatShowItems;                                          // 0x045C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GlobalTimeDilation;                                      // 0x0460(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MenuIsActive;                                            // 0x0464(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G9JW[0x3];                                   // 0x0465(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UDestructibleMesh*>                           destructibleActorsToAffect;                              // 0x0468(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class ABP_DeathLocation_C*                                 DeathLocationMarker;                                     // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_ItemDropLocation_C*>                      ItemDropLocationMarker;                                  // 0x0480(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class ABP_TransitionHint_C*                                transitionHint;                                          // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Skip_C*                                          monologueSkip;                                           // 0x0498(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AStaticMeshActor*>                            climableActors;                                          // 0x04A0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		int32_t                                                    CheatShowClimableDistance;                               // 0x04B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H41V[0x4];                                   // 0x04B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              cheatShowActors;                                         // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       tideHappening;                                           // 0x04C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4MUB[0x7];                                   // 0x04C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class ABP_MissionExecutor_C*>          MissionExecutors;                                        // 0x04C8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UObject*                                             DiscordObj;                                              // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetCheatShowClimabledistance(int32_t* Distance);
		void GetCheatShowItems(int32_t* Value);
		void GetCheatShowNearbyNPCs(bool* Value);
		void GetCheatSpeed(bool* Value);
		void GetEnvironment(class ABP_Environment_C** Environment);
		void HideTransitionHint();
		void CreateTransitionHint();
		bool GetCheatGodMode();
		float GetDamageAwarenessValue(float Damage);
		float GetNoiseAwarenessValue(const class FName& Tag);
		bool GetCheatInvisibility();
		class AActor* SpawnItem(class UInventoryItem* InventoryItem, const struct FTransform& Transform, bool bProjectOnGround, bool bSimulate);
		void TickAutosave();
		struct FVector ReprojectLocation(const struct FVector& Location);
		class AActor* SpawnItemByType(const struct FGameplayTag& ItemTypeID, const class FString& InstanceId, const struct FTransform& Transform, bool bProjectOnGround, bool bSimulate);
		class AActor* SpawnSavedNPC(const struct FNPCGameData& Data, class AActor* SpawnerActor, float Radius, bool bCanWalkAway, bool SnipingMode);
		class AActor* SpawnNPC(const struct FGameplayTag& npcTypeID, class AActor* SpawnerActor, float Radius, bool bCanWalkAway, bool SnipingMode);
		class APRAnomaly* SpawnAnomaly(const class FString& AnomalyName, class UClass* AnomalyClass, const struct FTransform& AnomalyTransform, bool bProjectOnGround, float AnomalyRadius);
		void FindStartTransform(const struct FGameplayTag& Level, const struct FGameplayTag& Location, struct FTransform* Transform);
		void GetCurrentPlayerVelocity(struct FVector* Velocity);
		void KillActorsOnReload();
		void RestorePlayerIfDead();
		void TraceLocationDown(const struct FVector& In, struct FVector* Out);
		void FindLevelStart(const struct FGameplayTag& LevelTag, const struct FGameplayTag& LocationTag, struct FTransform* Transform, struct FVector* Velocity, bool* bFromSave);
		struct FTransform GetCurrentPlayerTransform();
		void SpawnLocationMarkers(const struct FGameplayTag& Level);
		void GetQuestStartTransform(bool* success, struct FTransform* Result);
		void GetSplineStartTransform(bool* success, struct FTransform* Result);
		void GetPlayerStartTransform(const struct FGameplayTag& StartTransformLevelTag, struct FTransform* Result);
		void SetCheatShowNearbyNPCs(bool Value);
		void SwitchCheatShowNearbyNPCs();
		void SetCheatSpeed(bool Value);
		void SwitchCheatSpeed();
		void SetCheatInvisibility(bool bValue);
		void SwitchCheatInvisibility();
		void OnPlayerDeath();
		void SetCheatShowItems(int32_t Value);
		void SwitchCheatShowItems();
		void SwitchNightVision();
		void OnMissionStateChanged(class UMissionData* MissionData);
		void OnTransitionStart();
		void OnTransitionEnd();
		void OnInitializeGame();
		void OnInitializeEditor();
		void OnStartedGame();
		void OnStartedEditor();
		void OnEnteredMenu();
		void ApplySoundVolumes();
		void OnTransitionHint();
		void OnLevelStarted(const struct FGameplayTag& LevelTag);
		void ApplyBightnessMult();
		void OnGameDataPreSave();
		void DoSavePlayerPosition();
		void OnLevelPrepare(const struct FGameplayTag& LevelTag);
		void ResetEffects();
		void PrepareMissionExecutor();
		void SwitchCheatShowClimableActors();
		void CheatShowActorsOfClass(class UClass* Class);
		void OnTideHappening(bool bReload);
		void OnTideFinished();
		void TickDebug();
		void SetCheatGodMode(bool bValue);
		void SwitchCheatGodMode();
		void OnVirtualStockChangedEvent();
		void OnContinue_Event(bool doNotShowAgain);
		void ExecuteUbergraph_BP_PRGameMode(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
