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
	 * BlueprintGeneratedClass BPO_AnalyticsManager.BPO_AnalyticsManager_C
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UBPO_AnalyticsManager_C : public UAnalyticsManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0028(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       Enabled;                                                 // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       Began;                                                   // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IJJI[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_PRGameInstance_C*                                bpGI;                                                    // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDateTime                                           TimeStarted;                                             // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<struct FVector>                                     playerLocations;                                         // 0x0048(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTag                                        locationsLevel;                                          // 0x0058(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              avgSeconds;                                              // 0x0060(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FDateTime                                           timeStartedTutorial;                                     // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       IsTide;                                                  // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_806U[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        OpenedTabSubtag;                                         // 0x007C(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      TabOpenTime;                                             // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnTutorialControls();
		void AddParamsFromArray(TArray<class FString> ParamsArray, TArray<struct FAnalyticsEventAttr> EventAttrIn, TArray<struct FAnalyticsEventAttr>* EventAttrOut);
		void CountFinishedStoryMissions(TArray<class UMissionData*>* Missions, int32_t* Count);
		void SendPlayerPositions();
		void SendChangedGameplaySettings(bool VirtualStock, bool PlayerHeight, bool NeckHeight, bool ArmLength, bool VignetteTurn, bool VignetteRun, bool ShowBody, bool SeatedMode);
		void SendChangedControlsSettings(bool TurnType, bool TurnSpeed, bool MovementDirectionType, bool ControllerRotation, bool HoldGrip, bool LeftHanded, bool MirrorHolsters, bool TeleportMovement);
		void AddDefaultParams(TArray<struct FAnalyticsEventAttr>* EventAttrIn, TArray<struct FAnalyticsEventAttr>* EventAttrOut);
		void Add_Difficulty_Params(TArray<struct FAnalyticsEventAttr> EventAttrIn, const struct FRadiusGameDifficulty& GameDifficulty, TArray<struct FAnalyticsEventAttr>* EventAttrOut);
		void EventFourParams(const class FString& Event, const class FString& param1, const class FString& value1, const class FString& param2, const class FString& value2, const class FString& param3, const class FString& value3, const class FString& param4, const class FString& value4);
		void EventThreeParams(const class FString& Event, const class FString& param1, const class FString& value1, const class FString& param2, const class FString& value2, const class FString& param3, const class FString& value3);
		void EventTwoParams(const class FString& Event, const class FString& param1, const class FString& value1, const class FString& param2, const class FString& value2);
		void EventOneParam(const class FString& Event, const class FString& Param, const class FString& Value);
		void EventDefaultParams(const class FString& Event);
		void Begin(class UPRGameInstance* GameInstance);
		void End();
		void OnDifficultyChanged();
		void OnFinalChoice(const class FString& Choice);
		void OnGameStart();
		void OnKatyasMonologue(const struct FGameplayTag& MonologueTag);
		void OnLevelStarted(const struct FGameplayTag& Value);
		void OnLogFPS(const class FString& Location, float Min, float Max, float Average);
		void OnLogHmdDevice();
		void OnMenuNewGame(bool SkipTutor, bool Ironman, const struct FRadiusGameDifficulty& Difficulty);
		void OnMissionFinished(class UMissionData* MissionData);
		void OnMissionStateChanged(class UMissionData* MissionData);
		void OnPlayerDeath(const class FText& DeathCauserName, const struct FVector& DeathLocation);
		void OnPlayerKill(class AActor* KilledActor, const struct FGameplayTag& weaponTag, const struct FVector& DeathLocation);
		void OnPlayerLocation(const struct FVector& Location, float AverageDelta);
		void OnSettingsControls(bool bTurnType, bool bTurnSpeed, bool bMovementDirectionType, bool bControllerRotation, bool bHoldGrip, bool bLeftHanded, bool bMirrorHolsters, bool bTeleportMovement);
		void OnSettingsGameplay(bool VirtualStock, bool PlayerHeight, bool NeckHeight, bool ArmLength, bool VignetteTurn, bool VignetteRun, bool ShowBody, bool SeatedMode);
		void OnSleep(float Seconds, bool isBlackout);
		void OnTideHappening();
		void OnTransitionStart();
		void OnUnstuck(const struct FVector& Location);
		void OnTutorialEnd(const struct FGameplayTag& TutorialId, int32_t TotalSteps, int32_t CompletedSteps);
		void OnTutorialStart(const struct FGameplayTag& TutorialId, int32_t TotalSteps);
		void OnMoneyChanged(int32_t Value, TArray<class FString> AnalyticsParams);
		void OnGuitarPlayed(int32_t PlayCount, float PlayTimeSeconds);
		void OnJournalOpened(const struct FGameplayTag& TabTag);
		void OnFirstTimeTaken(const struct FGameplayTag& Value);
		void ExecuteUbergraph_BPO_AnalyticsManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
