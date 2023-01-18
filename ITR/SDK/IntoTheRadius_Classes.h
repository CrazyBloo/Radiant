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
	 * Class IntoTheRadius.AchievementsManager
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UAchievementsManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_SRQV[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)

	public:
		void UpdateLeaderboardProgress(ERadiusLeaderboard Leaderboard, int32_t Value);
		void ResetAchievementProgress();
		void ReportAchievement(ERadiusAchievement Achievement, int32_t Value);
		void OnItemTaken(class UInventoryItem* Item);
		void OnItemBoughtEvent(class UInventoryItem* InventoryItem);
		void LogCachedAchievements();
		void Initialize();
		class UAchievementsManager* GetAchievementsManager();
		void CompleteAchievement(ERadiusAchievement Achievement);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.ActorActivationVolume
	 * Size -> 0x0018 (FullSize[0x02D0] - InheritedSize[0x02B8])
	 */
	class AActorActivationVolume : public AVolume
	{
	public:
		TArray<class AActorActivationVolume*>                      AdjacentVolumes;                                         // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R5NM[0x8];                                   // 0x02C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.ActorActivationVolumeManager
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UActorActivationVolumeManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_MEXD[0x98];                                  // 0x0028(0x0098) MISSED OFFSET (PADDING)

	public:
		void OnTransitionStart();
		void OnLevelPrepare(const struct FGameplayTag& LevelTag);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.ActorVolumeActivationInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UActorVolumeActivationInterface : public UInterface
	{
	public:
		void SetVolumeActivationState(bool NewState);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.AIEdPerceptionComp
	 * Size -> 0x0000 (FullSize[0x01C0] - InheritedSize[0x01C0])
	 */
	class UAIEdPerceptionComp : public UAIPerceptionComponent
	{
	public:
		bool SetSightHalfAngle(float HalfAngle);
		bool SetSightDistance(float Distance);
		bool SetHearingDistance(float Distance);
		float GetSightHalfAngle();
		float GetSightDistance();
		float GetHearingDistance();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.AliveStatsComponent
	 * Size -> 0x00E8 (FullSize[0x01C8] - InheritedSize[0x00E0])
	 */
	class UAliveStatsComponent : public UActorComponent
	{
	public:
		float                                                      Health;                                                  // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHealth;                                               // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRegeneration;                                           // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WL8I[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxRegenHealth;                                          // 0x00EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RegenerationSpeed;                                       // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RegenHealthLowLevel;                                     // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoHealth;                                               // 0x00F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoRegeneration;                                       // 0x00F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowAutoRegeneration;                                  // 0x00FA(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLowHealth;                                              // 0x00FB(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Stamina;                                                 // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaMax;                                              // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaSpeed;                                            // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStaminaUse;                                             // 0x0108(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStaminaEnded;                                           // 0x0109(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLowStamina;                                             // 0x010A(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LJYD[0x5];                                   // 0x010B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              OwnerActor;                                              // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreNextAnyDamage;                                    // 0x0118(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TAKS[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              LastDamageCauser;                                        // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        LastDamageByWeapon;                                      // 0x0128(0x0008) Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LastDamageWithSmoothing;                                 // 0x0130(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_48R6[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              LastDamageByActor;                                       // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CritBoneName;                                            // 0x0140(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             CritComponent;                                           // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPrintStats;                                             // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCritsOnly;                                              // 0x0151(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanDie;                                                 // 0x0152(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3DOJ[0x5];                                   // 0x0153(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDamageType*                                         IgnoredDamageType;                                       // 0x0158(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHungerEnd;                                             // 0x0160(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHealthEnd;                                             // 0x0170(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStaminaEnd;                                            // 0x0180(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStaminaLow;                                            // 0x0190(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDamaged;                                               // 0x01A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnChangeHealth;                                          // 0x01B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WAY9[0x8];                                   // 0x01C0(0x0008) MISSED OFFSET (PADDING)

	public:
		void UseStamina(bool bUse, float UseSpeed);
		void OnTakePointDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, const class FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser);
		void OnTakeAnyDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void Kill();
		bool IsCriticalHit(class UObject* HitComponent, const class FName& BoneName);
		bool IsAlive();
		void HealthRegeneration();
		float GetHealthPercent();
		void DisplayStats();
		void CustomTick();
		void ChangeHealth(float Value);
		void CalculateStamina(bool bUse);
		float ApplyDamage(class AActor* causer, class AActor* Weapon, float InputDamage);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.AmmoConfig
	 * Size -> 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
	 */
	class UAmmoConfig : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_RZMG[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          CommonInfoTable;                                         // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MeshPrimitiveDataIndex;                                  // 0x0068(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectileForwardSpawnOffset;                            // 0x006C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BulletClassActor;                                        // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              GrenadeClassActor;                                       // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ShrapnelClassActor;                                      // 0x0080(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                ShrapnelTags;                                            // 0x0088(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              ExplosionClassActor;                                     // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           AirExplosionShrapnelAccuracyRange;                       // 0x00A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           AirExplosionBulletAccuracyRange;                         // 0x00A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ExplosionProjectilesOriginOffset;                        // 0x00B0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ExplosionProjectilesBoxExtend;                           // 0x00BC(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetupAmmoMeshComponent(const struct FGameplayTag& AmmoTag, class UStaticMeshComponent* AmmoMeshComponent, bool IsFired);
		bool IsTakenOutAmmo(class AActor* Actor);
		bool IsShrapnelAmmo(const struct FGameplayTag& AmmoTag);
		bool IsHeldAmmo(class AActor* Actor);
		bool IsAmmo(class AActor* Actor);
		class UStaticMesh* GetAmmoWholeMesh(const struct FGameplayTag& AmmoType);
		class FText GetAmmoTypeName(const struct FGameplayTag& AmmoType);
		struct FLinearColor GetAmmoTypeColor(const struct FGameplayTag& AmmoType);
		class UAmmoConfig* GetAmmoTagsConfig();
		class UStaticMesh* GetAmmoShellMesh(const struct FGameplayTag& AmmoType);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.AnalyticsManager
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnalyticsManager : public UObject
	{
	public:
		void OnUnstuck(const struct FVector& Location);
		void OnTutorialStart(const struct FGameplayTag& TutorialId, int32_t TotalSteps);
		void OnTutorialEnd(const struct FGameplayTag& TutorialId, int32_t TotalSteps, int32_t CompletedSteps);
		void OnTutorialControls();
		void OnTransitionStart();
		void OnTideHappening();
		void OnSleep(float Seconds, bool isBlackout);
		void OnSettingsGameplay(bool VirtualStock, bool PlayerHeight, bool NeckHeight, bool ArmLength, bool VignetteTurn, bool VignetteRun, bool ShowBody, bool SeatedMode);
		void OnSettingsControls(bool bTurnType, bool bTurnSpeed, bool bMovementDirectionType, bool bControllerRotation, bool bHoldGrip, bool bLeftHanded, bool bMirrorHolsters, bool bTeleportMovement);
		void OnPlayerLocation(const struct FVector& Location, float AverageDelta);
		void OnPlayerKill(class AActor* KilledActor, const struct FGameplayTag& weaponTag, bool bIsSmoothing, const struct FVector& DeathLocation);
		void OnPlayerDeath(const class FText& DeathCauserName, const struct FVector& DeathLocation);
		void OnMoneyChanged(int32_t Value, TArray<class FString> AnalyticsParams);
		void OnMissionStateChanged(class UMissionData* MissionData);
		void OnMissionFinished(class UMissionData* MissionData);
		void OnMenuNewGame(bool SkipTutor, bool Ironman, const struct FRadiusGameDifficulty& Difficulty);
		void OnLogHmdDevice();
		void OnLogFPS(const class FString& Location, float Min, float Max, float Average);
		void OnLevelStarted(const struct FGameplayTag& Value);
		void OnKatyasMonologue(const struct FGameplayTag& MonologueTag);
		void OnJournalOpened(const struct FGameplayTag& TabTag);
		void OnGuitarPlayed(int32_t PlayCount, float PlayTimeSeconds);
		void OnGameStart();
		void OnFinalChoice(const class FString& Choice);
		void OnDifficultyChanged();
		void End();
		void Begin(class UPRGameInstance* GameInstance);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.AttachmentSlotComponent
	 * Size -> 0x0030 (FullSize[0x0540] - InheritedSize[0x0510])
	 */
	class UAttachmentSlotComponent : public UStaticMeshComponent
	{
	public:
		EItemSlot                                                  Slot;                                                    // 0x0510(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WBSC[0x3];                                   // 0x0511(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        AttachmentType;                                          // 0x0514(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AttachToSocket;                                          // 0x051C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P6SU[0x4];                                   // 0x0524(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         MyStaticMesh;                                            // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBoxComponent*                                       BoxCollision;                                            // 0x0530(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QJ1N[0x8];                                   // 0x0538(0x0008) MISSED OFFSET (PADDING)

	public:
		void TryDetachItem(class AActor* Attachment, bool* bSuccess);
		void TryAttachItem(class AActor* Attachment, bool* bSuccess);
		void SetSlotEnabled(bool bEnable);
		bool IsSlotEnabled();
		bool IsSlotEmpty();
		void IsParentHeld(bool* IsHeld);
		void IsAccepts(const struct FGameplayTag& Type, bool* bCanAttach);
		class UInventoryItem* GetParentItem();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.BackpackSimple
	 * Size -> 0x0020 (FullSize[0x0430] - InheritedSize[0x0410])
	 */
	class ABackpackSimple : public AGrippableStaticMeshActor
	{
	public:
		unsigned char                                              UnknownData_97O2[0x8];                                   // 0x0410(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class APRHolder*>                                   Holders;                                                 // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_62W7[0x8];                                   // 0x0428(0x0008) MISSED OFFSET (PADDING)

	public:
		void RefreshState();
		void OnUnequipped();
		void OnReturned();
		void LerpToHolster();
		class USceneComponent* GetPivotGripPoint();
		class APRHolder* GetHolderSleepingBag();
		TArray<class APRHolder*> GetHolders();
		class APRHolder* GetHolderPrimaryWeapon();
		class APRHolder* GetHolderBackpack();
		bool CheckEquipped();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.BTD_BlackboardBool
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UBTD_BlackboardBool : public UBTDecorator_BlackboardBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.BTD_DistanceToCpp
	 * Size -> 0x0018 (FullSize[0x00F0] - InheritedSize[0x00D8])
	 */
	class UBTD_DistanceToCpp : public UBTDecorator_IsAtLocation
	{
	public:
		float                                                      RefreshInterval;                                         // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E8E9[0x14];                                  // 0x00DC(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.BTD_IsActiveCpp
	 * Size -> 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
	 */
	class UBTD_IsActiveCpp : public UBTD_BlackboardBool
	{
	public:
		unsigned char                                              UnknownData_O46U[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnNPCDied(class AActor* DeadNPC);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.BTS_CheckLOS_Cpp
	 * Size -> 0x0020 (FullSize[0x00B8] - InheritedSize[0x0098])
	 */
	class UBTS_CheckLOS_Cpp : public UBTService_BlackboardBase
	{
	public:
		unsigned char                                              UnknownData_Y2TW[0x20];                                  // 0x0098(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.BTS_UpdateTargetLocation
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UBTS_UpdateTargetLocation : public UBTService_BlackboardBase
	{
	public:
		unsigned char                                              UnknownData_IV2O[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.BTT_Bot_StartAttackCpp
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBTT_Bot_StartAttackCpp : public UBTTaskNode
	{
	public:
		unsigned char                                              UnknownData_2SM3[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.BTT_Bot_StopAttackCpp
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UBTT_Bot_StopAttackCpp : public UBTTaskNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRBasicActor
	 * Size -> 0x0018 (FullSize[0x0298] - InheritedSize[0x0280])
	 */
	class APRBasicActor : public AActor
	{
	public:
		bool                                                       UseRelevanceManagement;                                  // 0x0280(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VIBJ[0x7];                                   // 0x0281(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRelevanceDescription>                       RelevanceDescription;                                    // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic

	public:
		void OnTransitionStart();
		void OnTransitionEnd();
		void OnLevelStarted(const struct FGameplayTag& LevelTag);
		void OnLevelPrepare(const struct FGameplayTag& LevelTag);
		void OnGameStartedPrivate();
		void OnGameStarted();
		void OnGamePaused(bool bPaused);
		void DisableRelevanceManagement();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.CharBroadcast
	 * Size -> 0x0020 (FullSize[0x02B8] - InheritedSize[0x0298])
	 */
	class ACharBroadcast : public APRBasicActor
	{
	public:
		unsigned char                                              UnknownData_Y60W[0x8];                                   // 0x0298(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USphereComponent*                                    Sphere;                                                  // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Radius;                                                  // 0x02A8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LifeTime;                                                // 0x02AC(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        MissionKillPoint;                                        // 0x02B0(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class ACharBroadcast* SpawnBroadcast(class UObject* WorldContext, const struct FTransform& SpawnTransform, const struct FGameplayTag& MissionKillPointTag, float LifeSpan, float SphereRadius);
		void AlertOthers(class AActor* Caller, class AActor** Target, const struct FTransform& Location);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.CheatsController
	 * Size -> 0x0010 (FullSize[0x02A8] - InheritedSize[0x0298])
	 */
	class ACheatsController : public APRBasicActor
	{
	public:
		unsigned char                                              UnknownData_PY9K[0x10];                                  // 0x0298(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.CheatsControllerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCheatsControllerInterface : public UInterface
	{
	public:
		bool SwitchPlayerCollisions();
		bool SwitchCheatShowStashes();
		bool SwitchCheatShowCorpses();
		bool SwitchCheatShowArtifacts();
		void SwitchCheatNoClip();
		void SetCheatScreenshot(bool bValue);
		void SetCheatReload(bool bValue);
		void SetCheatPause(bool bValue);
		void SetCheatNoRandom(bool bValue);
		bool GetCheatShowStashes();
		bool GetCheatShowCorpses();
		bool GetCheatShowArtifacts();
		bool GetCheatScreenshot();
		bool GetCheatReload();
		bool GetCheatPause();
		bool GetCheatNoRandom();
		bool GetCheatNoClip();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.CloseCombatManager
	 * Size -> 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
	 */
	class UCloseCombatManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_1TXZ[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNpcInfo>                                    ManagedNpcList;                                          // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VX9T[0x98];                                  // 0x0060(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APRPlayerCharacter*                                  PlayerRef;                                               // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4EEH[0x8];                                   // 0x0100(0x0008) MISSED OFFSET (PADDING)

	public:
		void UnregisterNpc(class ACharacter* NpcToUnregister);
		void ToggleDebug();
		void RegisterNpc(class ACharacter* NpcToRegister);
		void InitData();
		float GetTeleportSearchRadius();
		float GetMinDistanceFromPlayerToReappear();
		bool GetDebugEnabled();
		ENpcCombatState GetCloseCombatState(class ACharacter* NPC);
		class UCloseCombatManager* GetCloseCombatManager();
		void CleanData();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.CoverBTTask
	 * Size -> 0x0098 (FullSize[0x0108] - InheritedSize[0x0070])
	 */
	class UCoverBTTask : public UBTTaskNode
	{
	public:
		unsigned char                                              UnknownData_C039[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              OutputVector;                                            // 0x0078(0x0028) Edit, NativeAccessSpecifierPublic
		struct FBlackboardKeySelector                              TargetLocation;                                          // 0x00A0(0x0028) Edit, NativeAccessSpecifierPublic
		int32_t                                                    MaxSearchIteration;                                      // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SearchRadius;                                            // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistanceToTarget;                                     // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoPathLengthCheck;                                      // 0x00D4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L2PN[0x3];                                   // 0x00D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxPathLength;                                           // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoSquadDistanceCheck;                                   // 0x00DC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B3CU[0x3];                                   // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxSquadDistance;                                        // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_12AZ[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBehaviorTreeComponent*                              BehaviorTreeComponent;                                   // 0x00E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QFXC[0x18];                                  // 0x00F0(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnQueryComplete(const struct FNpcPointQueryResult& Result);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.FindCoverBTTask
	 * Size -> 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
	 */
	class UFindCoverBTTask : public UCoverBTTask
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.FindShootingPositionBTTask
	 * Size -> 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
	 */
	class UFindShootingPositionBTTask : public UCoverBTTask
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.CoverDebugComponent
	 * Size -> 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
	 */
	class UCoverDebugComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_VN2X[0x8];                                   // 0x0228(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.CoverLoader
	 * Size -> 0x0030 (FullSize[0x02C8] - InheritedSize[0x0298])
	 */
	class ACoverLoader : public APRBasicActor
	{
	public:
		unsigned char                                              UnknownData_YKZ9[0x8];                                   // 0x0298(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCoverDebugComponent*                                DebugComponent;                                          // 0x02A0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FVector>                                     CoverPoints;                                             // 0x02A8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FVector>                                     ShootingPositions;                                       // 0x02B8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.CoverRuntimeDataHolder
	 * Size -> 0x01B8 (FullSize[0x01E0] - InheritedSize[0x0028])
	 */
	class UCoverRuntimeDataHolder : public UObject
	{
	public:
		unsigned char                                              UnknownData_81D0[0x1B8];                                 // 0x0028(0x01B8) MISSED OFFSET (PADDING)

	public:
		void ToggleDebug();
		void OnLevelUnloaded();
		bool GetDebugEnabled();
		class UCoverRuntimeDataHolder* GetCoverRuntimeDataHolder();
		void DebugDraw(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.DamageDealerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDamageDealerInterface : public UInterface
	{
	public:
		struct FGameplayTag GetDamageDealerTag();
		class FText GetDamageDealerName();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.DataSaveManager
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UDataSaveManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_52OJ[0x70];                                  // 0x0028(0x0070) MISSED OFFSET (PADDING)

	public:
		void SetUseAlternateSaveLocation(bool Value);
		bool SaveStringToFileEditor(const class FString& String, const class FString& FilePath, bool bAppend);
		bool SaveStringToFile(const class FString& String, const class FString& FilePath, bool bAppend);
		void SaveGameData(class UPRGameData* Data, int32_t SlotNr, int32_t SaveNr);
		bool IsSlotWithIronman(int32_t Slot);
		bool IsSlotEmpty(const struct FSaveSlotInfo& SlotInfo);
		bool HasSaves();
		bool GetUseAlternateSaveLocation();
		bool GetSlotInfo(int32_t Slot, struct FSaveSlotInfo* SlotInfo);
		class FString GetSavesPath();
		bool GetSaveInfo(int32_t Slot, int32_t Save, struct FSaveInfo* SaveInfo);
		struct FSaveInfo GetLastSaveInfo(const struct FSaveSlotInfo& SlotInfo);
		class UDataSaveManager* GetDataSaveManager();
		class FString GetDataPath();
		bool FixInventoryItemPosition(class UInventoryItem* Item);
		void CopyScopedToAlternateSave();
		void CopyAlternateToScopedSave();
		void AutosaveGameData(const class FString& Message);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.DiscordManager
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UDiscordManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_P66U[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		void Initialize();
		class UDiscordManager* GetDiscordManager();
		void ChangeLocationName();
		void ChangeDifficulty();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.DistanceGripManager
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UDistanceGripManager : public UObject
	{
	public:
		class APRPlayerCharacter*                                  GripSystemOwner;                                         // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UODH[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UInventoryItem*, struct FDistanceGripCandidate> CandidatePool;                                           // 0x0038(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O94J[0x18];                                  // 0x0088(0x0018) MISSED OFFSET (PADDING)

	public:
		void LevelTransitionStartCallback();
		void LevelTransitionEndCallback();
		void ItemTakenFromLevelCallback(class UInventoryItem* ItemTaken);
		void ItemStoredToLevelCallback(class UInventoryItem* ItemStored);
		void ItemRemovedFromLevelCallback(class UInventoryItem* ItemRemoved);
		void ItemActorRemovedCallback(class UInventoryItem* ItemWithActorRemoved);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.EnvConfigurator
	 * Size -> 0x0050 (FullSize[0x02E8] - InheritedSize[0x0298])
	 */
	class AEnvConfigurator : public APRBasicActor
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0298(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ADirectionalLight*                                   Sun;                                                     // 0x02A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Sky;                                                     // 0x02A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ASkyLight*                                           SkyLight;                                                // 0x02B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AExponentialHeightFog*                               Fog;                                                     // 0x02B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     RainParticles;                                           // 0x02C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ADirectionalLight*                                   ShadowLight;                                             // 0x02C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   ColorSun;                                                // 0x02D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   ColorFog;                                                // 0x02D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   ColorSky;                                                // 0x02E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.EventsManager
	 * Size -> 0x0410 (FullSize[0x0438] - InheritedSize[0x0028])
	 */
	class UEventsManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_69YN[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnGameInstanceStarted;                                   // 0x0038(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameModeStarted;                                       // 0x0048(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerStarted;                                         // 0x0058(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameStarted;                                           // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameShutdown;                                          // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameDataSave;                                          // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameTimeChanged;                                       // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameplayTimeDilationChanged;                           // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGamePaused;                                            // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReferencesClearing;                                    // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEnvironmentRePrepared;                                 // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTransitionStart;                                       // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTransitionStartOnce;                                   // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTransitionEnd;                                         // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTransitionEndOnce;                                     // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLevelPrepare;                                          // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLevelPrepareOnce;                                      // 0x0138(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLevelStarted;                                          // 0x0148(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLevelStartedOnce;                                      // 0x0158(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemDropped;                                           // 0x0168(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemTaken;                                             // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemStored;                                            // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemsSold;                                             // 0x0198(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemBought;                                            // 0x01A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerMoneyChanged;                                    // 0x01B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemChangeDurability;                                  // 0x01C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerLevelChanged;                                    // 0x01D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInventoryModeChanged;                                  // 0x01E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemRemoved;                                           // 0x01F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemActorRefRemoved;                                   // 0x0208(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFirstTimeTaken;                                        // 0x0218(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNewMissionAdded;                                       // 0x0228(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMissionPreview;                                        // 0x0238(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMissionFinished;                                       // 0x0248(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMissionStateChanged;                                   // 0x0258(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnObjectiveFinished;                                     // 0x0268(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnObjectiveRestored;                                     // 0x0278(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnObjectiveProgress;                                     // 0x0288(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTutorialSequenceFinished;                              // 0x0298(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerKilledNPC;                                       // 0x02A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNPCDied;                                               // 0x02B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWildSpawnerCleared;                                    // 0x02C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPictureTaken;                                          // 0x02D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStashOpened;                                           // 0x02E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTriggerPassed;                                         // 0x02F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTriggerUnset;                                          // 0x0308(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStoryNotePassed;                                       // 0x0318(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCustomMapMarkPassed;                                   // 0x0328(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNewJournalNote;                                        // 0x0338(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnConsumableUsing;                                       // 0x0348(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnShotFired;                                             // 0x0358(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTutorialStarted;                                       // 0x0368(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTideHappening;                                         // 0x0378(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDifficultyChanged;                                     // 0x0388(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnVirtualStockChanged;                                   // 0x0398(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnShowBodyChanged;                                       // 0x03A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerReset;                                           // 0x03B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerDied;                                            // 0x03C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerEyesOpen;                                        // 0x03D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerSleep;                                           // 0x03E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerTurning;                                         // 0x03F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerWalking;                                         // 0x0408(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerRunning;                                         // 0x0418(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerBodyVisibilityChanged;                           // 0x0428(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UEventsManager* GetEventsManager();
		void FireOnWildSpawnerCleared(class AActor* SpawnerActor);
		void FireOnVirtualStockChanged();
		void FireOnTutorialStarted(const struct FGameplayTag& TutorialId);
		void FireOnTutorialSequenceFinished(class AActor* SequenceActor);
		void FireOnTriggerUnset(const struct FGameplayTag& Trigger);
		void FireOnTriggerPassed(const struct FGameplayTag& Trigger);
		void FireOnTransitionStart();
		void FireOnTransitionEnd();
		void FireOnTideHappening();
		void FireOnStoryNotePassed(const struct FGameplayTag& NoteID);
		void FireOnStashOpened(class AActor* StashActor);
		void FireOnShowBodyChanged();
		void FireOnShotFired();
		void FireOnReferencesClearing();
		void FireOnPlayerWalking();
		void FireOnPlayerTurning();
		void FireOnPlayerStarted();
		void FireOnPlayerSleep(float Seconds, bool bIsBlackout);
		void FireOnPlayerRunning();
		void FireOnPlayerReset();
		void FireOnPlayerMoneyChanged(int32_t Value, TArray<class FString> AnalyticsParams);
		void FireOnPlayerLevelChanged(int32_t PlayerLevel);
		void FireOnPlayerKilledNPC(class AActor* NPCActor, const struct FGameplayTag& weaponTag);
		void FireOnPlayerEyesOpen(bool bIsOpen);
		void FireOnPlayerDied();
		void FireOnPlayerBodyVisibilityChanged(bool bValue);
		void FireOnPictureTaken(class AActor* Actor);
		void FireOnObjectiveRestored(class UMissionData* MissionData, class UMissionAbstractObjectiveData* objectiveData);
		void FireOnObjectiveProgress(class UMissionData* MissionData, class UMissionAbstractObjectiveData* objectiveData);
		void FireOnObjectiveFinished(class UMissionData* MissionData, class UMissionAbstractObjectiveData* objectiveData);
		void FireOnNPCDied(class AActor* NPCActor);
		void FireOnNewMissionAdded(class UMissionData* MissionData);
		void FireOnNewJournalNote(const struct FGameplayTag& NoteID);
		void FireOnMissionStateChanged(class UMissionData* MissionData);
		void FireOnMissionPreview(class UMissionData* MissionData);
		void FireOnMissionFinished(class UMissionData* MissionData);
		void FireOnLevelStarted(const struct FGameplayTag& LevelTag);
		void FireOnLevelPrepare(const struct FGameplayTag& LevelTag);
		void FireOnItemTaken(class UInventoryItem* InventoryItem);
		void FireOnItemStored(class UInventoryItem* InventoryItem);
		void FireOnItemsSold(TArray<class UInventoryItem*> Items);
		void FireOnItemRemoved(class UInventoryItem* InventoryItem);
		void FireOnItemDropped(class AActor* itemActor);
		void FireOnItemChangeDurability(class UInventoryItem* InventoryItem);
		void FireOnItemBought(class UInventoryItem* InventoryItem);
		void FireOnItemActorRefRemoved(class UInventoryItem* InventoryItem);
		void FireOnInventoryModeChanged();
		void FireOnGameTimeChanged(float DeltaSeconds);
		void FireOnGameStarted();
		void FireOnGameShutdown();
		void FireOnGameplayTimeDilationChanged(float TimeDilation);
		void FireOnGamePaused(bool bIsPaused);
		void FireOnGameModeStarted();
		void FireOnGameInstanceStarted();
		void FireOnGameDataSave();
		void FireOnFirstTimeTaken(const struct FGameplayTag& ItemTag);
		void FireOnEnvironmentRePrepared(class APREnvironment* Environment);
		void FireOnDifficultyChanged();
		void FireOnCustomMapMarkPassed(const struct FGameplayTag& MarkID);
		void FireOnConsumableUsing(class UInventoryItem* Item);
		void FireOnConsumableActorUsing(class AActor* itemActor);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.FLAnimation
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLAnimation : public UBlueprintFunctionLibrary
	{
	public:
		bool GetDurationOfActiveNotifyState(class UAnimInstance* AnimInstance, class UAnimNotifyState* AnimNotifyStateInstance, float* OutDuration);
		float GetAnimSequencePlayLength(class UAnimSequenceBase* Anim, float StartTime, bool bPlayingBackwards);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.FLBlutility
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLBlutility : public UBlueprintFunctionLibrary
	{
	public:
		bool SetWeaponInfosToTable(class UDataTable* DataTable, TArray<struct FWeaponInfo> infos);
		bool SetPoseInfosToTable(class UDataTable* DataTable, TArray<struct FPRHandPoseInfosPair> Poses);
		bool SetNPCInfosToTable(class UDataTable* DataTable, TArray<struct FPRNPCInfo> infos);
		bool SetMobility(class AActor* Actor, EComponentMobility Mobility);
		bool SetItemInfosToTable(class UDataTable* DataTable, TArray<struct FPRItemInfo> infos);
		bool SetAnomalyInfosToTable(class UDataTable* DataTable, TArray<struct FPRAnomalyInfo> infos);
		bool SetAmmoInfosToTable(class UDataTable* DataTable, TArray<struct FAmmoInfo> infos);
		bool SetAmmoContainerInfosToTable(class UDataTable* DataTable, TArray<struct FPRAmmoContainerInfo> infos);
		bool SetAllowCullDistanceVolume(class UStaticMeshComponent* Component, bool bValue);
		void SaveDataTable(class UDataTable* DataTable);
		void ReloadConfigAssets();
		void LoadItemInfos(TArray<struct FPRItemInfo>* Array, bool updateTable);
		bool CompareHandPoses(const struct FPRHandPoseInfo& poseA, const struct FPRHandPoseInfo& poseB);
		void ClearDataTable(class UDataTable* DataTable);
		bool AddWeaponInfoToTable(class UDataTable* DataTable, const struct FWeaponInfo& Info);
		bool AddPoseInfoToTable(class UDataTable* DataTable, const struct FPRHandPoseInfosPair& Pose);
		TMap<struct FGameplayTag, struct FTagToTransformsList> AddPointData(TMap<struct FGameplayTag, struct FTagToTransformsList> In, const struct FGameplayTag& LevelTag, const struct FGameplayTag& pointTag, const struct FTransform& absoluteTransform, TMap<struct FGameplayTag, struct FTransform> levelCenters, bool Message, bool duplicateCheck);
		bool AddNPCInfoToTable(class UDataTable* DataTable, const struct FPRNPCInfo& Info);
		bool AddItemInfoToTable(class UDataTable* DataTable, const struct FPRItemInfo& Info);
		bool AddAnomalyInfoToTable(class UDataTable* DataTable, const struct FPRAnomalyInfo& Info);
		bool AddAmmoInfoToTable(class UDataTable* DataTable, const struct FAmmoInfo& Info);
		bool AddAmmoContainerInfoToTable(class UDataTable* DataTable, const struct FPRAmmoContainerInfo& Info);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.FLData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLData : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.FLFirearmProjectiles
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLFirearmProjectiles : public UBlueprintFunctionLibrary
	{
	public:
		void SpawnShrapnelProjectile(const struct FTransform& Transform, const struct FAmmoInfo& AmmoInfo, float Damage, float AccuracyInternal, float AccuracyMultiplier, float Offset, float TraceDistance, class AActor* Owner, class APawn* Instigator);
		void SpawnProjectile(const struct FTransform& Transform, const struct FAmmoInfo& AmmoInfo, float Damage, float Velocity, float AccuracyInternal, float AccuracyMultiplier, float Offset, class AActor* Owner, class APawn* Instigator, bool IsForceTrace, bool* State, class AActor** Actor);
		void SpawnGrenadeProjectile(const struct FTransform& Transform, const struct FAmmoInfo& AmmoInfo, float Damage, float Velocity, float AccuracyRadians, class AActor* Owner, class APawn* Instigator, bool IsForceTrace);
		TArray<class AActor*> SpawnExplosionProjectile(const struct FTransform& ExplosionOrigin, const struct FExplosionParticalInfo& ParticalInfo, class AActor* Owner, class APawn* Instigator, bool IsForceTrace);
		void SpawnExplosion(const struct FTransform& Transform, const struct FExplosionInfo& ExplosionInfo, class AActor* Owner, class APawn* Instigator);
		void SpawnBulletProjectile(const struct FTransform& Transform, const struct FAmmoInfo& AmmoInfo, float Damage, float Velocity, float AccuracyRadians, class AActor* Owner, class APawn* Instigator, bool IsForceTrace, bool* State, class AActor** Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.FLGeneral
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLGeneral : public UBlueprintFunctionLibrary
	{
	public:
		class FString TracersShowTypeToString(ETracersShowType TracersShowType);
		class FString TagsArrayAsString(const class FString& Prefix, TArray<struct FGameplayTag> tagsArray);
		class AActor* SpawnActorWithLabel(class UObject* WorldContextObject, class UClass* ActorClass, const struct FVector& Location, const class FString& Label);
		void SortComponentsByLabel(TArray<class USceneComponent*> In, TArray<class USceneComponent*>* Out);
		void ShowMessage(const class FString& Message, const class FString& Title);
		struct FTransform ShiftActorByComponent(class AActor* Actor, class USceneComponent* Component, const struct FTransform& TargetTransform);
		void SetLightVisibility(class ULightComponent* Light, bool IsVisible);
		void SetLightAffectsWorld(class ULightComponent* Component, bool bAffects);
		void SetCanEverAffectNavigation(class UActorComponent* Component, bool bRelevant);
		void SetAngularRotationOffset(class UPhysicsConstraintComponent* Component, const struct FRotator& RotationOffset);
		void SetActorSimulatePhysics(class AActor* Actor, bool Simulate, bool zeroVel, bool* success, class UPrimitiveComponent** Primitive);
		bool SetActorEnableGravity(class AActor* Actor, bool enable);
		void SafeDestroyActor(class AActor* Actor);
		struct FGameplayTagContainer RequestGameplayTagChildren(TArray<struct FGameplayTag> GameplayTags);
		void RefreshHolders(class UObject* Object);
		void PutActorInPersistentLevel(class AActor* Actor);
		float ProtectedApplyPointDamage(class AActor* DamagedActor, float BaseDamage, const struct FVector& HitFromDirection, const struct FHitResult& HitInfo, class AActor* ActorInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass);
		void PrintObjectReferences(class UObject* Object);
		struct FRadiusGameDifficulty PresetToDifficulty(EPRGameDifficultyPreset DifficultyPreset);
		bool ParseCommandLine(const class FString& ParameterName, class FString* Value);
		struct FMinMaxFloat Multiply_MinMaxFloat(const struct FMinMaxFloat& A, float B);
		void KillActorWithChildren(class AActor* Actor);
		void KillActorsByClass(class UObject* WorldContextObject, class UClass* ActorsClass, bool bWithChildren);
		void KillActor(class AActor* Actor);
		class FString ItemsDropTypeToString(EItemsDropType DropType);
		bool IsZeroParallelepiped(const struct FParallelepiped& Rect);
		bool IsZeroInt(const struct FMinMaxInt& MinMax);
		bool IsZeroFloat(const struct FMinMaxFloat& MinMax);
		bool IsZeroDiffInt(const struct FMinMaxInt& MinMax);
		bool IsZeroDiffFloat(const struct FMinMaxFloat& MinMax);
		bool IsProfilingInCommandLine();
		bool IsPreviewActor(class AActor* Actor);
		bool IsPassedTutorialUnseen(const struct FGameplayTag& TriggerTag);
		bool IsParallelepipedIntersectSphere(const struct FParallelepiped& Rect, const struct FVector& SphereCenter, float SphereRadius);
		bool IsParallelepipedIntersectPoint(const struct FParallelepiped& Rect, const struct FVector& Point);
		bool IsNecessaryTutorial();
		bool IsInTutorialLevel();
		bool IsInMainMenuLevel();
		bool IsInBoundsIgnoreZ(const struct FVector& Point, const struct FTransform& BoxWorldTransform, const struct FVector& BoxExtent);
		bool IsGameStarted();
		bool IsGameRunning(class UObject* WorldContextObject);
		bool IsGameplayRunning();
		bool IsGameClosing();
		bool IsFreeGame();
		bool IsEditorCustomStartup();
		bool IsEarlyAccessPlayer();
		bool IsDifficultyAppliedAfterTide(const struct FRadiusGameDifficulty& NewDifficulty);
		bool IsDefaultUpgrade(const struct FGameplayTag& UpgradeID, class UInventoryItem* Item);
		bool IsConditionsPassed(TArray<class UPRCondition*> Conditions);
		bool IsComponentBoundsIntersect(class UPrimitiveComponent* ComponentA, class UPrimitiveComponent* ComponentB);
		bool IsCommandLine(const class FString& ParameterName);
		bool IsActorInLevel(class AActor* Actor, const struct FGameplayTag& LevelTag);
		bool IsActorInCurrentLevel(class AActor* Actor);
		bool HasUnseenPassedTutorials();
		bool HasPassedTutorials();
		float GetTrueMin(const struct FMinMaxFloat& MinMax);
		float GetTrueMax(const struct FMinMaxFloat& MinMax);
		void GetTimeStringFromSeconds(int32_t TotalSeconds, bool bNoSeconds, class FString* String);
		void GetTimeSpentString(int32_t TotalMinutes, class FString* String);
		class FName GetStreamingLevelNameFromActor(class AActor* Actor);
		float GetSignedAngle(const struct FVector& Normal, const struct FVector& v1, const struct FVector& v2);
		struct FTransform GetRelativeTransform(class AActor* Actor);
		int32_t GetRandomInt(const struct FMinMaxInt& MinMax);
		float GetRandomFloat(const struct FMinMaxFloat& MinMax);
		int32_t GetPSOTasksRemaining();
		void GetPRPlayerPawn(class UObject* WorldContextObject, class APawn** PRPlayerPawn);
		struct FVector GetPointsBoxSize(TArray<struct FVector> Points);
		class UClass* GetParentClass(class UClass* Class);
		class UClass* GetObjectParentClass(class UObject* Object);
		class FName GetObjectFName(class UObject* Object);
		class FString GetNewNoteMarker(const struct FGameplayTag& Tag);
		struct FTutorialConfig GetNecessaryTutorialConfig();
		void GetMapLevelTag(class UObject* WorldContextObject, struct FGameplayTag* LevelTag);
		void GetLevelByName(const class FString& LevelName, struct FGameplayTag* LevelTag);
		struct FBox GetLevelBounds(class ULevel* TargetLevel, struct FVector* LevelLocation);
		bool GetGamePurchaseDate(struct FDateTime* PurchaseDate, class FString* PurchaseDateString);
		void GetDateTimeString(const struct FDateTime& DateTime, class FString* String);
		class UObject* GetAttackFromPawn(class APawn* Pawn);
		TArray<struct FGameplayTag> GetAllSecondaryWeaponTags();
		TArray<struct FGameplayTag> GetAllPrimaryWeaponTags();
		TArray<struct FGameplayTag> GetAllCassetteTags();
		TArray<struct FGameplayTag> GetAllArtifactTags();
		struct FGameplayTag GetActorLevelTag(class AActor* Actor);
		class FString GetActorLevelName(class AActor* Actor);
		void GetActorHolderTransform(class AActor* Actor, const struct FGameplayTag& holderID, bool* success, struct FTransform* RelativeTransform);
		class FString GameDefaultMap();
		int32_t FindIndexOfTag(const struct FGameplayTag& Tag, TArray<struct FGameplayTag> Array, bool bExact);
		float FindDistanceAlongSplineClosestToLocation(class USplineComponent* Spline, const struct FVector& Location);
		class FString DifficultyTypeToString(EDifficultyType DifficultyType);
		EPRGameDifficultyPreset DifficultyToPreset(const struct FRadiusGameDifficulty& GameDifficulty);
		class FString DifficultyPresetToString(EPRGameDifficultyPreset DifficultyPreset);
		void DifficultiesToNames(TArray<EDifficultyType> Difficulties, TArray<class FText>* Names, TArray<int32_t>* Indexes);
		void ClearUnseenPassedTutorials();
		void CheckUniqueInstanceID(class UObject* WorldContextObject, class FString* UID, const class FString& Prefix, bool bOnlyIfEmpty);
		struct FVector CalcLocalBounds(class USceneComponent* Component);
		bool BlinkFloorSweepTest(class UCharacterMovementComponent* MovementComponent, class ACharacter* CharacterOwner, struct FHitResult* Hit, const struct FVector& CapsuleLocation, const struct FVector& TraceStart, const struct FVector& TraceEnd);
		TArray<struct FGameplayTag> AsArray(const struct FGameplayTagContainer& Container);
		struct FPRNPCInfo ApplyDifficultyModifiers(const struct FPRNPCInfo& NpcInfo);
		class FString AmmoContainerDataAsString(const class FString& Prefix, const struct FAmmoContainerData& AmmoContainerData);
		class UActorComponent* AddComponentToActor(class AActor* BaseActor, class UClass* AttachedComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.FLItems
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLItems : public UBlueprintFunctionLibrary
	{
	public:
		void OilVerticesAtLocation(class UStaticMeshComponent* StaticMeshComponent, const struct FVector& WorldLocation, float DrawSize);
		void LightDetection(class USpotLightComponent* Spot);
		bool IsWeaponItem(class UInventoryItem* Item);
		bool IsSimpleItem(class UInventoryItem* Item);
		bool IsItemActorCanBeTraded(class AActor* itemActor);
		bool IsAmmoItem(class UInventoryItem* Item);
		bool IsAmmoContainerItem(class UInventoryItem* Item);
		int32_t GetTotalPrice(TArray<class AActor*> Actors, bool bIsSelling);
		void GetStatReliability(class UInventoryItem* Item, float* White, float* Red, float* Green, int32_t* PercentChange, bool* bGood);
		void GetStatRecoil(class UInventoryItem* Item, float* White, float* Red, float* Green, int32_t* PercentChange, bool* bGood);
		void GetStatRatios(class UInventoryItem* Item, EWeaponInfoParameter Parameter, float* White, float* Red, float* Green, int32_t* PercentChange, bool* bGood);
		void GetStatFireRate(class UInventoryItem* Item, float* White, float* Red, float* Green, int32_t* PercentChange, bool* bGood);
		void GetStatDamage(class UInventoryItem* Item, float* White, float* Red, float* Green, int32_t* PercentChange, bool* bGood);
		void GetStatAccuracy(class UInventoryItem* Item, float* White, float* Red, float* Green, int32_t* PercentChange, bool* bGood);
		int32_t GetSellPrice(class AActor* itemActor, bool bIgnoreIfAttached, bool bItemOnly);
		int32_t GetRepairTime(class AActor* itemActor, bool ignoreIfAttached);
		int32_t GetRepairPrice(class AActor* itemActor, bool ignoreIfAttached);
		void GetItemClass(class UInventoryItem* Item, class UClass** itemClass);
		void GetCleanableMeshes(class AActor* Actor, class UMaterial* ComparisonMaterial, TArray<class UStaticMeshComponent*>* outMeshes, int32_t* outCleanbleVertices);
		class FText GetActorAssociatedName(class AActor* Actor);
		class UPRItemConfig* CreateConfig(const struct FGameplayTag& ItemTag, const class FString& UID);
		TArray<class UInventoryItem*> ConstructItemFromConfig(class UPRItemConfig* Config);
		class UInventoryItem* ConstructDefaultItem(const struct FGameplayTag& Tag, const class FString& CustomUID, TArray<struct FGameplayTag> AdditionalTags, const struct FGameplayTag& holderID, float DurabilityRatio);
		class UInventoryItem* ConstructActorItem(class AActor* Actor, const class FString& CustomUID, TArray<struct FGameplayTag> AdditionalTags, float DurabilityRatio);
		class UInventoryItem* CloneInventoryItem(class UInventoryItem* Item, const class FString& CustomID);
		int32_t CleanVerticesAtLocation(class UStaticMeshComponent* StaticMeshComponent, const struct FVector& WorldLocation, float DrawSize);
		void CalculateSmoothingAlpha(bool* bOutIsAligned, float* OutAlignAlpha, class UCameraComponent* VRCameraRef, class UMeshComponent* Mesh, const class FName& SocketName, float DistanceLimit, float AlphaThreshold);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.FLLogs
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLLogs : public UBlueprintFunctionLibrary
	{
	public:
		void SwitchWorldDumpLogs();
		void SwitchSpawnerLogs();
		void SwitchSpawnerDebug();
		void SwitchSingletonsLogs();
		void SwitchSavesLogs();
		void SwitchPoolLogs();
		void SwitchLootTablesLogs();
		void SwitchLogsEnabled();
		void SwitchLevelsLogs();
		void SwitchInventoryLogs();
		void SwitchINILogs();
		void SwitchGameReferencesLogs();
		void SwitchGameModeLogs();
		void SwitchGameDataLogs();
		void SwitchDetailedEventsLogs();
		void SwitchDataParsingLogs();
		void SwitchConditionsLogs();
		void SwitchClusterLogs();
		void SwitchBasicActorLogs();
		void PRLogStacktrace(bool Warning, const class FString& Message);
		void PRLogNormal(const class FString& Message);
		void PRLogLines(const class FString& Message);
		void PRLogError(const class FString& Message);
		void PRLogBanner(const class FString& Symbol, const class FString& Message);
		bool PrintWorldDumpLogs();
		void PrintWorldDump(class UObject* WorldContextObject);
		bool PrintSpawnerLogs();
		bool PrintSingletonsLogs();
		bool PrintSavesLogs();
		bool PrintPoolLogs();
		void PrintNPCDump(class UObject* WorldContextObject);
		void PrintMissionsDataDump();
		bool PrintLootTablesLogs();
		bool PrintLevelsLogs();
		bool PrintInventoryLogs();
		void PrintInventoryDataDump();
		bool PrintINILogs();
		bool PrintGameReferencesLogs();
		bool PrintGameModeLogs();
		bool PrintGameDataLogs();
		void PrintGameDataDump();
		bool PrintDetailedEventsLogs();
		bool PrintDataParsingLogs();
		bool PrintConditionsLogs();
		bool PrintClusterLogs();
		bool PrintBasicActorLogs();
		bool LogsEnabled();
		bool IsEnabledTeleportDebug();
		bool IsEnabledPlayerStatsLogs();
		bool IsEnabledBTRDebug();
		bool IsEnabledAnomaliesLogs();
		float GetTeleportDebugTime();
		bool DrawSpawnerDebug();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.FLMissionData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLMissionData : public UBlueprintFunctionLibrary
	{
	public:
		void SetString(const struct FGameplayTag& MissionConfigId, const class FString& Key, const class FString& Value);
		void SetInt(const struct FGameplayTag& MissionConfigId, const class FString& Key, int32_t Value);
		void SetFloat(const struct FGameplayTag& MissionConfigId, const class FString& Key, float Value);
		void SetBool(const struct FGameplayTag& MissionConfigId, const class FString& Key, bool Value);
		void GetString(const struct FGameplayTag& MissionConfigId, const class FString& Key, class FString* Value, bool* IsSet);
		void GetInt(const struct FGameplayTag& MissionConfigId, const class FString& Key, int32_t* Value, bool* IsSet);
		void GetFloat(const struct FGameplayTag& MissionConfigId, const class FString& Key, float* Value, bool* IsSet);
		void GetBool(const struct FGameplayTag& MissionConfigId, const class FString& Key, bool* Value, bool* IsSet);
		void CleanUp(const struct FGameplayTag& MissionConfigId);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.FLPhysics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLPhysics : public UBlueprintFunctionLibrary
	{
	public:
		class UPrimitiveComponent* ToggleSimulatePhysics(class AActor* Actor, bool bState);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.FLPlatform
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLPlatform : public UBlueprintFunctionLibrary
	{
	public:
		bool IsVRControllerDefault();
		bool IsNativeOculus();
		bool HasVRFocus();
		EPRControllerType GetVRControllerType();
		class FString GetPlatformTypeString();
		EPRPlatformType GetPlatformType();
		EPRHmdDeviceType GetHMDDeviceType();
		class FString GetGPUBrandName();
		void GetFingerCurls(EPRHand hand, struct FFingerCurls* FingerCurls);
		EPRControllerType GetDefaultControllerType(EPRHmdDeviceType HMDDevice);
		void GetCurlsAndSplaysState(bool* LeftHandState, bool* RightHandState);
		class FString GetCPUVendorName();
		class FString GetCPUBrandName();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.FLProject
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLProject : public UBlueprintFunctionLibrary
	{
	public:
		class FString TrimFloat(float In, int32_t Digits);
		struct FVector RoundVector(const struct FVector& In, int32_t Digits);
		struct FTransform RoundTransform(const struct FTransform& In);
		struct FRotator RoundRotator(const struct FRotator& In, int32_t Digits);
		float RoundFloat(float In, int32_t Digits);
		float Negative(float In);
		TArray<class UObject*> NativeSortObjectsByDistance(TArray<class UObject*> inArray, class AActor* DistanceFromActor);
		bool IsInputEnabledAndNotSimulation();
		bool GetSpawnPoint(const struct FVector& nearby, float InRadius, bool reachable, struct FVector* OutPoint);
		bool GetReachablePointNotVisibleToPlayer(class APawn* PlayerPawn, class APawn* NPC, float MinDistFromPlayer, float SearchRadius, int32_t NumAttempts, struct FVector* OutPoint);
		bool GetNavigablePointBehindPlayer(class APawn* PlayerPawn, float MinDistFromPlayer, float SearchRadius, struct FVector* OutPoint);
		bool GetGripRelativeTransform(class UObject* GripObject, class UGripMotionControllerComponent* handController, EPRHandPoseType poseType, struct FTransform* outGripRelativeTransform);
		void GetGripObjectActor(class UObject* Object, class AActor** Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.FLSpawn
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLSpawn : public UBlueprintFunctionLibrary
	{
	public:
		class AActor* SpawnNPC(class UObject* WorldContextObject, const struct FNpcSpawnInfo& NpcSpawnInfo);
		class AActor* SpawnNiagaraEmitter(const struct FTransform& Transform, const struct FRadiusNiagaraEmitterInfo& Info);
		class AActor* SpawnItemByType(class UObject* WorldContextObject, const struct FGameplayTag& ItemTypeID, const class FString& InstanceId, const struct FTransform& Transform, bool bProjectOnGround, bool bSimulatePhysics);
		class AActor* SpawnItemByTag(class UObject* WorldContextObject, const struct FGameplayTag& Tag, class USceneComponent* ParentComponent, bool bSnapToParent, const struct FTransform& Transform, bool bPreConfigure, const class FString& CustomID);
		class AActor* SpawnItemByInventoryItem(class UObject* WorldContextObject, class UInventoryItem* InventoryItem, const struct FTransform& Transform, bool bProjectOnGround, bool bSimulatePhysics);
		class AActor* SpawnItem(class UObject* WorldContextObject, const struct FItemSpawnInfo& ItemSpawnInfo);
		class AActor* SpawnInventoryItem(class UObject* WorldContextObject, class UInventoryItem* InventoryItem, class USceneComponent* ParentComponent, bool bKeepRelativeLocation, bool bSimulatePhysics);
		class AActor* SpawnImpactFromHit(class UObject* WorldContextObject, const struct FHitResult& Hit, float ParticleScale, float DecalScale, float Distance);
		class AActor* SpawnImpact(const struct FTransform& Transform, const struct FRadiusImpactInfo& Info);
		class AActor* SpawnEmitter(const struct FTransform& Transform, const struct FRadiusEmitterInfo& Info);
		class AActor* SpawnBulletShell(class UClass* ActorClass, const struct FTransform& Transform, const struct FRadiusFirearmShellInfo& ShellInfo);
		class AActor* SpawnAnomaly(class UObject* WorldContextObject, const struct FAnomalySpawnInfo& AnomalySpawnInfo);
		class AActor* SpawnActorWithTransformDeferred(class UObject* WorldContextObject, class UClass* ActorClass, const struct FTransform& Transform);
		class AActor* SpawnActorWithIdentityTransform(class UObject* WorldContextObject, class UClass* ActorClass, bool bDeferred);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.FLStaticMeshSplitter
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLStaticMeshSplitter : public UBlueprintFunctionLibrary
	{
	public:
		TArray<class AActor*> SplitStaticMeshByMaterial(class AActor* inputActor);
		void SetLodScreenSize(class UStaticMeshComponent* StaticMeshComponent, int32_t LODIndex, float ScreenSize);
		void SetLightMapResolution(class UStaticMeshComponent* StaticMeshComponent, int32_t Resolution);
		void SetLightmapCoordinateIndex(class UStaticMesh* StaticMesh, int32_t coordinateIndex);
		bool SetCustomDataInTexcoord(class UStaticMeshComponent* StaticMeshComponent, int32_t textureCoordIndex, const struct FVector2D& customData);
		void RemoveCollisionFromLodSections(class UStaticMeshComponent* StaticMeshComponent);
		struct FVector2D PackTintAndTextureIndex(const struct FLinearColor& Tint, int32_t TextureIndex);
		void CreateEmptyLod(class UStaticMeshComponent* StaticMeshComponent);
		void CreateCopyOfExistingLod(class UStaticMeshComponent* StaticMeshComponent, int32_t sourceLodIndex);
		void BuildStaticMesh(class UStaticMesh* StaticMesh);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.FLSystem
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLSystem : public UBlueprintFunctionLibrary
	{
	public:
		bool IsSimulate();
		bool IsShippingBuild();
		bool IsQABuild();
		bool IsEditor();
		bool IsDevelopmentBuild();
		bool IsBuild();
		void GetPuTimers(float* RawFrameTime, float* RawGameThreadTime, float* RawrenderThreadTime, float* RawGPUFrameTime);
		class FString GetProjectVersion();
		class FString GetProjectRevision();
		class FString GetProjectBeta();
		class FString GetInstallID();
		class FString GetFullVersionString();
		class FString GetClientVersionString();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.Texture2DArrayWrapper
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UTexture2DArrayWrapper : public UObject
	{
	public:
		class FString                                              Postfix;                                                 // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UTexture2D*>                                  Textures;                                                // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.FLTexture2DArray
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFLTexture2DArray : public UBlueprintFunctionLibrary
	{
	public:
		TArray<class UTexture2DArrayWrapper*> Texture2DArray_SplitTexturesIntoValidGroups(TArray<class UTexture2D*> Textures);
		void Texture2DArray_SetTextures(class UTexture2DArray* textureArray, TArray<class UTexture2D*> Textures);
		TArray<class UTexture2D*> Texture2DArray_GetTextures(class UTexture2DArray* textureArray);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.GameConfig
	 * Size -> 0x03D0 (FullSize[0x0400] - InheritedSize[0x0030])
	 */
	class UGameConfig : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_4ZX0[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LootSpawnDistance;                                       // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisableInputInTransitionMonologue;                       // 0x003C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SkipTransitionMonologueInProd;                           // 0x003D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QJJ1[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        LoadingHints;                                            // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      LoadingHintsChangeTime;                                  // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LoadingHintsPSOUpdateTime;                               // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MissionAbortCooldownSeconds;                             // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BulletsTag;                                              // 0x005C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8NKX[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           ReleaseDateTime;                                         // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPRTriggerConfig>                            GeneralTriggers;                                         // 0x0070(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FTideTriggerConfig>                          TideTriggers;                                            // 0x0080(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                EAPrizes;                                                // 0x0090(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      RealMinutesInGameHour;                                   // 0x00A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ACMV[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FGameplayTag, float>                           RealMinutesInGameHourOverride;                           // 0x00A8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      TidePeriodInGameHours;                                   // 0x00F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TideSignalInGameSeconds;                                 // 0x00FC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                ItemTypesToDestroyOnTide;                                // 0x0100(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      FogReEnterGameHoursSkip;                                 // 0x0110(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RC6Z[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, struct FConditionsList>                      SpecialClustersCounts;                                   // 0x0118(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       OnlyBigClustersAreSpecial;                               // 0x0168(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QP8D[0x3];                                   // 0x0169(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        SpecialClusterArtifactTypeID;                            // 0x016C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WZ13[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, struct FConditionsList>                      SpecialGeneratorsCounts;                                 // 0x0178(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGameplayTag                                        SpecialGeneratorShardTypeID;                             // 0x01C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        OrdinaryGeneratorShardTypeID;                            // 0x01D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                BannedFromBeingSpecial;                                  // 0x01D8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      AutosaveTimeRealSeconds;                                 // 0x01E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutosaveOnIronmanDeath;                                  // 0x01EC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RAJ9[0x3];                                   // 0x01ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutosaveIconShownSeconds;                                // 0x01F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseSaveMessageIcon;                                      // 0x01F4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZ5G[0x3];                                   // 0x01F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTutorialConfig>                             TutorialConfigs;                                         // 0x01F8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    MinimumPlayerLevelToSkipTutorials;                       // 0x0208(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NJN3[0x4];                                   // 0x020C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           StartGameDate;                                           // 0x0210(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FStartupConfig                                      StartupConfig;                                           // 0x0218(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FNPCAwarenessValues                                 NPCAwarenessValues;                                      // 0x0250(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ActivationDistanceToPlayer;                              // 0x0260(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CriticalDamageMultiplier;                                // 0x0264(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCloseCombatManagerConfig                           CloseCombatConfig;                                       // 0x0268(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      AnomalySpawnMultiplier;                                  // 0x0290(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnomalySpawnBlockCutoffRadiusMultiplier;                 // 0x0294(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnomaliesSpawnDistance;                                  // 0x0298(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SOLY[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FGameplayTag, struct FPRLootTableConfig>       LootArray;                                               // 0x02A0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic
		int32_t                                                    SellPricePercent;                                        // 0x02F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZUX0[0x4];                                   // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FShopShowcaseSideConfig>                     ShowcaseSides;                                           // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        ShopSlotInfoTextColor;                                   // 0x0308(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RepairPriceToItemPrice;                                  // 0x0318(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RepairSeconds;                                           // 0x031C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               NonRepairableItems;                                      // 0x0320(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FGameplayTagContainer>    WeaponUnlockMission;                                     // 0x0340(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<class FName, struct FMinMaxFloat>                     ItemDurabilityPercents;                                  // 0x0390(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               RodableItems;                                            // 0x03E0(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		class UGameConfig* GetGameConfig();
		void ApplyStartupConfig(const struct FStartupConfig& Config);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.GameDifficultyConfig
	 * Size -> 0x0508 (FullSize[0x0538] - InheritedSize[0x0030])
	 */
	class UGameDifficultyConfig : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_O6IU[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EPRGameDifficultyPreset, struct FRadiusGameDifficulty> Presets;                                                 // 0x0038(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EPRGameDifficultyPreset, class FString>               DifficultyPresetTypeNames;                               // 0x0088(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EDifficultyType, class FString>                       DifficultyTypeNames;                                     // 0x00D8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EItemsDropType, class FString>                        ItemsDropTypeNames;                                      // 0x0128(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<ETracersShowType, class FString>                      TracersShowTypeNames;                                    // 0x0178(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EDifficultyType, struct FEnemySenseMultiplier>        EnemySense;                                              // 0x01C8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EDifficultyType, float>                               EnemyHealth;                                             // 0x0218(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EDifficultyType, float>                               EnemyDamage;                                             // 0x0268(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EDifficultyType, int32_t>                             EnemyCount;                                              // 0x02B8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EDifficultyType, float>                               ItemSellPrice;                                           // 0x0308(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EDifficultyType, float>                               WeaponShotDamage;                                        // 0x0358(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EDifficultyType, float>                               AnomalyDamage;                                           // 0x03A8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EDifficultyType, int32_t>                             AnomalyAmount;                                           // 0x03F8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EDifficultyType, float>                               MissionMoneyReward;                                      // 0x0448(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EDifficultyType, float>                               Hunger;                                                  // 0x0498(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<EDifficultyType, float>                               TideTime;                                                // 0x04E8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		bool IsSleepRestoreHealth();
		bool IsShowTips();
		bool IsShowLocationOnMap();
		bool IsNoEnemies();
		bool IsNoAnomalies();
		float GetWeaponShotDamageMultiplier();
		ETracersShowType GetTracersShowType();
		float GetTideTimeMultiplier();
		float GetMissionMoneyRewardMultiplier();
		float GetItemSellPriceMultiplier();
		EItemsDropType GetItemsDropType();
		float GetHungerMultiplier();
		class UGameDifficultyConfig* GetGameDifficultyConfig();
		struct FEnemySenseMultiplier GetEnemySense();
		float GetEnemyHealthMultiplier();
		float GetEnemyDamageMultiplier();
		int32_t GetEnemyCountModifier();
		float GetAnomalyDamageMultiplier();
		int32_t GetAnomalyAmountModifier();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.GameEnvironment
	 * Size -> 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
	 */
	class AGameEnvironment : public APRBasicActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.GripSelectorsController
	 * Size -> 0x0008 (FullSize[0x02A0] - InheritedSize[0x0298])
	 */
	class AGripSelectorsController : public APRBasicActor
	{
	public:
		unsigned char                                              UnknownData_I4VD[0x8];                                   // 0x0298(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.GripSelectorsControllerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGripSelectorsControllerInterface : public UInterface
	{
	public:
		void ShowSelector(EPRHand hand, bool Distance);
		void HideSelector(EPRHand hand);
		void HideAllSelectors();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.HapticsConfig
	 * Size -> 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
	 */
	class UHapticsConfig : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_0WVC[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          BHapticsTable;                                           // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AW7D[0x70];                                  // 0x0048(0x0070) MISSED OFFSET (PADDING)

	public:
		void StopHaptics();
		void PlayRecoilHaptics(bool bIsLeft, float PowerAlpha);
		void PlayHapticsWithRotation(EHapticsType Type, const struct FRotationOption& RotationOption);
		void PlayHaptics(EHapticsType Type);
		class UHapticsConfig* GetHapticsConfig();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.HolsterComponent
	 * Size -> 0x0028 (FullSize[0x0250] - InheritedSize[0x0228])
	 */
	class UHolsterComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_G69R[0x8];                                   // 0x0228(0x0008) Fix Super Size
		struct FGameplayTag                                        ID;                                                      // 0x0230(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Holds;                                                   // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WorkDistance;                                            // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InventoryModes;                                          // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6P76[0x8];                                   // 0x0248(0x0008) MISSED OFFSET (PADDING)

	public:
		void CheckInteractionMode(EInventoryMode Mode, bool* allow);
		void CalcDistance(class AActor* targetActor, bool* bInRange, float* Distance);
		void AttachAndLerpHold();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IALSAnimation
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIALSAnimation : public UInterface
	{
	public:
		void SetOverlayOverrideState(int32_t NewOverlayOverrideState);
		void SetGroundedEntryState(EGroundedEntryState NewGroundedEntryState);
		void ReloadWeapon();
		void OnJumped();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IALSCharacter
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIALSCharacter : public UInterface
	{
	public:
		void SetViewMode(EViewMode ViewMode);
		void SetStance(EStance NewStance);
		void SetRotationMode(ERotationMode NewRotationMode);
		void SetOverlayState(EOverlayState NewOverLayState);
		void SetMovementState(EMovementState NewMovementState);
		void SetMovementAction(EMovementAction NewMovementAction);
		void SetGait(EGait NewGait);
		void GetEssentialValues(struct FVector* OutVelocity, struct FVector* OutAcceleration, struct FVector* OutMovementInput, bool* OutIsMoving, bool* OutHasMovementInput, float* OutSpeed, float* OutMovementInputAmount, struct FRotator* OutRotator, float* OutAimYawRate);
		void GetCurrentStates(Engine_EMovementMode* OutPawnMovementMode, EMovementState* OutMovementState, EMovementState* OutPrevMovementState, EMovementAction* OutMovementAction, ERotationMode* OutRotationMode, EGait* OutActualGait, EStance* OutActualStance, EViewMode* OutViewMode, EOverlayState* OutOverlayState);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IAmmo
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIAmmo : public UInterface
	{
	public:
		struct FAmmoInfo GetAmmoInfo();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IAmmoContainer
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIAmmoContainer : public UInterface
	{
	public:
		void SetLoadingLock(bool lock);
		void OnAmmoRemoved();
		void OnAmmoAdded();
		bool IsLoadingLocked();
		void GetAmmoContainerInfo(struct FPRAmmoContainerInfo* Info);
		void GetAmmoContainerData(struct FAmmoContainerData* Data);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IAnomaly
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIAnomaly : public UInterface
	{
	public:
		struct FGameplayTag GetTypeID();
		float GetRadius();
		float GetBaseDamage();
		struct FPRAnomalyInfo GetAnomalyInfo();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IAttachment
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIAttachment : public UInterface
	{
	public:
		bool IsAttached();
		void DetachFrom(class UAttachmentSlotComponent* SlotComponent);
		void AttachTo(class UAttachmentSlotComponent* SlotComponent, bool bMakeSound);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IAttack
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIAttack : public UInterface
	{
	public:
		void StopAttack();
		void StartAttack();
		void SetWeaponVisible(bool bVisible);
		void Reload();
		void OwnerInitialised();
		void OnOutOfAmmo();
		void OnMeleeAttackHit();
		bool NeedWaitForFinish();
		bool IsReloading();
		bool IsReadyToAttack();
		bool IsAttackValid();
		bool IsAttacking();
		class AActor* GetWeaponActor();
		class USceneComponent* GetFirePointComponent();
		float GetAttackDistance();
		void DestroyWeapon();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IBotComponent
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIBotComponent : public UInterface
	{
	public:
		void OwnerInitialized();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IBotController
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIBotController : public UInterface
	{
	public:
		void SetTargetActor(class AActor* Target);
		void SetLeader(class APRBasicActor* NewLeader);
		void SetDesiredPosition(const struct FVector& Pos);
		void ReportEnemyLocation(const struct FVector& Loc);
		void RemoveSquadMember(class APawn* Pawn);
		void OrderCover();
		void OrderCompleted(class APawn* Pawn);
		void OrderAttack();
		struct FVector GetTargetLocation();
		class AActor* GetTargetActor();
		TArray<class AActor*> GetSquadMembers();
		class UPRNpcPerceptionComponent* GetPerception();
		struct FVector GetDesiredPosition();
		void GetCommand(ECharCommand* CurrentCommand);
		void AddSquadMember(class APawn* Pawn);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IBotPawn
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIBotPawn : public UInterface
	{
	public:
		void TeleportToNextPos();
		void StopMovement();
		void SetTargetRotation(const struct FRotator& TargetRotation);
		void SetFlyForce(const struct FVector& Force);
		void SetBotMovementMode(EBotMovementMode MovementMode, bool* Changed);
		void ReportDeath(class AActor* DeadActorRef);
		void OnExitPlayerViewport();
		void OnEnterPlayerViewport();
		float GetStealth();
		class AActor* GetSelection();
		class UPRNpcPerceptionComponent* GetPerception();
		void GetPatrolTargets(bool* IsValidOut, TArray<class AActor*>* TargetsOut);
		class USplineComponent* GetPatrolPath();
		float GetOptimalRange();
		float GetIdleWalkDistance();
		class UActorComponent* GetBotShootingComponent();
		EBotMovementMode GetBotMovementMode();
		struct FTransform GetBoneTransform(const class FName& BoneName);
		class UActorComponent* GetAliveStats();
		void CcmStopWaitingForCombat();
		void CcmStartWaitingForCombat();
		void BroadcastEnemyLoc();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.ICommandEvents
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UICommandEvents : public UInterface
	{
	public:
		void OnWalkCommandStarted();
		void OnWalkCommandFinished();
		void OnIdleCommandStarted();
		void OnIdleCommandFinished();
		void OnAttackCommandStarted();
		void OnAttackCommandFinished();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.ComputerPage
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UComputerPage : public UInterface
	{
	public:
		void ShowPage();
		void PageTick();
		void InitializeByActor(class AActor* Actor);
		void HidePage();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IDamageCategory
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIDamageCategory : public UInterface
	{
	public:
		EDamageCategory GetDamageCategory();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.DebugAndCheats
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDebugAndCheats : public UInterface
	{
	public:
		void SwitchCheatInvisibility();
		void SwitchCheatGodMode();
		void SetCheatInvisibility(bool bValue);
		void SetCheatGodMode(bool bValue);
		void GetCheatSpeed(bool* Value);
		bool GetCheatInvisibility();
		bool GetCheatGodMode();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IHandPoser
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIHandPoser : public UInterface
	{
	public:
		void GetPoseConfig(struct FPRHandPoseInfo* Info);
		void GetItemShift(struct FTransform* Shift);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IHealthStatus
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIHealthStatus : public UInterface
	{
	public:
		bool IsAlive();
		void GetHealthPercent(float* HealthPercent);
		void GetHealth(float* Health);
		void ChangeHealth(float HealthDelta);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IInstanceID
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIInstanceID : public UInterface
	{
	public:
		class FString GetInstanceID();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IItemHolder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIItemHolder : public UInterface
	{
	public:
		void SpawnContent();
		void SetHolderVisibility(bool Visible);
		void SetContentVisibility(bool Visible);
		void RefreshHolder();
		void IsSnapHolder(bool* snapHolder);
		void IsAcceptItemActor(class AActor* itemActor, bool onlyIfFree, bool* accept);
		void GetHolderID(struct FGameplayTag* holderID);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.ILevelPreparator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UILevelPreparator : public UInterface
	{
	public:
		bool IsPreparing();
		bool CheckPreparator(const struct FVector& Location);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.ILootSpawner
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UILootSpawner : public UInterface
	{
	public:
		void SpawnLoot();
		void GenerateLoot();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.InfosConfig
	 * Size -> 0x0450 (FullSize[0x0480] - InheritedSize[0x0030])
	 */
	class UInfosConfig : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_6126[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          ItemInfosTable;                                          // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          AmmoContainerInfosTable;                                 // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          AmmoInfosTable;                                          // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          WeaponInfosTable;                                        // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          UpgradeInfosTable;                                       // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          NPCInfosTable;                                           // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          AnomalyInfosTable;                                       // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          AttachmentSlotInfosTable;                                // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, class FText>                     AdditionalNames;                                         // 0x0080(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, class FText>                     AmmoCaliberNames;                                        // 0x00D0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, class FText>                     AmmoTypeNames;                                           // 0x0120(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                ExcludeFromSave;                                         // 0x0170(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FGameplayTag>             ReplaceItemTagsFromSave;                                 // 0x0180(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      MaxWeaponDamage;                                         // 0x01D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWeaponShootingStability;                              // 0x01D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWeaponRecoilForce;                                    // 0x01D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWeaponAccuracy;                                       // 0x01DC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWeaponFireRate;                                       // 0x01E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDurability;                                           // 0x01E4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxReliability;                                          // 0x01E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6KBK[0x294];                                 // 0x01EC(0x0294) MISSED OFFSET (PADDING)

	public:
		void SetItemProxyClass(const struct FGameplayTag& ItemTypeID, class UClass* ProxyClass);
		struct FGameplayTag ResolveItemTypeID(const struct FGameplayTag& ItemTypeID);
		bool IsValidNPC(const struct FGameplayTag& npcTypeID);
		bool IsValidAnomaly(const struct FGameplayTag& anomalyTypeID);
		bool IsAmmoContainer(const struct FGameplayTag& ItemTypeID);
		struct FUpgradeInfo GetUpgradeInfo(const struct FGameplayTag& UpgradeID);
		int32_t GetTypeSellPrice(const struct FGameplayTag& ItemTypeID);
		int32_t GetTypeLevelRequirement(const struct FGameplayTag& ItemTypeID);
		int32_t GetTypeBuyPrice(const struct FGameplayTag& ItemTypeID);
		struct FAttachmentSlotInfo GetSlotInfo(const struct FGameplayTag& TypeID);
		TArray<struct FGameplayTag> GetNPCsListByCores(TArray<struct FGameplayTag> coreTags);
		TMap<struct FGameplayTag, struct FPRNPCInfo> GetNPCInfos();
		struct FPRNPCInfo GetNPCInfo(const struct FGameplayTag& npcTypeID);
		class UClass* GetNPCClass(const struct FGameplayTag& npcTypeID);
		struct FGameplayTag GetNPCByCore(const struct FGameplayTag& coreTag);
		class UClass* GetItemProxyClass(const struct FGameplayTag& ItemTypeID);
		class UClass* GetItemClass(const struct FGameplayTag& ItemTypeID);
		class UInfosConfig* GetInfosConfig();
		TArray<struct FPRAmmoContainerInfo> GetContainersForAmmo(const struct FGameplayTag& AmmoTypeID);
		struct FWeaponInfo GetBasicWeaponInfo(const struct FGameplayTag& ItemTypeID);
		struct FPRItemInfo GetBasicItemInfo(const struct FGameplayTag& ItemTypeID);
		struct FPRAmmoContainerInfo GetBasicAmmoContainerInfo(const struct FGameplayTag& ItemTypeID);
		struct FGameplayTag GetAnotherItemTypeID(const struct FGameplayTag& ItemTypeID, bool prev);
		struct FPRAnomalyInfo GetAnomalyInfo(const struct FGameplayTag& anomalyTypeID);
		class UClass* GetAnomalyClass(const struct FGameplayTag& anomalyTypeID);
		class FText GetAmmoTypeName(const struct FGameplayTag& TypeID);
		struct FAmmoInfo GetAmmoInfo(const struct FGameplayTag& ItemTypeID);
		class FText GetAmmoCaliberName(const struct FGameplayTag& CaliberID);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IngameMenuController
	 * Size -> 0x0068 (FullSize[0x0300] - InheritedSize[0x0298])
	 */
	class AIngameMenuController : public APRBasicActor
	{
	public:
		unsigned char                                              UnknownData_NCJX[0x8];                                   // 0x0298(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ingameMenuClass;                                         // 0x02A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JDM4[0x48];                                  // 0x02A8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              _ingameMenu;                                             // 0x02F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3I33[0x8];                                   // 0x02F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnIngameMenuDeactivated();
		void OnIngameMenuActivated();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IngameMenuControllerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIngameMenuControllerInterface : public UInterface
	{
	public:
		void SwitchIngameMenu();
		bool IsIngameMenuActive();
		void GetPreMenuParameters(struct FTransform* preMenuTransform, struct FVector* preMenuVelocity);
		void CloseIngameMenu();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.INIManager
	 * Size -> 0x0200 (FullSize[0x0228] - InheritedSize[0x0028])
	 */
	class UINIManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_WVD8[0x200];                                 // 0x0028(0x0200) MISSED OFFSET (PADDING)

	public:
		bool TrySetVector(const class FString& Filename, const class FString& Section, const class FString& Key, const struct FVector& Value);
		bool TrySetString(const class FString& Filename, const class FString& Section, const class FString& Key, const class FString& Value);
		bool TrySetInt(const class FString& Filename, const class FString& Section, const class FString& Key, int32_t Value);
		bool TrySetFloat(const class FString& Filename, const class FString& Section, const class FString& Key, float Value);
		bool TrySetBool(const class FString& Filename, const class FString& Section, const class FString& Key, bool bValue);
		struct FVector TryGetVector(const class FString& Filename, const class FString& Section, const class FString& Key);
		class FString TryGetString(const class FString& Filename, const class FString& Section, const class FString& Key);
		int32_t TryGetInt(const class FString& Filename, const class FString& Section, const class FString& Key);
		float TryGetFloat(const class FString& Filename, const class FString& Section, const class FString& Key);
		bool TryGetBool(const class FString& Filename, const class FString& Section, const class FString& Key);
		void StoreInUserSave(const class FString& Filename);
		class FString GetStringSilent(const class FString& Filename, const class FString& Section, const class FString& Key);
		class UINIManager* GetINIManager();
		bool Exists(const class FString& Filename, const class FString& Section, const class FString& Key);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.INPC
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UINPC : public UInterface
	{
	public:
		void SetDebug(bool NewDebug);
		bool IsCriticalHit(class UPrimitiveComponent* HitComponent, const class FName& BoneName);
		bool IsAttacksLocked();
		bool IsArmored();
		struct FPRNPCInfo GetNPCInfo();
		void GetIDs(struct FGameplayTag* TypeID, class FString* InstanceId);
		void Alert(class AActor* Target, const struct FTransform& Location);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.InventoryItemsCollection
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UInventoryItemsCollection : public UObject
	{
	public:
		unsigned char                                              UnknownData_WHYA[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UInventoryItem*>                              Items;                                                   // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.OpenedStashIDs
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOpenedStashIDs : public UObject
	{
	public:
		TArray<class FString>                                      OpenedIDs;                                               // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.GameInventory
	 * Size -> 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
	 */
	class UGameInventory : public UObject
	{
	public:
		unsigned char                                              UnknownData_8O6W[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInventoryItemsCollection*                           PlayerInventory;                                         // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryItemsCollection*                           TutorialPlayerInventory;                                 // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, class UInventoryItemsCollection*> LevelInventories;                                        // 0x0048(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UInventoryItemsCollection*                           RepairInventory;                                         // 0x0098(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, class UOpenedStashIDs*>          OpenedStashes;                                           // 0x00A0(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<class FString>                                      SpawnedUniqueItems;                                      // 0x00F0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FStringToTagsList>                           WeaponAmmoBelts;                                         // 0x0100(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void SetAmmoBeltContent(const class FString& InstanceId, TArray<struct FGameplayTag> beltContent);
		class UInventoryItem* GetItem(const class FString& InstanceId);
		void GetAmmoBeltContent(const class FString& InstanceId, TArray<struct FGameplayTag>* beltContent);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.InventoryItem
	 * Size -> 0x03E0 (FullSize[0x0410] - InheritedSize[0x0030])
	 */
	class UInventoryItem : public UDataAsset
	{
	public:
		class FScriptMulticastDelegate                             OnChangeDurability;                                      // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FString                                              InstanceId;                                              // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ItemId;                                                  // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AttachedTo;                                              // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemSlot                                                  AttachmentSlot;                                          // 0x0068(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3QR3[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        holderID;                                                // 0x006C(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L99L[0xC];                                   // 0x0074(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          HolderRelativeTransform;                                 // 0x0080(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Durability;                                              // 0x00B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FXTP[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAmmoContainerData                                  AmmoInfo;                                                // 0x00B8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class FString>                                      Attachments;                                             // 0x00D0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class AActor*                                              ActorReference;                                          // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                AdditionalTags;                                          // 0x00E8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                Upgrades;                                                // 0x00F8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1SK3[0x308];                                 // 0x0108(0x0308) MISSED OFFSET (PADDING)

	public:
		bool UpdateUpgrades(TArray<struct FGameplayTag> UpgradeIDs, bool bChangeMoney);
		void UpdateDurabilityByUpgrade(const struct FGameplayTag& UpgradeID);
		bool SwitchFireMode();
		bool SetFireMode(EWeaponFireMode FireMode);
		void SetDurability(float Value, bool* bSuccess);
		void SetChamberAmmo(const struct FGameplayTag& ChamberAmmo);
		void SetBoltState(EWeaponBoltState BoltState);
		void SetAmmo(TArray<struct FGameplayTag> Ammo);
		bool RemoveUpgrade(const struct FGameplayTag& UpgradeID);
		void RemoveExactAmmo(int32_t Index, bool* bSuccess, struct FGameplayTag* Ammo);
		void RemoveAmmo(bool* bSuccess, struct FGameplayTag* Ammo);
		void PrintItem(const class FString& Message);
		bool IsUpgradeAvailable(const struct FGameplayTag& UpgradeID, bool bMoneyCheck);
		bool IsRepairable();
		bool IsArmorItem();
		bool IsAmmoTypeAcceptable(const struct FGameplayTag& AmmoTag);
		void IsActorOfAcceptableAmmo(class AActor* AmmoActor, bool* bAcceptable, struct FGameplayTag* AmmoTag);
		bool InstallUpgrade(const struct FGameplayTag& UpgradeID, bool bChangeMoney);
		bool HasFireMode(EWeaponFireMode FireMode);
		bool HasDamageCategoryArmor(EDamageCategory DamageCategory);
		struct FWeaponInfo GetWeaponInfo();
		void GetSilencerAttachment(class UInventoryItem** AttachItem);
		int32_t GetSellPrice(bool bIgnoreIfAttached, bool bItemOnly);
		int32_t GetRepairTime(bool bIgnoreIfAttached);
		int32_t GetRepairPrice(bool bIgnoreIfAttached);
		TArray<struct FGameplayTag> GetPossibleUpgrades();
		void GetNextAmmo(struct FGameplayTag* NextAmmoTag);
		float GetMaxDurability();
		int32_t GetMaxAmmoCapacity();
		void GetMagAttachment(class UInventoryItem** AttachItem);
		float GetItemWeight(bool bIgnoreAttachments);
		struct FPRItemInfo GetItemInfo();
		EWeaponFireMode GetFireMode();
		float GetDurabilityRatio();
		float GetDamageCategoryArmor(EDamageCategory DamageCategory);
		EWeaponBoltState GetBoltState();
		void GetAttachments(const struct FGameplayTag& TypeTag, TArray<class UInventoryItem*>* AttachItems);
		class FString GetAmmoTypeName();
		class FString GetAmmoString();
		struct FPRAmmoContainerInfo GetAmmoContainerInfo();
		void GetAllAttachments(TArray<class UInventoryItem*>* AttachItems);
		void ChangeDurabilityByRatio(float Ratio, EDamageCategory DamageCategory, bool* bSuccess, float* ChangedBy);
		void ChangeDurability(float bY, EDamageCategory DamageCategory, bool* bSuccess, float* ChangedBy);
		void ChangeAmmoContainerDurability(bool* bSuccess, float* ChangedBy);
		void ChamberNextAmmo();
		void AddAmmo(const struct FGameplayTag& AmmoTag, bool* bSuccess);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.InventoryManager
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UInventoryManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_45EA[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       LevelInventoryEnabled;                                   // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MLMF[0x17];                                  // 0x0041(0x0017) MISSED OFFSET (PADDING)

	public:
		void TakeActor(class AActor* Actor, const struct FGameplayTag& holderID, bool* bSuccess, class UInventoryItem** InventoryItem);
		void SellItems(TArray<class AActor*> Items, float PriceMultiplier);
		void RepairItems(TArray<class UInventoryItem*> Items, bool* bSuccess);
		void RemovePlayerItems(bool bDestroyActors);
		void RemoveItemByRef(class AActor* Actor, bool* success);
		bool RemoveItem(class UInventoryItem* Item);
		void RecordUniqueItemSpawn(const class FString& InstanceId, bool* success);
		void RecordStashOpen(const struct FGameplayTag& stashType, const class FString& stashID, bool* success);
		void OnSecondsAddedToTime(float Seconds);
		void KillPlayerItems();
		void KillAllInventoryItems(bool fullClear);
		void IsUniqueItemSpawned(const class FString& InstanceId, bool* spawned);
		void IsStashOpened(const struct FGameplayTag& stashType, const class FString& stashID, bool* opened);
		bool IsNeedRepair(class UInventoryItem* Item);
		bool IsInPlayerInventory(class UInventoryItem* Item);
		bool IsInLevelsInventory(class UInventoryItem* Item);
		bool IsInHubInventory(class UInventoryItem* Item);
		bool IsActorInPlayerInventory(class AActor* itemActor);
		void GetSilencerAttachment(class UInventoryItem* parentItem, class UInventoryItem** AttachItem);
		void GetRepairStatus(bool* bEmpty, bool* bReady, TArray<class UInventoryItem*>* RepairItems);
		void GetPlayerItems(TArray<class UInventoryItem*>* inventoryItems);
		class UInventoryItemsCollection* GetPlayerInventoryCollection();
		void GetMagAttachment(class UInventoryItem* parentItem, class UInventoryItem** AttachItem);
		void GetLevelsItems(TMap<struct FGameplayTag, class UInventoryItemsCollection*>* levelsItems);
		struct FGameplayTag GetItemLevel(class UInventoryItem* Item);
		void GetItemBP(const class FString& InstanceId, class UInventoryItem** InventoryItem);
		void GetInventoryWeight(const struct FGameplayTag& inHolderID, float* TotalWeight);
		class UInventoryManager* GetInventoryManager();
		void GetCurrentLevelItems(TArray<class UInventoryItem*>* inventoryItems);
		void GetAttachments(class UInventoryItem* parentItem, const struct FGameplayTag& TypeTag, TArray<class UInventoryItem*>* AttachItems);
		void GetAttachedToSlot(class UInventoryItem* parentItem, EItemSlot Slot, class UInventoryItem** AttachItem);
		void GetAllAttachments(class UInventoryItem* parentItem, TArray<class UInventoryItem*>* AttachItems);
		void FindItemsByTagInPlayer(const struct FGameplayTag& Tag, bool strict, bool* success, TArray<class UInventoryItem*>* inventoryItems);
		void FindItemsByTagInLevel(const struct FGameplayTag& Level, const struct FGameplayTag& Tag, bool strict, bool* success, TArray<class UInventoryItem*>* inventoryItems);
		void FindItemsByTag(const struct FGameplayTag& Tag, bool strict, bool* success, TArray<class UInventoryItem*>* inventoryItems);
		void FindItemsByHolderID(const struct FGameplayTag& holderID, bool* success, TArray<class UInventoryItem*>* inventoryItems);
		void FindItemByRefInPlayer(class AActor* Actor, bool* success, class UInventoryItem** InventoryItem);
		void FindItemByRef(class AActor* Actor, bool* success, class UInventoryItem** InventoryItem);
		void DropPlayerInventory(bool bKillActors, bool bDropOnGround, const struct FGameplayTag& FromHolderID, const struct FVector& LocationOffset);
		void DropItemActor(class AActor* Actor, bool bForceBackpackDrop, bool* bSuccess, class UInventoryItem** InventoryItem);
		void DetachItems(class UInventoryItem* itemParent, class UInventoryItem* itemAttach, bool* success);
		void DetachItemActors(class AActor* Parent, class AActor* attach, bool* success);
		void ClearAllItemReferences();
		void CheckPlayerItem(const struct FGameplayTag& ItemType, bool strictItemType, const struct FGameplayTag& holderID, bool strictHolderID, bool* success);
		bool CheckItem(const class FString& itemInstanceID, bool pick, const struct FGameplayTag& holderID, bool strictHolderID);
		void CheckAttachments();
		void BreakActorLink(class AActor* Actor);
		void AttachItems(class UInventoryItem* itemParent, class UInventoryItem* itemAttach, EItemSlot attachSlot, bool* success);
		void AttachItemActors(class AActor* Parent, class AActor* attach, EItemSlot attachToSlot, bool* success);
		void AddItemToPlayer(class UInventoryItem* Item, bool* success);
		void AddItemToLevel(class UInventoryItem* Item, bool noAttachmentsCheck, bool* success);
		void AddDefaultItemToLevel(const struct FGameplayTag& ItemTag, const struct FTransform& Transform, bool noAttachmentsCheck, bool* success);
		class UInventoryItem* AddConfigItemToLevel(class UPRItemConfig* itemConfig, const struct FTransform& Transform, bool noAttachmentsCheck, bool* success);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IPhysicsActor
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIPhysicsActor : public UInterface
	{
	public:
		class UPrimitiveComponent* GetPhysicsRootComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IPlayFootstepSounds
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIPlayFootstepSounds : public UInterface
	{
	public:
		void StopFootstepLoop();
		void StartFootstepLoop();
		void PlayFootstepSound();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IPooledActor
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIPooledActor : public UInterface
	{
	public:
		void PushToPoolActor();
		void PopFromPoolActor(const struct FTransform& Transform);
		bool IsExcludedFromPool();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IPRGameMode
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIPRGameMode : public UInterface
	{
	public:
		bool TransferToLevel(const struct FGameplayTag& LevelTag, const struct FGameplayTag& LocationTag);
		class AActor* SpawnSavedNPC(const struct FNPCGameData& Data, class AActor* SpawnerActor, float Radius, bool bCanWalkAway, bool SnipingMode);
		class AActor* SpawnNPC(const struct FGameplayTag& npcTypeID, class AActor* SpawnerActor, float Radius, bool bCanWalkAway, bool SnipingMode);
		class AActor* SpawnItemConfig(class UPRItemConfig* itemConfig, const struct FTransform& Transform, bool bProjectOnGround, bool bSimulate, bool bAddToPlayer);
		class AActor* SpawnItemByType(const struct FGameplayTag& ItemTypeID, const class FString& InstanceId, const struct FTransform& Transform, bool bProjectOnGround, bool bSimulate);
		class AActor* SpawnItem(class UInventoryItem* InventoryItem, const struct FTransform& Transform, bool bProjectOnGround, bool bSimulate);
		class APRAnomaly* SpawnAnomaly(const class FString& AnomalyName, class UClass* AnomalyClass, const struct FTransform& AnomalyTransform, bool bProjectOnGround, float AnomalyRadius);
		bool SleepAllowed();
		void SetSleepAllowed(bool bAllow);
		void ResetPlayerAndItems();
		struct FVector ReprojectLocation(const struct FVector& Location);
		void ReEnterCurrentLevel();
		void LaunchMainMenu();
		void LaunchGame(bool bStart);
		float GetNoiseAwarenessValue(const class FName& Tag);
		float GetDamageAwarenessValue(float Damage);
		struct FTransform GetCurrentPlayerTransform();
		void FinishTutorial();
		void FindSpawnLocation(const struct FVector& nearby, float InRadius, bool bReachable, bool* bSuccess, struct FVector* Location);
		void ContinueAsFreeGame();
		void ApplySoundVolumes();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IPRGameModeNative
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIPRGameModeNative : public UInterface
	{
	public:
		bool GetIsInTransition();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IPRItem
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIPRItem : public UInterface
	{
	public:
		bool UpdateInventoryItemLocation();
		void UpdateFireMode();
		void UpdateAttachmentSlots();
		void StopUse();
		void SetupProxySystem(bool bStartWithProxy, bool bStartVisible);
		void SetProxyMode(bool bUseProxy);
		void SetItemVisibility(bool bNewVisibility);
		void SetDistanceGripEnable(bool enable);
		void RegisterMeshComponentsAndOmittableColliders();
		void Reconfigure(class UInventoryItem* InventoryItem, bool* success);
		void OnRemovedFromHolster(class UHolsterComponent* Holster);
		void OnProxySystemReady();
		void OnProxyEnabled();
		void OnProxyDisabled();
		void OnAddedToHolster(class UHolsterComponent* Holster);
		bool IsItemInDelivery();
		void InitBought();
		struct FGameplayTag GetTypeID();
		void GetProxyMode(bool* bUseProxy);
		class UInventoryItem* GetPreparedItem();
		struct FTransform GetPoseShift(EPRHandPoseType poseType);
		void GetItemVisibility(bool* bIsVisible);
		struct FPRItemInfo GetItemInfo();
		void GetItemCenterTransform(bool* socket, struct FTransform* itemCenterTransform);
		class UInventoryItem* GetInventoryItem();
		EPRHandPoseType GetDefaultPoseType();
		float GetCurrentWeight();
		float GetCurrentCondition();
		float GetConditionPercent();
		struct FGameplayTag GetAttachmentTypeID();
		void GetAttachmentsList(TArray<class FString>* Attachments);
		class FString GetActorUID();
		bool DropItemOnGround();
		void DisableItemPhysics();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IPRPlayerCharacter
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIPRPlayerCharacter : public UInterface
	{
	public:
		void UpdateHolders();
		void TeleportPlayer(const struct FTransform& Transform, const struct FVector& Velocity, bool wristMenuHidden, bool ReprojectLocation, EPlayerTeleportAdjustType adjust);
		void StopMovement();
		void StopHapticses();
		void SpawnItemInHand(bool LeftHand, const struct FGameplayTag& ItemTypeID);
		void SpawnItemConfigInHand(bool bLeftHand, class UPRItemConfig* itemConfig);
		void SpawnInventory();
		void SetWristMenuHidden(bool Hidden);
		void SetPaused(bool paused);
		bool SetInventoryMode(EInventoryMode Mode);
		void SetCurrentVelocity(const struct FVector& Velocity);
		void ReturnBackpack(bool instant);
		void RefreshHandPose(class UGripMotionControllerComponent* Controller);
		void PreTeleport();
		void OpenEyes();
		void OnTeleported();
		bool IsTeleporting();
		bool IsItemActorSticked(class AActor* Actor);
		bool IsImmuneToDamage(EDamageCategory Type);
		bool IsActorLerpingToHand(class UObject* Object);
		void Initialize();
		float GetTotalEquipmentWeight();
		struct FTransform GetRootTransform();
		float GetPlayerHeightScale();
		float GetPlayerHeight();
		void GetOneHeldItem(EPRHand hand, bool onlyItem, class UObject** itemActorObject, bool* SecondaryGrip);
		EInventoryMode GetInventoryMode();
		void GetHeldItems(bool bOnlyItem, class UObject** Left, class UObject** Right);
		void GetHandsIKData(bool* success, bool* alive, struct FTransform* leftHandTransform, struct FTransform* leftHandShiftTransform, EHandPose* leftHandPose, EPRHandPoseGeometryType* leftHandGeometryType, EPRHandPoseNumber* leftHandPoseNumber, class UObject** leftHeldItem, struct FTransform* rightHandTransform, struct FTransform* rightHandShiftTransform, EHandPose* rightHandPose, EPRHandPoseGeometryType* rightHandGeometryType, EPRHandPoseNumber* rightHandPoseNumber, class UObject** rightHeldItem);
		void GetHandPivot(class UGripMotionControllerComponent* Controller, class USceneComponent** Pivot);
		float GetDistanceToCamera(const struct FVector& WorldLocation);
		void GetCurrentVelocity(struct FVector* Velocity);
		void GetControlsRefs(bool* success, bool* alive, class UCameraComponent** cameraRef, class USceneComponent** pivotHead, class UGripMotionControllerComponent** leftControllerRef, class USceneComponent** pivotLeftController, class USceneComponent** pivotLeftHand, class USphereComponent** sphereLeftHand, class UMaterialInstanceDynamic** materialLeftController, class UGripMotionControllerComponent** rightControllerRef, class USceneComponent** pivotRightController, class USceneComponent** pivotRightHand, class USphereComponent** sphereRightHand, class UMaterialInstanceDynamic** materialRightController);
		class UCameraComponent* GetCameraRef();
		class USkeletalMeshComponent* GetBodyRef();
		void GetBodyIKData(bool* bSuccess, bool* bAlive, struct FTransform* RootTransform, struct FTransform* CameraTransform, struct FTransform* NeckTransform);
		void GetBeamPointerComponents(class USceneComponent** Left, class USceneComponent** Right);
		class USceneComponent* GetBackpackPivot();
		TMap<EDamageCategory, float> GetArmorStats();
		TArray<class UInventoryItem*> GetArmorItems();
		void DropNotItems();
		void DropAll();
		void CloseEyes();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IPRPlayerController
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIPRPlayerController : public UInterface
	{
	public:
		bool IsAllInputBlocked();
		void InitControlScheme();
		EPRControllerType GetControllerType();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRPlayerPawn
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPRPlayerPawn : public UInterface
	{
	public:
		void SwitchBodyVisibility(bool bVisible, bool bRecursive);
		void ProcessMovementNative(float DeltaSeconds);
		bool IsSecondaryGrip(bool bLeft);
		bool IsBackpackInHands(bool bCheckLeft, bool bCheckRight);
		bool IsBackpackDropped();
		bool IsAnyLampEnabled();
		TArray<class UPrimitiveComponent*> GetVisibilityPrimitives();
		struct FVector GetInputMovementVector();
		float GetCrouch();
		class ABackpackSimple* GetBackpackRef();
		void DropGrip(class UGripMotionControllerComponent* GripMotionController, const struct FBPActorGripInformation& GripToDrop, const struct FVector& AngleVel, const struct FVector& LinearVel);
		void DropAllGrips(class UGripMotionControllerComponent* GripMotionController, bool bZeroVelo);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IRadiusExplosionActor
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIRadiusExplosionActor : public UInterface
	{
	public:
		void Launch();
		void Initialeze(const struct FExplosionInfo& ExplosionInfo);
		void Dispose();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IRadiusProjectile
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIRadiusProjectile : public UInterface
	{
	public:
		void Launch();
		void Initialize(class URadiusProjectileInfo* ProjectileInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IStashActor
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIStashActor : public UInterface
	{
	public:
		void Setup(const struct FStashSpawnInfo& StashSpawnInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRItemConfig
	 * Size -> 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
	 */
	class UPRItemConfig : public UObject
	{
	public:
		struct FGameplayTag                                        ConfigID;                                                // 0x0028(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InstanceId;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        holderID;                                                // 0x0040(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WU4J[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          HolderTransform;                                         // 0x0050(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Durability;                                              // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ATGV[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAmmoContainerData                                  Ammo;                                                    // 0x0088(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                AdditionalTags;                                          // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                Upgrades;                                                // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UPRItemConfig*>                               Attachments;                                             // 0x00C0(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		class UPRItemConfig* CloneWithUID(const class FString& newUID);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.ItemsManager
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UItemsManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_QQKP[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetConditionsIgnore(bool ignoreCorpse, bool ignoreStash);
		void PackItems(class USceneComponent* Parent, TArray<class UInventoryItem*> Items, TArray<class UInventoryItem*>* Excluded, bool bExcludeNonFit, bool bProjectDown);
		void MultiPackItems(TArray<class USceneComponent*> Bounds, TArray<class UInventoryItem*> Items, bool bProjectDown);
		void GetLootForTable(const struct FGameplayTag& lootTableTag, int32_t LootPoints, const class FString& idOverride, TArray<class UInventoryItem*>* Items, bool* success);
		class UItemsManager* GetItemsManager();
		void GetDefaultLoot(TArray<struct FGameplayTag> itemTags, const class FString& idOverride, TArray<class UInventoryItem*>* Items);
		void GetCurrentLevelLoot(int32_t LootPoints, const class FString& idOverride, TArray<class UInventoryItem*>* Items);
		void GetConfiguredLoot(TArray<class UPRItemConfig*> ItemConfigs, const class FString& idOverride, TArray<class UInventoryItem*>* Items);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.ItemStashPoint
	 * Size -> 0x0028 (FullSize[0x0250] - InheritedSize[0x0228])
	 */
	class UItemStashPoint : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_Q1EM[0x8];                                   // 0x0228(0x0008) Fix Super Size
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0230(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IWeapon
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIWeapon : public UInterface
	{
	public:
		bool IsSmoothingScriptOn();
		struct FWeaponInfo GetWeaponInfo();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.LevelManager
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class ULevelManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_OAK8[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ELevelManagerState                                         State;                                                   // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RSAB[0x7F];                                  // 0x0041(0x007F) MISSED OFFSET (PADDING)

	public:
		void UnloadLevel(const struct FGameplayTag& LevelTag);
		void UnloadAll();
		void ShowSublevel(const class FName& SublevelName);
		void OnUnloadingTick();
		void OnLoadingTick();
		void LoadSublevel(const class FName& SublevelName);
		void LoadLevel(const struct FGameplayTag& LevelTag);
		bool IsReady();
		void HideSublevel(const class FName& SublevelName);
		class ULevelManager* GetLevelManager();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.LightSensitiveManager
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class ULightSensitiveManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_8PDE[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (PADDING)

	public:
		void UnregisterLightSensitiveObject(class AActor* LightSensitiveObject);
		void RegisterLightSensitiveObject(class AActor* LightSensitiveObject);
		class ULightSensitiveManager* GetLightSensitiveManager();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MapPointsConfig
	 * Size -> 0x00B8 (FullSize[0x00E8] - InheritedSize[0x0030])
	 */
	class UMapPointsConfig : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_IQ3D[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FGameplayTag, struct FTransform>               levelCenters;                                            // 0x0038(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FTagToTransformsList>     LevelPoints;                                             // 0x0088(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FGateInfo>                                   LevelGates;                                              // 0x00D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		struct FTransform WorldToLevelTransform(const struct FGameplayTag& LevelTag, const struct FTransform& Transform);
		struct FVector WorldToLevelLocation(const struct FGameplayTag& LevelTag, const struct FVector& Location);
		void ResolvePoint(const struct FGameplayTag& pointTag, TArray<struct FGameplayTag> ExcludedPoints, struct FGameplayTag* ResultPoint, struct FGameplayTag* ResultLevel);
		struct FTransform LevelToWorldTransform(const struct FGameplayTag& LevelTag, const struct FTransform& Transform);
		struct FVector LevelToWorldLocation(const struct FGameplayTag& LevelTag, const struct FVector& Location);
		bool IsPointInLevel(const struct FGameplayTag& pointTag, const struct FGameplayTag& LevelTag);
		bool IsPointACluster(const struct FGameplayTag& pointTag);
		void GetPointTransforms(const struct FGameplayTag& pointTag, bool* bSuccess, struct FGameplayTag* LevelTag, struct FTransform* RelativeTransform, struct FTransform* absoluteTransform);
		struct FGameplayTag GetPointLevel(const struct FGameplayTag& pointTag);
		class UMapPointsConfig* GetMapPointsConfig();
		TArray<struct FGateInfo> GetLevelGateInfos(const struct FGameplayTag& LevelTag);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MathCondition
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMathCondition : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MathCondition_Float
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UMathCondition_Float : public UMathCondition
	{
	public:
		float                                                      Value;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TTTV[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MathCondition_Float_Equal
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMathCondition_Float_Equal : public UMathCondition_Float
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MathCondition_Float_NotEqual
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMathCondition_Float_NotEqual : public UMathCondition_Float
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MathCondition_Float_MoreThan
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMathCondition_Float_MoreThan : public UMathCondition_Float
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MathCondition_Float_MoreEqualThan
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMathCondition_Float_MoreEqualThan : public UMathCondition_Float
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MathCondition_Float_LessThan
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMathCondition_Float_LessThan : public UMathCondition_Float
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MathCondition_Float_LessEqualThan
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMathCondition_Float_LessEqualThan : public UMathCondition_Float
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MathCondition_Int
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UMathCondition_Int : public UMathCondition
	{
	public:
		int32_t                                                    Value;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PR3D[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MathCondition_Int_Equal
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMathCondition_Int_Equal : public UMathCondition_Int
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MathCondition_Int_NotEqual
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMathCondition_Int_NotEqual : public UMathCondition_Int
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MathCondition_Int_MoreThan
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMathCondition_Int_MoreThan : public UMathCondition_Int
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MathCondition_Int_MoreEqualThan
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMathCondition_Int_MoreEqualThan : public UMathCondition_Int
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MathCondition_Int_LessThan
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMathCondition_Int_LessThan : public UMathCondition_Int
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MathCondition_Int_LessEqualThan
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMathCondition_Int_LessEqualThan : public UMathCondition_Int
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MinimapComposeHelper
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMinimapComposeHelper : public UBlueprintFunctionLibrary
	{
	public:
		void PrepareLandscape(class ALandscape* Landscape);
		TArray<struct FIntVector> GetPointsFromFile(const class FString& FilePath);
		TArray<struct FVector> GetLocations(class UInstancedStaticMeshComponent* Component);
		class ULandscapeSplinesComponent* GetLandscapeSplines(class ALandscape* Landscape);
		void GetHeatmapFromFile(const class FString& FilePath, int32_t step, TMap<struct FIntPoint, int32_t>* heatmap, struct FIntPoint* Min, struct FIntPoint* Max, int32_t* MaxValue);
		TArray<struct FTransform> GetFoliageTransforms(class AInstancedFoliageActor* foliageActor, class UFoliageType* FoliageType);
		void GenerateHeatmapFromFile(class UObject* WorldContextObject, const class FString& FilePath, int32_t step);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MinimapConfig
	 * Size -> 0x01B8 (FullSize[0x01E8] - InheritedSize[0x0030])
	 */
	class UMinimapConfig : public UDataAsset
	{
	public:
		TMap<class UTexture2D*, struct FMinimapMeshMappingConfig>  iconMapping;                                             // 0x0030(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class UTexture2D*, struct FMinimapMeshMappingConfig>  landscapeMapping;                                        // 0x0080(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class UTexture2D*, struct FMinimapFoliageMappingConfig> foliageMapping;                                          // 0x00D0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class UStaticMesh*, struct FMinimapCliffMappingConfig> cliffMapping;                                            // 0x0120(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FName, struct FColor>                           forestTypeMapping;                                       // 0x0170(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class UDataTable*>                                  forestInfoTables;                                        // 0x01C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      treeRadius;                                              // 0x01D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      waterScanStep;                                           // 0x01D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      waterRadius;                                             // 0x01D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      waterMinDeph;                                            // 0x01DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MapImageOversize;                                        // 0x01E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MapImageSize;                                            // 0x01E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionsConfig
	 * Size -> 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
	 */
	class UMissionsConfig : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_UCJK[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionNormalConfig*                                TutorialMissionConfig;                                   // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMissionsCategory>                           Missions;                                                // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		int32_t                                                    MaxExecuting;                                            // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RSX3[0x54];                                  // 0x005C(0x0054) MISSED OFFSET (PADDING)

	public:
		class UMissionsConfig* GetMissionsConfig();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionAbstractObjectiveConfig
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UMissionAbstractObjectiveConfig : public UObject
	{
	public:
		class FText                                                ObjectiveShortName;                                      // 0x0028(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                ObjectiveLongName;                                       // 0x0040(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionBaseObjectiveConfig
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UMissionBaseObjectiveConfig : public UMissionAbstractObjectiveConfig
	{
	public:
		class UPRModifiableInt*                                    RewardMoneyOverride;                                     // 0x0058(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPRModifiableInt*                                    RewardPlayerLevelOverride;                               // 0x0060(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionBaseHintObjectiveConfig
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMissionBaseHintObjectiveConfig : public UMissionAbstractObjectiveConfig
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionTutorialObjectiveConfig
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UMissionTutorialObjectiveConfig : public UMissionBaseObjectiveConfig
	{
	public:
		struct FGameplayTag                                        SequencerID;                                             // 0x0068(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        MapPoint;                                                // 0x0070(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                ConfigTags;                                              // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       ApplyReward;                                             // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IYTF[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionFetchItemsObjectiveConfig
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UMissionFetchItemsObjectiveConfig : public UMissionBaseObjectiveConfig
	{
	public:
		TArray<struct FTagToTagsList>                              PointsToDefaultItems;                                    // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTagToItemConfigsList>                       PointsToConfigItems;                                     // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       SpawnItems;                                              // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CleanItems;                                              // 0x0089(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EU42[0x2];                                   // 0x008A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpawnRadiusForOnePoint;                                  // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionTakePictureObjectiveConfig
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	class UMissionTakePictureObjectiveConfig : public UMissionBaseObjectiveConfig
	{
	public:
		TArray<struct FTagToTagsList>                              PointsToObjects;                                         // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionKillNPCObjectiveConfig
	 * Size -> 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
	 */
	class UMissionKillNPCObjectiveConfig : public UMissionBaseObjectiveConfig
	{
	public:
		TArray<struct FTagToTagsList>                              PointsToNPCs;                                            // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      SpawnNPCsRadius;                                         // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KDXF[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionFindStashObjectiveConfig
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UMissionFindStashObjectiveConfig : public UMissionBaseHintObjectiveConfig
	{
	public:
		TArray<struct FTagToItemConfigsList>                       PointsToStashes;                                         // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionInfoObjectiveConfig
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UMissionInfoObjectiveConfig : public UMissionBaseHintObjectiveConfig
	{
	public:
		TArray<struct FGameplayTag>                                Points;                                                  // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionFetchArtifactsObjectiveConfig
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UMissionFetchArtifactsObjectiveConfig : public UMissionBaseObjectiveConfig
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionDestroyGeneratorsObjectiveConfig
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UMissionDestroyGeneratorsObjectiveConfig : public UMissionBaseObjectiveConfig
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionBaseConfig
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	class UMissionBaseConfig : public UDataAsset
	{
	public:
		struct FGameplayTag                                        ID;                                                      // 0x0030(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                MissionName;                                             // 0x0038(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                MissionDescription;                                      // 0x0050(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class UPRCondition*>                                Conditions;                                              // 0x0068(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UPRModifiableFloat*                                  WeightOverride;                                          // 0x0078(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionTutorialConfig
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UMissionTutorialConfig : public UMissionBaseConfig
	{
	public:
		bool                                                       AutoProgress;                                            // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I831[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMissionTutorialObjectiveConfig*                     TutorialObjective;                                       // 0x0088(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionNormalConfig
	 * Size -> 0x00D8 (FullSize[0x0158] - InheritedSize[0x0080])
	 */
	class UMissionNormalConfig : public UMissionBaseConfig
	{
	public:
		int32_t                                                    CooldownMissions;                                        // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O8U4[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMissionBaseObjectiveConfig*>                 PrimaryObjectives;                                       // 0x0088(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UMissionBaseObjectiveConfig*>                 SecondaryObjectives;                                     // 0x0098(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UMissionBaseHintObjectiveConfig*>             HintObjectives;                                          // 0x00A8(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FGameplayTag>             AdditionalCorpsePointsToLoot;                            // 0x00B8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FTagToTagsList>                              AdditionalPointsToNPCs;                                  // 0x0108(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FMissionTriggersConfig                              SuccessTriggers;                                         // 0x0118(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FMissionTriggersConfig                              FailTriggers;                                            // 0x0138(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		bool CheckObjectives();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionAbstractObjectiveData
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UMissionAbstractObjectiveData : public UObject
	{
	public:
		class FString                                              ObjectiveShortName;                                      // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ObjectiveLongName;                                       // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMissionObjectiveImportance                                Importance;                                              // 0x0048(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1BLV[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RewardMoney;                                             // 0x004C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RewardPlayerLevel;                                       // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Finished;                                                // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZS0[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (PADDING)

	public:
		bool HaveDelivery();
		int32_t GetRewardMoney();
		TArray<struct FGameplayTag> GetMissionPoints();
		class FString GetDeliveryCountString();
		class FString GetCountString();
		void CollectDeliveryTags(TArray<struct FGameplayTag>* DeliveryTags);
		bool CheckObjectiveCompletion();
		void BPPrint(const class FString& Message);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionTutorialObjectiveData
	 * Size -> 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
	 */
	class UMissionTutorialObjectiveData : public UMissionAbstractObjectiveData
	{
	public:
		struct FGameplayTag                                        SequencerID;                                             // 0x0058(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        MapPoint;                                                // 0x0060(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                ConfigTags;                                              // 0x0068(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionFetchItemsObjectiveData
	 * Size -> 0x0038 (FullSize[0x0090] - InheritedSize[0x0058])
	 */
	class UMissionFetchItemsObjectiveData : public UMissionAbstractObjectiveData
	{
	public:
		TArray<struct FTagToTagsList>                              PointsToDefaultItems;                                    // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTagToItemConfigsList>                       PointsToConfigItems;                                     // 0x0068(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FMissionRecord>                              CollectedItems;                                          // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       SpawnItems;                                              // 0x0088(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CleanItems;                                              // 0x0089(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1XRA[0x2];                                   // 0x008A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpawnRadiusForOnePoint;                                  // 0x008C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionTakePictureObjectiveData
	 * Size -> 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
	 */
	class UMissionTakePictureObjectiveData : public UMissionAbstractObjectiveData
	{
	public:
		TArray<struct FTagToTagsList>                              PointsToObjects;                                         // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMissionRecord>                              CollectedPhotos;                                         // 0x0068(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		TArray<struct FGameplayTag> GetObjectsTags();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionKillNPCObjectiveData
	 * Size -> 0x0028 (FullSize[0x0080] - InheritedSize[0x0058])
	 */
	class UMissionKillNPCObjectiveData : public UMissionAbstractObjectiveData
	{
	public:
		TArray<struct FTagToTagsList>                              PointsToNPCs;                                            // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      SpawnNPCsRadius;                                         // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_900U[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                ClearedPoints;                                           // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		class FString PointSpawnerID(const struct FGameplayTag& pointTag);
		bool PointSpawned(const struct FGameplayTag& pointTag);
		bool PointCleared(const struct FGameplayTag& pointTag);
		void MarkPointCleared(const struct FGameplayTag& pointTag);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionFindStashObjectiveData
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UMissionFindStashObjectiveData : public UMissionAbstractObjectiveData
	{
	public:
		TArray<struct FTagToItemConfigsList>                       PointsToStashes;                                         // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionInfoObjectiveData
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UMissionInfoObjectiveData : public UMissionAbstractObjectiveData
	{
	public:
		TArray<struct FGameplayTag>                                Points;                                                  // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionFetchArtifactsObjectiveData
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMissionFetchArtifactsObjectiveData : public UMissionAbstractObjectiveData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionDestroyGeneratorsObjectiveData
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMissionDestroyGeneratorsObjectiveData : public UMissionAbstractObjectiveData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionData
	 * Size -> 0x0120 (FullSize[0x0148] - InheritedSize[0x0028])
	 */
	class UMissionData : public UObject
	{
	public:
		unsigned char                                              UnknownData_OKO9[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InstanceId;                                              // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ConfigID;                                                // 0x0040(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Abortable;                                               // 0x0048(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LIGJ[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MissionName;                                             // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MissionDescription;                                      // 0x0060(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMissionState                                              State;                                                   // 0x0070(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VWLP[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMissionAbstractObjectiveData*>               Objectives;                                              // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FGameplayTag>             AdditionalCorpsePointsToLoot;                            // 0x0088(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FTagToTagsList>                              AdditionalPointsToNPCs;                                  // 0x00D8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      TimeCreated;                                             // 0x00E8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeStarted;                                             // 0x00EC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeFinished;                                            // 0x00F0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TutorialStep;                                            // 0x00F4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         RawData;                                                 // 0x00F8(0x0050) NativeAccessSpecifierPublic

	public:
		void SetTutorStep(const struct FGameplayTag& SequencerID, int32_t step);
		bool HaveDelivery();
		bool HasPointsInCurrentLevel();
		void GetTotalReward(bool FinishedOnly, int32_t* MoneyReward, int32_t* PlayerLevel);
		float GetTimeTillAbortAvailable();
		class FString GetStashUID(class UMissionAbstractObjectiveData* Objective, const struct FGameplayTag& Tag);
		TArray<struct FGameplayTag> GetMissionPoints();
		struct FGameplayTag GetMissionCategoryID();
		struct FGameplayTag GetMainObjectivePoint();
		struct FGameplayTag GetMainObjectiveLevel();
		class FString GetItemUID(class UMissionAbstractObjectiveData* Objective, int32_t Index);
		void GetDuration(bool* bHaveDuration, class FString* FinishDateString);
		bool FinishObjective(class UMissionAbstractObjectiveData* Objective, bool bIgnoreTutorialDelivery);
		bool FinishAllObjectives(bool bIgnoreTutorialDelivery);
		bool CheckPrimaryObjectivesCompleted();
		void CheckDelivery(TArray<class AActor*> ItemActors, bool bFinishObjectives, bool* bSuccess, TArray<class AActor*>* ExcessiveActors);
		void CheckCompletion(bool* bCompleted);
		void BPPrint(const class FString& Message);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.GameMissions
	 * Size -> 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
	 */
	class UGameMissions : public UObject
	{
	public:
		unsigned char                                              UnknownData_1EM6[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMissionData*>                                ActiveMissions;                                          // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, class UMissionData*>             ActiveMissionsMap;                                       // 0x0040(0x0050) NativeAccessSpecifierPublic
		class FString                                              SelectedMissionInstanceID;                               // 0x0090(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      SelectedMissions;                                        // 0x00A0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UMissionData*>                                FinishedMissions;                                        // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FString, int32_t>                               CellsPerMission;                                         // 0x00C0(0x0050) BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MissionsManager
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UMissionsManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_0HJV[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		void StartMissionFromIdLatent(bool* bSuccess, const struct FGameplayTag& GameplayTag, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
		void StartMission(const class FString& MissionInstanceId, bool* bSuccess, class UMissionData** MissionData);
		void SetSelectedMissionComplete(const class FString& MissionInstanceId);
		void ResetTutorialMissions();
		void OnPlayerLevelChanged(int32_t PlayerLevel);
		void IsMissionSelected(const class FString& MissionInstanceId, bool* bMissionSelected);
		bool IsMaxExecutingReached();
		void GetSelectedMissionsInState(EMissionState State, TArray<class UMissionData*>* SelectedMissions);
		TArray<class UMissionData*> GetSelectedMissionsInProgress();
		void GetSelectedMissions(TArray<class UMissionData*>* SelectedMissions);
		class UMissionsManager* GetMissionsManager();
		int32_t GetMissionsFinishedAfter(const struct FGameplayTag& ConfigID, bool bOnlySuccessful);
		void GetMission(const class FString& MissionInstanceId, class UMissionData** MissionData);
		void GetFinishedMissions(TArray<class UMissionData*>* FinishedMissions);
		void GetActiveMissions(TMap<struct FGameplayTag, class UMissionData*>* ActiveMissions);
		void GetActiveMissionOfType(const struct FGameplayTag& Category, class UMissionData** MissionData);
		bool GenerateNewMissions(bool bTide);
		bool FinishMission(const class FString& MissionInstanceId);
		void CheckActive();
		void AbortSelectedMission(const class FString& MissionInstanceId);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.MonsterSpawner
	 * Size -> 0x00E8 (FullSize[0x0380] - InheritedSize[0x0298])
	 */
	class AMonsterSpawner : public APRBasicActor
	{
	public:
		unsigned char                                              UnknownData_X0KH[0x8];                                   // 0x0298(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnWildSpawnerCleared;                                    // 0x02A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class USphereComponent*                                    Sphere;                                                  // 0x02B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Wild;                                                    // 0x02B8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NEYQ[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SpawnerInstanceID;                                       // 0x02C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceInstanceID;                                        // 0x02D0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RTO7[0x3];                                   // 0x02D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Radius;                                                  // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, int32_t>                         Monsters;                                                // 0x02D8(0x0050) Edit, BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic
		bool                                                       CanWalkAway;                                             // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SnipingMode;                                             // 0x0329(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NXYQ[0x2];                                   // 0x032A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AlternativeMonstersMax;                                  // 0x032C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        KillMissionPointTag;                                     // 0x0330(0x0008) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J1NK[0x8];                                   // 0x0338(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNPCGameData>                                SavedNPCsToSpawn;                                        // 0x0340(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class AActor*>                                      NPCActors;                                               // 0x0350(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LSSA[0x20];                                  // 0x0360(0x0020) MISSED OFFSET (PADDING)

	public:
		void ToggleNpcSummary(class UObject* WorldContextObj);
		void SpawnSavedNPC(bool* bSuccess, class AActor** NPCActor);
		void SpawnNPC(bool* bSuccess, class AActor** NPCActor);
		void OnNPCDied(class AActor* NPCActor);
		TMap<struct FGameplayTag, int32_t> NPCsListToMonstersMap(TArray<struct FGameplayTag> List);
		bool IsNpcSummaryEnabled();
		bool IsFull();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.NpcPointQueryManager
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UNpcPointQueryManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_QQNS[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (PADDING)

	public:
		class UNpcPointQueryManager* GetNpcPointQueryManager();
		struct FNpcPointQueryHandle FindShootingPoint(const struct FNpcPointQueryParam& Param, const class FScriptDelegate& FinishCallback);
		struct FNpcPointQueryHandle FindCoverPoint(const struct FNpcPointQueryParam& Param, const class FScriptDelegate& FinishCallback);
		void CancelQuery(struct FNpcPointQueryHandle* Handle);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PlayerConfig
	 * Size -> 0x0468 (FullSize[0x0498] - InheritedSize[0x0030])
	 */
	class UPlayerConfig : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_23GE[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartMaxPlayerHP;                                        // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HealthBoothPriceHealth;                                  // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HealthBoothPriceRest;                                    // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SleepHealthIncreaseSpeed;                                // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartWalkSpeed;                                          // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartSprintSpeed;                                        // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartCrouchSpeed;                                        // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PMWB[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  WaterMovementReductionCurve;                             // 0x0058(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      TeleportTraceDownDistance;                               // 0x00E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TeleportSweepSteps;                                      // 0x00E4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G4XY[0x3];                                   // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TeleportSpeed;                                           // 0x00E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TeleportMaxStepHeight;                                   // 0x00EC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  TeleportStaminaUsePerMeterFromDistanceMetersCurve;       // 0x00F0(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      TeleportAnomaliesTimerDivisor;                           // 0x0178(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PoisonedWaterDot;                                        // 0x017C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaterDrowningDot;                                        // 0x0180(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaterStaminaDot;                                         // 0x0184(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  SpeedToFallDamageCurve;                                  // 0x0188(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      MaxPlayerStamina;                                        // 0x0210(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartSprintStaminaUsage;                                 // 0x0214(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaUsageCoefficient;                                 // 0x0218(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaRegenerationSpeed;                                // 0x021C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPlayerRest;                                           // 0x0220(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartRestIncreaseSpeed;                                  // 0x0224(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartRestDecreaseSpeed;                                  // 0x0228(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPlayerNutrition;                                      // 0x022C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPlayerHunger;                                         // 0x0230(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HungerSpeed;                                             // 0x0234(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HungerTolerance;                                         // 0x0238(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NWPQ[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                EatableItemTags;                                         // 0x0240(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      ShortForwardGripRadius;                                  // 0x0250(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceGripDeadZone;                                    // 0x0254(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceGripSphereTraceRadius;                           // 0x0258(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceGripTraceLength;                                 // 0x025C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LoadAmmoContainersIfInHands;                             // 0x0260(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LoadAmmoContainersIfInInventory;                         // 0x0261(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LoadAmmoBoxesIfNotInHands;                               // 0x0262(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VT1N[0x1];                                   // 0x0263(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DeathItemsDropRadius;                                    // 0x0264(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InventoryItemsPositionTreshold;                          // 0x0268(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPRSubtitleType                                            SystemSubtitlesType;                                     // 0x026C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPRSubtitleType                                            CameraSubtitlesType;                                     // 0x026D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GWR5[0x2];                                   // 0x026E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InspectShowDelay;                                        // 0x0270(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InspectHideDelay;                                        // 0x0274(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InspectShowDistance;                                     // 0x0278(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InspectShowMinAngles;                                    // 0x027C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InspectShowMaxAngles;                                    // 0x0288(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InspectHideMinAngles;                                    // 0x0294(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InspectHideMaxAngles;                                    // 0x02A0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HNOQ[0x4];                                   // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  WeightToWalkSpeedPercent;                                // 0x02B0(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  WeightToRunSpeedPercent;                                 // 0x0338(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  WeightToStaminaPercent;                                  // 0x03C0(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<float, struct FLinearColor>                           WeightToWarningColor;                                    // 0x0448(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		void GetWeightToWarningColor(float Weight, struct FLinearColor* Color);
		void GetWeightToWalkSpeedCoefficient(float Weight, float* SpeedCoefficient);
		void GetWeightToStaminaCoefficient(float Weight, float* Coefficient);
		void GetWeightToRunSpeedCoefficient(float Weight, float* SpeedCoefficient);
		void GetWaterMovementReductionCoefficient(float BodyInWaterRatio, float* MovementCoefficient);
		float GetStaminaRegenerationSpeed();
		class UPlayerConfig* GetPlayerConfig();
		void GetFallDamage(float SpeedDelta, float* Damage);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PlayerGameData
	 * Size -> 0x0148 (FullSize[0x0170] - InheritedSize[0x0028])
	 */
	class UPlayerGameData : public UObject
	{
	public:
		unsigned char                                              UnknownData_3440[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Health;                                                  // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHealth;                                               // 0x0034(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Stamina;                                                 // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxStamina;                                              // 0x003C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Rest;                                                    // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRest;                                                 // 0x0044(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Hunger;                                                  // 0x0048(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHunger;                                               // 0x004C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Nutrition;                                               // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxNutrition;                                            // 0x0054(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Money;                                                   // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerLevel;                                             // 0x005C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        PositionLevel;                                           // 0x0060(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9CI6[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          PositionTransform;                                       // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             PositionVelocity;                                        // 0x00A0(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7EDA[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FGameplayTag, struct FVector>                  LastDeathLocation;                                       // 0x00B0(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FVector>                  LastSleepLocation;                                       // 0x0100(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FVector                                             ZoneEnterLocation;                                       // 0x0150(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5HTP[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FItemDropInfo>                               DeathDropItems;                                          // 0x0160(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		class FString ToString();
		void SavePosition(const struct FGameplayTag& InLevel, const struct FTransform& Position, const struct FVector& Velocity);
		void SaveDroppedItems(const struct FGameplayTag& InLevel, const struct FTransform& Location, TArray<class FString> ItemIds);
		void ResetStats(bool bAlive);
		void ResetPosition();
		void RemoveDroppedItem(const struct FGameplayTag& InLevel, const class FString& ItemId, bool* bEmpty);
		void GetPosition(const struct FGameplayTag& InLevel, struct FTransform* Position, struct FVector* Velocity, bool* hasSaved);
		TArray<struct FItemDropInfo> GetDroppedItems(const struct FGameplayTag& InLevel);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PlayerHandsConfig
	 * Size -> 0x0450 (FullSize[0x0480] - InheritedSize[0x0030])
	 */
	class UPlayerHandsConfig : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_Q7TS[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FShiftsPair                                         MotionSourcesDefaultPosition;                            // 0x0040(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		TMap<EPRControllerType, struct FShiftsPair>                ControllerShifts;                                        // 0x00A0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      PistolsStickBreakDistance;                               // 0x00F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SKDI[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          PrimaryHandPosesTable;                                   // 0x00F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          PrimaryTriggeredHandPosesTable;                          // 0x0100(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          PrimarySafetyHandPosesTable;                             // 0x0108(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          SecondaryHandPosesTable;                                 // 0x0110(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          ThrowHandPosesTable;                                     // 0x0118(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          SlideHandPosesTable;                                     // 0x0120(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPRHandPoseInfosPair                                HandsPoseDefault;                                        // 0x0128(0x02B0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y590[0xA8];                                  // 0x03D8(0x00A8) MISSED OFFSET (PADDING)

	public:
		struct FTransform ToTransform(const struct FPRCleanTransform& cleanTransform);
		void ShowDeviceModel(class USceneComponent* Parent, class UPrimitiveComponent* DisplayComponent, EControllerHand hand, class UPrimitiveComponent** newDisplayComponent);
		void SaveToAsset();
		void SavePoseDefault(TMap<EPRControllerType, struct FPRCleanTransform> leftItemShifts, TMap<EPRControllerType, struct FPRCleanTransform> rightItemShifts, const struct FPRHandPoseInfosPair& handsData);
		bool HaveHandsPoseForTagByGeometryTypeAndPoseNumber(EPRHandPoseType poseType, const struct FGameplayTag& Tag, EPRHandPoseGeometryType GeometryType, EPRHandPoseNumber PoseNumber);
		bool HaveHandsPoseForTag(EPRHandPoseType poseType, const struct FGameplayTag& Tag);
		bool HaveHandsPoseForStaticMeshByGeometryTypeAndPoseNumber(EPRHandPoseType poseType, class UStaticMesh* StaticMesh, EPRHandPoseGeometryType GeometryType, EPRHandPoseNumber PoseNumber);
		bool HaveHandsPoseForStaticMesh(EPRHandPoseType poseType, class UStaticMesh* StaticMesh);
		bool HaveHandsPoseForObjectByGeometryTypeAndPoseNumber(EPRHandPoseType poseType, class UObject* Object, EPRHandPoseGeometryType GeometryType, EPRHandPoseNumber PoseNumber);
		bool HaveHandsPoseForObject(EPRHandPoseType poseType, class UObject* Object);
		struct FTransform GetShiftForController(const struct FPRHandPoseInfo& Info, EPRControllerType Controller);
		void GetPointShiftForObjectByGeometryTypeAndPoseNumber(EPRHandPoseType poseType, EPRHandPoseGeometryType GeometryType, EPRHandPoseNumber PoseNumber, class UObject* Object, bool Left, const struct FTransform& handTransform, bool* success, struct FTransform* Result, struct FTransform* WorldTransform, struct FPRHandPoseConditions* HandPoseConditions);
		void GetPointShiftForObject(EPRHandPoseType poseType, class UObject* Object, bool Left, const struct FTransform& handTransform, bool* success, struct FTransform* Result, struct FTransform* WorldTransform);
		class UPlayerHandsConfig* GetPlayerHandsConfig();
		void GetItemShiftForController(TMap<EPRControllerType, struct FTransform> shiftPerController, EPRControllerType Controller, struct FTransform* Shift);
		struct FPRHandPoseInfosPair GetHandsPoseForTagByGeometryTypeAndPoseNumber(EPRHandPoseType poseType, const struct FGameplayTag& Tag, EPRHandPoseGeometryType GeometryType, EPRHandPoseNumber PoseNumber);
		struct FPRHandPoseInfosPair GetHandsPoseForTag(EPRHandPoseType poseType, const struct FGameplayTag& Tag);
		struct FPRHandPoseInfosPair GetHandsPoseForStaticMeshByGeometryTypeAndPoseNumber(EPRHandPoseType poseType, class UStaticMesh* StaticMesh, EPRHandPoseGeometryType GeometryType, EPRHandPoseNumber PoseNumber);
		struct FPRHandPoseInfosPair GetHandsPoseForStaticMesh(EPRHandPoseType poseType, class UStaticMesh* StaticMesh);
		struct FPRHandPoseInfosPair GetHandsPoseForObjectByGeometryTypeAndPoseNumber(EPRHandPoseType poseType, class UObject* Object, EPRHandPoseGeometryType GeometryType, EPRHandPoseNumber PoseNumber);
		struct FPRHandPoseInfosPair GetHandsPoseForObject(EPRHandPoseType poseType, class UObject* Object);
		void GetHandShiftForObjectByGeometryTypeAndPoseNumber(EPRHandPoseType poseType, EPRHandPoseGeometryType GeometryType, EPRHandPoseNumber PoseNumber, class UObject* Object, bool Left, const struct FTransform& handTransform, bool* success, struct FTransform* Result, struct FTransform* WorldTransform, struct FPRHandPoseConditions* HandPoseConditions);
		void GetHandShiftForObject(EPRHandPoseType poseType, class UObject* Object, bool Left, const struct FTransform& handTransform, bool* success, struct FTransform* Result, struct FTransform* WorldTransform);
		void GetControllerShifts(EPRControllerType Controller, struct FTransform* LeftShift, struct FTransform* RightShift);
		void GetBestPointShiftForObjectByConditions(EPRHandPoseType poseType, class UObject* Object, bool Left, const struct FTransform& handTransform, bool useGripLimit, const struct FVector& handRootLocation, class UGripMotionControllerComponent* MotionController, bool* success, struct FTransform* Result, struct FTransform* WorldTransform, EPRHandPoseGeometryType* bestGeometryType, EPRHandPoseNumber* bestPoseNumber);
		void GetBestPointShiftForObject(EPRHandPoseType poseType, class UObject* Object, bool Left, const struct FTransform& handTransform, bool* success, struct FTransform* Result, struct FTransform* WorldTransform, EPRHandPoseGeometryType* bestGeometryType, EPRHandPoseNumber* bestPoseNumber);
		void GetBestHandShiftForObjectByConditions(EPRHandPoseType poseType, class UObject* Object, bool bLeft, const struct FTransform& CurrentHandTransform, bool bUseArmLengthLimit, const struct FVector& HandShoulderLocation, class UGripMotionControllerComponent* MotionController, bool* bSuccess, struct FTransform* PoseRelativeTransform, struct FTransform* PoseWorldTransform, EPRHandPoseGeometryType* PoseGeometryType, EPRHandPoseNumber* PoseNumber);
		void GetBestHandShiftForObject(EPRHandPoseType poseType, class UObject* Object, bool Left, const struct FTransform& handTransform, bool* success, struct FTransform* Result, struct FTransform* WorldTransform, EPRHandPoseGeometryType* bestGeometryType, EPRHandPoseNumber* bestPoseNumber);
		struct FPRCleanTransform FromTransform(const struct FTransform& Transform);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PlayerLightSensitiveInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlayerLightSensitiveInterface : public UInterface
	{
	public:
		void LightOn(const struct FVector& Location, class USceneComponent* Component);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRBasicActorComponent
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UPRBasicActorComponent : public UActorComponent
	{
	public:
		void OnLevelStarted(const struct FGameplayTag& LevelTag);
		void OnLevelPrepare(const struct FGameplayTag& LevelTag);
		void OnGameStartedPrivate();
		void OnGameStarted();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PlayerStatsComponent
	 * Size -> 0x0058 (FullSize[0x0138] - InheritedSize[0x00E0])
	 */
	class UPlayerStatsComponent : public UPRBasicActorComponent
	{
	public:
		unsigned char                                              UnknownData_LD3M[0x8];                                   // 0x00E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHealth;                                                // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStamina;                                               // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNutrition;                                             // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBlackout;                                              // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H1J3[0x10];                                  // 0x0128(0x0010) MISSED OFFSET (PADDING)

	public:
		void UseStamina(bool Use, float StaminaUseMult);
		void SetStats(int32_t HealthPercent, int32_t StaminaPercent, int32_t RestPercent, int32_t NutritionPercent, int32_t HungerPercent);
		void SetStamina(float Value);
		void SetHealth(float Health);
		void Reset(bool bAlive);
		void RegenerateHealth(float DeltaSeconds);
		bool HasStamina();
		bool HasRest();
		bool HasNutrition();
		void GetStatus(EPRStatStatus* Health, EPRStatStatus* Stamina, EPRStatStatus* Nutrition);
		void GetStats(float* Health, float* HealthPercent, float* Stamina, float* StaminaPercent, float* Rest, float* RestPercent, float* Nutrition, float* NutritionPercent);
		void GetStaminaPercent(float* StaminaPercent);
		void GetSleepTimeTillRested(int32_t RestPercent, float* Seconds);
		void GetSleepTimeTillHealed(int32_t HealthPercent, float* Seconds);
		void GetRestPercent(float* RestPercent);
		void GetMaxAvailableStamina(float* Stamina, float* MaxAvailable);
		void GetHealthMax(float* HealthMax);
		bool EnoughStamina(float Stamina);
		void ChangeStamina(float Delta);
		void ChangeRestByPercent(int32_t Percent);
		void ChangeRest(float Delta, bool bBuff);
		void ChangeNutrition(float Delta);
		void ChangeHealthByPercent(int32_t Percent);
		bool CanRegenerateHealth();
		void AllowRegeneration(float HealthRegenStart, float HealthRegenMax, float HealthRegenPerSecond);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PoolDisposeComponent
	 * Size -> 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
	 */
	class UPoolDisposeComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_W0Z3[0x8];                                   // 0x00E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DisposeTime;                                             // 0x00E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_54TH[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)

	public:
		void StopTimer();
		void StartTimerWithDelay(float Delay);
		void StartTimer();
		void Dispose();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PoolManager
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UPoolManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_BKJ2[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UClass*, struct FActorsArray>                   Pool;                                                    // 0x0038(0x0050) NativeAccessSpecifierPrivate

	public:
		bool ReturnActor(class AActor* Actor);
		void PrefillPoolFromConfig();
		bool IsActorInPool(class AActor* Actor);
		class UPoolManager* GetPoolManager();
		class AActor* GetActor(class UClass* ActorClass, const struct FTransform& Transform, class AActor* Owner, class APawn* Instigator);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PoolManagerConfig
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UPoolManagerConfig : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_O978[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPoolActorConfig>                            ActorConfigs;                                            // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		class UPoolManagerConfig* GetPoolManagerConfig();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRBasicCharacter
	 * Size -> 0x0028 (FullSize[0x0540] - InheritedSize[0x0518])
	 */
	class APRBasicCharacter : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_A8JC[0x8];                                   // 0x0518(0x0008) Fix Super Size
		TArray<struct FRelevanceDescription>                       RelevanceDescription;                                    // 0x0520(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NMJQ[0x10];                                  // 0x0530(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetCoverReservationFromSearchResult(const struct FNpcPointQueryResult& Result);
		void OnTransitionStart();
		void OnTransitionEnd();
		void OnLevelStarted(const struct FGameplayTag& LevelTag);
		void OnLevelPrepare(const struct FGameplayTag& LevelTag);
		void OnGameStartedPrivate();
		void OnGameStarted();
		void OnGamePaused(bool bPaused);
		void OnGameDataSaved();
		bool GetRandomReachablePoint(const struct FVector& Origin, float Radius, const struct FVector& StartPoint, float MinDistance, struct FVector* Point);
		void ClearCoverReservation();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCharacter
	 * Size -> 0x0310 (FullSize[0x0850] - InheritedSize[0x0540])
	 */
	class APRCharacter : public APRBasicCharacter
	{
	public:
		unsigned char                                              UnknownData_ZE3J[0x38];                                  // 0x0540(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPRNpcPerceptionComponent*                           PerceptionComponent;                                     // 0x0578(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAudioComponent*                                     AudioIdle;                                               // 0x0580(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAIPerceptionStimuliSourceComponent*                 AIPerceptionStimuliSource;                               // 0x0588(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAIEdPerceptionComp*                                 AIEdPerceptionComponent;                                 // 0x0590(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAliveStatsComponent*                                AliveStatsComponent;                                     // 0x0598(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FFU6[0x18];                                  // 0x05A0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CommandKeyName;                                          // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBehaviorTree*                                       BTAsset;                                                 // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WalkSpeed;                                               // 0x05C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IdleTime;                                                // 0x05CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLookAroundAfterWalk;                                    // 0x05D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PDLH[0x3];                                   // 0x05D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LootPossibility;                                         // 0x05D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        NPCTag;                                                  // 0x05D8(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              IdleOrigin;                                              // 0x05E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStrictOrigin;                                           // 0x05E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebugInfo;                                              // 0x05E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MHTN[0x6];                                   // 0x05EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             CritComponent;                                           // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IdleWalkRadius;                                          // 0x05F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CharName;                                                // 0x05FC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LootPossibilityOverride;                                 // 0x0604(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECharCommand                                               Command;                                                 // 0x0608(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ECRZ[0x3];                                   // 0x0609(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             POI;                                                     // 0x060C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ValidDistanceToPlayer;                                   // 0x0618(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x061C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CCVZ[0x3];                                   // 0x061D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SpawnerId;                                               // 0x0620(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CustomUID;                                               // 0x0630(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlertCooldown;                                          // 0x0640(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GSPB[0x17];                                  // 0x0641(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECharDetailLevel                                           CurrentDetailLevel;                                      // 0x0658(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EDX5[0x7];                                   // 0x0659(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAIController*                                       AIC;                                                     // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlackboardComponent*                                BB;                                                      // 0x0668(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLerpMovement;                                           // 0x0670(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_140U[0x7];                                   // 0x0671(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              LootItemClass;                                           // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPRNPCInfo                                          NpcInfo;                                                 // 0x0680(0x01B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EQ4V[0x18];                                  // 0x0838(0x0018) MISSED OFFSET (PADDING)

	public:
		void WalkToLocation(const struct FVector& Location);
		void WalkToActorLocation(class AActor* Actor);
		void SpawnLoot();
		void SetupState(float NewAwareness, const struct FVector& NewPOI, ECharCommand NewCommand);
		void SetEnableEverything(bool enable);
		void SetEnableAdditionalThings(bool enable);
		void SetCommand(ECharCommand NewCommand, bool Force);
		void SetBrainEnabled(bool enable);
		bool SelectAndAttackClosest();
		bool SelectAndAttack(class AActor* Actor);
		void SaveGameData();
		void RestartTree();
		void ReappearOutOfSight();
		void ReappearCoverCallback(const struct FNpcPointQueryResult& QueryResult);
		void ProcessNoise(const class FName& Tag, const struct FVector& Location);
		void ProcessDamage(class AActor* causer, float Damage);
		void PrintMessage(const class FString& MessageToPrint);
		void OnHeardNoise(class AActor* Actor, const struct FVector& Location, float Strength, const class FName& Tag);
		void OnDeath(bool bEnableRagdoll);
		void OnDamaged(class AActor* causer, float Damage);
		void NpcAwarenessLevelChanged(EAwarenessLevel PrevLevel, EAwarenessLevel NewLevel);
		void LoadBaseSettings();
		void LoadAdditionalSettings();
		bool IsPlayerNear();
		bool IsLocInValidRange(const struct FVector& Location);
		bool IsEnabled();
		void InvestigateLocation(const struct FVector& Location);
		void HealthEnd();
		struct FVector GetIdleOriginPoint();
		float GetFootstepNoiseRange();
		EAwarenessLevel GetAwarenessLevel();
		float GetAttackMoveDilationAngle();
		float GetAttackLostLocationTime();
		void EventBroadcastEnemyLocation();
		void EnableRagdoll();
		void DestroyController();
		void CharEnabled();
		void AlertNearbyMonsters(class AActor* causer);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRALSCharacter
	 * Size -> 0x01A0 (FullSize[0x09F0] - InheritedSize[0x0850])
	 */
	class APRALSCharacter : public APRCharacter
	{
	public:
		unsigned char                                              UnknownData_037O[0x8];                                   // 0x0850(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Speed;                                                   // 0x0858(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Acceleration;                                            // 0x085C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsMoving;                                                // 0x0868(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasMovementInput;                                        // 0x0869(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EZIG[0x2];                                   // 0x086A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            LastVelocityRotation;                                    // 0x086C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            LastMovementInputRotation;                               // 0x0878(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MovementInputAmount;                                     // 0x0884(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimYawRate;                                              // 0x0888(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OptimalShootRange;                                       // 0x088C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBotMovementMode                                           BotMovementMode;                                         // 0x0890(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BNGY[0x3];                                   // 0x0891(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PreviousVelocity;                                        // 0x0894(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreviousAimYaw;                                          // 0x08A0(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERotationMode                                              DesiredRotationMode;                                     // 0x08A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGait                                                      DesiredGait;                                             // 0x08A5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStance                                                    DesiredStance;                                           // 0x08A6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J91A[0x1];                                   // 0x08A7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LookUpDownRate;                                          // 0x08A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LookLeftRightRate;                                       // 0x08AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimesPressedStance;                                      // 0x08B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BreakFall;                                               // 0x08B4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SprintHeld;                                              // 0x08B5(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2HV5[0x2];                                   // 0x08B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimInstance*                                       MainAnimInstance;                                        // 0x08B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMovementState                                             MovementState;                                           // 0x08C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMovementState                                             PrevMovementState;                                       // 0x08C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERotationMode                                              RotationMode;                                            // 0x08C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGait                                                      Gait;                                                    // 0x08C3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStance                                                    Stance;                                                  // 0x08C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOverlayState                                              OverlayState;                                            // 0x08C5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EViewMode                                                  ViewMode;                                                // 0x08C6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z1A4[0x1];                                   // 0x08C7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 MovementModel;                                           // 0x08C8(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FMovementSettingsState                              MovementData;                                            // 0x08D8(0x00C8) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		struct FIntoTheRadius_FMovementSettings                    CurrentMovementSettings;                                 // 0x09A0(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            TargetRotation;                                          // 0x09C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      YawOffset;                                               // 0x09CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RagdollOnGround;                                         // 0x09D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RagdollFaceUp;                                           // 0x09D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJTB[0x2];                                   // 0x09D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LastRagdollVelocity;                                     // 0x09D4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          DeathSound;                                              // 0x09E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     DeathParticle;                                           // 0x09E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UpdateGroundedRotation();
		void UpdateDynamicMovementSettings(EGait AllowedGait);
		void UpdateCharacterMovement();
		void SmoothCharacterRotation(const struct FRotator& Target, float TargetInterpSpeed, float ActorInterpSpeed);
		void SetMovementModel();
		void SetEssentialValues();
		void SetActorLocationDuringRagdoll();
		bool SetActorLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* OutSweepHitResult);
		void RagdollUpdate();
		void RagdollStart();
		void RagdollEnd();
		void OnViewModeChanged(EViewMode NewViewMode);
		void OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void OnStanceChanged(EStance NewStance);
		void OnRotationModeChanged(ERotationMode NewRotationMode);
		void OnOverlayStateChanged(EOverlayState NewOverLayState);
		void OnMovementStateChanged(EMovementState NewMovementState);
		void OnGaitChanged(EGait NewActualGait);
		void OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void OnCharacterMovementModeChanged(Engine_EMovementMode NewMovementMode, unsigned char NewCustomMode);
		void OnCharacterMovementActionChanged(EMovementAction NewMovementAction);
		void OnBeginPlay();
		void LimitRotation(float AimYawMin, float AimYawMax, float InterpSpeed);
		struct FIntoTheRadius_FMovementSettings GetTargetMovementSettings();
		class UAnimMontage* GetRollAnimation();
		float GetMappedSpeed();
		class UAnimMontage* GetGetUpAnimation(bool bRagDollFaceUp);
		struct FVector GetCapsuleLocationFromBase(const struct FVector& BaseLocation, float ZOffset);
		struct FVector GetCapsuleBaseLocation(float ZOffset);
		float GetAnimCurveValue(const class FName& CurveName);
		struct FRotator GetAimingRotation();
		EGait GetActualGait(EGait AllowedGait);
		bool CanUpdateMovingRotation();
		bool CanSprint();
		float CalculateGroundedRotationRate();
		struct FVector CalculateAcceleration();
		void CacheValues();
		void BeginPlay();
		void AddToCharacterRotation(const struct FRotator& DeltaRotation);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRAnimInstance
	 * Size -> 0x0010 (FullSize[0x02C8] - InheritedSize[0x02B8])
	 */
	class UPRAnimInstance : public UAnimInstance
	{
	public:
		class USkeletalMeshComponent*                              _smc;                                                    // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              _actor;                                                  // 0x02C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class USkeletalMeshComponent* GetSMC();
		class AActor* GetActor();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRAnimPlayer
	 * Size -> 0x0408 (FullSize[0x06D0] - InheritedSize[0x02C8])
	 */
	class UPRAnimPlayer : public UPRAnimInstance
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDisable;                                                // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_718E[0xF];                                   // 0x02D1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InputLeftHandTransform;                                  // 0x02E0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		EHandPose                                                  InputLeftPose;                                           // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EPRHandPoseGeometryType                                    InputLeftHandGeometryType;                               // 0x0311(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EPRHandPoseNumber                                          InputLeftHandPoseNumber;                                 // 0x0312(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UEJD[0x5];                                   // 0x0313(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPRHandPoseInfo                                     InputLeftPoseInfo;                                       // 0x0318(0x0140) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		class UObject*                                             InputLeftObject;                                         // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              InputLeftActor;                                          // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DEOX[0x8];                                   // 0x0468(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InputRightHandTransform;                                 // 0x0470(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		EHandPose                                                  InputRightPose;                                          // 0x04A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EPRHandPoseGeometryType                                    InputRightHandGeometryType;                              // 0x04A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EPRHandPoseNumber                                          InputRightHandPoseNumber;                                // 0x04A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W7IQ[0x5];                                   // 0x04A3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPRHandPoseInfo                                     InputRightPoseInfo;                                      // 0x04A8(0x0140) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		class UObject*                                             InputRightObject;                                        // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              InputRightActor;                                         // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InputDirection;                                          // 0x05F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InputSpeed;                                              // 0x05FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             InputVelocity;                                           // 0x0600(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InputPlayerHeight;                                       // 0x060C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InputPlayerHeightScale;                                  // 0x0610(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_64ZN[0xC];                                   // 0x0614(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InputRootTransform;                                      // 0x0620(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTransform                                          InputCameraTransform;                                    // 0x0650(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTransform                                          InputNeckTransform;                                      // 0x0680(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bInputRagdoll;                                           // 0x06B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NXMB[0x3];                                   // 0x06B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayerMeshHeight;                                        // 0x06B4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PlayerMeshEyeHeight;                                     // 0x06B8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NeckOffset;                                              // 0x06BC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinPlayerHeight;                                         // 0x06C0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxPlayerHeight;                                         // 0x06C4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0H0B[0x8];                                   // 0x06C8(0x0008) MISSED OFFSET (PADDING)

	public:
		void ReceiveInputDataNative();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRAnomaly
	 * Size -> 0x0140 (FullSize[0x03D8] - InheritedSize[0x0298])
	 */
	class APRAnomaly : public APRBasicActor
	{
	public:
		unsigned char                                              UnknownData_GE5B[0x20];                                  // 0x0298(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnomalyRadius;                                           // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5IW6[0x4];                                   // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     Root;                                                    // 0x02C0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAudioComponent*                                     Audio;                                                   // 0x02C8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPrimitiveComponent*                                 Trigger;                                                 // 0x02D0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MinVisTrigger;                                           // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxVisTrigger;                                           // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SignificanceDistance;                                    // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EffectDelay;                                             // 0x02E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       AlwaysSignificant;                                       // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N75K[0x3];                                   // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        TypeID;                                                  // 0x02EC(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       Significant;                                             // 0x02F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsAnomalyTriggered;                                      // 0x02F5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CZ9V[0x2];                                   // 0x02F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RandomTime;                                              // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AnomalyBaseDamage;                                       // 0x02FC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          ConstSound;                                              // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              DamageType;                                              // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       SelfTriggering;                                          // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       NDebug;                                                  // 0x0311(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1LY5[0x2];                                   // 0x0312(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TriggeredOverlapCheckTimer;                              // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsSoundConstant;                                         // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PJ0S[0x3];                                   // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DotDuration;                                             // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       HasAudio;                                                // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       AffectsOnlyPlayer;                                       // 0x0321(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       BeginOverlapAffectsActorsMultipleTimesIfBlink;           // 0x0322(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IgnorePlayerInventory;                                   // 0x0323(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6F7R[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomUID;                                               // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      ActorsAffected;                                          // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UPrimitiveComponent*>                         Triggers;                                                // 0x0348(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class USceneComponent*>                             DeactivatedComps;                                        // 0x0358(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class USceneComponent*>                             HiddenComps;                                             // 0x0368(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FTimerHandle                                        OverlapTriggerTimerHandle;                               // 0x0378(0x0008) Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTimerHandle                                        OverlapCheckerTimer;                                     // 0x0380(0x0008) Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTimerHandle                                        significantTimer;                                        // 0x0388(0x0008) Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTimerHandle                                        SelfTriggerTimer;                                        // 0x0390(0x0008) Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTimerHandle                                        discoverTimer;                                           // 0x0398(0x0008) Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5TY9[0x38];                                  // 0x03A0(0x0038) MISSED OFFSET (PADDING)

	public:
		void TriggerVisuals();
		void OverlapTriggered(class AActor* OtherActor);
		void OverlapStartingTriggered(class AActor* OtherActor);
		void OverlapLeavingTriggered(class AActor* OtherActor);
		void OverlapCheckerDelegate();
		void OnSetupEvent();
		void OnOverlapEndTrigger(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnOverlapBeginTrigger(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void LevelStarted(const struct FGameplayTag& LevelTag);
		void LevelPrepare(const struct FGameplayTag& LevelTag);
		void GenerateTriggersOverlapEvents(bool ClearExistingEvents);
		void ApplyAnomalyDamage(class AActor* Actor);
		void AnomalyTriggered();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRAsh
	 * Size -> 0x00A8 (FullSize[0x0340] - InheritedSize[0x0298])
	 */
	class APRAsh : public APRBasicActor
	{
	public:
		TMap<EPRPlatformType, struct FFollowPlayerData>            FollowPlayerDataMap;                                     // 0x0298(0x0050) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LVVE[0x58];                                  // 0x02E8(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRAshMeshComponent
	 * Size -> 0x0078 (FullSize[0x0520] - InheritedSize[0x04A8])
	 */
	class UPRAshMeshComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_BDL4[0x4];                                   // 0x04A8(0x0004) Fix Super Size
		float                                                      SpawnRadius;                                             // 0x04AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LifeTimeMin;                                             // 0x04B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LifeTimeMax;                                             // 0x04B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleSizeMin;                                         // 0x04B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleSizeMax;                                         // 0x04BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleSpeedMin;                                        // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleSpeedMax;                                        // 0x04C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleAngularSpeedMax;                                 // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleSpinRadiusMax;                                   // 0x04CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleSpinSpeedMax;                                    // 0x04D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParticlesCount;                                          // 0x04D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParticlesTileX;                                          // 0x04D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ParticlesTileY;                                          // 0x04DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ParticleColorMin;                                        // 0x04E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ParticleColorMax;                                        // 0x04F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3HA5[0x20];                                  // 0x0500(0x0020) MISSED OFFSET (PADDING)

	public:
		void InitParticles();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRAudioSpline
	 * Size -> 0x0018 (FullSize[0x02B0] - InheritedSize[0x0298])
	 */
	class APRAudioSpline : public APRBasicActor
	{
	public:
		class USplineComponent*                                    Spline;                                                  // 0x0298(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAudioComponent*                                     Audio;                                                   // 0x02A0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LoopBeginMin;                                            // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LoopBeginMax;                                            // 0x02AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRBasicActorWithConditions
	 * Size -> 0x0010 (FullSize[0x02A8] - InheritedSize[0x0298])
	 */
	class APRBasicActorWithConditions : public APRBasicActor
	{
	public:
		TArray<class UPRCondition*>                                Conditions;                                              // 0x0298(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		bool CheckActorConditions();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRBasicSceneComponent
	 * Size -> 0x0000 (FullSize[0x0228] - InheritedSize[0x0228])
	 */
	class UPRBasicSceneComponent : public USceneComponent
	{
	public:
		void OnLevelStarted(const struct FGameplayTag& LevelTag);
		void OnLevelPrepare(const struct FGameplayTag& LevelTag);
		void OnGameStartedPrivate();
		void OnGameStarted();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCheatManager
	 * Size -> 0x0028 (FullSize[0x00B0] - InheritedSize[0x0088])
	 */
	class UPRCheatManager : public UCheatManager
	{
	public:
		unsigned char                                              UnknownData_WDM9[0x28];                                  // 0x0088(0x0028) MISSED OFFSET (PADDING)

	public:
		void UnlockAllWeapons();
		void ToggleProjectileDraw();
		void SpawnItem(const class FString& Tag);
		void ShowRevision();
		void SetSkipTutorial(bool b_new_skip);
		void SecurityLevel(int32_t Level);
		void RIP();
		void ResetTideTimer();
		void RefillAmmoContainer(class UInventoryItem* Item);
		void RefillAmmo();
		void RaiseCrashReport();
		void PrintActors();
		bool IsProjectileDraw();
		void GiveMeTheWeapon(const class FString& Tag);
		void GiveMeTheMoney(int32_t Amount);
		void GiveMeTheDurability(int32_t Value);
		void GiveMeTheBullets();
		bool GetSkipTutorial();
		void GetMission(const struct FGameplayTag& MissionInstanceId, class UMissionData** MissionData);
		TArray<struct FGameplayTag> GetChildTags(const struct FGameplayTag& parentTag);
		class UInventoryItem* DoSpawnItem(const struct FGameplayTag& Tag);
		void ChangeHealth(int32_t Delta);
		void AddMission(class UMissionData* MissionData);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRClusterPattern
	 * Size -> 0x0008 (FullSize[0x02A0] - InheritedSize[0x0298])
	 */
	class APRClusterPattern : public APRBasicActor
	{
	public:
		class USceneComponent*                                     Root;                                                    // 0x0298(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRClusterPointArtifact
	 * Size -> 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
	 */
	class UPRClusterPointArtifact : public UPRBasicSceneComponent
	{
	public:
		class UBillboardComponent*                                 Billboard;                                               // 0x0228(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRClusterSpawner
	 * Size -> 0x0060 (FullSize[0x02F8] - InheritedSize[0x0298])
	 */
	class APRClusterSpawner : public APRBasicActor
	{
	public:
		unsigned char                                              UnknownData_S6HT[0x8];                                   // 0x0298(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        ClusterID;                                               // 0x02A0(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      Patterns;                                                // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       ProjectAnomalies;                                        // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_08ZS[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                DefaultAtrifacts;                                        // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FMinMaxInt                                          DefaultAtrifactsCount;                                   // 0x02D0(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<class UPRItemConfig*>                               MissionAtrifacts;                                        // 0x02D8(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y88F[0x10];                                  // 0x02E8(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnCheckTick();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCommonGameData
	 * Size -> 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
	 */
	class UPRCommonGameData : public UObject
	{
	public:
		unsigned char                                              UnknownData_2ADK[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           SaveDateTime;                                            // 0x0030(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FShootingScores>                             ShootingScoreboard;                                      // 0x0038(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FShootingScores                                     LastShootingScores;                                      // 0x0048(0x0020) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               ObtainedWeapons;                                         // 0x0068(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               FinishedMissions;                                        // 0x0088(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    FinishedMissionsCount;                                   // 0x00A8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7146[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                CommonTriggers;                                          // 0x00B0(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              FirstSessionDateString;                                  // 0x00C0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxPlayerLevel;                                          // 0x00D0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KO2G[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    GameTotalTicks;                                          // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SessionCount;                                            // 0x00E0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GuitarPlayCount;                                         // 0x00E4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetTrigger(const struct FGameplayTag& Tag);
		void SaveShootingRun(float RunTime, int32_t Scores, int32_t Hits, int32_t Misses, int32_t GrenadeKills);
		void OnMissionChange(class UMissionData* MissionData);
		void OnItemTaken(class UInventoryItem* Item);
		bool IsWeaponUnlocked(const struct FGameplayTag& Tag);
		void Initialize();
		int32_t IncrementGuitarPlayCount();
		bool GetTrigger(const struct FGameplayTag& Tag);
		float GetTotalPlaytimeMinutes();
		void GetCommonGameData(class UPRCommonGameData** Data);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPRCondition : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_FloatCheck
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UPRCondition_FloatCheck : public UPRCondition
	{
	public:
		class UMathCondition_Float*                                ValueCheck;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_IntCheck
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UPRCondition_IntCheck : public UPRCondition
	{
	public:
		class UMathCondition_Int*                                  ValueCheck;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_Mission
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UPRCondition_Mission : public UPRCondition
	{
	public:
		struct FGameplayTag                                        MissionConfigId;                                         // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_Trigger
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UPRCondition_Trigger : public UPRCondition
	{
	public:
		struct FGameplayTag                                        Trigger;                                                 // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_MissionsList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPRCondition_MissionsList : public UPRCondition
	{
	public:
		TArray<struct FGameplayTag>                                MissionConfigIDsList;                                    // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_Item
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UPRCondition_Item : public UPRCondition
	{
	public:
		struct FGameplayTag                                        ItemConfigID;                                            // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_ItemsList
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPRCondition_ItemsList : public UPRCondition
	{
	public:
		TArray<struct FGameplayTag>                                ItemConfigIDsList;                                       // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_NPC
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UPRCondition_NPC : public UPRCondition
	{
	public:
		struct FGameplayTag                                        NPCConfigID;                                             // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_MissionSuccessfullyFinished
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPRCondition_MissionSuccessfullyFinished : public UPRCondition_Mission
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_AnyMissionsListSuccessfullyFinished
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UPRCondition_AnyMissionsListSuccessfullyFinished : public UPRCondition_MissionsList
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_MissionActive
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UPRCondition_MissionActive : public UPRCondition_Mission
	{
	public:
		bool                                                       InProgress;                                              // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InverseCheck;                                            // 0x0031(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_07UW[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_MissionsFinishedAfter
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UPRCondition_MissionsFinishedAfter : public UPRCondition_Mission
	{
	public:
		bool                                                       OnlySuccessful;                                          // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ECO5[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMinMaxInt                                          Amount;                                                  // 0x0034(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       InverseCheck;                                            // 0x003C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_93UV[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_SuccesfullyFinishedCountCheck
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPRCondition_SuccesfullyFinishedCountCheck : public UPRCondition_IntCheck
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_TotalFinishedCountCheck
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPRCondition_TotalFinishedCountCheck : public UPRCondition_IntCheck
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_ActiveCountCheck
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPRCondition_ActiveCountCheck : public UPRCondition_IntCheck
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_HoursSinceMissionSuccessfullyFinished
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UPRCondition_HoursSinceMissionSuccessfullyFinished : public UPRCondition_Mission
	{
	public:
		class UMathCondition_Int*                                  ValueCheck;                                              // 0x0030(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_CheckInventoryItem
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UPRCondition_CheckInventoryItem : public UPRCondition_Item
	{
	public:
		bool                                                       InPlayerInventory;                                       // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SF82[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                InLevelInventories;                                      // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_StashesOpenedCheck
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UPRCondition_StashesOpenedCheck : public UPRCondition_IntCheck
	{
	public:
		TArray<struct FGameplayTag>                                StashTypes;                                              // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_NPCKilled
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPRCondition_NPCKilled : public UPRCondition_NPC
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_NPCKilledWeapon
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UPRCondition_NPCKilledWeapon : public UPRCondition_NPC
	{
	public:
		struct FGameplayTag                                        WeaponTypeID;                                            // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_NPCMet
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPRCondition_NPCMet : public UPRCondition_NPC
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_DeathsCheck
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPRCondition_DeathsCheck : public UPRCondition_IntCheck
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_MoneyCheck
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPRCondition_MoneyCheck : public UPRCondition_FloatCheck
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_TriggerCheck
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UPRCondition_TriggerCheck : public UPRCondition_Trigger
	{
	public:
		bool                                                       PassedCheck;                                             // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8QDK[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_CassetteCheck
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UPRCondition_CassetteCheck : public UPRCondition_Trigger
	{
	public:
		bool                                                       PassedCheck;                                             // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F7LA[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_PlayerLevelCheck
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UPRCondition_PlayerLevelCheck : public UPRCondition
	{
	public:
		struct FMinMaxInt                                          PlayerLevelRange;                                        // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_MinimumPlayerLevelCheck
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UPRCondition_MinimumPlayerLevelCheck : public UPRCondition
	{
	public:
		int32_t                                                    MinimumPlayerLevel;                                      // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N9XW[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_VisitedLevelCheck
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UPRCondition_VisitedLevelCheck : public UPRCondition
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_ORCheck
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPRCondition_ORCheck : public UPRCondition
	{
	public:
		TArray<class UPRCondition*>                                ORConditions;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRCondition_MORCheck
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UPRCondition_MORCheck : public UPRCondition
	{
	public:
		int32_t                                                    Minimum;                                                 // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LQ7M[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPRCondition*>                                Conditions;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PREnvironment
	 * Size -> 0x0040 (FullSize[0x02D8] - InheritedSize[0x0298])
	 */
	class APREnvironment : public APRBasicActor
	{
	public:
		struct FGameplayTag                                        EnvironmentLevelTag;                                     // 0x0298(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APRSkyBox*                                           SkyBoxRef;                                               // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ALevelSequenceActor*                                 EnvLevelSequenceRef;                                     // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ADirectionalLight*                                   SunRef;                                                  // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ASkyLight*                                           SkyLightRef;                                             // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APostProcessVolume*                                  LightScenarioPostProcessRef;                             // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugTimeScale;                                          // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5LCG[0xC];                                   // 0x02CC(0x000C) MISSED OFFSET (PADDING)

	public:
		void Startup();
		void SetEnvironmentHidden(bool bEnvironmentHidden);
		void OnGameTimeChanged(float AddedSeconds);
		void OnGameplayTimeDilationChanged(float Dilation);
		struct FVector GetRadiusLocation();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRGameData
	 * Size -> 0x01E8 (FullSize[0x0210] - InheritedSize[0x0028])
	 */
	class UPRGameData : public UObject
	{
	public:
		unsigned char                                              UnknownData_1A8Z[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayerGameData*                                     BackupPlayerData;                                        // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlayerGameData*                                     PlayerData;                                              // 0x0040(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameMissions*                                       MissionsData;                                            // 0x0048(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameInventory*                                      InventoryData;                                           // 0x0050(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USpawnerGameData*                                    SpawnSaveData;                                           // 0x0058(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   UID;                                                     // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SlotNr;                                                  // 0x0068(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2I9W[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           SaveDateDime;                                            // 0x0070(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SaveMessage;                                             // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPlayerStats                                        PlayerStats;                                             // 0x0088(0x0040) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                VisitedLevels;                                           // 0x00C8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FDateTime                                           TimeStart;                                               // 0x00D8(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    TicksPassed;                                             // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    LastTideTicks;                                           // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPRGameDifficultyPreset                                    Difficulty;                                              // 0x00F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameDifficulty                                     GameDifficulty;                                          // 0x00F1(0x0006) NoDestructor, NativeAccessSpecifierPublic
		struct FRadiusGameDifficulty                               GameDifficultyConfig;                                    // 0x00F7(0x0010) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Ironman;                                                 // 0x0107(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IntactDifficulty;                                        // 0x0108(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F0P9[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GameUID;                                                 // 0x0110(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameStartDateString;                                     // 0x0120(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    GameRealTicks;                                           // 0x0130(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FMapData>                 MapsData;                                                // 0x0138(0x0050) NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FLevelDecorData>          LevelDecorItems;                                         // 0x0188(0x0050) NativeAccessSpecifierPublic
		struct FGameplayTag                                        PreviousLevelTag;                                        // 0x01D8(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        CurrentLevelTag;                                         // 0x01E0(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        NextLevelTag;                                            // 0x01E8(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                PassedTriggers;                                          // 0x01F0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      CustomMarkers;                                           // 0x0200(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void UpdateMarker(const class FString& Marker, bool bRemove);
		bool UnsetTrigger(const struct FGameplayTag& Trigger);
		bool StatAddUniqueItem(const struct FGameplayTag& ItemId);
		void StatAddKill(const struct FGameplayTag& NPCTag, const struct FGameplayTag& weaponTag);
		void StatAddDeath(const struct FGameplayTag& KillerTag);
		bool SetTrigger(const struct FGameplayTag& Trigger);
		void SetPlayerLevel(int32_t PlayerLevel);
		void SaveSleepLocation(const struct FGameplayTag& Level, const struct FVector& Location);
		void SaveDecorItemTransform(const class FString& DecorId, const struct FTransform& Transform);
		void SaveDecorItemDestroyed(const class FString& DecorId);
		void SaveDeathLocation(const struct FGameplayTag& Level, const struct FVector& Location);
		void ResetGameData();
		void RemoveSleepLocation(const struct FGameplayTag& Level);
		void RemoveDeathLocation(const struct FGameplayTag& Level);
		void PrintMissions(const class FString& Message);
		void PrintInventory(const class FString& Message);
		void PrintData(const class FString& Message);
		void PrepareNewGame(const struct FRadiusGameDifficulty& NewDifficulty, bool bIronman, bool bSkipTutorial, bool bStartupConfig, TArray<struct FGameplayTag> Triggers);
		void OnPlayerLevelChanged(int32_t PlayerLevel);
		void OnObjectiveChange(class UMissionData* MissionData, class UMissionAbstractObjectiveData* Objective);
		void OnMissionChange(class UMissionData* MissionData);
		void OnItemTaken(class UInventoryItem* Item);
		void OnItemStored(class UInventoryItem* Item);
		bool IsManOfHisWord();
		bool IsKatyaMonologueInvalid(const struct FGameplayTag& Tag, bool bIgnoreConditions);
		bool IsJournalGroupHasNewNotes(EJournalGroup Group);
		bool HasMoney(int32_t Amount);
		class FString GetUID();
		void GetSpawnSaveData(class USpawnerGameData** SpawnSaveData);
		bool GetSleepLocation(const struct FGameplayTag& Level, struct FVector* Location);
		float GetSecondsPassed();
		float GetSecondsLastTide();
		float GetRealSecondsToTide();
		float GetPlaytimeSeconds();
		float GetPlaytimeMinutes();
		int32_t GetPlayerLevel();
		void GetMapRenderTarget(const struct FGameplayTag& LevelTag, class UTextureRenderTarget2D** RenderTarget);
		TArray<struct FNoteData> GetJournalGroupNotes(EJournalGroup Group);
		float GetGameSecondsToTide();
		void GetGameData(class UPRGameData** GameData);
		EPRGameDifficultyPreset GetDifficultyPreset();
		void GetDecorItemTransform(const class FString& DecorId, struct FTransform* Transform, bool* bDestroyed, bool* bSuccess);
		bool GetDeathLocation(const struct FGameplayTag& Level, struct FVector* Location);
		void FillFrom(class UPRGameData* Other);
		void DumpData(const class FString& Message);
		bool CheckTrigger(const struct FGameplayTag& Trigger);
		void CheckTideTriggers();
		bool CheckMarker(const class FString& Marker);
		void CheckGameTriggers();
		void ChangeMoney(int32_t ChangeBy, TArray<class FString> AnalyticsParams);
		bool ChangeGameDifficulty(const struct FRadiusGameDifficulty& Value);
		void ApplyTideReset();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRGIStarter
	 * Size -> 0x0018 (FullSize[0x01C0] - InheritedSize[0x01A8])
	 */
	class UPRGIStarter : public UGameInstance
	{
	public:
		unsigned char                                              UnknownData_VVTC[0x18];                                  // 0x01A8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRGIReferences
	 * Size -> 0x0050 (FullSize[0x0210] - InheritedSize[0x01C0])
	 */
	class UPRGIReferences : public UPRGIStarter
	{
	public:
		TMap<class UClass*, class UObject*>                        Controllers;                                             // 0x01C0(0x0050) NativeAccessSpecifierPrivate

	public:
		class UObject* GetControllerReference(class UClass* Interface);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRGameInstance
	 * Size -> 0x00B0 (FullSize[0x02C0] - InheritedSize[0x0210])
	 */
	class UPRGameInstance : public UPRGIReferences
	{
	public:
		unsigned char                                              UnknownData_ZBIK[0x8];                                   // 0x0210(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EStartupType                                               StartupType;                                             // 0x0218(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BPBU[0x7];                                   // 0x0219(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StartupLevelName;                                        // 0x0220(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, class UTextureRenderTarget2D*>   MapsRTs;                                                 // 0x0230(0x0050) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E4ID[0x40];                                  // 0x0280(0x0040) MISSED OFFSET (PADDING)

	public:
		bool SetShutdown();
		void RestartGame(int32_t Slot, bool skipTutorial, bool Ironman, const struct FRadiusGameDifficulty& Difficulty);
		void ReceiveOnGameStart();
		void OnShutdown();
		void OnBeforeLoad();
		bool IsEAPlayer();
		bool IsBetaPlayer();
		class FString HmdToString(EPRHmdDeviceType HMD);
		bool HideVersionRevision();
		void HasSaveOnStartup(bool* hasSave);
		bool GetPurchaseDate(struct FDateTime* PurchaseDate, class FString* PurchaseDateString);
		void GetPlayerID(class FString* ID);
		void GetPlayerCountry(class FString* countryCode);
		void GetHMDDeviceType(EPRHmdDeviceType* HMD);
		void GetDeviceTypeString(class FString* HMD, class FString* Controller);
		void GetControllerType(EPRControllerType* Controller, bool* bIsDefault);
		class UAnalyticsManager* GetAnalyticsManager();
		void FixTutorialSaveLevel();
		void ExitGameBP(bool bMenu, bool bSave);
		void DoStart();
		class FString ControllerToString(EPRControllerType Controller);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRGameMode
	 * Size -> 0x00D0 (FullSize[0x03F0] - InheritedSize[0x0320])
	 */
	class APRGameMode : public AGameModeBase
	{
	public:
		unsigned char                                              UnknownData_MSLP[0x20];                                  // 0x0320(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EPRGameModeState                                           State;                                                   // 0x0340(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DP48[0xF];                                   // 0x0341(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          TransitionStartTransform;                                // 0x0350(0x0030) BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bRespawnInventory;                                       // 0x0380(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N2U7[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               RadiusPlayerPawn;                                        // 0x0388(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSleepAllowed;                                           // 0x0390(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bForcePause;                                             // 0x0391(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CCIR[0x4E];                                  // 0x0392(0x004E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       Autosave;                                                // 0x03E0(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQLR[0xF];                                   // 0x03E1(0x000F) MISSED OFFSET (PADDING)

	public:
		void TogglePause();
		void TickDebug();
		void SetGameplayTimeDilation(float Dilation);
		void RestorePlayerIfDead();
		void ResetAutosaveTimer_Native();
		void RecallLevelLoaded();
		void PreparePlayerForFinalChoice();
		void PrepareMissionExecutor();
		void OnTransitionStart();
		void OnTransitionHint();
		void OnTransitionEnd();
		void OnTideHappening(bool bReload);
		void OnStartedGame();
		void OnStartedEditor();
		void OnMissionStateChanged(class UMissionData* MissionData);
		void OnLevelUnloaded();
		void OnLevelStarted(const struct FGameplayTag& LevelTag);
		void OnLevelPrepare(const struct FGameplayTag& LevelTag);
		void OnLevelLoaded();
		void OnInitializeGame();
		void OnInitializeEditor();
		void OnGameStarted();
		void OnGameDataPreSave();
		void OnEnteredMenu();
		void OnEditorLevelLoaded();
		class FString MakeActorUID(class AActor* Actor);
		void KillActorsOnReload();
		void GetPRGameMode(class APRGameMode** GameMode);
		void GetGameplayTimeDilation(float* Dilation);
		class APREnvironment* GetCurrentEnvironment();
		class FString GetActorUID(class AActor* Actor);
		void FinishTransfer();
		void FindLevelStart(const struct FGameplayTag& LevelTag, const struct FGameplayTag& LocationTag, struct FTransform* Transform, struct FVector* Velocity, bool* bFromSave);
		void DoTransferToLevel();
		void DoStart();
		void DoPrepare();
		void DoEndTransition();
		void ContinueTransitionLoad();
		void CheckFocusPause();
		void BeginWaitingForPSO();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRGenerateInstancedStaticMeshVolume
	 * Size -> 0x0110 (FullSize[0x03D8] - InheritedSize[0x02C8])
	 */
	class APRGenerateInstancedStaticMeshVolume : public APhysicsVolume
	{
	public:
		unsigned char                                              StaticMeshToSearch[0x28];                                // 0x02C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FStaticMeshDataForInstanced                         StaticMeshDataForCreatingInstanced;                      // 0x02F0(0x0030) Edit, NativeAccessSpecifierPublic
		bool                                                       bClearVarsAfterEvent;                                    // 0x0320(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3I28[0x7];                                   // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      ExcludedStaticMeshList;                                  // 0x0328(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseMeshDefaultMaterial;                                 // 0x0338(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideDuplicated;                                         // 0x0339(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCreateHism;                                             // 0x033A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MinSmCountToCreateInstanced;                             // 0x033B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BVDB[0x4];                                   // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TemplateInstancedActor[0x28];                            // 0x0340(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              GatheredStaticMeshDataMap[0x50];                         // 0x0368(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              StaticMeshComponentsHidden[0x10];                        // 0x03B8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              InstancedStaticMeshActorsGenerated[0x10];                // 0x03C8(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		void ShowHiddenStaticMeshComponents();
		void ShowAllGeneratedInstanced();
		void RestoreHidden();
		void RehideHiddenStaticMeshComponents();
		void HideAllGeneratedInstanced();
		void GatherMulitipleSmActors();
		void DestroyAllGeneratedInstanced();
		void CreateMultipleInstanced();
		void CreateInstanced();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRGrassAnomaly
	 * Size -> 0x0070 (FullSize[0x0448] - InheritedSize[0x03D8])
	 */
	class APRGrassAnomaly : public APRAnomaly
	{
	public:
		unsigned char                                              UnknownData_FTTY[0x8];                                   // 0x03D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinScaleValue;                                           // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxScaleValue;                                           // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ShrinkRatio;                                             // 0x03E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GrowthRatio;                                             // 0x03EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DamageHeight;                                            // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             ComponentParameterBase;                                  // 0x03F4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             ComponentParameterRatio;                                 // 0x0400(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1YK9[0x4];                                   // 0x040C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStaticMeshComponent*>                        ComponentsArray;                                         // 0x0410(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V9KR[0x28];                                  // 0x0420(0x0028) MISSED OFFSET (PADDING)

	public:
		void ReduceComponent(int32_t Index, float Value);
		void Initialize();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRGrippableStaticMeshComponent
	 * Size -> 0x0000 (FullSize[0x05F0] - InheritedSize[0x05F0])
	 */
	class UPRGrippableStaticMeshComponent : public UGrippableStaticMeshComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRHolder
	 * Size -> 0x0020 (FullSize[0x02B8] - InheritedSize[0x0298])
	 */
	class APRHolder : public APRBasicActor
	{
	public:
		unsigned char                                              UnknownData_5UX3[0x8];                                   // 0x0298(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      OverlappedActors;                                        // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bDisabledInteraction;                                    // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TWWE[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRHolderMark
	 * Size -> 0x0018 (FullSize[0x02B0] - InheritedSize[0x0298])
	 */
	class APRHolderMark : public APRBasicActor
	{
	public:
		class AActor*                                              ActorInLeftHand;                                         // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              ActorInRightHand;                                        // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHolsterComponent*                                   holsterRef;                                              // 0x02A8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void Update();
		void LinkActor(class AActor* ActorInHand, bool bIsLeft);
		void InitHolsterRef(class UHolsterComponent* holsterRef);
		void Highlight(bool bIsLeft);
		void GetDistances(bool* bLeftInRange, float* leftDistance, bool* bRightInRange, float* rightDistance);
		class AActor* GetActorInRightHand();
		class AActor* GetActorInLeftHand();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRItemActor
	 * Size -> 0x00B0 (FullSize[0x0348] - InheritedSize[0x0298])
	 */
	class APRItemActor : public APRBasicActor
	{
	public:
		unsigned char                                              UnknownData_UEUF[0x18];                                  // 0x0298(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInventoryItem*                                      _inventoryItem;                                          // 0x02B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBoxComponent*                                       ItemRootPrimitive;                                       // 0x02B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPRItemDurabilityComponent*                          DurabilityComponent;                                     // 0x02C0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TypeID;                                                  // 0x02C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBPInterfaceProperties                              VRGripInterfaceSettings;                                 // 0x02D0(0x0058) Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0328(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRItemDurabilityComponent
	 * Size -> 0x01E0 (FullSize[0x02C0] - InheritedSize[0x00E0])
	 */
	class UPRItemDurabilityComponent : public UPRBasicActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnDestroyed;                                             // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDamaged;                                               // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KD78[0x1C0];                                 // 0x0100(0x01C0) MISSED OFFSET (PADDING)

	public:
		void OnTakePointDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, const class FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser);
		void OnTakeAnyDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		bool ChangeDurability(float Damage, class AActor* causer, const struct FGameplayTag& weponTag, class UDamageType* DamageType);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRItemSpawner
	 * Size -> 0x0028 (FullSize[0x02C0] - InheritedSize[0x0298])
	 */
	class APRItemSpawner : public APRBasicActor
	{
	public:
		class UPRItemConfig*                                       itemConfig;                                              // 0x0298(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Simulate;                                                // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LMTK[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              SpawnedItemActor;                                        // 0x02A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryItem*                                      SpawnedItem;                                             // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QYER[0x8];                                   // 0x02B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void FillAmmo();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRLootSpawner
	 * Size -> 0x0058 (FullSize[0x02F0] - InheritedSize[0x0298])
	 */
	class APRLootSpawner : public APRBasicActor
	{
	public:
		unsigned char                                              UnknownData_7LC0[0x10];                                  // 0x0298(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InstanceId;                                              // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InstanceIdPrefix;                                        // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TryProject;                                              // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ExcludeNonFit;                                           // 0x02C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JBWR[0x2];                                   // 0x02CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LootPoints;                                              // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        LootTable;                                               // 0x02D0(0x0008) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPRItemConfig*>                               CustomLootConfigs;                                       // 0x02D8(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, ExposeOnSpawn, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SLZ3[0x8];                                   // 0x02E8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnCheckDistanceTick();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRMapCenter
	 * Size -> 0x0008 (FullSize[0x02A0] - InheritedSize[0x0298])
	 */
	class APRMapCenter : public APRBasicActor
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0298(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRMapMarker
	 * Size -> 0x0020 (FullSize[0x02B8] - InheritedSize[0x0298])
	 */
	class APRMapMarker : public APRBasicActor
	{
	public:
		struct FGameplayTag                                        MarkerID;                                                // 0x0298(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMapMarker                                                 MarkerType;                                              // 0x02A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NCCT[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPRCondition*>                                Conditions;                                              // 0x02A8(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		bool IsConditionsPassed();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRMapPoint
	 * Size -> 0x0008 (FullSize[0x02A0] - InheritedSize[0x0298])
	 */
	class APRMapPoint : public APRBasicActor
	{
	public:
		struct FGameplayTag                                        pointTag;                                                // 0x0298(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRModificator
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UPRModificator : public UObject
	{
	public:
		class UPRCondition*                                        Condition;                                               // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRModificator_Float
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPRModificator_Float : public UPRModificator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRModificator_Int
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPRModificator_Int : public UPRModificator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRModifiableFloat
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UPRModifiableFloat : public UObject
	{
	public:
		float                                                      Value;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V2I6[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPRModificator_Float*>                        Modificators;                                            // 0x0030(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRModifiableInt
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UPRModifiableInt : public UObject
	{
	public:
		int32_t                                                    Value;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q7FI[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPRModificator_Int*>                          Modificators;                                            // 0x0030(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRModificator_Float_Multiply
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UPRModificator_Float_Multiply : public UPRModificator_Float
	{
	public:
		float                                                      MultiplyBy;                                              // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SK16[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRModificator_Float_Add
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UPRModificator_Float_Add : public UPRModificator_Float
	{
	public:
		float                                                      Add;                                                     // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1H3Y[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRModificator_Float_Percentage
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UPRModificator_Float_Percentage : public UPRModificator_Float
	{
	public:
		float                                                      Percentage;                                              // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F8JR[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRModificator_Float_PercentsAdd
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UPRModificator_Float_PercentsAdd : public UPRModificator_Float
	{
	public:
		float                                                      PercentsAdd;                                             // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YWPN[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRModificator_Int_Multiply
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UPRModificator_Int_Multiply : public UPRModificator_Int
	{
	public:
		int32_t                                                    MultiplyBy;                                              // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YKRI[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRModificator_Int_Add
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UPRModificator_Int_Add : public UPRModificator_Int
	{
	public:
		int32_t                                                    Add;                                                     // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8Q8A[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRModificator_Int_Percentage
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UPRModificator_Int_Percentage : public UPRModificator_Int
	{
	public:
		float                                                      Percentage;                                              // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HS39[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRModificator_Int_PercentsAdd
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UPRModificator_Int_PercentsAdd : public UPRModificator_Int
	{
	public:
		float                                                      PercentsAdd;                                             // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M8ZY[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRNpcPerceptionComponent
	 * Size -> 0x0378 (FullSize[0x05A0] - InheritedSize[0x0228])
	 */
	class UPRNpcPerceptionComponent : public UPRBasicSceneComponent
	{
	public:
		unsigned char                                              UnknownData_QZBN[0x8];                                   // 0x0228(0x0008) Fix Super Size
		class FScriptMulticastDelegate                             OnSpottedPlayer;                                         // 0x0230(0x0010) ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLostPlayer;                                            // 0x0240(0x0010) ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerSelectionChange;                                 // 0x0250(0x0010) ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPoiChange;                                             // 0x0260(0x0010) ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHeardNoise;                                            // 0x0270(0x0010) ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHeardNoiseNew;                                         // 0x0280(0x0010) ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAwarenessLevelChanged;                                 // 0x0290(0x0010) ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		bool                                                       bDebugInfoEnabled;                                       // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HNKX[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PoiActorClass;                                           // 0x02A8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              AIEdPerceptionComponentClass;                            // 0x02B0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SenseDurationSpottedThreshold;                           // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SenseDurationLostThreshold;                              // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bForgetDead;                                             // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPoiFollowSelection;                                     // 0x02C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YEW5[0x2];                                   // 0x02C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugHeight;                                             // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAIEdPerceptionComp*                                 AIPerceptionComponent;                                   // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FNPCPerceptionConfig                                PerceptionConfig;                                        // 0x02D0(0x0048) BlueprintVisible, Protected, NativeAccessSpecifierProtected
		struct FNPCAwarenessConfig                                 AwarenessConfig;                                         // 0x0318(0x0018) BlueprintVisible, Protected, NativeAccessSpecifierProtected
		struct FGameplayTag                                        NPCConfigID;                                             // 0x0330(0x0008) BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPRNPCInfo                                          NpcInfo;                                                 // 0x0338(0x01B8) BlueprintVisible, Protected, NativeAccessSpecifierProtected
		class FString                                              OwnerName;                                               // 0x04F0(0x0010) BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AAIController*                                       AIC;                                                     // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class APRPointOfInterest*                                  NpcPoiActor;                                             // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class APRPlayerCharacter*                                  PlayerRef;                                               // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              CurrentPlayerSelection;                                  // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SenseTickTime;                                           // 0x0520(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SightSenseRadius;                                        // 0x0524(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SightSenseNightModifier;                                 // 0x0528(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SightSenseAngleLeft;                                     // 0x052C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SightSenseAngleRight;                                    // 0x0530(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SightSenseAngleUp;                                       // 0x0534(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SightSenseAngleDown;                                     // 0x0538(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HearingDistance;                                         // 0x053C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AwarenessLowValueLevel;                                  // 0x0540(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AwarenessHighValueLevel;                                 // 0x0544(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AwarenessMaxValue;                                       // 0x0548(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AwarenessDecreaseMultiplier;                             // 0x054C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAwarenessLevel                                            AwarenessLevel;                                          // 0x0550(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3RCQ[0x3];                                   // 0x0551(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AwarenessValue;                                          // 0x0554(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3TXW[0x48];                                  // 0x0558(0x0048) MISSED OFFSET (PADDING)

	public:
		void VerifyPlayerSelection();
		void UnselectPlayer();
		void SpotPlayer();
		void SpotActor(class AActor* Actor);
		void SetupInitialState(float InitialAwareness, bool bPlayerInitiallySelected);
		void SetSelection(class AActor* Actor, bool* bSuccess, class AActor** Selection);
		void SetPoiFollowSelection(bool bShouldFollow);
		void SetPoi(const struct FVector& NewPOI, bool* bChanged, class AActor** POIActor);
		void SelectPlayer();
		void SelectionIsAlive(bool* bAlive);
		void IsSpotted(class AActor* Actor, bool* bSpotted);
		void IsPlayerSpotted(bool* bSpotted);
		void IsPlayerSelectionAlive(bool* bAlive);
		void IsEnemy(class AActor* Actor, bool* bIsEnemy);
		void IsActorSpottable(class AActor* Actor, bool* bSpottable);
		void HaveSelection(bool* bValid);
		void GetSensedPlayerLocation(bool* bValid, struct FVector* Location);
		void GetSelection(bool* bValid, class AActor** Selection, struct FTransform* BodyTransform);
		void GetPoi(bool* bValid, class AActor** POIActor);
		void GetPlayerSelection(bool* bValid, class AActor** Player, struct FTransform* BodyTransform);
		void GetClosestActor(bool* bSuccess, class AActor** Actor);
		void GetAwareness(float* Value, EAwarenessLevel* Level);
		void ChangeAwarenessByTag(float Strength, const class FName& Tag);
		void ChangeAwareness(float Value);
		void AIPerceptionUpdate(class AActor* Actor, const struct FAIStimulus& Stimulus);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRPlayerCharacter
	 * Size -> 0x0790 (FullSize[0x0E50] - InheritedSize[0x06C0])
	 */
	class APRPlayerCharacter : public AVRCharacter
	{
	public:
		unsigned char                                              UnknownData_UC4L[0x20];                                  // 0x06C0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              SKBody;                                                  // 0x06E0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSweepTeleport;                                          // 0x06E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IIZV[0x7];                                   // 0x06E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPRPlayerVisibilityComponent*                        BpVisibilityComp;                                        // 0x06F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStatePaused;                                            // 0x06F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsCrouchToggled;                                        // 0x06F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M0BU[0x6];                                   // 0x06FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPRPlayerGripSystemComponent*                        GripSystemComp;                                          // 0x0700(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class URadiusAutomationComponent*                          AutomationComp;                                          // 0x0708(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class URadiusPlayerMovementComponent*                      RadiusPlayerMovementComponent;                           // 0x0710(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<ESpeedCoefficient, float>                             MoveSpeedMult;                                           // 0x0718(0x0050) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		struct FVector                                             MovementVector;                                          // 0x0768(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ForwardBackwardAxis;                                     // 0x0774(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DPadVelocityScaler;                                      // 0x0778(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RightLeftAxis;                                           // 0x077C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsHandClimbing;                                          // 0x0780(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       LThumbPressed;                                           // 0x0781(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I4P4[0x2];                                   // 0x0782(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpeedAlpha;                                              // 0x0784(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TotalEquipmentWeight;                                    // 0x0788(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       Sprinting;                                               // 0x078C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AKZY[0x3];                                   // 0x078D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RightTriggerAngle;                                       // 0x0790(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LeftTriggerAngle;                                        // 0x0794(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TriggerUnlockThreshold;                                  // 0x0798(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TriggerPressThreshold;                                   // 0x079C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDeathTriggered;                                         // 0x07A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SCVH[0xF];                                   // 0x07A1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGripOverlap                                        OverlapGripRight;                                        // 0x07B0(0x0110) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FGripOverlap                                        OverlapGripLeft;                                         // 0x08C0(0x0110) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FGripOverlap                                        SelectedGripTargetRight;                                 // 0x09D0(0x0110) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FGripOverlap                                        SelectedGripTargetLeft;                                  // 0x0AE0(0x0110) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		EHandPose                                                  HandPoseRight;                                           // 0x0BF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EHandPose                                                  HandPoseLeft;                                            // 0x0BF1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       RUIPressed;                                              // 0x0BF2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       LUIPressed;                                              // 0x0BF3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       RGripPressed;                                            // 0x0BF4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       LGripPressed;                                            // 0x0BF5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3A0U[0x2];                                   // 0x0BF6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BackpackTriggerDistance;                                 // 0x0BF8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4TL8[0x4];                                   // 0x0BFC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              BP_BackpackSimpleClass;                                  // 0x0C00(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              BP_HolderMarkClass;                                      // 0x0C08(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundBase*                                          ClimbStartSound;                                         // 0x0C10(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundAttenuation*                                   ClimbStartSoundAttenuation;                              // 0x0C18(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundBase*                                          GrabSound;                                               // 0x0C20(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundAttenuation*                                   GrabSoundAttenuation;                                    // 0x0C28(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ABackpackSimple*                                     backpack;                                                // 0x0C30(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UObject*                                             SelectorsController;                                     // 0x0C38(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UObject*                                             ObjectInRightHand;                                       // 0x0C40(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UObject*                                             ObjectInLeftHand;                                        // 0x0C48(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       RightHandFakeSecondary;                                  // 0x0C50(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       LeftHandFakeSecondary;                                   // 0x0C51(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       RightHandStick;                                          // 0x0C52(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       LeftHandStick;                                           // 0x0C53(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1TBO[0x4];                                   // 0x0C54(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGripMotionControllerComponent*                      ClimbingHand;                                            // 0x0C58(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             ClimbGripLocation;                                       // 0x0C60(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsObjectRelative;                                       // 0x0C6C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7FZG[0x3];                                   // 0x0C6D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 ClimbGripObject;                                         // 0x0C70(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              GripMover;                                               // 0x0C78(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsFocused;                                               // 0x0C80(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J7S0[0x3];                                   // 0x0C81(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             DistanceGripPoint_R;                                     // 0x0C84(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             DistanceGripPoint_L;                                     // 0x0C90(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8DIN[0x4];                                   // 0x0C9C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     SecondaryGripingController;                              // 0x0CA0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              LeftLastHaptic;                                          // 0x0CA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              RightLastHaptic;                                         // 0x0CB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UObject*                                             TriggerGripRight;                                        // 0x0CB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UObject*                                             TriggerGripLeft;                                         // 0x0CC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<class UHolsterComponent*, class APRHolderMark*>       HolsterMarks;                                            // 0x0CC8(0x0050) Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		bool                                                       bZeroVel;                                                // 0x0D18(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bBodyVisibilityFlag;                                     // 0x0D19(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G0JR[0x2];                                   // 0x0D1A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayerMeshEyeHeight;                                     // 0x0D1C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NeckOffset;                                              // 0x0D20(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PlayerMeshHeight;                                        // 0x0D24(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinPlayerHeight;                                         // 0x0D28(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxPlayerHeight;                                         // 0x0D2C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPlayerStatsComponent*                               PlayerStatsComponent;                                    // 0x0D30(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GE7L[0x118];                                 // 0x0D38(0x0118) MISSED OFFSET (PADDING)

	public:
		void UpdateItemInfos();
		void UpdateIndicatorsVisibility_Native();
		void UnbindInteractable(class AActor* Actor);
		bool TryToGrabObject_Native(class UObject* ObjectToTryToGrab, const struct FTransform& WorldTransform, class UGripMotionControllerComponent* CallingHand, class UGripMotionControllerComponent* OtherHand, bool bIsSlotGrip, EControllerHand EnumHand, bool bIsDistanceGrip);
		void TryDropSimulating_Native(class UGripMotionControllerComponent* hand);
		void TakeInHand_Native(class UGripMotionControllerComponent* hand, class UObject* Object, bool bIsCallerHandLeft);
		void RecreateBackpack_Native();
		void ProcessDamageArmor(float Damage, EDamageCategory DamageCategory, class AActor* causer, float* ResultDamage);
		void PositionClimbingIndicatorNative(bool bIsLeftHand, bool bReset);
		void OverlapsUINative(class UPrimitiveComponent* Prim, bool bLeft, bool* bOverlaps);
		void OverlapGripNative(bool bLeft);
		void OnInventoryModeChanged(EInventoryMode Mode);
		void LerpRightGrip(class AActor* Actor, class UGripMotionControllerComponent* hand, bool bIsSlot, const struct FTransform& Offset, bool bDisableCollision, bool bKeepHandSnapped);
		void LerpLeftGrip(class AActor* Actor, class UGripMotionControllerComponent* hand, bool bIsSlot, const struct FTransform& Offset, bool bDisableCollision, bool bKeepHandSnapped);
		void IsCrouch(bool* bCrouch);
		bool IsAliveNative();
		void InitClimbing_Native(class UGripMotionControllerComponent* hand, class UObject* Object, bool isObjectRelative);
		void HandHaptics(EHapticsCurve Type, EControllerHand hand);
		bool GripOrDropObject_Native(class UGripMotionControllerComponent* CallingHand, class UGripMotionControllerComponent* OtherHand);
		void GripOrDrop_Native(class UGripMotionControllerComponent* CallingHand, class UGripMotionControllerComponent* OtherHand, bool bIsGrip, class USphereComponent* GrabSphere);
		class UWidgetInteractionComponent* GetWidgetInteractionRight();
		class UWidgetInteractionComponent* GetWidgetInteractionLeft();
		class UWidgetComponent* GetW_R_WristMenu();
		class UWidgetComponent* GetW_L_WristMenu();
		class UCapsuleComponent* GetUIPoseTriggerRight();
		class UCapsuleComponent* GetUIPoseTriggerLeft();
		class UBoxComponent* GetTriggerWeaponSecondary();
		class UBoxComponent* GetTriggerWeaponPrimary();
		class UBoxComponent* GetTriggerMelee();
		class UBoxComponent* GetTriggerMap();
		class UBoxComponent* GetTriggerDetector();
		class UBoxComponent* GetTriggerBackpack();
		class UStaticMeshComponent* GetSM_ClimbingIndicatorRight();
		class UStaticMeshComponent* GetSM_ClimbingIndicatorLeft();
		class USphereComponent* GetRHandCollider();
		class UParticleSystemComponent* GetPS_BeamPointerRight();
		class UParticleSystemComponent* GetPS_BeamPointerLeft();
		class USceneComponent* GetPivotVest();
		class USceneComponent* GetPivotNeck();
		class USceneComponent* GetPivotBackpack();
		void GetNearestOverlapObjectNative(class USphereComponent* OverlapComponent, class UGripMotionControllerComponent* hand, class UGripMotionControllerComponent* OtherHand, class UObject** OutNearestObject, bool* bOutImplementsInterface, struct FTransform* OutObjectTransform, bool* bOutCanBeClimbed, class UPrimitiveComponent** OutPrimitive, bool* bOutIsDistanceGrip, struct FTransform* OutGripPoint, bool* bOutIsSlotGrip, class UPrimitiveComponent** OutTriggerPrimitive, struct FTransform* OutTriggerTransform, bool* bOutSecondary, struct FTransform* OutHandTransformWhenOverlap, EPRHandPoseGeometryType* OutGeometryType, EPRHandPoseNumber* OutPoseNumber);
		class USphereComponent* GetLHandCollider();
		bool GetIsInteractableHolsterable(class AActor* Actor);
		class UHolsterComponent* GetHolsterWeaponSecondary();
		class UHolsterComponent* GetHolsterWeaponPrimary();
		class UHolsterComponent* GetHolsterProbes_R();
		class UHolsterComponent* GetHolsterProbes_L();
		class UHolsterComponent* GetHolsterMelee();
		class UHolsterComponent* GetHolsterMap();
		class UHolsterComponent* GetHolsterDetector();
		class UChildActorComponent* GetHolderSmallPouchActorComponent();
		void GetHandDataNative(bool bLeftHand, struct FTransform* ControllerTransform, struct FTransform* HandWorldTransform, struct FTransform* HandShiftTransform, class UObject** Object, bool* SecondaryGrip, EPRHandPoseGeometryType* HandPoseGeometryType, EPRHandPoseNumber* HandPoseNumber);
		void GetGripRelativeTransformByGeometryTypeAndPoseNumber(class UObject* GripObject, class UGripMotionControllerComponent* handController, EPRHandPoseType poseType, EPRHandPoseGeometryType GeometryType, EPRHandPoseNumber PoseNumber, bool* bSuccess, struct FTransform* GripRelativeTransform);
		class USphereComponent* GetGrabSphereRight();
		class USphereComponent* GetGrabSphereLeft();
		class UVRControllerComponent* GetBPC_VRController_Right();
		class UVRControllerComponent* GetBPC_VRController_Left();
		bool DropOrRetakeOrHolster_Native(class UGripMotionControllerComponent* CallingHand, class UObject* ObjectToGrip, bool bSecondaryGrip, bool bZeroVelocity);
		bool DropOrHolster_Native(class UGripMotionControllerComponent* CallingHand, class UObject* ObjectToGrip, bool bSecondaryGrip);
		bool DoesPlayerHolsterPreventInteraction(class AActor* Interactable);
		void ClearClimbing_Native(bool bBecauseOfStepUp);
		bool CheckTriggerOverlaps_Native(class USphereComponent* GrabSphere, class UGripMotionControllerComponent* CallingHand);
		void CheckHolster_Native(class UObject* Object, bool bRemove, bool bIsLeftHand, bool* bHolsterFound, bool* bHolsterOk, class UHolsterComponent** Holster);
		void CallNightGlow(class UObject* Target, bool bOn);
		void BindInteractable(class AActor* Actor);
		void BeamPointerToggleNative(bool bOnOff, const struct FVector& TargetPoint, bool bIsLeftHand, bool bUIGrip);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRPlayerController
	 * Size -> 0x0018 (FullSize[0x05E8] - InheritedSize[0x05D0])
	 */
	class APRPlayerController : public APlayerController
	{
	public:
		unsigned char                                              UnknownData_RTEN[0x18];                                  // 0x05D0(0x0018) MISSED OFFSET (PADDING)

	public:
		void ReportReady();
		bool IsPossessingPlayer();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRPlayerControlsInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPRPlayerControlsInterface : public UInterface
	{
	public:
		void GrabRight(bool bPressed);
		void GrabLeft(bool bPressed);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRPlayerGripSystemComponent
	 * Size -> 0x0020 (FullSize[0x0100] - InheritedSize[0x00E0])
	 */
	class UPRPlayerGripSystemComponent : public UPRBasicActorComponent
	{
	public:
		class APRPlayerCharacter*                                  OwningPlayer;                                            // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDistanceGripManager*                                DistanceGripManager;                                     // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W4OM[0x10];                                  // 0x00F0(0x0010) MISSED OFFSET (PADDING)

	public:
		void UnregisterForDistanceGrip(class UInventoryItem* Item);
		void ToggleDebugDrawDistanceGrip();
		void RegisterForDistanceGrip(class UInventoryItem* Item);
		void PerformOverlapGrip(bool isLeftHand, TArray<class AActor*> otherHandGrippedActors, class USphereComponent* gripSphere, const struct FTransform& HandWorldTransform, const struct FVector& handRootLocation, class UGripMotionControllerComponent* MotionController, class UPrimitiveComponent** compToGrip, class UPrimitiveComponent** triggerToGrip, struct FTransform* triggerTransform);
		void PerformDistanceGrip(bool isLeftHand, TArray<class AActor*> otherHandGrippedActors, class USphereComponent* gripSphere, class UPrimitiveComponent** compToGrip, struct FVector* compHitLoc, struct FVector* distanceGripPoint);
		void IsDebugDrawDistanceGrip(bool* bDebugDrawing);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRPlayerVisibilityComponent
	 * Size -> 0x00C0 (FullSize[0x01A0] - InheritedSize[0x00E0])
	 */
	class UPRPlayerVisibilityComponent : public UPRBasicActorComponent
	{
	public:
		class APRPlayerCharacter*                                  Player;                                                  // 0x00E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UPrimitiveComponent*>                         PlayerPrimitiveList;                                     // 0x00E8(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class APREnvironment*                                      Environment;                                             // 0x00F8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         DistanceFactorCurve;                                     // 0x0100(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         SunFactorCurve;                                          // 0x0108(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         HeadlampFactorCurve;                                     // 0x0110(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         VelocityFactorCurve;                                     // 0x0118(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PKT2[0x80];                                  // 0x0120(0x0080) MISSED OFFSET (PADDING)

	public:
		void InitOnLevelStart(const struct FGameplayTag& LevelTag);
		void InitOnGameStart();
		void CleanupOnTransitionStart();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRPointOfInterest
	 * Size -> 0x0008 (FullSize[0x02A0] - InheritedSize[0x0298])
	 */
	class APRPointOfInterest : public APRBasicActor
	{
	public:
		bool                                                       bPoiValid;                                               // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_47UC[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRSkyBox
	 * Size -> 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
	 */
	class APRSkyBox : public AActor
	{
	public:
		struct FVector                                             RadiusLocation;                                          // 0x0280(0x000C) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_65RK[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (PADDING)

	public:
		struct FVector GetRadiusLocation();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRSpiderNpcAnimInstance
	 * Size -> 0x0848 (FullSize[0x0B10] - InheritedSize[0x02C8])
	 */
	class UPRSpiderNpcAnimInstance : public UPRAnimInstance
	{
	public:
		struct FVector                                             Velocity;                                                // 0x02C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RootSpinInDegPerSec;                                     // 0x02D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      IdleLegBendInDeg;                                        // 0x02D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      IdleBendPercentAtLegRoot;                                // 0x02DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MovingLegBendInDeg;                                      // 0x02E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MovingBendPercentAtLegRoot;                              // 0x02E4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BendDeltaInDegPerSec;                                    // 0x02E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bJitterEnabled;                                          // 0x02EC(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V4H5[0x3];                                   // 0x02ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IdleJitterLerpCycleInSec;                                // 0x02F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      IdleJitterRadius;                                        // 0x02F4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MovingJitterLerpCycleInSec;                              // 0x02F8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MovingJitterRadius;                                      // 0x02FC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bVelocityDragEnabled;                                    // 0x0300(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z1J8[0x3];                                   // 0x0301(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VelocityDragFactor;                                      // 0x0304(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HighVelocityDragFactor;                                  // 0x0308(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HighVelocityThreshold;                                   // 0x030C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DragDeltaPerSec;                                         // 0x0310(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            SkeletonRootRotation;                                    // 0x0314(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FRotator                                            Leg1Rotation;                                            // 0x0320(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             Leg1Displacement;                                        // 0x032C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            Leg2Rotation;                                            // 0x0338(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             Leg2Displacement;                                        // 0x0344(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            Leg3Rotation;                                            // 0x0350(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             Leg3Displacement;                                        // 0x035C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            Leg4Rotation;                                            // 0x0368(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             Leg4Displacement;                                        // 0x0374(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            Leg5Rotation;                                            // 0x0380(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             Leg5Displacement;                                        // 0x038C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            Leg6Rotation;                                            // 0x0398(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             Leg6Displacement;                                        // 0x03A4(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            Leg7Rotation;                                            // 0x03B0(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             Leg7Displacement;                                        // 0x03BC(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            Leg8Rotation;                                            // 0x03C8(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             Leg8Displacement;                                        // 0x03D4(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NS9E[0x730];                                 // 0x03E0(0x0730) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRSublevelStreamingVolume
	 * Size -> 0x0038 (FullSize[0x02B8] - InheritedSize[0x0280])
	 */
	class APRSublevelStreamingVolume : public AActor
	{
	public:
		unsigned char                                              UnknownData_2LS1[0x8];                                   // 0x0280(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       Triggered;                                               // 0x0288(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ECCP[0x7];                                   // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBoxComponent*                                       BoxVolume;                                               // 0x0290(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             VolumeExtent;                                            // 0x0298(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VKQF[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        Sublevels;                                               // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void UpdateVolume();
		void Reset();
		void OnTransitionStart();
		void OnTransitionEnd();
		void OnLevelStarted(const struct FGameplayTag& LevelTag);
		void OnLevelPrepare(const struct FGameplayTag& LevelTag);
		void OnGameStartedPrivate();
		void OnGameStarted();
		void LoadSublevels(bool evented);
		bool IsLoaded();
		bool CheckSphere(const struct FVector& Center, float Radius, float Coefficient);
		bool CheckLocation(const struct FVector& Location, float Coefficient);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRTransitionHint
	 * Size -> 0x00B8 (FullSize[0x0350] - InheritedSize[0x0298])
	 */
	class APRTransitionHint : public APRBasicActor
	{
	public:
		class USceneComponent*                                     Root;                                                    // 0x0298(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     HintWidgetParentComponent;                               // 0x02A0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetComponent*                                    HintWidgetComponent;                                     // 0x02A8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FPRSplashDesc>                               PRSplashDescriptions;                                    // 0x02B0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		struct FPRSplashDesc                                       PRSplashDescForHint;                                     // 0x02C0(0x0080) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0ND2[0x10];                                  // 0x0340(0x0010) MISSED OFFSET (PADDING)

	public:
		void ShowTransitionHint();
		void HideTransitionHint();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PRVRGripSMComponent
	 * Size -> 0x0030 (FullSize[0x0540] - InheritedSize[0x0510])
	 */
	class UPRVRGripSMComponent : public UStaticMeshComponent
	{
	public:
		unsigned char                                              UnknownData_2CRL[0x8];                                   // 0x0510(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Stiffness;                                               // 0x0518(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damping;                                                 // 0x051C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BreakDistance;                                           // 0x0520(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GripPriority;                                            // 0x0524(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDenyGripping;                                           // 0x0528(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       _isHeld;                                                 // 0x0529(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XL8Y[0x6];                                   // 0x052A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGripMotionControllerComponent*                      HoldingController;                                       // 0x0530(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PCTD[0x8];                                   // 0x0538(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusAudioBoxComponent
	 * Size -> 0x0070 (FullSize[0x0520] - InheritedSize[0x04B0])
	 */
	class URadiusAudioBoxComponent : public UBoxComponent
	{
	public:
		struct FReverbSettings                                     Settings;                                                // 0x04B0(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate
		struct FInteriorSettings                                   AmbientZoneSettings;                                     // 0x04D0(0x0024) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_US73[0x4];                                   // 0x04F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAudioVolumeSubmixSendSettings>              SubmixSendSettings;                                      // 0x04F8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FAudioVolumeSubmixOverrideSettings>          SubmixOverrideSettings;                                  // 0x0508(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate
		class AAudioVolume*                                        CachedVolume;                                            // 0x0518(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void UpdateVolumeSettings();
		void SetPriority(float NewPriority);
		void SetEnabled(bool bNewEnabled);
		void OnOwnerDestroyed(class AActor* DestoryedObject);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusAutomationBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URadiusAutomationBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusAutomationComponent
	 * Size -> 0x0040 (FullSize[0x0120] - InheritedSize[0x00E0])
	 */
	class URadiusAutomationComponent : public UActorComponent
	{
	public:
		TArray<class UClass*>                                      AutomationList;                                          // 0x00E0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		class URadiusAutomationBase*                               ActiveAutomation;                                        // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G0GU[0x28];                                  // 0x00F8(0x0028) MISSED OFFSET (PADDING)

	public:
		void MainMenuReadyCallback(const struct FGameplayTag& LevelTag);
		void GameStartedCallback();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusItemActor
	 * Size -> 0x0060 (FullSize[0x0470] - InheritedSize[0x0410])
	 */
	class ARadiusItemActor : public AGrippableStaticMeshActor
	{
	public:
		unsigned char                                              UnknownData_PG2G[0x10];                                  // 0x0410(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPRCondition*>                                SpawnConditions;                                         // 0x0420(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UStaticMesh*                                         ProxyModel;                                              // 0x0430(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UStaticMeshComponent*>                        OriginalModelCompList;                                   // 0x0438(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class UPrimitiveComponent*>                         ProxyOmittableColliderList;                              // 0x0448(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		bool                                                       bCanAddToLevelInventory;                                 // 0x0458(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BZVU[0x7];                                   // 0x0459(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                ProxyComp;                                               // 0x0460(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F02W[0x8];                                   // 0x0468(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusBaseItem
	 * Size -> 0x0000 (FullSize[0x0470] - InheritedSize[0x0470])
	 */
	class ARadiusBaseItem : public ARadiusItemActor
	{
	public:
		void Setup(const struct FBaseItemSpawnInfo& BaseItemSpawnInfo);
		void ResetInventoryItemRef();
		bool IsInitInventoryItem();
		class UInventoryItem* InitInventoryItem();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusBulletComponent
	 * Size -> 0x01C0 (FullSize[0x02A0] - InheritedSize[0x00E0])
	 */
	class URadiusBulletComponent : public UPRBasicActorComponent
	{
	public:
		struct FAmmoInfo                                           _ammoInfo;                                               // 0x00E0(0x0058) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HG9K[0xBC];                                  // 0x0138(0x00BC) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AActor>                               _hitActor;                                               // 0x01F4(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MBCK[0x8];                                   // 0x01FC(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                BulletTag;                                               // 0x0204(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxImpactVelocity;                                       // 0x020C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DefaultDensity;                                          // 0x0210(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NoiseLoudness;                                           // 0x0214(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NoiseRange;                                              // 0x0218(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JLYK[0x4];                                   // 0x021C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   DefaultMaterial;                                         // 0x0220(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPhysicalMaterial*                                   MetalMaterial;                                           // 0x0228(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           RicochetDegreesRange;                                    // 0x0230(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PenetrationScale;                                        // 0x0238(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           PenetrationDensityInputRange;                            // 0x023C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           PenetrationDensityOutputRange;                           // 0x0244(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           PenetrationConeDegreesRange;                             // 0x024C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RicochetForceScale;                                      // 0x0254(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           DamageScaleRange;                                        // 0x0258(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnImpact;                                                // 0x0260(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRicochet;                                              // 0x0270(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnApplyDamage;                                           // 0x0280(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDestroy;                                               // 0x0290(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void ProcessHit(const struct FHitResult& HitResult, const struct FVector& Velocity);
		void Initialize(const struct FAmmoInfo& AmmoInfo, float MuzzleVelocity, float BaseDamage);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusBulletImpulseComponent
	 * Size -> 0x0118 (FullSize[0x01F8] - InheritedSize[0x00E0])
	 */
	class URadiusBulletImpulseComponent : public UPRBasicActorComponent
	{
	public:
		class UPrimitiveComponent*                                 _target;                                                 // 0x00E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9XDT[0xC0];                                  // 0x00E8(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _speedCurve;                                             // 0x01A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HGDS[0x30];                                  // 0x01B0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistanceDivider;                                         // 0x01E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MTLK[0x4];                                   // 0x01E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnWhistleEvent;                                          // 0x01E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void Suspend(bool IsSuspend);
		void Stop();
		void Start();
		void Ricochet(const struct FVector& Location, const struct FVector& Force, bool IsPenetration);
		void Initialize(class UPrimitiveComponent* TargetComponent, float Mass, float InitialVelocity, class UCurveFloat* SpeedCurve);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusProjectile
	 * Size -> 0x0020 (FullSize[0x02A0] - InheritedSize[0x0280])
	 */
	class ARadiusProjectile : public AActor
	{
	public:
		unsigned char                                              UnknownData_UDJD[0x18];                                  // 0x0280(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AutoDisposeTime;                                         // 0x0298(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DamageDisposeTime;                                       // 0x029C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void Dispose();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusBulletProjectile
	 * Size -> 0x0040 (FullSize[0x02E0] - InheritedSize[0x02A0])
	 */
	class ARadiusBulletProjectile : public ARadiusProjectile
	{
	public:
		unsigned char                                              UnknownData_RIPS[0x4];                                   // 0x02A0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseDamage;                                              // 0x02A4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USphereComponent*                                    SphereCollider;                                          // 0x02A8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class URadiusBulletTracerComponent*                        BulletTracerComponent;                                   // 0x02B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class URadiusBulletComponent*                              BulletComponent;                                         // 0x02B8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class URadiusBulletImpulseComponent*                       BulletImpulseComponent;                                  // 0x02C0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       DebugMode;                                               // 0x02C8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CIY2[0x3];                                   // 0x02C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ParticalScaleInputRange;                                 // 0x02CC(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           ParticalScaleOutputRange;                                // 0x02D4(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7D5C[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (PADDING)

	public:
		void SphereColliderHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void OnSpawnImpact(const struct FHitResult& Hit, float Scale);
		void BulletComponentRicochet(const struct FVector& Location, const struct FVector& Force, bool IsPenetration);
		void BulletComponentImpact(const struct FHitResult& Hit);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusBulletTracerComponent
	 * Size -> 0x00A0 (FullSize[0x05B0] - InheritedSize[0x0510])
	 */
	class URadiusBulletTracerComponent : public UStaticMeshComponent
	{
	public:
		unsigned char                                              UnknownData_4X5O[0x54];                                  // 0x0510(0x0054) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        TracerTag;                                               // 0x0564(0x0008) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        DebugPrimaryColor;                                       // 0x056C(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        DebugSecondaryColor;                                     // 0x057C(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DebugLineDurarion;                                       // 0x058C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DebugLineThickness;                                      // 0x0590(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ScaleFactor;                                             // 0x0594(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           ScaleFactorInputRange;                                   // 0x0598(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           ScaleFactorOutputRange;                                  // 0x05A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      VelocityTolerance;                                       // 0x05A8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2F8O[0x4];                                   // 0x05AC(0x0004) MISSED OFFSET (PADDING)

	public:
		void Suspend(bool IsSuspend);
		void Stop();
		void Start();
		void Initialize(bool ForceTracer, float MinSpeed, float MaxSpeed, const struct FGameplayTag& AmmoTypeID, bool DebugMode);
		void DelayedStart();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusEmitter
	 * Size -> 0x0028 (FullSize[0x02A8] - InheritedSize[0x0280])
	 */
	class ARadiusEmitter : public AActor
	{
	public:
		unsigned char                                              UnknownData_Z3TC[0x8];                                   // 0x0280(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPoolDisposeComponent*                               PoolDisposeComponent;                                    // 0x0288(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystemComponent*                            ParticleSystemComponent;                                 // 0x0290(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                ReflectionParamaterName;                                 // 0x0298(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DisposeTime;                                             // 0x02A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EGPK[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (PADDING)

	public:
		class UParticleSystemComponent* GetParticalSystemRef();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusExplosionActor
	 * Size -> 0x00A8 (FullSize[0x0328] - InheritedSize[0x0280])
	 */
	class ARadiusExplosionActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_QQH4[0x60];                                  // 0x0280(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxIteration;                                            // 0x02E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Strength;                                                // 0x02E4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ERadialImpulseFalloff                                      Fallout;                                                 // 0x02E8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsVelocityChange;                                        // 0x02E9(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GNWW[0x2];                                   // 0x02EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxWallDistance;                                         // 0x02EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                TraceProfileName;                                        // 0x02F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DamageMinRange;                                          // 0x02F8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxDamageScale;                                          // 0x02FC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HitMinDistance;                                          // 0x0300(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WC9I[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageClass;                                             // 0x0308(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ExplosionRadius;                                         // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           WallScaleIn;                                             // 0x0314(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           WallScaleOut;                                            // 0x031C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WallRangeMin;                                            // 0x0324(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetTriggerMaxRange(float MaxRange);
		struct FExplosionInfo GetExplosionInfo();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusFirearmShellActor
	 * Size -> 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
	 */
	class ARadiusFirearmShellActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_N3GT[0x8];                                   // 0x0280(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPoolDisposeComponent*                               PoolDisposeComponent;                                    // 0x0288(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void Setup(const struct FRadiusFirearmShellInfo& Info);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusGameData
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URadiusGameData : public USaveGame
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusGameInstanceInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URadiusGameInstanceInterface : public UInterface
	{
	public:
		void StartNewGame(int32_t ProfileNumber, bool bSkipTutorial, bool bIronman, const struct FRadiusGameDifficulty& GameDifficulty, bool bFromMainMenu);
		void LoadGame(int32_t SlotNr, int32_t SaveNr);
		void ExitGame(bool bMenu, bool bSave);
		void ContinueLastGameInSlot(int32_t SlotNr);
		void ContinueLastGame();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusGameStatistics
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class URadiusGameStatistics : public UObject
	{
	public:
		unsigned char                                              UnknownData_I5WW[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		class FString GetStatisticsValueString(ERadiusCommonStatisticsType Type);
		class FText GetStatisticsTitle(ERadiusCommonStatisticsType Type);
		void GetRadiusGameStatistics(class URadiusGameStatistics** RadiusGameStatistics);
		void GetPlayerKills(TMap<struct FGameplayTag, int32_t>* Enemies, TMap<struct FGameplayTag, int32_t>* Weapon);
		void GetPlayerDeaths(TMap<struct FGameplayTag, int32_t>* Deaths);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusImpactActor
	 * Size -> 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
	 */
	class ARadiusImpactActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_JQ92[0x8];                                   // 0x0280(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPoolDisposeComponent*                               PoolDisposeComponent;                                    // 0x0288(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void Setup(const struct FRadiusImpactInfo& Info);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusNiagaraEmitter
	 * Size -> 0x0020 (FullSize[0x02A0] - InheritedSize[0x0280])
	 */
	class ARadiusNiagaraEmitter : public AActor
	{
	public:
		unsigned char                                              UnknownData_8K4A[0x8];                                   // 0x0280(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPoolDisposeComponent*                               PoolDisposeComponent;                                    // 0x0288(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNiagaraComponent*                                   ParticleSystemComponent;                                 // 0x0290(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DisposeTime;                                             // 0x0298(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YBM4[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusPlayerMovementComponent
	 * Size -> 0x0060 (FullSize[0x0140] - InheritedSize[0x00E0])
	 */
	class URadiusPlayerMovementComponent : public UPRBasicActorComponent
	{
	public:
		class UClass*                                              ArcControllerClass;                                      // 0x00E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ARadiusTeleportArcController*                        ArcController;                                           // 0x00E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ACharacter*                                          CharacterOwner;                                          // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCapsuleComponent*                                   OwnerCapsule;                                            // 0x00F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCharacterMovementComponent*                         MovementComponent;                                       // 0x0100(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPlayerStatsComponent*                               StatsComponent;                                          // 0x0108(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5PRI[0x30];                                  // 0x0110(0x0030) MISSED OFFSET (PADDING)

	public:
		void StopMovement();
		void ProcessMovementTeleport(float DeltaSeconds);
		void ProcessMovementNormal(float DeltaSeconds);
		void ProcessMovement(float DeltaSeconds);
		TArray<struct FTeleportPointInfo> PreparePointsToTeleport(const struct FVector& From, const struct FVector& To);
		bool IsTeleporting();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusPooledActor
	 * Size -> 0x0018 (FullSize[0x0298] - InheritedSize[0x0280])
	 */
	class ARadiusPooledActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_YISF[0x8];                                   // 0x0280(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPoolDisposeComponent*                               PoolDisposeComponent;                                    // 0x0288(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bExcludedFromPool;                                       // 0x0290(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7MTH[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusProfilingCamera
	 * Size -> 0x0000 (FullSize[0x0810] - InheritedSize[0x0810])
	 */
	class ARadiusProfilingCamera : public ACameraActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusProjectileInfo
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URadiusProjectileInfo : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusFirearmProjectileInfo
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class URadiusFirearmProjectileInfo : public URadiusProjectileInfo
	{
	public:
		unsigned char                                              UnknownData_SB7E[0x60];                                  // 0x0028(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusBulletProjectileInfo
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	class URadiusBulletProjectileInfo : public URadiusFirearmProjectileInfo
	{
	public:
		unsigned char                                              UnknownData_Y96E[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (PADDING)

	public:
		class URadiusBulletProjectileInfo* CreateInfo(const struct FAmmoInfo& AmmoInfo, float Velocity, float BaseDamage, bool ForceTracer);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusShrapnelProjectileInfo
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	class URadiusShrapnelProjectileInfo : public URadiusFirearmProjectileInfo
	{
	public:
		unsigned char                                              UnknownData_KUNG[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (PADDING)

	public:
		class URadiusShrapnelProjectileInfo* CreateInfo(const struct FAmmoInfo& AmmoInfo, float BaseDamage, float AccuracyInternal, float AccuracyMultiplier, float Offset, float TraceDistance);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusShrapnelComponent
	 * Size -> 0x00E0 (FullSize[0x01C0] - InheritedSize[0x00E0])
	 */
	class URadiusShrapnelComponent : public UPRBasicActorComponent
	{
	public:
		unsigned char                                              UnknownData_HGVF[0x70];                                  // 0x00E0(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxCount;                                                // 0x0150(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        BuckShotTag;                                             // 0x0154(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TraceProfileName;                                        // 0x015C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JONP[0x4];                                   // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageClass;                                             // 0x0168(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticalScale;                                           // 0x0170(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PenetrationParticalScale;                                // 0x0174(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicalMaterial*                                   MetalMaterial;                                           // 0x0178(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAccuracySpread;                                       // 0x0180(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinAccuracySpread;                                       // 0x0184(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceStep;                                            // 0x0188(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinTraceDistance;                                        // 0x018C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDamageScale;                                          // 0x0190(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDamage;                                               // 0x0194(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DestroyAfterExecute;                                     // 0x0198(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AGX6[0x7];                                   // 0x0199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnImpact;                                                // 0x01A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnApplyDamage;                                           // 0x01B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void Initialize(const struct FAmmoInfo& AmmoInfo, float Damage, float Accuracy, const struct FVector& Offset, float TraceDistance);
		void Execute();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusShrapnelProjectile
	 * Size -> 0x0008 (FullSize[0x02A8] - InheritedSize[0x02A0])
	 */
	class ARadiusShrapnelProjectile : public ARadiusProjectile
	{
	public:
		class URadiusShrapnelComponent*                            ShrapnelComponent;                                       // 0x02A0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RadiusTeleportArcController
	 * Size -> 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
	 */
	class ARadiusTeleportArcController : public APRBasicActor
	{
	public:
		void TickArc(float DeltaSeconds);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RelevanceActionDescription
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class URelevanceActionDescription : public UDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.AlterTickActionDescription
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAlterTickActionDescription : public URelevanceActionDescription
	{
	public:
		bool                                                       StopTick;                                                // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2QKV[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TickIntervalMultiplier;                                  // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.DeactivateRootActionDescription
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDeactivateRootActionDescription : public URelevanceActionDescription
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.StopParticleSystemsActionDescription
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UStopParticleSystemsActionDescription : public URelevanceActionDescription
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.StopRenderingActionDescription
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UStopRenderingActionDescription : public URelevanceActionDescription
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.StopColliderActionDescription
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UStopColliderActionDescription : public URelevanceActionDescription
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.DiscoverAnomalyActionDescription
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDiscoverAnomalyActionDescription : public URelevanceActionDescription
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.EnemyDistanceActionDescription
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UEnemyDistanceActionDescription : public URelevanceActionDescription
	{
	public:
		float                                                      ActorTickIntervalMultiplier;                             // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimationTickIntervalMultiplier;                         // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerceptionTickIntervalMultiplier;                        // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MovementTickIntervalMultiplier;                          // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.ReducedTickIntervalActionDescription
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UReducedTickIntervalActionDescription : public URelevanceActionDescription
	{
	public:
		float                                                      ActorTickIntervalMultiplier;                             // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimationTickIntervalMultiplier;                         // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PerceptionTickIntervalMultiplier;                        // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MovementTickIntervalMultiplier;                          // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.DiscoverEnemyActionDescription
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDiscoverEnemyActionDescription : public URelevanceActionDescription
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PlayFootstepsDescription
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPlayFootstepsDescription : public URelevanceActionDescription
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PlayFootstepHelper
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UPlayFootstepHelper : public UObject
	{
	public:
		unsigned char                                              UnknownData_3KR8[0x38];                                  // 0x0028(0x0038) MISSED OFFSET (PADDING)

	public:
		void OnMoveStart(const struct FAIRequestID& RequestID, EPathFollowingStatus MovementStatus);
		void OnMoveEnd(const struct FAIRequestID& RequestID, EPathFollowingResult MovementResult);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.ViewportNotifierDescription
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UViewportNotifierDescription : public URelevanceActionDescription
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RelevanceCriteriaDescription
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class URelevanceCriteriaDescription : public UDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.ValidActorCriteriaDescription
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UValidActorCriteriaDescription : public URelevanceCriteriaDescription
	{
	public:
		bool                                                       bAlwaysOffForPC;                                         // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GZ4P[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PlayerProximityCriteriaDescription
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UPlayerProximityCriteriaDescription : public URelevanceCriteriaDescription
	{
	public:
		float                                                      PlayerDistancePC;                                        // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayerDistanceQuest;                                     // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.PlayerViewportCriteriaDescription
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UPlayerViewportCriteriaDescription : public URelevanceCriteriaDescription
	{
	public:
		bool                                                       CheckBoundingBox;                                        // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KP8W[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.EnemyDiscoverCriteriaDescription
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnemyDiscoverCriteriaDescription : public URelevanceCriteriaDescription
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.AnomalySpawnCriteriaDescription
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAnomalySpawnCriteriaDescription : public URelevanceCriteriaDescription
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.AnomalyDiscoverCriteriaDescription
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAnomalyDiscoverCriteriaDescription : public URelevanceCriteriaDescription
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.RelevanceManager
	 * Size -> 0x0198 (FullSize[0x01C0] - InheritedSize[0x0028])
	 */
	class URelevanceManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_QXHJ[0x198];                                 // 0x0028(0x0198) MISSED OFFSET (PADDING)

	public:
		void OnLevelUnloaded();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.ResizableDecalComponent
	 * Size -> 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
	 */
	class UResizableDecalComponent : public UDecalComponent
	{
	public:
		void SetDecalSize(const struct FVector& newSize);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.SettingsManager
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class USettingsManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_C2UC[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSeatedModeChanged;                                     // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnVignetteChanged;                                       // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      MaxArmLength;                                            // 0x0060(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinArmLength;                                            // 0x0064(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UINIManager*                                         INIManager;                                              // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VH3B[0x20];                                  // 0x0070(0x0020) MISSED OFFSET (PADDING)

	public:
		int32_t TurnType();
		void SetVolumeSounds(float Value);
		void SetVolumeMusic(float Value);
		void SetVolumeMaster(float Value);
		void SetVolumeAmbient(float Value);
		void SetVirtualStock(bool bValue);
		void SetVignetteShown(bool bValue);
		void SetVignetteRunShown(bool bValue);
		void SetVestShift(float Value);
		void SetUpscaleSharpen(float Value);
		void SetUpscaleMethod(int32_t Value);
		void SetUpdateNoticeShown();
		void SetTurnType(int32_t Value);
		void SetTurnSpeed(float Value);
		class FString SettingsValueToString(ESettingsValue Value);
		void SetTeleportMovement(bool bValue);
		void SetShowSubtitles(bool bValue);
		void SetShowBody(bool bValue);
		void SetSeatedMode(bool bValue);
		void SetPlayerHeight(float Value);
		void SetNeckHeight(float Value);
		void SetMovementDirectionType(int32_t Value);
		void SetMirrorHolsters(bool bValue);
		void SetLeftHanded(bool bValue);
		void SetImperialUnits(bool bValue);
		void SetHoldGrip(bool bValue);
		void SetHmdDeviceType(const class FString& Value);
		void SetGraphicsSetting(EGraphicsSettingsType Type, ESettingsValue Value);
		void SetGraphicsQualityIndex(int32_t Value);
		void SetGrabWithTrigger(bool bValue);
		void SetGPUQualityIndex(int32_t Value);
		void SetFSRMode(int32_t Value);
		void SetFirstLaunch(bool bValue);
		void SetDLSSMode(int32_t Value);
		void SetControllerType(const class FString& Value);
		void SetControllerShift(EPRControllerType Controller, const struct FVector& Value);
		void SetControllerRotation(EPRControllerType Controller, const struct FRotator& Value);
		void SetBrightnessAdjustment(float Value);
		void SetArmLength(float Value);
		void SetAimSmoothingIntensity(float Value);
		void RestoreDefaultControllerRotation(EPRControllerType Controller);
		int32_t MovementDirectionType();
		bool IsVirtualStock();
		bool IsVignetteShown();
		bool IsVignetteRunShown();
		bool IsTeleportMovement();
		bool IsShowUpdateNotice();
		bool IsShowSubtitles();
		bool IsShowBody();
		bool IsSeatedMode();
		bool IsMirrorHolsters();
		bool IsLeftHanded();
		bool IsImperialUnits();
		bool IsHoldGrip();
		bool IsGrabWithTrigger();
		bool IsFirstLaunch();
		bool IsAchievementsDisabled();
		int32_t IncrementGraphicsQuality();
		class FString GraphicsSettingsTypeToString(EGraphicsSettingsType Value);
		float GetVolumeSounds();
		float GetVolumeMusic();
		float GetVolumeMaster();
		float GetVolumeAmbient();
		float GetVestShift();
		float GetUpscaleSharpen();
		int32_t GetUpscaleMethod();
		float GetTurnSpeed();
		struct FVector GetTeleportArcRotationForSecondaryGrip();
		class USettingsManager* GetSettingsManager();
		TArray<int32_t> GetScreenPercentages();
		int32_t GetScreenPercentage();
		float GetPlayerHeight();
		float GetPixelDensity();
		float GetNeckHeight();
		class FString GetHMDDeviceType();
		ESettingsValue GetGraphicsSetting(EGraphicsSettingsType Type);
		int32_t GetGraphicsQualityIndex();
		int32_t GetGPUQualityIndex();
		int32_t GetFSRMode();
		int32_t GetDLSSMode();
		class FString GetControllerType();
		void GetControllerTransform(EPRControllerType Controller, struct FTransform* Left, struct FTransform* Right);
		struct FVector GetControllerShift(EPRControllerType Controller);
		struct FRotator GetControllerRotation(EPRControllerType Controller);
		float GetBrightnessAdjustment();
		float GetArmLength();
		float GetAimSmoothingIntensity();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.ShopBin
	 * Size -> 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
	 */
	class AShopBin : public APRBasicActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.ShopComputer
	 * Size -> 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
	 */
	class AShopComputer : public APRBasicActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.ShopShowcase
	 * Size -> 0x00C0 (FullSize[0x0358] - InheritedSize[0x0298])
	 */
	class AShopShowcase : public APRBasicActor
	{
	public:
		int32_t                                                    CurrentConfigIndex;                                      // 0x0298(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentPhysicalIndex;                                    // 0x029C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSwitching;                                              // 0x02A0(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FNDB[0x3];                                   // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentAngle;                                            // 0x02A4(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetAngle;                                             // 0x02A8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TDL2[0x4];                                   // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AShopSlot*>                                   ShopSlots01;                                             // 0x02B0(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AShopSlot*>                                   ShopSlots02;                                             // 0x02C0(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AShopSlot*>                                   ShopSlots03;                                             // 0x02D0(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AShopSlot*>                                   ShopSlots04;                                             // 0x02E0(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class USceneComponent*                                     ItemInShowcaseRoot;                                      // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BSH6[0x10];                                  // 0x02F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FGameplayTag, class AActor*>                   ItemsInShowcase;                                         // 0x0308(0x0050) NativeAccessSpecifierPrivate

	public:
		void SwitchToIndex(int32_t Index);
		void SetUnlockedTypes(TArray<struct FGameplayTag> GameplayTag);
		int32_t GetSelectedIndex();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.ShopSlot
	 * Size -> 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
	 */
	class AShopSlot : public APRBasicActor
	{
	public:
		void UpdateSlot(class USceneComponent* componentToReturnActorTo, const struct FGameplayTag& GameplayTag, class AActor* actorToAttach);
		void SetLock(bool bLock, bool bAnnounce);
		void Clear();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.ShutdownAutomation
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UShutdownAutomation : public URadiusAutomationBase
	{
	public:
		float                                                      ShutdownDelayInSec;                                      // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8A17[0x1C];                                  // 0x002C(0x001C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.SpawnerGameData
	 * Size -> 0x0460 (FullSize[0x0488] - InheritedSize[0x0028])
	 */
	class USpawnerGameData : public UObject
	{
	public:
		unsigned char                                              UnknownData_GNDC[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, struct FNPCDataMap>                    npcSpawners;                                             // 0x0030(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<class FString, struct FAnomalyFieldData>              anomalySpawners;                                         // 0x0080(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<class FString, struct FAnomalyData>                   anomalies;                                               // 0x00D0(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<class FString, int32_t>                               SavedCorpseTypes;                                        // 0x0120(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<class FString, struct FFurnitureData>                 FurnitureLootData;                                       // 0x0170(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<class FString, struct FNameArray>                     FurnitureBrokenData;                                     // 0x01C0(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<class FString, struct FNameArray>                     FurnitureEmptySlots;                                     // 0x0210(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<class FString, struct FSpawnSlotData>                 LootSpawnerData;                                         // 0x0260(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<class FString, struct FNameArray>                     LootTableExludes;                                        // 0x02B0(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<class FString, int32_t>                               LootTablePoints;                                         // 0x0300(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int64_t                                                    spawnSeed;                                               // 0x0350(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      PickedUpItems;                                           // 0x0358(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                SpecialClusters;                                         // 0x0368(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                SpecialGenerators;                                       // 0x0378(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                ExcludedGenerators;                                      // 0x0388(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FString, float>                                 GeneratorsHP;                                            // 0x0398(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<class FString, struct FTransform>                     GeneratorsTransforms;                                    // 0x03E8(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<class FString, float>                                 GeneratorsCooldown;                                      // 0x0438(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		class FString ToString();
		void SpawnSavedItems(const class FString& SpawnerId);
		void SpawnSavedArtifacts(const class FString& SpawnerId);
		void SpawnSavedAnomalies(const class FString& SpawnerId);
		void SpawnLootSpawnerData(const class FString& InstanceId, bool* HasData, bool* NeedPlacement, TArray<class UInventoryItem*>* spawned);
		void SaveSpawnedLootData(const class FString& InstanceId, TArray<class UInventoryItem*> Loot);
		void SaveSpawnedItemData(const class FString& SpawnerId, class UInventoryItem* Item, const struct FTransform& Transform);
		void SaveSpawnedArtifactData(const class FString& SpawnerId, const class FString& InstanceId, const struct FGameplayTag& TypeID, const struct FTransform& Transform);
		void SaveSpawnedAnomalyData(const class FString& SpawnerId, class APRAnomaly* anomaly);
		void SaveNpcData(const class FString& SpawnerId, const struct FNPCGameData& Data);
		void SaveGeneratorData(const class FString& generatorID, float HP, const struct FTransform& Transform, float Cooldown);
		void SaveGeneratedLootData(const class FString& InstanceId, TArray<class UInventoryItem*> Loot);
		void SaveFurnitureSocketData(const class FString& InstanceId, TMap<class FName, struct FTransform> Data, TArray<class FName> Broken);
		void SaveFurnitureEmptySocket(const class FString& InstanceId, const class FName& EmptySlotId);
		void SaveEmptyLootData(const class FString& InstanceId);
		void SaveBodyType(const class FString& SpawnerId, int32_t bodyType);
		void SaveAnomalyData(const class FString& SpawnerId, const struct FAnomalyData& Data);
		void RemoveSpawnedItemData(class UInventoryItem* Item);
		void RemoveNpcData(const class FString& SpawnerId, const class FString& InstanceId);
		void RemoveFieldDataArtifact(const class FString& InstanceId);
		struct FSpawnSlotData MakeFurnitureSlotData(TArray<class UInventoryItem*> Items);
		bool IsGeneratorSaved(const class FString& generatorID);
		bool HasSpawner(const class FString& SpawnerId);
		void HasLootSpawnerData(const class FString& InstanceId, bool* bHasData);
		struct FRandomStream GetRandomStream(const class FString& SpawnerId);
		void GetNpcData(const class FString& SpawnerId, TMap<class FString, struct FNPCGameData>* DataMap);
		void GetLootSpawnerData(const class FString& InstanceId, TArray<class UInventoryItem*>* Loot, bool* bIsEmpty, bool* bHasData);
		void GetFurnitureData(const class FString& InstanceId, struct FFurnitureData* Data, struct FNameArray* BrokenSlots, struct FNameArray* EmptySlots, bool* bHasData);
		int32_t GetBodyType(const class FString& SpawnerId);
		void GetAnomalyFieldData(const class FString& SpawnerId, struct FAnomalyFieldData* Data);
		struct FAnomalyData GetAnomalyData(const class FString& SpawnerId);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.SpawnerGeneratorAlternativePlace
	 * Size -> 0x0000 (FullSize[0x0280] - InheritedSize[0x0280])
	 */
	class ASpawnerGeneratorAlternativePlace : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.SpawnerGenerator
	 * Size -> 0x0048 (FullSize[0x02E0] - InheritedSize[0x0298])
	 */
	class ASpawnerGenerator : public APRBasicActor
	{
	public:
		unsigned char                                              UnknownData_FYUG[0x8];                                   // 0x0298(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        generatorID;                                             // 0x02A0(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AMonsterSpawner*>                             Spawners;                                                // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      CooldownSeconds;                                         // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitPoints;                                               // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceSpecial;                                            // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IJTF[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ASpawnerGeneratorAlternativePlace*>           AlternativePlaces;                                       // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_88VM[0x8];                                   // 0x02D8(0x0008) MISSED OFFSET (PADDING)

	public:
		void StopGenerator();
		bool Special();
		void SaveGeneratorData();
		void OnSpawnerReadyToCall(class AMonsterSpawner* Spawner);
		void CallSpawner(class AMonsterSpawner* Spawner, bool* bSuccess, class AActor** NPCActor);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.SpawnSlotComponent
	 * Size -> 0x0010 (FullSize[0x04C0] - InheritedSize[0x04B0])
	 */
	class USpawnSlotComponent : public UBoxComponent
	{
	public:
		class FString                                              SlotId;                                                  // 0x04B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void MarkSocketMatch(TArray<class FName> SocketNames, const struct FColor& Color);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.StorageDoorComponent
	 * Size -> 0x0110 (FullSize[0x0650] - InheritedSize[0x0540])
	 */
	class UStorageDoorComponent : public UPRVRGripSMComponent
	{
	public:
		class FScriptMulticastDelegate                             OnDoorStateChanged;                                      // 0x0540(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDoorFinishedLerping;                                   // 0x0550(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      CurrentAngle;                                            // 0x0560(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngleLimit;                                              // 0x0564(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngleSnap;                                               // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HFCD[0x4];                                   // 0x056C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ControlVectorNormal;                                     // 0x0570(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E5KE[0xAC];                                  // 0x057C(0x00AC) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0628(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RHBO[0x8];                                   // 0x0648(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetLock(bool lock);
		void Open();
		void OnTick();
		void OnLevelStarted(const struct FGameplayTag& LevelTag);
		void OnGameStarted();
		bool IsOpened();
		bool IsClosed();
		void GetCurrentState(EStorageDoorState* CurrentState);
		void Close();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.StoryConfig
	 * Size -> 0x0370 (FullSize[0x03A0] - InheritedSize[0x0030])
	 */
	class UStoryConfig : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_6I09[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDialoguesGroup>                             CassetteGroups;                                          // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FDialogue                                           EmptyCassette;                                           // 0x0050(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FPaperNote>                                  PaperNotes;                                              // 0x00B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FConditionalPaperNote>                       ConditionalPaperNotes;                                   // 0x00C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FHostileDescription>      Monsters;                                                // 0x00D0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FHostileDescription>      anomalies;                                               // 0x0120(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FHostileDescription>      Other;                                                   // 0x0170(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FRecord>                  MissionTips;                                             // 0x01C0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FDialogue>                KatyaMonologues;                                         // 0x0210(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FDialogue>                FinalDialogs;                                            // 0x0260(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UPRItemConfig*                                       FinalWeaponConfig;                                       // 0x02B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ChoiceKillSelfTag;                                       // 0x02B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ChoiceKillKatyaTag;                                      // 0x02C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ChoiceKillKatyaMonologueTag;                             // 0x02C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ChoiceKillPresenceTag;                                   // 0x02D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ChoiceKillPresenceMonologueTag;                          // 0x02D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                ItemTypeIDsToDestroyAfterFinale;                         // 0x02E0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FDialogue>                Epilogues;                                               // 0x02F0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class FText>                                        HintWeaponOnSafety;                                      // 0x0340(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FText>                                        HintWeaponNotLoaded;                                     // 0x0350(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FText>                                        HintWeaponCockTheBolt;                                   // 0x0360(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FText>                                        HintMagEmpty;                                            // 0x0370(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class USoundBase*>                                  HintNoMissionTurretSound;                                // 0x0380(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FText>                                        HintNoMissionTurretSubtitle;                             // 0x0390(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		TArray<struct FGameplayTag> ParseRecordsTags(TArray<struct FGameplayTag> ItemAdditionalTags);
		bool IsJournalNote(const struct FGameplayTag& NoteID);
		bool HasNote(const struct FGameplayTag& NoteID);
		bool HasMissionTip(const struct FGameplayTag& TipID);
		struct FRecordSubtitle GetSubtitleForTime(const struct FRecord& Record, float TimeSeconds);
		class UStoryConfig* GetStoryConfig();
		void GetRandomCassette(bool bMissingOnly, bool* bSuccess, struct FGameplayTag* CassetteTag, struct FDialogue* CassetteDialogue);
		void GetPaperNote(const struct FGameplayTag& NoteID, bool* bSuccess, struct FPaperNote* Note);
		struct FGameplayTag GetNPCJournalNote(const struct FGameplayTag& NpcID);
		void GetMissionTip(const struct FGameplayTag& TipID, bool* bSuccess, struct FRecord* Record);
		void GetKatyaMonologue(const struct FGameplayTag& Tag, bool* bSuccess, struct FDialogue* Monologue);
		void GetCassette(const struct FGameplayTag& CassetteTag, bool* bSuccess, struct FDialogue* CassetteDialogue);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.SubtitlesController
	 * Size -> 0x0008 (FullSize[0x02A0] - InheritedSize[0x0298])
	 */
	class ASubtitlesController : public APRBasicActor
	{
	public:
		unsigned char                                              UnknownData_ZTIP[0x8];                                   // 0x0298(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.SubtitlesControllerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USubtitlesControllerInterface : public UInterface
	{
	public:
		void ShowSubtitlesString(const class FString& Text, float Duration, EPRSubtitleType Type, bool bSwitchable);
		void ShowSubtitles(const class FText& Text, float Duration, EPRSubtitleType Type, bool bSwitchable);
		void ShowSaveIcon(bool bAutoSave);
		void SetDressingMode(bool Active);
		void HideSubtitles();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.SystemConfig
	 * Size -> 0x0230 (FullSize[0x0260] - InheritedSize[0x0030])
	 */
	class USystemConfig : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_TKZ6[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLevelConfig>                                LevelConfigurations;                                     // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  EmptyMapMaterial;                                        // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CommonLevelName;                                         // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TransitionSublevelName;                                  // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FogFadeTime;                                             // 0x0060(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FogFadeDensityMultiplier;                                // 0x0064(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TransitionTimeSkipHoursPerSecond;                        // 0x0068(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisableFirstLaunchInEditor;                              // 0x006C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CDM0[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LevelItemsSpawnBlockExtent;                              // 0x0070(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CorpseSpawnBlockExtent;                                  // 0x007C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DetectorWorkDistance;                                    // 0x0088(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmmoContainersLockDelay;                                 // 0x008C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmmoContainersLoadingDelay;                              // 0x0090(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F73S[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UClass*, struct FPRClusterPatternConfig>        ClusterPatternConfigs;                                   // 0x0098(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ItemIgnoredDamageTypes;                                  // 0x00E8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       LoadShortNPCGameData;                                    // 0x00F8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RH4A[0x3];                                   // 0x00F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IngameMenuVerticalShift;                                 // 0x00FC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FallThroughFloorZ;                                       // 0x0100(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DoNotDropItemsFromBackpack;                              // 0x0104(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9078[0x3];                                   // 0x0105(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                ItemsToAdditionalDropOnDeath;                            // 0x0108(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      BulletsFlyBySoundDistance;                               // 0x0118(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NPCDiscoverDistance;                                     // 0x011C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnomalyDiscoverDistance;                                 // 0x0120(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MOB8[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      LowLevelGPUs;                                            // 0x0128(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      HighLevelGPUs;                                           // 0x0138(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      OnStartSpawningControllers;                              // 0x0148(0x0010) Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		EPlayerTeleportAdjustType                                  PlayerPositionAdjustmentInMenu;                          // 0x0158(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerTeleportAdjustType                                  PlayerPositionAdjustmentInTransition;                    // 0x0159(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MainMenuFollowsPlayer;                                   // 0x015A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCountEditorAsEarlyAccess;                               // 0x015B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AwaitForDetectionOnStartup;                              // 0x015C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GUO8[0x3];                                   // 0x015D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, EPRControllerType>                     SteamControllerTypesMap;                                 // 0x0160(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       ExitIfUnsupportedControllers;                            // 0x01B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PR2E[0x7];                                   // 0x01B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SteamBetaBranchName;                                     // 0x01B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      SteamHideRevisionBranches;                               // 0x01C8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      ClustersSpawnDistance;                                   // 0x01D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClearProfileSavesOnFinalSuicide;                         // 0x01DC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PETU[0x3];                                   // 0x01DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LevelTransferStepsDelay;                                 // 0x01E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9AMH[0x4];                                   // 0x01E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTagsTuple>                          ItemMoveHoldersMapping;                                  // 0x01E8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      NPCSpawnMinDistanceFromPlayer;                           // 0x01F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NPCSpawnZShift;                                          // 0x01FC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NPCMaxDistanceFromSpawner;                               // 0x0200(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NPCSpawnerRestoreRadius;                                 // 0x0204(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAchievementsConfig                                 AchievementsConfig;                                      // 0x0208(0x0058) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		class USystemConfig* GetSystemConfig();
		class FText GetLevelName(const struct FGameplayTag& LevelTag, const class FText& Placeholder);
		void GetLevelConfig(const struct FGameplayTag& LevelTag, struct FLevelConfig* Config);
		void GetCurrentLevelConfig(struct FLevelConfig* Config);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.ReadyMarkInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UReadyMarkInterface : public UInterface
	{
	public:
		bool ReadyTrigger();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.GameStarterInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameStarterInterface : public UInterface
	{
	public:
		bool GameStarted();
		bool GameShuttingDown();
		void CheckGameStart();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IClearable
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIClearable : public UInterface
	{
	public:
		void Clear();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IAsset
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIAsset : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.IPreparable
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIPreparable : public UInterface
	{
	public:
		void Prepare();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.TagsConfig
	 * Size -> 0x0278 (FullSize[0x02A8] - InheritedSize[0x0030])
	 */
	class UTagsConfig : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_UVXF[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        TagMarkStashOpened;                                      // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagMarkArtifactVisible;                                  // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagMarkFireModeSemi;                                     // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagMarkFireModeAuto;                                     // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagMarkFireModeBurst3;                                   // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagMarkAttachmentOn;                                     // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagMarkBoltOpen;                                         // 0x0068(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagMarkCigaretteLighting;                                // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagAllStashes;                                           // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagStashSmall;                                           // 0x0080(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagStashLarge;                                           // 0x0088(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagStashHidden;                                          // 0x0090(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagAllUpgrades;                                          // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagItems;                                                // 0x00A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagItemAllBoxes;                                         // 0x00A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagItemAllMags;                                          // 0x00B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagItemAllScopes;                                        // 0x00B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagItemAllSilencers;                                     // 0x00C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagItemAllCassettes;                                     // 0x00C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagItemAllArtifacts;                                     // 0x00D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagItemAllCores;                                         // 0x00D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagItemAllAmmo;                                          // 0x00E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagItemAllWeapons;                                       // 0x00E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagItemAllPrimary;                                       // 0x00F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagItemAllSecondary;                                     // 0x00F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagItemAllMap;                                           // 0x0100(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagCassettesLore;                                        // 0x0108(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagItemMap;                                              // 0x0110(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagItemCamera;                                           // 0x0118(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagItemBackpack;                                         // 0x0120(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagHolderHeadDown;                                       // 0x0128(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagHolderBackpack;                                       // 0x0130(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagHolderHand;                                           // 0x0138(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagHolderLeftHand;                                       // 0x0140(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagHolderRightHand;                                      // 0x0148(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagLevelTransition;                                      // 0x0150(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagLevelMainMenu;                                        // 0x0158(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagLevelHub;                                             // 0x0160(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagLocationTutorialExit;                                 // 0x0168(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagLevelStartTutorial;                                   // 0x0170(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagLevelShootingRange;                                   // 0x0178(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagTriggerTutorialSkipped;                               // 0x0180(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                TutorialSkipTriggers;                                    // 0x0188(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagTriggerOldTutorialFinished;                           // 0x0198(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagTriggerKatyaShown;                                    // 0x01A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagTriggerComputerUnlocked;                              // 0x01A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagTriggerTutorialComputerUnlocked;                      // 0x01B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagTriggerTutorialHub;                                   // 0x01B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagTriggerTutorialHubEntrance;                           // 0x01C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagTriggerFreeGame;                                      // 0x01C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagMissionsCategories;                                   // 0x01D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagMissionsCategoryTutorial;                             // 0x01D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagMissionsCategoryStory;                                // 0x01E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagMissionsCategoryGeneric;                              // 0x01E8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagMissionsCategorySpecialArtifacts;                     // 0x01F0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagMissionsCategorySpecialGenerators;                    // 0x01F8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagFirstMission;                                         // 0x0200(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagNPCs;                                                 // 0x0208(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagGenerators;                                           // 0x0210(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagAnomalies;                                            // 0x0218(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagClusters;                                             // 0x0220(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagBigClusters;                                          // 0x0228(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagMapPoints;                                            // 0x0230(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagNoDistanceGrip;                                       // 0x0238(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagGripTrigger;                                          // 0x0240(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagGripTriggerIndex;                                     // 0x0248(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagGripTriggerBoltAndSlide;                              // 0x0250(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagGripPriority;                                         // 0x0258(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagGripPriorityNegative;                                 // 0x0260(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagGripPriorityOne;                                      // 0x0268(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagGripPriorityTwo;                                      // 0x0270(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagNoiseFootsteps;                                       // 0x0278(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagNoiseImpact;                                          // 0x0280(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagNoiseBulletHit;                                       // 0x0288(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagNoiseWeaponClick;                                     // 0x0290(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagNoiseWeaponShot;                                      // 0x0298(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagNoiseWeaponExplosion;                                 // 0x02A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class UTagsConfig* GetTagsConfig();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.TeleportAutomation
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UTeleportAutomation : public URadiusAutomationBase
	{
	public:
		float                                                      TeleportDelayInSec;                                      // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxLevelPosition;                                        // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                LevelList;                                               // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1IMR[0x48];                                  // 0x0040(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      LevelPositionList;                                       // 0x0088(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J7ZR[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (PADDING)

	public:
		void LevelReadyCallback();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.TimeManager
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UTimeManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_MJED[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnNightStart;                                            // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNightEnd;                                              // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WLAH[0x30];                                  // 0x0058(0x0030) MISSED OFFSET (PADDING)

	public:
		bool SetDateTime(const struct FDateTime& NewDateTime);
		bool IsNight();
		bool IsDay();
		class UTimeManager* GetTimeManager();
		void GetTime(int32_t* Hour, int32_t* Minute);
		float GetSecondsTill(float Hour);
		float GetSecondsPassed();
		float GetHoursPassed();
		float GetHour();
		void GetDateTimeStrings(class FString* Date, class FString* DayOfWeek, class FString* Hour, class FString* Minute, class FString* Second);
		struct FDateTime GetDateTime();
		void DebugSetHour(float Hour);
		void AddTimeTill(float Hour);
		void AddSeconds(float Seconds);
		void AddHours(float Hours);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.VfxConfig
	 * Size -> 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
	 */
	class UVfxConfig : public UDataAsset
	{
	public:
		unsigned char                                              UnknownData_3CFH[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ImpactClass;                                             // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              EmitterClass;                                            // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              NiagaraEmitterClass;                                     // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ImpactDistanceClampInRange;                              // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ImpactDistanceClampOutRange;                             // 0x0058(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ImpactDisableFlag;                                       // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          ImpactsTables;                                           // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ImpactDefaultRow;                                        // 0x0078(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ImpactDefaultDecalScale;                                 // 0x0080(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpactDefaultVolumnMulti;                                // 0x008C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          ImpactDefaultSound;                                      // 0x0090(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundAttenuation*                                   ImpactDefaultAttenuation;                                // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ImpactOffsetVector;                                      // 0x00A0(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpactSpeedScale;                                        // 0x00AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BulletTracersStartDelay;                                 // 0x00B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K2UD[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (PADDING)

	public:
		class UVfxConfig* GetVfxConfig();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.VRControllerComponent
	 * Size -> 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
	 */
	class UVRControllerComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_LF92[0x8];                                   // 0x0228(0x0008) Fix Super Size

	public:
		void UpdateControllerMesh(class USceneComponent* Parent);
		void SetMeshVisibility(bool Visible);
		void IsMeshVisibile(bool* Visible);
		void GetMaterial(class UMaterialInstanceDynamic** Material);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.WeaponBoltComponent
	 * Size -> 0x00F0 (FullSize[0x0630] - InheritedSize[0x0540])
	 */
	class UWeaponBoltComponent : public UPRVRGripSMComponent
	{
	public:
		class FScriptMulticastDelegate                             OnBoltStateChanged;                                      // 0x0540(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      AngleLimit;                                              // 0x0550(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoCloseRotateOnRelease;                                // 0x0554(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QYFC[0x3];                                   // 0x0555(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SnapPercent;                                             // 0x0558(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlideLimit;                                              // 0x055C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StickToOpen;                                             // 0x0560(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationCoeff;                                           // 0x0564(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlideCoeff;                                              // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2AVN[0xA4];                                  // 0x056C(0x00A4) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               GameplayTags;                                            // 0x0610(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		void OnTick();
		void OnLevelStarted(const struct FGameplayTag& LevelTag);
		void OnGameStarted();
		bool IsOpened();
		bool IsClosed();
		void GetCurrentState(EWeaponBoltState* CurrentState);
		void Drop();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.WElement_ShowcaseCategory
	 * Size -> 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
	 */
	class UWElement_ShowcaseCategory : public UUserWidget
	{
	public:
		class UImage*                                              Exclamation_Mark;                                        // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              Image_Selected;                                          // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LWVJ[0x8];                                   // 0x0270(0x0008) MISSED OFFSET (PADDING)

	public:
		void ShowNewItemExclamationMark(bool bShow);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.WPage
	 * Size -> 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
	 */
	class UWPage : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_0MJA[0x8];                                   // 0x0260(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateFooterTexts(class UTextBlock* textPlayerLevel, class UTextBlock* textMoney, class UTextBlock* textTime);
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.WMCPage_ShowcaseCategories
	 * Size -> 0x0018 (FullSize[0x0280] - InheritedSize[0x0268])
	 */
	class UWMCPage_ShowcaseCategories : public UWPage
	{
	public:
		class UScrollBox*                                          SB_Categories;                                           // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UWElement_ShowcaseCategory*>                  ShowcaseCategoriesArray;                                 // 0x0270(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		void UpdateSelection(int32_t selectedIndex);
		void CheckForHasNewItems();
		static UClass* StaticClass();
	};

	/**
	 * Class IntoTheRadius.WShopComputer
	 * Size -> 0x0038 (FullSize[0x0298] - InheritedSize[0x0260])
	 */
	class UWShopComputer : public UUserWidget
	{
	public:
		class UWPage*                                              WMCPage_Empty;                                           // 0x0260(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWPage*                                              WMCPage_ShopBin;                                         // 0x0268(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWPage*                                              WMCPage_ShopControls;                                    // 0x0270(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWMCPage_ShowcaseCategories*                         WMCPage_ShowcaseCategories;                              // 0x0278(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWPage*                                              WMCPage_TakeItems;                                       // 0x0280(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TXEY[0x10];                                  // 0x0288(0x0010) MISSED OFFSET (PADDING)

	public:
		void UpdateNewItems();
		void ShowTakeItems(bool bShow);
		void ShowShopBin(bool bShow);
		void OnSCTick();
		void OnLevelStarted(const struct FGameplayTag& LevelTag);
		void OnGameStarted();
		bool IsShopBinVisible();
		void InitializeByActor(class AActor* Actor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
