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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function IntoTheRadius.AchievementsManager.UpdateLeaderboardProgress
	 */
	struct UAchievementsManager_UpdateLeaderboardProgress_Params
	{
	public:
		ERadiusLeaderboard                                         Leaderboard;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FZNP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Value;                                                   // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AchievementsManager.ResetAchievementProgress
	 */
	struct UAchievementsManager_ResetAchievementProgress_Params
	{	};

	/**
	 * Function IntoTheRadius.AchievementsManager.ReportAchievement
	 */
	struct UAchievementsManager_ReportAchievement_Params
	{
	public:
		ERadiusAchievement                                         Achievement;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MEKA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Value;                                                   // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AchievementsManager.OnItemTaken
	 */
	struct UAchievementsManager_OnItemTaken_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AchievementsManager.OnItemBoughtEvent
	 */
	struct UAchievementsManager_OnItemBoughtEvent_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AchievementsManager.LogCachedAchievements
	 */
	struct UAchievementsManager_LogCachedAchievements_Params
	{	};

	/**
	 * Function IntoTheRadius.AchievementsManager.Initialize
	 */
	struct UAchievementsManager_Initialize_Params
	{	};

	/**
	 * Function IntoTheRadius.AchievementsManager.GetAchievementsManager
	 */
	struct UAchievementsManager_GetAchievementsManager_Params
	{
	public:
		class UAchievementsManager*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AchievementsManager.CompleteAchievement
	 */
	struct UAchievementsManager_CompleteAchievement_Params
	{
	public:
		ERadiusAchievement                                         Achievement;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.ActorActivationVolumeManager.OnTransitionStart
	 */
	struct UActorActivationVolumeManager_OnTransitionStart_Params
	{	};

	/**
	 * Function IntoTheRadius.ActorActivationVolumeManager.OnLevelPrepare
	 */
	struct UActorActivationVolumeManager_OnLevelPrepare_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.ActorVolumeActivationInterface.SetVolumeActivationState
	 */
	struct UActorVolumeActivationInterface_SetVolumeActivationState_Params
	{
	public:
		bool                                                       NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AIEdPerceptionComp.SetSightHalfAngle
	 */
	struct UAIEdPerceptionComp_SetSightHalfAngle_Params
	{
	public:
		float                                                      HalfAngle;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AIEdPerceptionComp.SetSightDistance
	 */
	struct UAIEdPerceptionComp_SetSightDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AIEdPerceptionComp.SetHearingDistance
	 */
	struct UAIEdPerceptionComp_SetHearingDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AIEdPerceptionComp.GetSightHalfAngle
	 */
	struct UAIEdPerceptionComp_GetSightHalfAngle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AIEdPerceptionComp.GetSightDistance
	 */
	struct UAIEdPerceptionComp_GetSightDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AIEdPerceptionComp.GetHearingDistance
	 */
	struct UAIEdPerceptionComp_GetHearingDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AliveStatsComponent.UseStamina
	 */
	struct UAliveStatsComponent_UseStamina_Params
	{
	public:
		bool                                                       bUse;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6W1X[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      UseSpeed;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AliveStatsComponent.OnTakePointDamage
	 */
	struct UAliveStatsComponent_OnTakePointDamage_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QFAT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitLocation;                                             // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VYJ2[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0028(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ShotFromDirection;                                       // 0x0038(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ICM7[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0048(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AliveStatsComponent.OnTakeAnyDamage
	 */
	struct UAliveStatsComponent_OnTakeAnyDamage_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CLV3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         InstigatedBy;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AliveStatsComponent.Kill
	 */
	struct UAliveStatsComponent_Kill_Params
	{	};

	/**
	 * Function IntoTheRadius.AliveStatsComponent.IsCriticalHit
	 */
	struct UAliveStatsComponent_IsCriticalHit_Params
	{
	public:
		class UObject*                                             HitComponent;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AliveStatsComponent.IsAlive
	 */
	struct UAliveStatsComponent_IsAlive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AliveStatsComponent.HealthRegeneration
	 */
	struct UAliveStatsComponent_HealthRegeneration_Params
	{	};

	/**
	 * Function IntoTheRadius.AliveStatsComponent.GetHealthPercent
	 */
	struct UAliveStatsComponent_GetHealthPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AliveStatsComponent.DisplayStats
	 */
	struct UAliveStatsComponent_DisplayStats_Params
	{	};

	/**
	 * Function IntoTheRadius.AliveStatsComponent.CustomTick
	 */
	struct UAliveStatsComponent_CustomTick_Params
	{	};

	/**
	 * Function IntoTheRadius.AliveStatsComponent.ChangeHealth
	 */
	struct UAliveStatsComponent_ChangeHealth_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AliveStatsComponent.CalculateStamina
	 */
	struct UAliveStatsComponent_CalculateStamina_Params
	{
	public:
		bool                                                       bUse;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AliveStatsComponent.ApplyDamage
	 */
	struct UAliveStatsComponent_ApplyDamage_Params
	{
	public:
		class AActor*                                              causer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Weapon;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InputDamage;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AmmoConfig.SetupAmmoMeshComponent
	 */
	struct UAmmoConfig_SetupAmmoMeshComponent_Params
	{
	public:
		struct FGameplayTag                                        AmmoTag;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UStaticMeshComponent*                                AmmoMeshComponent;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsFired;                                                 // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AmmoConfig.IsTakenOutAmmo
	 */
	struct UAmmoConfig_IsTakenOutAmmo_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AmmoConfig.IsShrapnelAmmo
	 */
	struct UAmmoConfig_IsShrapnelAmmo_Params
	{
	public:
		struct FGameplayTag                                        AmmoTag;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AmmoConfig.IsHeldAmmo
	 */
	struct UAmmoConfig_IsHeldAmmo_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AmmoConfig.IsAmmo
	 */
	struct UAmmoConfig_IsAmmo_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AmmoConfig.GetAmmoWholeMesh
	 */
	struct UAmmoConfig_GetAmmoWholeMesh_Params
	{
	public:
		struct FGameplayTag                                        AmmoType;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UStaticMesh*                                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AmmoConfig.GetAmmoTypeName
	 */
	struct UAmmoConfig_GetAmmoTypeName_Params
	{
	public:
		struct FGameplayTag                                        AmmoType;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AmmoConfig.GetAmmoTypeColor
	 */
	struct UAmmoConfig_GetAmmoTypeColor_Params
	{
	public:
		struct FGameplayTag                                        AmmoType;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AmmoConfig.GetAmmoTagsConfig
	 */
	struct UAmmoConfig_GetAmmoTagsConfig_Params
	{
	public:
		class UAmmoConfig*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AmmoConfig.GetAmmoShellMesh
	 */
	struct UAmmoConfig_GetAmmoShellMesh_Params
	{
	public:
		struct FGameplayTag                                        AmmoType;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UStaticMesh*                                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnUnstuck
	 */
	struct UAnalyticsManager_OnUnstuck_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnTutorialStart
	 */
	struct UAnalyticsManager_OnTutorialStart_Params
	{
	public:
		struct FGameplayTag                                        TutorialId;                                              // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TotalSteps;                                              // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnTutorialEnd
	 */
	struct UAnalyticsManager_OnTutorialEnd_Params
	{
	public:
		struct FGameplayTag                                        TutorialId;                                              // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TotalSteps;                                              // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CompletedSteps;                                          // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnTutorialControls
	 */
	struct UAnalyticsManager_OnTutorialControls_Params
	{	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnTransitionStart
	 */
	struct UAnalyticsManager_OnTransitionStart_Params
	{	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnTideHappening
	 */
	struct UAnalyticsManager_OnTideHappening_Params
	{	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnSleep
	 */
	struct UAnalyticsManager_OnSleep_Params
	{
	public:
		float                                                      Seconds;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isBlackout;                                              // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnSettingsGameplay
	 */
	struct UAnalyticsManager_OnSettingsGameplay_Params
	{
	public:
		bool                                                       VirtualStock;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       PlayerHeight;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       NeckHeight;                                              // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ArmLength;                                               // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       VignetteTurn;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       VignetteRun;                                             // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ShowBody;                                                // 0x0006(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       SeatedMode;                                              // 0x0007(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnSettingsControls
	 */
	struct UAnalyticsManager_OnSettingsControls_Params
	{
	public:
		bool                                                       bTurnType;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTurnSpeed;                                              // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMovementDirectionType;                                  // 0x0002(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bControllerRotation;                                     // 0x0003(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHoldGrip;                                               // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLeftHanded;                                             // 0x0005(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMirrorHolsters;                                         // 0x0006(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTeleportMovement;                                       // 0x0007(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnPlayerLocation
	 */
	struct UAnalyticsManager_OnPlayerLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AverageDelta;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnPlayerKill
	 */
	struct UAnalyticsManager_OnPlayerKill_Params
	{
	public:
		class AActor*                                              KilledActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        weaponTag;                                               // 0x0008(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsSmoothing;                                            // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_175A[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             DeathLocation;                                           // 0x0014(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnPlayerDeath
	 */
	struct UAnalyticsManager_OnPlayerDeath_Params
	{
	public:
		class FText                                                DeathCauserName;                                         // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector                                             DeathLocation;                                           // 0x0018(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnMoneyChanged
	 */
	struct UAnalyticsManager_OnMoneyChanged_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WKDA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      AnalyticsParams;                                         // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnMissionStateChanged
	 */
	struct UAnalyticsManager_OnMissionStateChanged_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnMissionFinished
	 */
	struct UAnalyticsManager_OnMissionFinished_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnMenuNewGame
	 */
	struct UAnalyticsManager_OnMenuNewGame_Params
	{
	public:
		bool                                                       SkipTutor;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Ironman;                                                 // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRadiusGameDifficulty                               Difficulty;                                              // 0x0002(0x0010)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnLogHmdDevice
	 */
	struct UAnalyticsManager_OnLogHmdDevice_Params
	{	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnLogFPS
	 */
	struct UAnalyticsManager_OnLogFPS_Params
	{
	public:
		class FString                                              Location;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Min;                                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Max;                                                     // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Average;                                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnLevelStarted
	 */
	struct UAnalyticsManager_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        Value;                                                   // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnKatyasMonologue
	 */
	struct UAnalyticsManager_OnKatyasMonologue_Params
	{
	public:
		struct FGameplayTag                                        MonologueTag;                                            // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnJournalOpened
	 */
	struct UAnalyticsManager_OnJournalOpened_Params
	{
	public:
		struct FGameplayTag                                        TabTag;                                                  // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnGuitarPlayed
	 */
	struct UAnalyticsManager_OnGuitarPlayed_Params
	{
	public:
		int32_t                                                    PlayCount;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PlayTimeSeconds;                                         // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnGameStart
	 */
	struct UAnalyticsManager_OnGameStart_Params
	{	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnFinalChoice
	 */
	struct UAnalyticsManager_OnFinalChoice_Params
	{
	public:
		class FString                                              Choice;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.OnDifficultyChanged
	 */
	struct UAnalyticsManager_OnDifficultyChanged_Params
	{	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.End
	 */
	struct UAnalyticsManager_End_Params
	{	};

	/**
	 * Function IntoTheRadius.AnalyticsManager.Begin
	 */
	struct UAnalyticsManager_Begin_Params
	{
	public:
		class UPRGameInstance*                                     GameInstance;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AttachmentSlotComponent.TryDetachItem
	 */
	struct UAttachmentSlotComponent_TryDetachItem_Params
	{
	public:
		class AActor*                                              Attachment;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AttachmentSlotComponent.TryAttachItem
	 */
	struct UAttachmentSlotComponent_TryAttachItem_Params
	{
	public:
		class AActor*                                              Attachment;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AttachmentSlotComponent.SetSlotEnabled
	 */
	struct UAttachmentSlotComponent_SetSlotEnabled_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AttachmentSlotComponent.IsSlotEnabled
	 */
	struct UAttachmentSlotComponent_IsSlotEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AttachmentSlotComponent.IsSlotEmpty
	 */
	struct UAttachmentSlotComponent_IsSlotEmpty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AttachmentSlotComponent.IsParentHeld
	 */
	struct UAttachmentSlotComponent_IsParentHeld_Params
	{
	public:
		bool                                                       IsHeld;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AttachmentSlotComponent.IsAccepts
	 */
	struct UAttachmentSlotComponent_IsAccepts_Params
	{
	public:
		struct FGameplayTag                                        Type;                                                    // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCanAttach;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.AttachmentSlotComponent.GetParentItem
	 */
	struct UAttachmentSlotComponent_GetParentItem_Params
	{
	public:
		class UInventoryItem*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.BackpackSimple.RefreshState
	 */
	struct ABackpackSimple_RefreshState_Params
	{	};

	/**
	 * Function IntoTheRadius.BackpackSimple.OnUnequipped
	 */
	struct ABackpackSimple_OnUnequipped_Params
	{	};

	/**
	 * Function IntoTheRadius.BackpackSimple.OnReturned
	 */
	struct ABackpackSimple_OnReturned_Params
	{	};

	/**
	 * Function IntoTheRadius.BackpackSimple.LerpToHolster
	 */
	struct ABackpackSimple_LerpToHolster_Params
	{	};

	/**
	 * Function IntoTheRadius.BackpackSimple.GetPivotGripPoint
	 */
	struct ABackpackSimple_GetPivotGripPoint_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.BackpackSimple.GetHolderSleepingBag
	 */
	struct ABackpackSimple_GetHolderSleepingBag_Params
	{
	public:
		class APRHolder*                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.BackpackSimple.GetHolders
	 */
	struct ABackpackSimple_GetHolders_Params
	{
	public:
		TArray<class APRHolder*>                                   ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.BackpackSimple.GetHolderPrimaryWeapon
	 */
	struct ABackpackSimple_GetHolderPrimaryWeapon_Params
	{
	public:
		class APRHolder*                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.BackpackSimple.GetHolderBackpack
	 */
	struct ABackpackSimple_GetHolderBackpack_Params
	{
	public:
		class APRHolder*                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.BackpackSimple.CheckEquipped
	 */
	struct ABackpackSimple_CheckEquipped_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.BTD_IsActiveCpp.OnNPCDied
	 */
	struct UBTD_IsActiveCpp_OnNPCDied_Params
	{
	public:
		class AActor*                                              DeadNPC;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRBasicActor.OnTransitionStart
	 */
	struct APRBasicActor_OnTransitionStart_Params
	{	};

	/**
	 * Function IntoTheRadius.PRBasicActor.OnTransitionEnd
	 */
	struct APRBasicActor_OnTransitionEnd_Params
	{	};

	/**
	 * Function IntoTheRadius.PRBasicActor.OnLevelStarted
	 */
	struct APRBasicActor_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRBasicActor.OnLevelPrepare
	 */
	struct APRBasicActor_OnLevelPrepare_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRBasicActor.OnGameStartedPrivate
	 */
	struct APRBasicActor_OnGameStartedPrivate_Params
	{	};

	/**
	 * Function IntoTheRadius.PRBasicActor.OnGameStarted
	 */
	struct APRBasicActor_OnGameStarted_Params
	{	};

	/**
	 * Function IntoTheRadius.PRBasicActor.OnGamePaused
	 */
	struct APRBasicActor_OnGamePaused_Params
	{
	public:
		bool                                                       bPaused;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRBasicActor.DisableRelevanceManagement
	 */
	struct APRBasicActor_DisableRelevanceManagement_Params
	{	};

	/**
	 * Function IntoTheRadius.CharBroadcast.SpawnBroadcast
	 */
	struct ACharBroadcast_SpawnBroadcast_Params
	{
	public:
		class UObject*                                             WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JAJO[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          SpawnTransform;                                          // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        MissionKillPointTag;                                     // 0x0040(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LifeSpan;                                                // 0x0048(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SphereRadius;                                            // 0x004C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACharBroadcast*                                      ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CharBroadcast.AlertOthers
	 */
	struct ACharBroadcast_AlertOthers_Params
	{
	public:
		class AActor*                                              Caller;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Target;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          Location;                                                // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CheatsControllerInterface.SwitchPlayerCollisions
	 */
	struct UCheatsControllerInterface_SwitchPlayerCollisions_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CheatsControllerInterface.SwitchCheatShowStashes
	 */
	struct UCheatsControllerInterface_SwitchCheatShowStashes_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CheatsControllerInterface.SwitchCheatShowCorpses
	 */
	struct UCheatsControllerInterface_SwitchCheatShowCorpses_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CheatsControllerInterface.SwitchCheatShowArtifacts
	 */
	struct UCheatsControllerInterface_SwitchCheatShowArtifacts_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CheatsControllerInterface.SwitchCheatNoClip
	 */
	struct UCheatsControllerInterface_SwitchCheatNoClip_Params
	{	};

	/**
	 * Function IntoTheRadius.CheatsControllerInterface.SetCheatScreenshot
	 */
	struct UCheatsControllerInterface_SetCheatScreenshot_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CheatsControllerInterface.SetCheatReload
	 */
	struct UCheatsControllerInterface_SetCheatReload_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CheatsControllerInterface.SetCheatPause
	 */
	struct UCheatsControllerInterface_SetCheatPause_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CheatsControllerInterface.SetCheatNoRandom
	 */
	struct UCheatsControllerInterface_SetCheatNoRandom_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CheatsControllerInterface.GetCheatShowStashes
	 */
	struct UCheatsControllerInterface_GetCheatShowStashes_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CheatsControllerInterface.GetCheatShowCorpses
	 */
	struct UCheatsControllerInterface_GetCheatShowCorpses_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CheatsControllerInterface.GetCheatShowArtifacts
	 */
	struct UCheatsControllerInterface_GetCheatShowArtifacts_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CheatsControllerInterface.GetCheatScreenshot
	 */
	struct UCheatsControllerInterface_GetCheatScreenshot_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CheatsControllerInterface.GetCheatReload
	 */
	struct UCheatsControllerInterface_GetCheatReload_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CheatsControllerInterface.GetCheatPause
	 */
	struct UCheatsControllerInterface_GetCheatPause_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CheatsControllerInterface.GetCheatNoRandom
	 */
	struct UCheatsControllerInterface_GetCheatNoRandom_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CheatsControllerInterface.GetCheatNoClip
	 */
	struct UCheatsControllerInterface_GetCheatNoClip_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CloseCombatManager.UnregisterNpc
	 */
	struct UCloseCombatManager_UnregisterNpc_Params
	{
	public:
		class ACharacter*                                          NpcToUnregister;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CloseCombatManager.ToggleDebug
	 */
	struct UCloseCombatManager_ToggleDebug_Params
	{	};

	/**
	 * Function IntoTheRadius.CloseCombatManager.RegisterNpc
	 */
	struct UCloseCombatManager_RegisterNpc_Params
	{
	public:
		class ACharacter*                                          NpcToRegister;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CloseCombatManager.InitData
	 */
	struct UCloseCombatManager_InitData_Params
	{	};

	/**
	 * Function IntoTheRadius.CloseCombatManager.GetTeleportSearchRadius
	 */
	struct UCloseCombatManager_GetTeleportSearchRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CloseCombatManager.GetMinDistanceFromPlayerToReappear
	 */
	struct UCloseCombatManager_GetMinDistanceFromPlayerToReappear_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CloseCombatManager.GetDebugEnabled
	 */
	struct UCloseCombatManager_GetDebugEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CloseCombatManager.GetCloseCombatState
	 */
	struct UCloseCombatManager_GetCloseCombatState_Params
	{
	public:
		class ACharacter*                                          NPC;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ENpcCombatState                                            ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CloseCombatManager.GetCloseCombatManager
	 */
	struct UCloseCombatManager_GetCloseCombatManager_Params
	{
	public:
		class UCloseCombatManager*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CloseCombatManager.CleanData
	 */
	struct UCloseCombatManager_CleanData_Params
	{	};

	/**
	 * Function IntoTheRadius.CoverBTTask.OnQueryComplete
	 */
	struct UCoverBTTask_OnQueryComplete_Params
	{
	public:
		struct FNpcPointQueryResult                                Result;                                                  // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CoverRuntimeDataHolder.ToggleDebug
	 */
	struct UCoverRuntimeDataHolder_ToggleDebug_Params
	{	};

	/**
	 * Function IntoTheRadius.CoverRuntimeDataHolder.OnLevelUnloaded
	 */
	struct UCoverRuntimeDataHolder_OnLevelUnloaded_Params
	{	};

	/**
	 * Function IntoTheRadius.CoverRuntimeDataHolder.GetDebugEnabled
	 */
	struct UCoverRuntimeDataHolder_GetDebugEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CoverRuntimeDataHolder.GetCoverRuntimeDataHolder
	 */
	struct UCoverRuntimeDataHolder_GetCoverRuntimeDataHolder_Params
	{
	public:
		class UCoverRuntimeDataHolder*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.CoverRuntimeDataHolder.DebugDraw
	 */
	struct UCoverRuntimeDataHolder_DebugDraw_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DamageDealerInterface.GetDamageDealerTag
	 */
	struct UDamageDealerInterface_GetDamageDealerTag_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DamageDealerInterface.GetDamageDealerName
	 */
	struct UDamageDealerInterface_GetDamageDealerName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DataSaveManager.SetUseAlternateSaveLocation
	 */
	struct UDataSaveManager_SetUseAlternateSaveLocation_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DataSaveManager.SaveStringToFileEditor
	 */
	struct UDataSaveManager_SaveStringToFileEditor_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FilePath;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAppend;                                                 // 0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DataSaveManager.SaveStringToFile
	 */
	struct UDataSaveManager_SaveStringToFile_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FilePath;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAppend;                                                 // 0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DataSaveManager.SaveGameData
	 */
	struct UDataSaveManager_SaveGameData_Params
	{
	public:
		class UPRGameData*                                         Data;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SlotNr;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SaveNr;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DataSaveManager.IsSlotWithIronman
	 */
	struct UDataSaveManager_IsSlotWithIronman_Params
	{
	public:
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DataSaveManager.IsSlotEmpty
	 */
	struct UDataSaveManager_IsSlotEmpty_Params
	{
	public:
		struct FSaveSlotInfo                                       SlotInfo;                                                // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DataSaveManager.HasSaves
	 */
	struct UDataSaveManager_HasSaves_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DataSaveManager.GetUseAlternateSaveLocation
	 */
	struct UDataSaveManager_GetUseAlternateSaveLocation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DataSaveManager.GetSlotInfo
	 */
	struct UDataSaveManager_GetSlotInfo_Params
	{
	public:
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C37Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSaveSlotInfo                                       SlotInfo;                                                // 0x0008(0x0058)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DataSaveManager.GetSavesPath
	 */
	struct UDataSaveManager_GetSavesPath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DataSaveManager.GetSaveInfo
	 */
	struct UDataSaveManager_GetSaveInfo_Params
	{
	public:
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Save;                                                    // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSaveInfo                                           SaveInfo;                                                // 0x0008(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DataSaveManager.GetLastSaveInfo
	 */
	struct UDataSaveManager_GetLastSaveInfo_Params
	{
	public:
		struct FSaveSlotInfo                                       SlotInfo;                                                // 0x0000(0x0058)  (Parm, NativeAccessSpecifierPublic)
		struct FSaveInfo                                           ReturnValue;                                             // 0x0058(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DataSaveManager.GetDataSaveManager
	 */
	struct UDataSaveManager_GetDataSaveManager_Params
	{
	public:
		class UDataSaveManager*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DataSaveManager.GetDataPath
	 */
	struct UDataSaveManager_GetDataPath_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DataSaveManager.FixInventoryItemPosition
	 */
	struct UDataSaveManager_FixInventoryItemPosition_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DataSaveManager.CopyScopedToAlternateSave
	 */
	struct UDataSaveManager_CopyScopedToAlternateSave_Params
	{	};

	/**
	 * Function IntoTheRadius.DataSaveManager.CopyAlternateToScopedSave
	 */
	struct UDataSaveManager_CopyAlternateToScopedSave_Params
	{	};

	/**
	 * Function IntoTheRadius.DataSaveManager.AutosaveGameData
	 */
	struct UDataSaveManager_AutosaveGameData_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DiscordManager.Initialize
	 */
	struct UDiscordManager_Initialize_Params
	{	};

	/**
	 * Function IntoTheRadius.DiscordManager.GetDiscordManager
	 */
	struct UDiscordManager_GetDiscordManager_Params
	{
	public:
		class UDiscordManager*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DiscordManager.ChangeLocationName
	 */
	struct UDiscordManager_ChangeLocationName_Params
	{	};

	/**
	 * Function IntoTheRadius.DiscordManager.ChangeDifficulty
	 */
	struct UDiscordManager_ChangeDifficulty_Params
	{	};

	/**
	 * Function IntoTheRadius.DistanceGripManager.LevelTransitionStartCallback
	 */
	struct UDistanceGripManager_LevelTransitionStartCallback_Params
	{	};

	/**
	 * Function IntoTheRadius.DistanceGripManager.LevelTransitionEndCallback
	 */
	struct UDistanceGripManager_LevelTransitionEndCallback_Params
	{	};

	/**
	 * Function IntoTheRadius.DistanceGripManager.ItemTakenFromLevelCallback
	 */
	struct UDistanceGripManager_ItemTakenFromLevelCallback_Params
	{
	public:
		class UInventoryItem*                                      ItemTaken;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DistanceGripManager.ItemStoredToLevelCallback
	 */
	struct UDistanceGripManager_ItemStoredToLevelCallback_Params
	{
	public:
		class UInventoryItem*                                      ItemStored;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DistanceGripManager.ItemRemovedFromLevelCallback
	 */
	struct UDistanceGripManager_ItemRemovedFromLevelCallback_Params
	{
	public:
		class UInventoryItem*                                      ItemRemoved;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DistanceGripManager.ItemActorRemovedCallback
	 */
	struct UDistanceGripManager_ItemActorRemovedCallback_Params
	{
	public:
		class UInventoryItem*                                      ItemWithActorRemoved;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.GetEventsManager
	 */
	struct UEventsManager_GetEventsManager_Params
	{
	public:
		class UEventsManager*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnWildSpawnerCleared
	 */
	struct UEventsManager_FireOnWildSpawnerCleared_Params
	{
	public:
		class AActor*                                              SpawnerActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnVirtualStockChanged
	 */
	struct UEventsManager_FireOnVirtualStockChanged_Params
	{	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnTutorialStarted
	 */
	struct UEventsManager_FireOnTutorialStarted_Params
	{
	public:
		struct FGameplayTag                                        TutorialId;                                              // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnTutorialSequenceFinished
	 */
	struct UEventsManager_FireOnTutorialSequenceFinished_Params
	{
	public:
		class AActor*                                              SequenceActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnTriggerUnset
	 */
	struct UEventsManager_FireOnTriggerUnset_Params
	{
	public:
		struct FGameplayTag                                        Trigger;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnTriggerPassed
	 */
	struct UEventsManager_FireOnTriggerPassed_Params
	{
	public:
		struct FGameplayTag                                        Trigger;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnTransitionStart
	 */
	struct UEventsManager_FireOnTransitionStart_Params
	{	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnTransitionEnd
	 */
	struct UEventsManager_FireOnTransitionEnd_Params
	{	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnTideHappening
	 */
	struct UEventsManager_FireOnTideHappening_Params
	{	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnStoryNotePassed
	 */
	struct UEventsManager_FireOnStoryNotePassed_Params
	{
	public:
		struct FGameplayTag                                        NoteID;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnStashOpened
	 */
	struct UEventsManager_FireOnStashOpened_Params
	{
	public:
		class AActor*                                              StashActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnShowBodyChanged
	 */
	struct UEventsManager_FireOnShowBodyChanged_Params
	{	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnShotFired
	 */
	struct UEventsManager_FireOnShotFired_Params
	{	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnReferencesClearing
	 */
	struct UEventsManager_FireOnReferencesClearing_Params
	{	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnPlayerWalking
	 */
	struct UEventsManager_FireOnPlayerWalking_Params
	{	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnPlayerTurning
	 */
	struct UEventsManager_FireOnPlayerTurning_Params
	{	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnPlayerStarted
	 */
	struct UEventsManager_FireOnPlayerStarted_Params
	{	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnPlayerSleep
	 */
	struct UEventsManager_FireOnPlayerSleep_Params
	{
	public:
		float                                                      Seconds;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsBlackout;                                             // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnPlayerRunning
	 */
	struct UEventsManager_FireOnPlayerRunning_Params
	{	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnPlayerReset
	 */
	struct UEventsManager_FireOnPlayerReset_Params
	{	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnPlayerMoneyChanged
	 */
	struct UEventsManager_FireOnPlayerMoneyChanged_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0XEV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      AnalyticsParams;                                         // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnPlayerLevelChanged
	 */
	struct UEventsManager_FireOnPlayerLevelChanged_Params
	{
	public:
		int32_t                                                    PlayerLevel;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnPlayerKilledNPC
	 */
	struct UEventsManager_FireOnPlayerKilledNPC_Params
	{
	public:
		class AActor*                                              NPCActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        weaponTag;                                               // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnPlayerEyesOpen
	 */
	struct UEventsManager_FireOnPlayerEyesOpen_Params
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnPlayerDied
	 */
	struct UEventsManager_FireOnPlayerDied_Params
	{	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnPlayerBodyVisibilityChanged
	 */
	struct UEventsManager_FireOnPlayerBodyVisibilityChanged_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnPictureTaken
	 */
	struct UEventsManager_FireOnPictureTaken_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnObjectiveRestored
	 */
	struct UEventsManager_FireOnObjectiveRestored_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMissionAbstractObjectiveData*                       objectiveData;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnObjectiveProgress
	 */
	struct UEventsManager_FireOnObjectiveProgress_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMissionAbstractObjectiveData*                       objectiveData;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnObjectiveFinished
	 */
	struct UEventsManager_FireOnObjectiveFinished_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMissionAbstractObjectiveData*                       objectiveData;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnNPCDied
	 */
	struct UEventsManager_FireOnNPCDied_Params
	{
	public:
		class AActor*                                              NPCActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnNewMissionAdded
	 */
	struct UEventsManager_FireOnNewMissionAdded_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnNewJournalNote
	 */
	struct UEventsManager_FireOnNewJournalNote_Params
	{
	public:
		struct FGameplayTag                                        NoteID;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnMissionStateChanged
	 */
	struct UEventsManager_FireOnMissionStateChanged_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnMissionPreview
	 */
	struct UEventsManager_FireOnMissionPreview_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnMissionFinished
	 */
	struct UEventsManager_FireOnMissionFinished_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnLevelStarted
	 */
	struct UEventsManager_FireOnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnLevelPrepare
	 */
	struct UEventsManager_FireOnLevelPrepare_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnItemTaken
	 */
	struct UEventsManager_FireOnItemTaken_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnItemStored
	 */
	struct UEventsManager_FireOnItemStored_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnItemsSold
	 */
	struct UEventsManager_FireOnItemsSold_Params
	{
	public:
		TArray<class UInventoryItem*>                              Items;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnItemRemoved
	 */
	struct UEventsManager_FireOnItemRemoved_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnItemDropped
	 */
	struct UEventsManager_FireOnItemDropped_Params
	{
	public:
		class AActor*                                              itemActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnItemChangeDurability
	 */
	struct UEventsManager_FireOnItemChangeDurability_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnItemBought
	 */
	struct UEventsManager_FireOnItemBought_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnItemActorRefRemoved
	 */
	struct UEventsManager_FireOnItemActorRefRemoved_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnInventoryModeChanged
	 */
	struct UEventsManager_FireOnInventoryModeChanged_Params
	{	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnGameTimeChanged
	 */
	struct UEventsManager_FireOnGameTimeChanged_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnGameStarted
	 */
	struct UEventsManager_FireOnGameStarted_Params
	{	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnGameShutdown
	 */
	struct UEventsManager_FireOnGameShutdown_Params
	{	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnGameplayTimeDilationChanged
	 */
	struct UEventsManager_FireOnGameplayTimeDilationChanged_Params
	{
	public:
		float                                                      TimeDilation;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnGamePaused
	 */
	struct UEventsManager_FireOnGamePaused_Params
	{
	public:
		bool                                                       bIsPaused;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnGameModeStarted
	 */
	struct UEventsManager_FireOnGameModeStarted_Params
	{	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnGameInstanceStarted
	 */
	struct UEventsManager_FireOnGameInstanceStarted_Params
	{	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnGameDataSave
	 */
	struct UEventsManager_FireOnGameDataSave_Params
	{	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnFirstTimeTaken
	 */
	struct UEventsManager_FireOnFirstTimeTaken_Params
	{
	public:
		struct FGameplayTag                                        ItemTag;                                                 // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnEnvironmentRePrepared
	 */
	struct UEventsManager_FireOnEnvironmentRePrepared_Params
	{
	public:
		class APREnvironment*                                      Environment;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnDifficultyChanged
	 */
	struct UEventsManager_FireOnDifficultyChanged_Params
	{	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnCustomMapMarkPassed
	 */
	struct UEventsManager_FireOnCustomMapMarkPassed_Params
	{
	public:
		struct FGameplayTag                                        MarkID;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnConsumableUsing
	 */
	struct UEventsManager_FireOnConsumableUsing_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.EventsManager.FireOnConsumableActorUsing
	 */
	struct UEventsManager_FireOnConsumableActorUsing_Params
	{
	public:
		class AActor*                                              itemActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLAnimation.GetDurationOfActiveNotifyState
	 */
	struct UFLAnimation_GetDurationOfActiveNotifyState_Params
	{
	public:
		class UAnimInstance*                                       AnimInstance;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimNotifyState*                                    AnimNotifyStateInstance;                                 // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutDuration;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLAnimation.GetAnimSequencePlayLength
	 */
	struct UFLAnimation_GetAnimSequencePlayLength_Params
	{
	public:
		class UAnimSequenceBase*                                   Anim;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPlayingBackwards;                                       // 0x000C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NVWO[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLBlutility.SetWeaponInfosToTable
	 */
	struct UFLBlutility_SetWeaponInfosToTable_Params
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FWeaponInfo>                                 infos;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLBlutility.SetPoseInfosToTable
	 */
	struct UFLBlutility_SetPoseInfosToTable_Params
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPRHandPoseInfosPair>                        Poses;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLBlutility.SetNPCInfosToTable
	 */
	struct UFLBlutility_SetNPCInfosToTable_Params
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPRNPCInfo>                                  infos;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLBlutility.SetMobility
	 */
	struct UFLBlutility_SetMobility_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EComponentMobility                                         Mobility;                                                // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLBlutility.SetItemInfosToTable
	 */
	struct UFLBlutility_SetItemInfosToTable_Params
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPRItemInfo>                                 infos;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLBlutility.SetAnomalyInfosToTable
	 */
	struct UFLBlutility_SetAnomalyInfosToTable_Params
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPRAnomalyInfo>                              infos;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLBlutility.SetAmmoInfosToTable
	 */
	struct UFLBlutility_SetAmmoInfosToTable_Params
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FAmmoInfo>                                   infos;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLBlutility.SetAmmoContainerInfosToTable
	 */
	struct UFLBlutility_SetAmmoContainerInfosToTable_Params
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPRAmmoContainerInfo>                        infos;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLBlutility.SetAllowCullDistanceVolume
	 */
	struct UFLBlutility_SetAllowCullDistanceVolume_Params
	{
	public:
		class UStaticMeshComponent*                                Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bValue;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLBlutility.SaveDataTable
	 */
	struct UFLBlutility_SaveDataTable_Params
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLBlutility.ReloadConfigAssets
	 */
	struct UFLBlutility_ReloadConfigAssets_Params
	{	};

	/**
	 * Function IntoTheRadius.FLBlutility.LoadItemInfos
	 */
	struct UFLBlutility_LoadItemInfos_Params
	{
	public:
		TArray<struct FPRItemInfo>                                 Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       updateTable;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLBlutility.CompareHandPoses
	 */
	struct UFLBlutility_CompareHandPoses_Params
	{
	public:
		struct FPRHandPoseInfo                                     poseA;                                                   // 0x0000(0x0140)  (Parm, NativeAccessSpecifierPublic)
		struct FPRHandPoseInfo                                     poseB;                                                   // 0x0140(0x0140)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0280(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLBlutility.ClearDataTable
	 */
	struct UFLBlutility_ClearDataTable_Params
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLBlutility.AddWeaponInfoToTable
	 */
	struct UFLBlutility_AddWeaponInfoToTable_Params
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWeaponInfo                                         Info;                                                    // 0x0008(0x0110)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0118(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLBlutility.AddPoseInfoToTable
	 */
	struct UFLBlutility_AddPoseInfoToTable_Params
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPRHandPoseInfosPair                                Pose;                                                    // 0x0008(0x02B0)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x02B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLBlutility.AddPointData
	 */
	struct UFLBlutility_AddPointData_Params
	{
	public:
		TMap<struct FGameplayTag, struct FTagToTransformsList>     In;                                                      // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        LevelTag;                                                // 0x0050(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        pointTag;                                                // 0x0058(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          absoluteTransform;                                       // 0x0060(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		TMap<struct FGameplayTag, struct FTransform>               levelCenters;                                            // 0x0090(0x0050)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       Message;                                                 // 0x00E0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       duplicateCheck;                                          // 0x00E1(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4ZTW[0x6];                                   // 0x00E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<struct FGameplayTag, struct FTagToTransformsList>     ReturnValue;                                             // 0x00E8(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLBlutility.AddNPCInfoToTable
	 */
	struct UFLBlutility_AddNPCInfoToTable_Params
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPRNPCInfo                                          Info;                                                    // 0x0008(0x01B8)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x01C0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLBlutility.AddItemInfoToTable
	 */
	struct UFLBlutility_AddItemInfoToTable_Params
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_B42M[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPRItemInfo                                         Info;                                                    // 0x0010(0x01A0)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x01B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLBlutility.AddAnomalyInfoToTable
	 */
	struct UFLBlutility_AddAnomalyInfoToTable_Params
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPRAnomalyInfo                                      Info;                                                    // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLBlutility.AddAmmoInfoToTable
	 */
	struct UFLBlutility_AddAmmoInfoToTable_Params
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAmmoInfo                                           Info;                                                    // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLBlutility.AddAmmoContainerInfoToTable
	 */
	struct UFLBlutility_AddAmmoContainerInfoToTable_Params
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPRAmmoContainerInfo                                Info;                                                    // 0x0008(0x0050)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLFirearmProjectiles.SpawnShrapnelProjectile
	 */
	struct UFLFirearmProjectiles_SpawnShrapnelProjectile_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FAmmoInfo                                           AmmoInfo;                                                // 0x0030(0x0058)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		float                                                      Damage;                                                  // 0x0088(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AccuracyInternal;                                        // 0x008C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AccuracyMultiplier;                                      // 0x0090(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Offset;                                                  // 0x0094(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TraceDistance;                                           // 0x0098(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JVGR[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Owner;                                                   // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               Instigator;                                              // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLFirearmProjectiles.SpawnProjectile
	 */
	struct UFLFirearmProjectiles_SpawnProjectile_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FAmmoInfo                                           AmmoInfo;                                                // 0x0030(0x0058)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		float                                                      Damage;                                                  // 0x0088(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Velocity;                                                // 0x008C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AccuracyInternal;                                        // 0x0090(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AccuracyMultiplier;                                      // 0x0094(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Offset;                                                  // 0x0098(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AR4M[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Owner;                                                   // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               Instigator;                                              // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsForceTrace;                                            // 0x00B0(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       State;                                                   // 0x00B1(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z1SO[0x6];                                   // 0x00B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x00B8(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLFirearmProjectiles.SpawnGrenadeProjectile
	 */
	struct UFLFirearmProjectiles_SpawnGrenadeProjectile_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FAmmoInfo                                           AmmoInfo;                                                // 0x0030(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      Damage;                                                  // 0x0088(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Velocity;                                                // 0x008C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AccuracyRadians;                                         // 0x0090(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F5RI[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Owner;                                                   // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               Instigator;                                              // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsForceTrace;                                            // 0x00A8(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLFirearmProjectiles.SpawnExplosionProjectile
	 */
	struct UFLFirearmProjectiles_SpawnExplosionProjectile_Params
	{
	public:
		struct FTransform                                          ExplosionOrigin;                                         // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FExplosionParticalInfo                              ParticalInfo;                                            // 0x0030(0x001C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K8UD[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Owner;                                                   // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               Instigator;                                              // 0x0058(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsForceTrace;                                            // 0x0060(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PTJQ[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0068(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLFirearmProjectiles.SpawnExplosion
	 */
	struct UFLFirearmProjectiles_SpawnExplosion_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FExplosionInfo                                      ExplosionInfo;                                           // 0x0030(0x0040)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		class AActor*                                              Owner;                                                   // 0x0070(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               Instigator;                                              // 0x0078(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLFirearmProjectiles.SpawnBulletProjectile
	 */
	struct UFLFirearmProjectiles_SpawnBulletProjectile_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FAmmoInfo                                           AmmoInfo;                                                // 0x0030(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      Damage;                                                  // 0x0088(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Velocity;                                                // 0x008C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AccuracyRadians;                                         // 0x0090(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MC8X[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Owner;                                                   // 0x0098(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               Instigator;                                              // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsForceTrace;                                            // 0x00A8(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       State;                                                   // 0x00A9(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QR2S[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x00B0(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.TracersShowTypeToString
	 */
	struct UFLGeneral_TracersShowTypeToString_Params
	{
	public:
		ETracersShowType                                           TracersShowType;                                         // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3ZKK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.TagsArrayAsString
	 */
	struct UFLGeneral_TagsArrayAsString_Params
	{
	public:
		class FString                                              Prefix;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FGameplayTag>                                tagsArray;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.SpawnActorWithLabel
	 */
	struct UFLGeneral_SpawnActorWithLabel_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ActorClass;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5875[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Label;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.SortComponentsByLabel
	 */
	struct UFLGeneral_SortComponentsByLabel_Params
	{
	public:
		TArray<class USceneComponent*>                             In;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		TArray<class USceneComponent*>                             Out;                                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.ShowMessage
	 */
	struct UFLGeneral_ShowMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Title;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.ShiftActorByComponent
	 */
	struct UFLGeneral_ShiftActorByComponent_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     Component;                                               // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          TargetTransform;                                         // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          ReturnValue;                                             // 0x0040(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.SetLightVisibility
	 */
	struct UFLGeneral_SetLightVisibility_Params
	{
	public:
		class ULightComponent*                                     Light;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsVisible;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.SetLightAffectsWorld
	 */
	struct UFLGeneral_SetLightAffectsWorld_Params
	{
	public:
		class ULightComponent*                                     Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAffects;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.SetCanEverAffectNavigation
	 */
	struct UFLGeneral_SetCanEverAffectNavigation_Params
	{
	public:
		class UActorComponent*                                     Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRelevant;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.SetAngularRotationOffset
	 */
	struct UFLGeneral_SetAngularRotationOffset_Params
	{
	public:
		class UPhysicsConstraintComponent*                         Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            RotationOffset;                                          // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.SetActorSimulatePhysics
	 */
	struct UFLGeneral_SetActorSimulatePhysics_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Simulate;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       zeroVel;                                                 // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HIHN[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 Primitive;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.SetActorEnableGravity
	 */
	struct UFLGeneral_SetActorEnableGravity_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       enable;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.SafeDestroyActor
	 */
	struct UFLGeneral_SafeDestroyActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.RequestGameplayTagChildren
	 */
	struct UFLGeneral_RequestGameplayTagChildren_Params
	{
	public:
		TArray<struct FGameplayTag>                                GameplayTags;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTagContainer                               ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.RefreshHolders
	 */
	struct UFLGeneral_RefreshHolders_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.PutActorInPersistentLevel
	 */
	struct UFLGeneral_PutActorInPersistentLevel_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.ProtectedApplyPointDamage
	 */
	struct UFLGeneral_ProtectedApplyPointDamage_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BaseDamage;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitFromDirection;                                        // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          HitInfo;                                                 // 0x0018(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class AActor*                                              ActorInstigator;                                         // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              DamageTypeClass;                                         // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x00B8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.PrintObjectReferences
	 */
	struct UFLGeneral_PrintObjectReferences_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.PresetToDifficulty
	 */
	struct UFLGeneral_PresetToDifficulty_Params
	{
	public:
		EPRGameDifficultyPreset                                    DifficultyPreset;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRadiusGameDifficulty                               ReturnValue;                                             // 0x0001(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.ParseCommandLine
	 */
	struct UFLGeneral_ParseCommandLine_Params
	{
	public:
		class FString                                              ParameterName;                                           // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.Multiply_MinMaxFloat
	 */
	struct UFLGeneral_Multiply_MinMaxFloat_Params
	{
	public:
		struct FMinMaxFloat                                        A;                                                       // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      B;                                                       // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMinMaxFloat                                        ReturnValue;                                             // 0x000C(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.KillActorWithChildren
	 */
	struct UFLGeneral_KillActorWithChildren_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.KillActorsByClass
	 */
	struct UFLGeneral_KillActorsByClass_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ActorsClass;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bWithChildren;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.KillActor
	 */
	struct UFLGeneral_KillActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.ItemsDropTypeToString
	 */
	struct UFLGeneral_ItemsDropTypeToString_Params
	{
	public:
		EItemsDropType                                             DropType;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2NVP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsZeroParallelepiped
	 */
	struct UFLGeneral_IsZeroParallelepiped_Params
	{
	public:
		struct FParallelepiped                                     Rect;                                                    // 0x0000(0x0040)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsZeroInt
	 */
	struct UFLGeneral_IsZeroInt_Params
	{
	public:
		struct FMinMaxInt                                          MinMax;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsZeroFloat
	 */
	struct UFLGeneral_IsZeroFloat_Params
	{
	public:
		struct FMinMaxFloat                                        MinMax;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsZeroDiffInt
	 */
	struct UFLGeneral_IsZeroDiffInt_Params
	{
	public:
		struct FMinMaxInt                                          MinMax;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsZeroDiffFloat
	 */
	struct UFLGeneral_IsZeroDiffFloat_Params
	{
	public:
		struct FMinMaxFloat                                        MinMax;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsProfilingInCommandLine
	 */
	struct UFLGeneral_IsProfilingInCommandLine_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsPreviewActor
	 */
	struct UFLGeneral_IsPreviewActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsPassedTutorialUnseen
	 */
	struct UFLGeneral_IsPassedTutorialUnseen_Params
	{
	public:
		struct FGameplayTag                                        TriggerTag;                                              // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsParallelepipedIntersectSphere
	 */
	struct UFLGeneral_IsParallelepipedIntersectSphere_Params
	{
	public:
		struct FParallelepiped                                     Rect;                                                    // 0x0000(0x0040)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             SphereCenter;                                            // 0x0040(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SphereRadius;                                            // 0x004C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsParallelepipedIntersectPoint
	 */
	struct UFLGeneral_IsParallelepipedIntersectPoint_Params
	{
	public:
		struct FParallelepiped                                     Rect;                                                    // 0x0000(0x0040)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             Point;                                                   // 0x0040(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x004C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsNecessaryTutorial
	 */
	struct UFLGeneral_IsNecessaryTutorial_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsInTutorialLevel
	 */
	struct UFLGeneral_IsInTutorialLevel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsInMainMenuLevel
	 */
	struct UFLGeneral_IsInMainMenuLevel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsInBoundsIgnoreZ
	 */
	struct UFLGeneral_IsInBoundsIgnoreZ_Params
	{
	public:
		struct FVector                                             Point;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9B1G[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          BoxWorldTransform;                                       // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             BoxExtent;                                               // 0x0040(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x004C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsGameStarted
	 */
	struct UFLGeneral_IsGameStarted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsGameRunning
	 */
	struct UFLGeneral_IsGameRunning_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsGameplayRunning
	 */
	struct UFLGeneral_IsGameplayRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsGameClosing
	 */
	struct UFLGeneral_IsGameClosing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsFreeGame
	 */
	struct UFLGeneral_IsFreeGame_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsEditorCustomStartup
	 */
	struct UFLGeneral_IsEditorCustomStartup_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsEarlyAccessPlayer
	 */
	struct UFLGeneral_IsEarlyAccessPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsDifficultyAppliedAfterTide
	 */
	struct UFLGeneral_IsDifficultyAppliedAfterTide_Params
	{
	public:
		struct FRadiusGameDifficulty                               NewDifficulty;                                           // 0x0000(0x0010)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsDefaultUpgrade
	 */
	struct UFLGeneral_IsDefaultUpgrade_Params
	{
	public:
		struct FGameplayTag                                        UpgradeID;                                               // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryItem*                                      Item;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsConditionsPassed
	 */
	struct UFLGeneral_IsConditionsPassed_Params
	{
	public:
		TArray<class UPRCondition*>                                Conditions;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsComponentBoundsIntersect
	 */
	struct UFLGeneral_IsComponentBoundsIntersect_Params
	{
	public:
		class UPrimitiveComponent*                                 ComponentA;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 ComponentB;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsCommandLine
	 */
	struct UFLGeneral_IsCommandLine_Params
	{
	public:
		class FString                                              ParameterName;                                           // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsActorInLevel
	 */
	struct UFLGeneral_IsActorInLevel_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        LevelTag;                                                // 0x0008(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.IsActorInCurrentLevel
	 */
	struct UFLGeneral_IsActorInCurrentLevel_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.HasUnseenPassedTutorials
	 */
	struct UFLGeneral_HasUnseenPassedTutorials_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.HasPassedTutorials
	 */
	struct UFLGeneral_HasPassedTutorials_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetTrueMin
	 */
	struct UFLGeneral_GetTrueMin_Params
	{
	public:
		struct FMinMaxFloat                                        MinMax;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetTrueMax
	 */
	struct UFLGeneral_GetTrueMax_Params
	{
	public:
		struct FMinMaxFloat                                        MinMax;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetTimeStringFromSeconds
	 */
	struct UFLGeneral_GetTimeStringFromSeconds_Params
	{
	public:
		int32_t                                                    TotalSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNoSeconds;                                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C221[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              String;                                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetTimeSpentString
	 */
	struct UFLGeneral_GetTimeSpentString_Params
	{
	public:
		int32_t                                                    TotalMinutes;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2O7L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              String;                                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetStreamingLevelNameFromActor
	 */
	struct UFLGeneral_GetStreamingLevelNameFromActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetSignedAngle
	 */
	struct UFLGeneral_GetSignedAngle_Params
	{
	public:
		struct FVector                                             Normal;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             v1;                                                      // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             v2;                                                      // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetRelativeTransform
	 */
	struct UFLGeneral_GetRelativeTransform_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TE2T[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetRandomInt
	 */
	struct UFLGeneral_GetRandomInt_Params
	{
	public:
		struct FMinMaxInt                                          MinMax;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetRandomFloat
	 */
	struct UFLGeneral_GetRandomFloat_Params
	{
	public:
		struct FMinMaxFloat                                        MinMax;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetPSOTasksRemaining
	 */
	struct UFLGeneral_GetPSOTasksRemaining_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetPRPlayerPawn
	 */
	struct UFLGeneral_GetPRPlayerPawn_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               PRPlayerPawn;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetPointsBoxSize
	 */
	struct UFLGeneral_GetPointsBoxSize_Params
	{
	public:
		TArray<struct FVector>                                     Points;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetParentClass
	 */
	struct UFLGeneral_GetParentClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetObjectParentClass
	 */
	struct UFLGeneral_GetObjectParentClass_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetObjectFName
	 */
	struct UFLGeneral_GetObjectFName_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetNewNoteMarker
	 */
	struct UFLGeneral_GetNewNoteMarker_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetNecessaryTutorialConfig
	 */
	struct UFLGeneral_GetNecessaryTutorialConfig_Params
	{
	public:
		struct FTutorialConfig                                     ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetMapLevelTag
	 */
	struct UFLGeneral_GetMapLevelTag_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        LevelTag;                                                // 0x0008(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetLevelByName
	 */
	struct UFLGeneral_GetLevelByName_Params
	{
	public:
		class FString                                              LevelName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        LevelTag;                                                // 0x0010(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetLevelBounds
	 */
	struct UFLGeneral_GetLevelBounds_Params
	{
	public:
		class ULevel*                                              TargetLevel;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LevelLocation;                                           // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBox                                                ReturnValue;                                             // 0x0014(0x001C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetGamePurchaseDate
	 */
	struct UFLGeneral_GetGamePurchaseDate_Params
	{
	public:
		struct FDateTime                                           PurchaseDate;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PurchaseDateString;                                      // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetDateTimeString
	 */
	struct UFLGeneral_GetDateTimeString_Params
	{
	public:
		struct FDateTime                                           DateTime;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              String;                                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetAttackFromPawn
	 */
	struct UFLGeneral_GetAttackFromPawn_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetAllSecondaryWeaponTags
	 */
	struct UFLGeneral_GetAllSecondaryWeaponTags_Params
	{
	public:
		TArray<struct FGameplayTag>                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetAllPrimaryWeaponTags
	 */
	struct UFLGeneral_GetAllPrimaryWeaponTags_Params
	{
	public:
		TArray<struct FGameplayTag>                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetAllCassetteTags
	 */
	struct UFLGeneral_GetAllCassetteTags_Params
	{
	public:
		TArray<struct FGameplayTag>                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetAllArtifactTags
	 */
	struct UFLGeneral_GetAllArtifactTags_Params
	{
	public:
		TArray<struct FGameplayTag>                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetActorLevelTag
	 */
	struct UFLGeneral_GetActorLevelTag_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetActorLevelName
	 */
	struct UFLGeneral_GetActorLevelName_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GetActorHolderTransform
	 */
	struct UFLGeneral_GetActorHolderTransform_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        holderID;                                                // 0x0008(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FUB9[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          RelativeTransform;                                       // 0x0020(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.GameDefaultMap
	 */
	struct UFLGeneral_GameDefaultMap_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.FindIndexOfTag
	 */
	struct UFLGeneral_FindIndexOfTag_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FGameplayTag>                                Array;                                                   // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bExact;                                                  // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JPE1[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.FindDistanceAlongSplineClosestToLocation
	 */
	struct UFLGeneral_FindDistanceAlongSplineClosestToLocation_Params
	{
	public:
		class USplineComponent*                                    Spline;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.DifficultyTypeToString
	 */
	struct UFLGeneral_DifficultyTypeToString_Params
	{
	public:
		EDifficultyType                                            DifficultyType;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QLZG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.DifficultyToPreset
	 */
	struct UFLGeneral_DifficultyToPreset_Params
	{
	public:
		struct FRadiusGameDifficulty                               GameDifficulty;                                          // 0x0000(0x0010)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		EPRGameDifficultyPreset                                    ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.DifficultyPresetToString
	 */
	struct UFLGeneral_DifficultyPresetToString_Params
	{
	public:
		EPRGameDifficultyPreset                                    DifficultyPreset;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JZDV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.DifficultiesToNames
	 */
	struct UFLGeneral_DifficultiesToNames_Params
	{
	public:
		TArray<EDifficultyType>                                    Difficulties;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class FText>                                        Names;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            Indexes;                                                 // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.ClearUnseenPassedTutorials
	 */
	struct UFLGeneral_ClearUnseenPassedTutorials_Params
	{	};

	/**
	 * Function IntoTheRadius.FLGeneral.CheckUniqueInstanceID
	 */
	struct UFLGeneral_CheckUniqueInstanceID_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              UID;                                                     // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Prefix;                                                  // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOnlyIfEmpty;                                            // 0x0028(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.CalcLocalBounds
	 */
	struct UFLGeneral_CalcLocalBounds_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.BlinkFloorSweepTest
	 */
	struct UFLGeneral_BlinkFloorSweepTest_Params
	{
	public:
		class UCharacterMovementComponent*                         MovementComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACharacter*                                          CharacterOwner;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0010(0x0088)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             CapsuleLocation;                                         // 0x0098(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TraceStart;                                              // 0x00A4(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TraceEnd;                                                // 0x00B0(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00BC(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.AsArray
	 */
	struct UFLGeneral_AsArray_Params
	{
	public:
		struct FGameplayTagContainer                               Container;                                               // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FGameplayTag>                                ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.ApplyDifficultyModifiers
	 */
	struct UFLGeneral_ApplyDifficultyModifiers_Params
	{
	public:
		struct FPRNPCInfo                                          NpcInfo;                                                 // 0x0000(0x01B8)  (Parm, NativeAccessSpecifierPublic)
		struct FPRNPCInfo                                          ReturnValue;                                             // 0x01B8(0x01B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.AmmoContainerDataAsString
	 */
	struct UFLGeneral_AmmoContainerDataAsString_Params
	{
	public:
		class FString                                              Prefix;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAmmoContainerData                                  AmmoContainerData;                                       // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLGeneral.AddComponentToActor
	 */
	struct UFLGeneral_AddComponentToActor_Params
	{
	public:
		class AActor*                                              BaseActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              AttachedComponent;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UActorComponent*                                     ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.OilVerticesAtLocation
	 */
	struct UFLItems_OilVerticesAtLocation_Params
	{
	public:
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldLocation;                                           // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DrawSize;                                                // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.LightDetection
	 */
	struct UFLItems_LightDetection_Params
	{
	public:
		class USpotLightComponent*                                 Spot;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.IsWeaponItem
	 */
	struct UFLItems_IsWeaponItem_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.IsSimpleItem
	 */
	struct UFLItems_IsSimpleItem_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.IsItemActorCanBeTraded
	 */
	struct UFLItems_IsItemActorCanBeTraded_Params
	{
	public:
		class AActor*                                              itemActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.IsAmmoItem
	 */
	struct UFLItems_IsAmmoItem_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.IsAmmoContainerItem
	 */
	struct UFLItems_IsAmmoContainerItem_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.GetTotalPrice
	 */
	struct UFLItems_GetTotalPrice_Params
	{
	public:
		TArray<class AActor*>                                      Actors;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bIsSelling;                                              // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GYI7[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.GetStatReliability
	 */
	struct UFLItems_GetStatReliability_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      White;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Red;                                                     // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Green;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PercentChange;                                           // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bGood;                                                   // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.GetStatRecoil
	 */
	struct UFLItems_GetStatRecoil_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      White;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Red;                                                     // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Green;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PercentChange;                                           // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bGood;                                                   // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.GetStatRatios
	 */
	struct UFLItems_GetStatRatios_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWeaponInfoParameter                                       Parameter;                                               // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0VG7[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      White;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Red;                                                     // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Green;                                                   // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PercentChange;                                           // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bGood;                                                   // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.GetStatFireRate
	 */
	struct UFLItems_GetStatFireRate_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      White;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Red;                                                     // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Green;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PercentChange;                                           // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bGood;                                                   // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.GetStatDamage
	 */
	struct UFLItems_GetStatDamage_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      White;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Red;                                                     // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Green;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PercentChange;                                           // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bGood;                                                   // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.GetStatAccuracy
	 */
	struct UFLItems_GetStatAccuracy_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      White;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Red;                                                     // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Green;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PercentChange;                                           // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bGood;                                                   // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.GetSellPrice
	 */
	struct UFLItems_GetSellPrice_Params
	{
	public:
		class AActor*                                              itemActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnoreIfAttached;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bItemOnly;                                               // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KUXF[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.GetRepairTime
	 */
	struct UFLItems_GetRepairTime_Params
	{
	public:
		class AActor*                                              itemActor;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ignoreIfAttached;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TZX7[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.GetRepairPrice
	 */
	struct UFLItems_GetRepairPrice_Params
	{
	public:
		class AActor*                                              itemActor;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ignoreIfAttached;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6SAU[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.GetItemClass
	 */
	struct UFLItems_GetItemClass_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              itemClass;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.GetCleanableMeshes
	 */
	struct UFLItems_GetCleanableMeshes_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterial*                                           ComparisonMaterial;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UStaticMeshComponent*>                        outMeshes;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		int32_t                                                    outCleanbleVertices;                                     // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.GetActorAssociatedName
	 */
	struct UFLItems_GetActorAssociatedName_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.CreateConfig
	 */
	struct UFLItems_CreateConfig_Params
	{
	public:
		struct FGameplayTag                                        ItemTag;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              UID;                                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPRItemConfig*                                       ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.ConstructItemFromConfig
	 */
	struct UFLItems_ConstructItemFromConfig_Params
	{
	public:
		class UPRItemConfig*                                       Config;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UInventoryItem*>                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.ConstructDefaultItem
	 */
	struct UFLItems_ConstructDefaultItem_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              CustomUID;                                               // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FGameplayTag>                                AdditionalTags;                                          // 0x0018(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        holderID;                                                // 0x0028(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DurabilityRatio;                                         // 0x0030(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RF32[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInventoryItem*                                      ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.ConstructActorItem
	 */
	struct UFLItems_ConstructActorItem_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              CustomUID;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FGameplayTag>                                AdditionalTags;                                          // 0x0018(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		float                                                      DurabilityRatio;                                         // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_54Y1[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInventoryItem*                                      ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.CloneInventoryItem
	 */
	struct UFLItems_CloneInventoryItem_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              CustomID;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryItem*                                      ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.CleanVerticesAtLocation
	 */
	struct UFLItems_CleanVerticesAtLocation_Params
	{
	public:
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldLocation;                                           // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DrawSize;                                                // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLItems.CalculateSmoothingAlpha
	 */
	struct UFLItems_CalculateSmoothingAlpha_Params
	{
	public:
		bool                                                       bOutIsAligned;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0P5J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OutAlignAlpha;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCameraComponent*                                    VRCameraRef;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMeshComponent*                                      Mesh;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SocketName;                                              // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DistanceLimit;                                           // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AlphaThreshold;                                          // 0x0024(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.SwitchWorldDumpLogs
	 */
	struct UFLLogs_SwitchWorldDumpLogs_Params
	{	};

	/**
	 * Function IntoTheRadius.FLLogs.SwitchSpawnerLogs
	 */
	struct UFLLogs_SwitchSpawnerLogs_Params
	{	};

	/**
	 * Function IntoTheRadius.FLLogs.SwitchSpawnerDebug
	 */
	struct UFLLogs_SwitchSpawnerDebug_Params
	{	};

	/**
	 * Function IntoTheRadius.FLLogs.SwitchSingletonsLogs
	 */
	struct UFLLogs_SwitchSingletonsLogs_Params
	{	};

	/**
	 * Function IntoTheRadius.FLLogs.SwitchSavesLogs
	 */
	struct UFLLogs_SwitchSavesLogs_Params
	{	};

	/**
	 * Function IntoTheRadius.FLLogs.SwitchPoolLogs
	 */
	struct UFLLogs_SwitchPoolLogs_Params
	{	};

	/**
	 * Function IntoTheRadius.FLLogs.SwitchLootTablesLogs
	 */
	struct UFLLogs_SwitchLootTablesLogs_Params
	{	};

	/**
	 * Function IntoTheRadius.FLLogs.SwitchLogsEnabled
	 */
	struct UFLLogs_SwitchLogsEnabled_Params
	{	};

	/**
	 * Function IntoTheRadius.FLLogs.SwitchLevelsLogs
	 */
	struct UFLLogs_SwitchLevelsLogs_Params
	{	};

	/**
	 * Function IntoTheRadius.FLLogs.SwitchInventoryLogs
	 */
	struct UFLLogs_SwitchInventoryLogs_Params
	{	};

	/**
	 * Function IntoTheRadius.FLLogs.SwitchINILogs
	 */
	struct UFLLogs_SwitchINILogs_Params
	{	};

	/**
	 * Function IntoTheRadius.FLLogs.SwitchGameReferencesLogs
	 */
	struct UFLLogs_SwitchGameReferencesLogs_Params
	{	};

	/**
	 * Function IntoTheRadius.FLLogs.SwitchGameModeLogs
	 */
	struct UFLLogs_SwitchGameModeLogs_Params
	{	};

	/**
	 * Function IntoTheRadius.FLLogs.SwitchGameDataLogs
	 */
	struct UFLLogs_SwitchGameDataLogs_Params
	{	};

	/**
	 * Function IntoTheRadius.FLLogs.SwitchDetailedEventsLogs
	 */
	struct UFLLogs_SwitchDetailedEventsLogs_Params
	{	};

	/**
	 * Function IntoTheRadius.FLLogs.SwitchDataParsingLogs
	 */
	struct UFLLogs_SwitchDataParsingLogs_Params
	{	};

	/**
	 * Function IntoTheRadius.FLLogs.SwitchConditionsLogs
	 */
	struct UFLLogs_SwitchConditionsLogs_Params
	{	};

	/**
	 * Function IntoTheRadius.FLLogs.SwitchClusterLogs
	 */
	struct UFLLogs_SwitchClusterLogs_Params
	{	};

	/**
	 * Function IntoTheRadius.FLLogs.SwitchBasicActorLogs
	 */
	struct UFLLogs_SwitchBasicActorLogs_Params
	{	};

	/**
	 * Function IntoTheRadius.FLLogs.PRLogStacktrace
	 */
	struct UFLLogs_PRLogStacktrace_Params
	{
	public:
		bool                                                       Warning;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TUAO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Message;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.PRLogNormal
	 */
	struct UFLLogs_PRLogNormal_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.PRLogLines
	 */
	struct UFLLogs_PRLogLines_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.PRLogError
	 */
	struct UFLLogs_PRLogError_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.PRLogBanner
	 */
	struct UFLLogs_PRLogBanner_Params
	{
	public:
		class FString                                              Symbol;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Message;                                                 // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.PrintWorldDumpLogs
	 */
	struct UFLLogs_PrintWorldDumpLogs_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.PrintWorldDump
	 */
	struct UFLLogs_PrintWorldDump_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.PrintSpawnerLogs
	 */
	struct UFLLogs_PrintSpawnerLogs_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.PrintSingletonsLogs
	 */
	struct UFLLogs_PrintSingletonsLogs_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.PrintSavesLogs
	 */
	struct UFLLogs_PrintSavesLogs_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.PrintPoolLogs
	 */
	struct UFLLogs_PrintPoolLogs_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.PrintNPCDump
	 */
	struct UFLLogs_PrintNPCDump_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.PrintMissionsDataDump
	 */
	struct UFLLogs_PrintMissionsDataDump_Params
	{	};

	/**
	 * Function IntoTheRadius.FLLogs.PrintLootTablesLogs
	 */
	struct UFLLogs_PrintLootTablesLogs_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.PrintLevelsLogs
	 */
	struct UFLLogs_PrintLevelsLogs_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.PrintInventoryLogs
	 */
	struct UFLLogs_PrintInventoryLogs_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.PrintInventoryDataDump
	 */
	struct UFLLogs_PrintInventoryDataDump_Params
	{	};

	/**
	 * Function IntoTheRadius.FLLogs.PrintINILogs
	 */
	struct UFLLogs_PrintINILogs_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.PrintGameReferencesLogs
	 */
	struct UFLLogs_PrintGameReferencesLogs_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.PrintGameModeLogs
	 */
	struct UFLLogs_PrintGameModeLogs_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.PrintGameDataLogs
	 */
	struct UFLLogs_PrintGameDataLogs_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.PrintGameDataDump
	 */
	struct UFLLogs_PrintGameDataDump_Params
	{	};

	/**
	 * Function IntoTheRadius.FLLogs.PrintDetailedEventsLogs
	 */
	struct UFLLogs_PrintDetailedEventsLogs_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.PrintDataParsingLogs
	 */
	struct UFLLogs_PrintDataParsingLogs_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.PrintConditionsLogs
	 */
	struct UFLLogs_PrintConditionsLogs_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.PrintClusterLogs
	 */
	struct UFLLogs_PrintClusterLogs_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.PrintBasicActorLogs
	 */
	struct UFLLogs_PrintBasicActorLogs_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.LogsEnabled
	 */
	struct UFLLogs_LogsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.IsEnabledTeleportDebug
	 */
	struct UFLLogs_IsEnabledTeleportDebug_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.IsEnabledPlayerStatsLogs
	 */
	struct UFLLogs_IsEnabledPlayerStatsLogs_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.IsEnabledBTRDebug
	 */
	struct UFLLogs_IsEnabledBTRDebug_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.IsEnabledAnomaliesLogs
	 */
	struct UFLLogs_IsEnabledAnomaliesLogs_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.GetTeleportDebugTime
	 */
	struct UFLLogs_GetTeleportDebugTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLLogs.DrawSpawnerDebug
	 */
	struct UFLLogs_DrawSpawnerDebug_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLMissionData.SetString
	 */
	struct UFLMissionData_SetString_Params
	{
	public:
		struct FGameplayTag                                        MissionConfigId;                                         // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLMissionData.SetInt
	 */
	struct UFLMissionData_SetInt_Params
	{
	public:
		struct FGameplayTag                                        MissionConfigId;                                         // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLMissionData.SetFloat
	 */
	struct UFLMissionData_SetFloat_Params
	{
	public:
		struct FGameplayTag                                        MissionConfigId;                                         // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLMissionData.SetBool
	 */
	struct UFLMissionData_SetBool_Params
	{
	public:
		struct FGameplayTag                                        MissionConfigId;                                         // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLMissionData.GetString
	 */
	struct UFLMissionData_GetString_Params
	{
	public:
		struct FGameplayTag                                        MissionConfigId;                                         // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsSet;                                                   // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLMissionData.GetInt
	 */
	struct UFLMissionData_GetInt_Params
	{
	public:
		struct FGameplayTag                                        MissionConfigId;                                         // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsSet;                                                   // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLMissionData.GetFloat
	 */
	struct UFLMissionData_GetFloat_Params
	{
	public:
		struct FGameplayTag                                        MissionConfigId;                                         // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsSet;                                                   // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLMissionData.GetBool
	 */
	struct UFLMissionData_GetBool_Params
	{
	public:
		struct FGameplayTag                                        MissionConfigId;                                         // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsSet;                                                   // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLMissionData.CleanUp
	 */
	struct UFLMissionData_CleanUp_Params
	{
	public:
		struct FGameplayTag                                        MissionConfigId;                                         // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLPhysics.ToggleSimulatePhysics
	 */
	struct UFLPhysics_ToggleSimulatePhysics_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bState;                                                  // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3NBQ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLPlatform.IsVRControllerDefault
	 */
	struct UFLPlatform_IsVRControllerDefault_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLPlatform.IsNativeOculus
	 */
	struct UFLPlatform_IsNativeOculus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLPlatform.HasVRFocus
	 */
	struct UFLPlatform_HasVRFocus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLPlatform.GetVRControllerType
	 */
	struct UFLPlatform_GetVRControllerType_Params
	{
	public:
		EPRControllerType                                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLPlatform.GetPlatformTypeString
	 */
	struct UFLPlatform_GetPlatformTypeString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLPlatform.GetPlatformType
	 */
	struct UFLPlatform_GetPlatformType_Params
	{
	public:
		EPRPlatformType                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLPlatform.GetHMDDeviceType
	 */
	struct UFLPlatform_GetHMDDeviceType_Params
	{
	public:
		EPRHmdDeviceType                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLPlatform.GetGPUBrandName
	 */
	struct UFLPlatform_GetGPUBrandName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLPlatform.GetFingerCurls
	 */
	struct UFLPlatform_GetFingerCurls_Params
	{
	public:
		EPRHand                                                    hand;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y0B0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FFingerCurls                                        FingerCurls;                                             // 0x0004(0x0014)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLPlatform.GetDefaultControllerType
	 */
	struct UFLPlatform_GetDefaultControllerType_Params
	{
	public:
		EPRHmdDeviceType                                           HMDDevice;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRControllerType                                          ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLPlatform.GetCurlsAndSplaysState
	 */
	struct UFLPlatform_GetCurlsAndSplaysState_Params
	{
	public:
		bool                                                       LeftHandState;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       RightHandState;                                          // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLPlatform.GetCPUVendorName
	 */
	struct UFLPlatform_GetCPUVendorName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLPlatform.GetCPUBrandName
	 */
	struct UFLPlatform_GetCPUBrandName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLProject.TrimFloat
	 */
	struct UFLProject_TrimFloat_Params
	{
	public:
		float                                                      In;                                                      // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Digits;                                                  // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLProject.RoundVector
	 */
	struct UFLProject_RoundVector_Params
	{
	public:
		struct FVector                                             In;                                                      // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Digits;                                                  // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLProject.RoundTransform
	 */
	struct UFLProject_RoundTransform_Params
	{
	public:
		struct FTransform                                          In;                                                      // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          ReturnValue;                                             // 0x0030(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLProject.RoundRotator
	 */
	struct UFLProject_RoundRotator_Params
	{
	public:
		struct FRotator                                            In;                                                      // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    Digits;                                                  // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLProject.RoundFloat
	 */
	struct UFLProject_RoundFloat_Params
	{
	public:
		float                                                      In;                                                      // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Digits;                                                  // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLProject.Negative
	 */
	struct UFLProject_Negative_Params
	{
	public:
		float                                                      In;                                                      // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLProject.NativeSortObjectsByDistance
	 */
	struct UFLProject_NativeSortObjectsByDistance_Params
	{
	public:
		TArray<class UObject*>                                     inArray;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class AActor*                                              DistanceFromActor;                                       // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UObject*>                                     ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLProject.IsInputEnabledAndNotSimulation
	 */
	struct UFLProject_IsInputEnabledAndNotSimulation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLProject.GetSpawnPoint
	 */
	struct UFLProject_GetSpawnPoint_Params
	{
	public:
		struct FVector                                             nearby;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InRadius;                                                // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       reachable;                                               // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YSPB[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OutPoint;                                                // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLProject.GetReachablePointNotVisibleToPlayer
	 */
	struct UFLProject_GetReachablePointNotVisibleToPlayer_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               NPC;                                                     // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinDistFromPlayer;                                       // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SearchRadius;                                            // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumAttempts;                                             // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutPoint;                                                // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLProject.GetNavigablePointBehindPlayer
	 */
	struct UFLProject_GetNavigablePointBehindPlayer_Params
	{
	public:
		class APawn*                                               PlayerPawn;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinDistFromPlayer;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SearchRadius;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutPoint;                                                // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLProject.GetGripRelativeTransform
	 */
	struct UFLProject_GetGripRelativeTransform_Params
	{
	public:
		class UObject*                                             GripObject;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGripMotionControllerComponent*                      handController;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseType                                            poseType;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JVZ3[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          outGripRelativeTransform;                                // 0x0020(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLProject.GetGripObjectActor
	 */
	struct UFLProject_GetGripObjectActor_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSpawn.SpawnNPC
	 */
	struct UFLSpawn_SpawnNPC_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0XO5[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FNpcSpawnInfo                                       NpcSpawnInfo;                                            // 0x0010(0x0070)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0080(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSpawn.SpawnNiagaraEmitter
	 */
	struct UFLSpawn_SpawnNiagaraEmitter_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FRadiusNiagaraEmitterInfo                           Info;                                                    // 0x0030(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSpawn.SpawnItemByType
	 */
	struct UFLSpawn_SpawnItemByType_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InstanceId;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          Transform;                                               // 0x0020(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bProjectOnGround;                                        // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSimulatePhysics;                                        // 0x0051(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4ID6[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSpawn.SpawnItemByTag
	 */
	struct UFLSpawn_SpawnItemByTag_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     ParentComponent;                                         // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSnapToParent;                                           // 0x0018(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8ZAV[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0020(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bPreConfigure;                                           // 0x0050(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3RFO[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              CustomID;                                                // 0x0058(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSpawn.SpawnItemByInventoryItem
	 */
	struct UFLSpawn_SpawnItemByInventoryItem_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryItem*                                      InventoryItem;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bProjectOnGround;                                        // 0x0040(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSimulatePhysics;                                        // 0x0041(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3ISV[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSpawn.SpawnItem
	 */
	struct UFLSpawn_SpawnItem_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YG77[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FItemSpawnInfo                                      ItemSpawnInfo;                                           // 0x0010(0x0060)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0070(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSpawn.SpawnInventoryItem
	 */
	struct UFLSpawn_SpawnInventoryItem_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryItem*                                      InventoryItem;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     ParentComponent;                                         // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bKeepRelativeLocation;                                   // 0x0018(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSimulatePhysics;                                        // 0x0019(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HUJJ[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSpawn.SpawnImpactFromHit
	 */
	struct UFLSpawn_SpawnImpactFromHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0008(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		float                                                      ParticleScale;                                           // 0x0090(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DecalScale;                                              // 0x0094(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Distance;                                                // 0x0098(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YLHH[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x00A0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSpawn.SpawnImpact
	 */
	struct UFLSpawn_SpawnImpact_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FRadiusImpactInfo                                   Info;                                                    // 0x0030(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0080(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSpawn.SpawnEmitter
	 */
	struct UFLSpawn_SpawnEmitter_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FRadiusEmitterInfo                                  Info;                                                    // 0x0030(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0078(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSpawn.SpawnBulletShell
	 */
	struct UFLSpawn_SpawnBulletShell_Params
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GW29[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FRadiusFirearmShellInfo                             ShellInfo;                                               // 0x0040(0x0024)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IRBZ[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSpawn.SpawnAnomaly
	 */
	struct UFLSpawn_SpawnAnomaly_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4YUI[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FAnomalySpawnInfo                                   AnomalySpawnInfo;                                        // 0x0010(0x0070)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0080(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSpawn.SpawnActorWithTransformDeferred
	 */
	struct UFLSpawn_SpawnActorWithTransformDeferred_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ActorClass;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSpawn.SpawnActorWithIdentityTransform
	 */
	struct UFLSpawn_SpawnActorWithIdentityTransform_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ActorClass;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDeferred;                                               // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BEEL[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLStaticMeshSplitter.SplitStaticMeshByMaterial
	 */
	struct UFLStaticMeshSplitter_SplitStaticMeshByMaterial_Params
	{
	public:
		class AActor*                                              inputActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLStaticMeshSplitter.SetLodScreenSize
	 */
	struct UFLStaticMeshSplitter_SetLodScreenSize_Params
	{
	public:
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    LODIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ScreenSize;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLStaticMeshSplitter.SetLightMapResolution
	 */
	struct UFLStaticMeshSplitter_SetLightMapResolution_Params
	{
	public:
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Resolution;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLStaticMeshSplitter.SetLightmapCoordinateIndex
	 */
	struct UFLStaticMeshSplitter_SetLightmapCoordinateIndex_Params
	{
	public:
		class UStaticMesh*                                         StaticMesh;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    coordinateIndex;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLStaticMeshSplitter.SetCustomDataInTexcoord
	 */
	struct UFLStaticMeshSplitter_SetCustomDataInTexcoord_Params
	{
	public:
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    textureCoordIndex;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           customData;                                              // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLStaticMeshSplitter.RemoveCollisionFromLodSections
	 */
	struct UFLStaticMeshSplitter_RemoveCollisionFromLodSections_Params
	{
	public:
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLStaticMeshSplitter.PackTintAndTextureIndex
	 */
	struct UFLStaticMeshSplitter_PackTintAndTextureIndex_Params
	{
	public:
		struct FLinearColor                                        Tint;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TextureIndex;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0014(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLStaticMeshSplitter.CreateEmptyLod
	 */
	struct UFLStaticMeshSplitter_CreateEmptyLod_Params
	{
	public:
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLStaticMeshSplitter.CreateCopyOfExistingLod
	 */
	struct UFLStaticMeshSplitter_CreateCopyOfExistingLod_Params
	{
	public:
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    sourceLodIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLStaticMeshSplitter.BuildStaticMesh
	 */
	struct UFLStaticMeshSplitter_BuildStaticMesh_Params
	{
	public:
		class UStaticMesh*                                         StaticMesh;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSystem.IsSimulate
	 */
	struct UFLSystem_IsSimulate_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSystem.IsShippingBuild
	 */
	struct UFLSystem_IsShippingBuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSystem.IsQABuild
	 */
	struct UFLSystem_IsQABuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSystem.IsEditor
	 */
	struct UFLSystem_IsEditor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSystem.IsDevelopmentBuild
	 */
	struct UFLSystem_IsDevelopmentBuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSystem.IsBuild
	 */
	struct UFLSystem_IsBuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSystem.GetPuTimers
	 */
	struct UFLSystem_GetPuTimers_Params
	{
	public:
		float                                                      RawFrameTime;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RawGameThreadTime;                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RawrenderThreadTime;                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RawGPUFrameTime;                                         // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSystem.GetProjectVersion
	 */
	struct UFLSystem_GetProjectVersion_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSystem.GetProjectRevision
	 */
	struct UFLSystem_GetProjectRevision_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSystem.GetProjectBeta
	 */
	struct UFLSystem_GetProjectBeta_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSystem.GetInstallID
	 */
	struct UFLSystem_GetInstallID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSystem.GetFullVersionString
	 */
	struct UFLSystem_GetFullVersionString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLSystem.GetClientVersionString
	 */
	struct UFLSystem_GetClientVersionString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLTexture2DArray.Texture2DArray_SplitTexturesIntoValidGroups
	 */
	struct UFLTexture2DArray_Texture2DArray_SplitTexturesIntoValidGroups_Params
	{
	public:
		TArray<class UTexture2D*>                                  Textures;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class UTexture2DArrayWrapper*>                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLTexture2DArray.Texture2DArray_SetTextures
	 */
	struct UFLTexture2DArray_Texture2DArray_SetTextures_Params
	{
	public:
		class UTexture2DArray*                                     textureArray;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UTexture2D*>                                  Textures;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.FLTexture2DArray.Texture2DArray_GetTextures
	 */
	struct UFLTexture2DArray_Texture2DArray_GetTextures_Params
	{
	public:
		class UTexture2DArray*                                     textureArray;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UTexture2D*>                                  ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameConfig.GetGameConfig
	 */
	struct UGameConfig_GetGameConfig_Params
	{
	public:
		class UGameConfig*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameConfig.ApplyStartupConfig
	 */
	struct UGameConfig_ApplyStartupConfig_Params
	{
	public:
		struct FStartupConfig                                      Config;                                                  // 0x0000(0x0038)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameDifficultyConfig.IsSleepRestoreHealth
	 */
	struct UGameDifficultyConfig_IsSleepRestoreHealth_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameDifficultyConfig.IsShowTips
	 */
	struct UGameDifficultyConfig_IsShowTips_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameDifficultyConfig.IsShowLocationOnMap
	 */
	struct UGameDifficultyConfig_IsShowLocationOnMap_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameDifficultyConfig.IsNoEnemies
	 */
	struct UGameDifficultyConfig_IsNoEnemies_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameDifficultyConfig.IsNoAnomalies
	 */
	struct UGameDifficultyConfig_IsNoAnomalies_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameDifficultyConfig.GetWeaponShotDamageMultiplier
	 */
	struct UGameDifficultyConfig_GetWeaponShotDamageMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameDifficultyConfig.GetTracersShowType
	 */
	struct UGameDifficultyConfig_GetTracersShowType_Params
	{
	public:
		ETracersShowType                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameDifficultyConfig.GetTideTimeMultiplier
	 */
	struct UGameDifficultyConfig_GetTideTimeMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameDifficultyConfig.GetMissionMoneyRewardMultiplier
	 */
	struct UGameDifficultyConfig_GetMissionMoneyRewardMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameDifficultyConfig.GetItemSellPriceMultiplier
	 */
	struct UGameDifficultyConfig_GetItemSellPriceMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameDifficultyConfig.GetItemsDropType
	 */
	struct UGameDifficultyConfig_GetItemsDropType_Params
	{
	public:
		EItemsDropType                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameDifficultyConfig.GetHungerMultiplier
	 */
	struct UGameDifficultyConfig_GetHungerMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameDifficultyConfig.GetGameDifficultyConfig
	 */
	struct UGameDifficultyConfig_GetGameDifficultyConfig_Params
	{
	public:
		class UGameDifficultyConfig*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameDifficultyConfig.GetEnemySense
	 */
	struct UGameDifficultyConfig_GetEnemySense_Params
	{
	public:
		struct FEnemySenseMultiplier                               ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameDifficultyConfig.GetEnemyHealthMultiplier
	 */
	struct UGameDifficultyConfig_GetEnemyHealthMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameDifficultyConfig.GetEnemyDamageMultiplier
	 */
	struct UGameDifficultyConfig_GetEnemyDamageMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameDifficultyConfig.GetEnemyCountModifier
	 */
	struct UGameDifficultyConfig_GetEnemyCountModifier_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameDifficultyConfig.GetAnomalyDamageMultiplier
	 */
	struct UGameDifficultyConfig_GetAnomalyDamageMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameDifficultyConfig.GetAnomalyAmountModifier
	 */
	struct UGameDifficultyConfig_GetAnomalyAmountModifier_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GripSelectorsControllerInterface.ShowSelector
	 */
	struct UGripSelectorsControllerInterface_ShowSelector_Params
	{
	public:
		EPRHand                                                    hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Distance;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GripSelectorsControllerInterface.HideSelector
	 */
	struct UGripSelectorsControllerInterface_HideSelector_Params
	{
	public:
		EPRHand                                                    hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GripSelectorsControllerInterface.HideAllSelectors
	 */
	struct UGripSelectorsControllerInterface_HideAllSelectors_Params
	{	};

	/**
	 * Function IntoTheRadius.HapticsConfig.StopHaptics
	 */
	struct UHapticsConfig_StopHaptics_Params
	{	};

	/**
	 * Function IntoTheRadius.HapticsConfig.PlayRecoilHaptics
	 */
	struct UHapticsConfig_PlayRecoilHaptics_Params
	{
	public:
		bool                                                       bIsLeft;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D2KJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PowerAlpha;                                              // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.HapticsConfig.PlayHapticsWithRotation
	 */
	struct UHapticsConfig_PlayHapticsWithRotation_Params
	{
	public:
		EHapticsType                                               Type;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XLGI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotationOption                                     RotationOption;                                          // 0x0004(0x0008)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.HapticsConfig.PlayHaptics
	 */
	struct UHapticsConfig_PlayHaptics_Params
	{
	public:
		EHapticsType                                               Type;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.HapticsConfig.GetHapticsConfig
	 */
	struct UHapticsConfig_GetHapticsConfig_Params
	{
	public:
		class UHapticsConfig*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.HolsterComponent.CheckInteractionMode
	 */
	struct UHolsterComponent_CheckInteractionMode_Params
	{
	public:
		EInventoryMode                                             Mode;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       allow;                                                   // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.HolsterComponent.CalcDistance
	 */
	struct UHolsterComponent_CalcDistance_Params
	{
	public:
		class AActor*                                              targetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInRange;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RVZE[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Distance;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.HolsterComponent.AttachAndLerpHold
	 */
	struct UHolsterComponent_AttachAndLerpHold_Params
	{	};

	/**
	 * Function IntoTheRadius.IALSAnimation.SetOverlayOverrideState
	 */
	struct UIALSAnimation_SetOverlayOverrideState_Params
	{
	public:
		int32_t                                                    NewOverlayOverrideState;                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IALSAnimation.SetGroundedEntryState
	 */
	struct UIALSAnimation_SetGroundedEntryState_Params
	{
	public:
		EGroundedEntryState                                        NewGroundedEntryState;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IALSAnimation.ReloadWeapon
	 */
	struct UIALSAnimation_ReloadWeapon_Params
	{	};

	/**
	 * Function IntoTheRadius.IALSAnimation.OnJumped
	 */
	struct UIALSAnimation_OnJumped_Params
	{	};

	/**
	 * Function IntoTheRadius.IALSCharacter.SetViewMode
	 */
	struct UIALSCharacter_SetViewMode_Params
	{
	public:
		EViewMode                                                  ViewMode;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IALSCharacter.SetStance
	 */
	struct UIALSCharacter_SetStance_Params
	{
	public:
		EStance                                                    NewStance;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IALSCharacter.SetRotationMode
	 */
	struct UIALSCharacter_SetRotationMode_Params
	{
	public:
		ERotationMode                                              NewRotationMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IALSCharacter.SetOverlayState
	 */
	struct UIALSCharacter_SetOverlayState_Params
	{
	public:
		EOverlayState                                              NewOverLayState;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IALSCharacter.SetMovementState
	 */
	struct UIALSCharacter_SetMovementState_Params
	{
	public:
		EMovementState                                             NewMovementState;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IALSCharacter.SetMovementAction
	 */
	struct UIALSCharacter_SetMovementAction_Params
	{
	public:
		EMovementAction                                            NewMovementAction;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IALSCharacter.SetGait
	 */
	struct UIALSCharacter_SetGait_Params
	{
	public:
		EGait                                                      NewGait;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IALSCharacter.GetEssentialValues
	 */
	struct UIALSCharacter_GetEssentialValues_Params
	{
	public:
		struct FVector                                             OutVelocity;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutAcceleration;                                         // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OutMovementInput;                                        // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OutIsMoving;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OutHasMovementInput;                                     // 0x0025(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XRV6[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OutSpeed;                                                // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      OutMovementInputAmount;                                  // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            OutRotator;                                              // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      OutAimYawRate;                                           // 0x003C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IALSCharacter.GetCurrentStates
	 */
	struct UIALSCharacter_GetCurrentStates_Params
	{
	public:
		Engine_EMovementMode                                       OutPawnMovementMode;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementState                                             OutMovementState;                                        // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementState                                             OutPrevMovementState;                                    // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMovementAction                                            OutMovementAction;                                       // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERotationMode                                              OutRotationMode;                                         // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGait                                                      OutActualGait;                                           // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EStance                                                    OutActualStance;                                         // 0x0006(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EViewMode                                                  OutViewMode;                                             // 0x0007(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOverlayState                                              OutOverlayState;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IAmmo.GetAmmoInfo
	 */
	struct UIAmmo_GetAmmoInfo_Params
	{
	public:
		struct FAmmoInfo                                           ReturnValue;                                             // 0x0000(0x0058)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IAmmoContainer.SetLoadingLock
	 */
	struct UIAmmoContainer_SetLoadingLock_Params
	{
	public:
		bool                                                       lock;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IAmmoContainer.OnAmmoRemoved
	 */
	struct UIAmmoContainer_OnAmmoRemoved_Params
	{	};

	/**
	 * Function IntoTheRadius.IAmmoContainer.OnAmmoAdded
	 */
	struct UIAmmoContainer_OnAmmoAdded_Params
	{	};

	/**
	 * Function IntoTheRadius.IAmmoContainer.IsLoadingLocked
	 */
	struct UIAmmoContainer_IsLoadingLocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IAmmoContainer.GetAmmoContainerInfo
	 */
	struct UIAmmoContainer_GetAmmoContainerInfo_Params
	{
	public:
		struct FPRAmmoContainerInfo                                Info;                                                    // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IAmmoContainer.GetAmmoContainerData
	 */
	struct UIAmmoContainer_GetAmmoContainerData_Params
	{
	public:
		struct FAmmoContainerData                                  Data;                                                    // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IAnomaly.GetTypeID
	 */
	struct UIAnomaly_GetTypeID_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IAnomaly.GetRadius
	 */
	struct UIAnomaly_GetRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IAnomaly.GetBaseDamage
	 */
	struct UIAnomaly_GetBaseDamage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IAnomaly.GetAnomalyInfo
	 */
	struct UIAnomaly_GetAnomalyInfo_Params
	{
	public:
		struct FPRAnomalyInfo                                      ReturnValue;                                             // 0x0000(0x0058)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IAttachment.IsAttached
	 */
	struct UIAttachment_IsAttached_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IAttachment.DetachFrom
	 */
	struct UIAttachment_DetachFrom_Params
	{
	public:
		class UAttachmentSlotComponent*                            SlotComponent;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IAttachment.AttachTo
	 */
	struct UIAttachment_AttachTo_Params
	{
	public:
		class UAttachmentSlotComponent*                            SlotComponent;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMakeSound;                                              // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IAttack.StopAttack
	 */
	struct UIAttack_StopAttack_Params
	{	};

	/**
	 * Function IntoTheRadius.IAttack.StartAttack
	 */
	struct UIAttack_StartAttack_Params
	{	};

	/**
	 * Function IntoTheRadius.IAttack.SetWeaponVisible
	 */
	struct UIAttack_SetWeaponVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IAttack.Reload
	 */
	struct UIAttack_Reload_Params
	{	};

	/**
	 * Function IntoTheRadius.IAttack.OwnerInitialised
	 */
	struct UIAttack_OwnerInitialised_Params
	{	};

	/**
	 * Function IntoTheRadius.IAttack.OnOutOfAmmo
	 */
	struct UIAttack_OnOutOfAmmo_Params
	{	};

	/**
	 * Function IntoTheRadius.IAttack.OnMeleeAttackHit
	 */
	struct UIAttack_OnMeleeAttackHit_Params
	{	};

	/**
	 * Function IntoTheRadius.IAttack.NeedWaitForFinish
	 */
	struct UIAttack_NeedWaitForFinish_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IAttack.IsReloading
	 */
	struct UIAttack_IsReloading_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IAttack.IsReadyToAttack
	 */
	struct UIAttack_IsReadyToAttack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IAttack.IsAttackValid
	 */
	struct UIAttack_IsAttackValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IAttack.IsAttacking
	 */
	struct UIAttack_IsAttacking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IAttack.GetWeaponActor
	 */
	struct UIAttack_GetWeaponActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IAttack.GetFirePointComponent
	 */
	struct UIAttack_GetFirePointComponent_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IAttack.GetAttackDistance
	 */
	struct UIAttack_GetAttackDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IAttack.DestroyWeapon
	 */
	struct UIAttack_DestroyWeapon_Params
	{	};

	/**
	 * Function IntoTheRadius.IBotComponent.OwnerInitialized
	 */
	struct UIBotComponent_OwnerInitialized_Params
	{	};

	/**
	 * Function IntoTheRadius.IBotController.SetTargetActor
	 */
	struct UIBotController_SetTargetActor_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotController.SetLeader
	 */
	struct UIBotController_SetLeader_Params
	{
	public:
		class APRBasicActor*                                       NewLeader;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotController.SetDesiredPosition
	 */
	struct UIBotController_SetDesiredPosition_Params
	{
	public:
		struct FVector                                             Pos;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotController.ReportEnemyLocation
	 */
	struct UIBotController_ReportEnemyLocation_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotController.RemoveSquadMember
	 */
	struct UIBotController_RemoveSquadMember_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotController.OrderCover
	 */
	struct UIBotController_OrderCover_Params
	{	};

	/**
	 * Function IntoTheRadius.IBotController.OrderCompleted
	 */
	struct UIBotController_OrderCompleted_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotController.OrderAttack
	 */
	struct UIBotController_OrderAttack_Params
	{	};

	/**
	 * Function IntoTheRadius.IBotController.GetTargetLocation
	 */
	struct UIBotController_GetTargetLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotController.GetTargetActor
	 */
	struct UIBotController_GetTargetActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotController.GetSquadMembers
	 */
	struct UIBotController_GetSquadMembers_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotController.GetPerception
	 */
	struct UIBotController_GetPerception_Params
	{
	public:
		class UPRNpcPerceptionComponent*                           ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotController.GetDesiredPosition
	 */
	struct UIBotController_GetDesiredPosition_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotController.GetCommand
	 */
	struct UIBotController_GetCommand_Params
	{
	public:
		ECharCommand                                               CurrentCommand;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotController.AddSquadMember
	 */
	struct UIBotController_AddSquadMember_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotPawn.TeleportToNextPos
	 */
	struct UIBotPawn_TeleportToNextPos_Params
	{	};

	/**
	 * Function IntoTheRadius.IBotPawn.StopMovement
	 */
	struct UIBotPawn_StopMovement_Params
	{	};

	/**
	 * Function IntoTheRadius.IBotPawn.SetTargetRotation
	 */
	struct UIBotPawn_SetTargetRotation_Params
	{
	public:
		struct FRotator                                            TargetRotation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotPawn.SetFlyForce
	 */
	struct UIBotPawn_SetFlyForce_Params
	{
	public:
		struct FVector                                             Force;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotPawn.SetBotMovementMode
	 */
	struct UIBotPawn_SetBotMovementMode_Params
	{
	public:
		EBotMovementMode                                           MovementMode;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Changed;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotPawn.ReportDeath
	 */
	struct UIBotPawn_ReportDeath_Params
	{
	public:
		class AActor*                                              DeadActorRef;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotPawn.OnExitPlayerViewport
	 */
	struct UIBotPawn_OnExitPlayerViewport_Params
	{	};

	/**
	 * Function IntoTheRadius.IBotPawn.OnEnterPlayerViewport
	 */
	struct UIBotPawn_OnEnterPlayerViewport_Params
	{	};

	/**
	 * Function IntoTheRadius.IBotPawn.GetStealth
	 */
	struct UIBotPawn_GetStealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotPawn.GetSelection
	 */
	struct UIBotPawn_GetSelection_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotPawn.GetPerception
	 */
	struct UIBotPawn_GetPerception_Params
	{
	public:
		class UPRNpcPerceptionComponent*                           ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotPawn.GetPatrolTargets
	 */
	struct UIBotPawn_GetPatrolTargets_Params
	{
	public:
		bool                                                       IsValidOut;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FKDX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      TargetsOut;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotPawn.GetPatrolPath
	 */
	struct UIBotPawn_GetPatrolPath_Params
	{
	public:
		class USplineComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotPawn.GetOptimalRange
	 */
	struct UIBotPawn_GetOptimalRange_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotPawn.GetIdleWalkDistance
	 */
	struct UIBotPawn_GetIdleWalkDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotPawn.GetBotShootingComponent
	 */
	struct UIBotPawn_GetBotShootingComponent_Params
	{
	public:
		class UActorComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotPawn.GetBotMovementMode
	 */
	struct UIBotPawn_GetBotMovementMode_Params
	{
	public:
		EBotMovementMode                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotPawn.GetBoneTransform
	 */
	struct UIBotPawn_GetBoneTransform_Params
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FWKG[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotPawn.GetAliveStats
	 */
	struct UIBotPawn_GetAliveStats_Params
	{
	public:
		class UActorComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IBotPawn.CcmStopWaitingForCombat
	 */
	struct UIBotPawn_CcmStopWaitingForCombat_Params
	{	};

	/**
	 * Function IntoTheRadius.IBotPawn.CcmStartWaitingForCombat
	 */
	struct UIBotPawn_CcmStartWaitingForCombat_Params
	{	};

	/**
	 * Function IntoTheRadius.IBotPawn.BroadcastEnemyLoc
	 */
	struct UIBotPawn_BroadcastEnemyLoc_Params
	{	};

	/**
	 * Function IntoTheRadius.ICommandEvents.OnWalkCommandStarted
	 */
	struct UICommandEvents_OnWalkCommandStarted_Params
	{	};

	/**
	 * Function IntoTheRadius.ICommandEvents.OnWalkCommandFinished
	 */
	struct UICommandEvents_OnWalkCommandFinished_Params
	{	};

	/**
	 * Function IntoTheRadius.ICommandEvents.OnIdleCommandStarted
	 */
	struct UICommandEvents_OnIdleCommandStarted_Params
	{	};

	/**
	 * Function IntoTheRadius.ICommandEvents.OnIdleCommandFinished
	 */
	struct UICommandEvents_OnIdleCommandFinished_Params
	{	};

	/**
	 * Function IntoTheRadius.ICommandEvents.OnAttackCommandStarted
	 */
	struct UICommandEvents_OnAttackCommandStarted_Params
	{	};

	/**
	 * Function IntoTheRadius.ICommandEvents.OnAttackCommandFinished
	 */
	struct UICommandEvents_OnAttackCommandFinished_Params
	{	};

	/**
	 * Function IntoTheRadius.ComputerPage.ShowPage
	 */
	struct UComputerPage_ShowPage_Params
	{	};

	/**
	 * Function IntoTheRadius.ComputerPage.PageTick
	 */
	struct UComputerPage_PageTick_Params
	{	};

	/**
	 * Function IntoTheRadius.ComputerPage.InitializeByActor
	 */
	struct UComputerPage_InitializeByActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.ComputerPage.HidePage
	 */
	struct UComputerPage_HidePage_Params
	{	};

	/**
	 * Function IntoTheRadius.IDamageCategory.GetDamageCategory
	 */
	struct UIDamageCategory_GetDamageCategory_Params
	{
	public:
		EDamageCategory                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DebugAndCheats.SwitchCheatInvisibility
	 */
	struct UDebugAndCheats_SwitchCheatInvisibility_Params
	{	};

	/**
	 * Function IntoTheRadius.DebugAndCheats.SwitchCheatGodMode
	 */
	struct UDebugAndCheats_SwitchCheatGodMode_Params
	{	};

	/**
	 * Function IntoTheRadius.DebugAndCheats.SetCheatInvisibility
	 */
	struct UDebugAndCheats_SetCheatInvisibility_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DebugAndCheats.SetCheatGodMode
	 */
	struct UDebugAndCheats_SetCheatGodMode_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DebugAndCheats.GetCheatSpeed
	 */
	struct UDebugAndCheats_GetCheatSpeed_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DebugAndCheats.GetCheatInvisibility
	 */
	struct UDebugAndCheats_GetCheatInvisibility_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.DebugAndCheats.GetCheatGodMode
	 */
	struct UDebugAndCheats_GetCheatGodMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IHandPoser.GetPoseConfig
	 */
	struct UIHandPoser_GetPoseConfig_Params
	{
	public:
		struct FPRHandPoseInfo                                     Info;                                                    // 0x0000(0x0140)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IHandPoser.GetItemShift
	 */
	struct UIHandPoser_GetItemShift_Params
	{
	public:
		struct FTransform                                          Shift;                                                   // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IHealthStatus.IsAlive
	 */
	struct UIHealthStatus_IsAlive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IHealthStatus.GetHealthPercent
	 */
	struct UIHealthStatus_GetHealthPercent_Params
	{
	public:
		float                                                      HealthPercent;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IHealthStatus.GetHealth
	 */
	struct UIHealthStatus_GetHealth_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IHealthStatus.ChangeHealth
	 */
	struct UIHealthStatus_ChangeHealth_Params
	{
	public:
		float                                                      HealthDelta;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IInstanceID.GetInstanceID
	 */
	struct UIInstanceID_GetInstanceID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IItemHolder.SpawnContent
	 */
	struct UIItemHolder_SpawnContent_Params
	{	};

	/**
	 * Function IntoTheRadius.IItemHolder.SetHolderVisibility
	 */
	struct UIItemHolder_SetHolderVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IItemHolder.SetContentVisibility
	 */
	struct UIItemHolder_SetContentVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IItemHolder.RefreshHolder
	 */
	struct UIItemHolder_RefreshHolder_Params
	{	};

	/**
	 * Function IntoTheRadius.IItemHolder.IsSnapHolder
	 */
	struct UIItemHolder_IsSnapHolder_Params
	{
	public:
		bool                                                       snapHolder;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IItemHolder.IsAcceptItemActor
	 */
	struct UIItemHolder_IsAcceptItemActor_Params
	{
	public:
		class AActor*                                              itemActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       onlyIfFree;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       accept;                                                  // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IItemHolder.GetHolderID
	 */
	struct UIItemHolder_GetHolderID_Params
	{
	public:
		struct FGameplayTag                                        holderID;                                                // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.ILevelPreparator.IsPreparing
	 */
	struct UILevelPreparator_IsPreparing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.ILevelPreparator.CheckPreparator
	 */
	struct UILevelPreparator_CheckPreparator_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.ILootSpawner.SpawnLoot
	 */
	struct UILootSpawner_SpawnLoot_Params
	{	};

	/**
	 * Function IntoTheRadius.ILootSpawner.GenerateLoot
	 */
	struct UILootSpawner_GenerateLoot_Params
	{	};

	/**
	 * Function IntoTheRadius.InfosConfig.SetItemProxyClass
	 */
	struct UInfosConfig_SetItemProxyClass_Params
	{
	public:
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ProxyClass;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.ResolveItemTypeID
	 */
	struct UInfosConfig_ResolveItemTypeID_Params
	{
	public:
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.IsValidNPC
	 */
	struct UInfosConfig_IsValidNPC_Params
	{
	public:
		struct FGameplayTag                                        npcTypeID;                                               // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.IsValidAnomaly
	 */
	struct UInfosConfig_IsValidAnomaly_Params
	{
	public:
		struct FGameplayTag                                        anomalyTypeID;                                           // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.IsAmmoContainer
	 */
	struct UInfosConfig_IsAmmoContainer_Params
	{
	public:
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.GetUpgradeInfo
	 */
	struct UInfosConfig_GetUpgradeInfo_Params
	{
	public:
		struct FGameplayTag                                        UpgradeID;                                               // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T83H[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUpgradeInfo                                        ReturnValue;                                             // 0x0010(0x0230)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.GetTypeSellPrice
	 */
	struct UInfosConfig_GetTypeSellPrice_Params
	{
	public:
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.GetTypeLevelRequirement
	 */
	struct UInfosConfig_GetTypeLevelRequirement_Params
	{
	public:
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.GetTypeBuyPrice
	 */
	struct UInfosConfig_GetTypeBuyPrice_Params
	{
	public:
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.GetSlotInfo
	 */
	struct UInfosConfig_GetSlotInfo_Params
	{
	public:
		struct FGameplayTag                                        TypeID;                                                  // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAttachmentSlotInfo                                 ReturnValue;                                             // 0x0008(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.GetNPCsListByCores
	 */
	struct UInfosConfig_GetNPCsListByCores_Params
	{
	public:
		TArray<struct FGameplayTag>                                coreTags;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FGameplayTag>                                ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.GetNPCInfos
	 */
	struct UInfosConfig_GetNPCInfos_Params
	{
	public:
		TMap<struct FGameplayTag, struct FPRNPCInfo>               ReturnValue;                                             // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.GetNPCInfo
	 */
	struct UInfosConfig_GetNPCInfo_Params
	{
	public:
		struct FGameplayTag                                        npcTypeID;                                               // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPRNPCInfo                                          ReturnValue;                                             // 0x0008(0x01B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.GetNPCClass
	 */
	struct UInfosConfig_GetNPCClass_Params
	{
	public:
		struct FGameplayTag                                        npcTypeID;                                               // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.GetNPCByCore
	 */
	struct UInfosConfig_GetNPCByCore_Params
	{
	public:
		struct FGameplayTag                                        coreTag;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.GetItemProxyClass
	 */
	struct UInfosConfig_GetItemProxyClass_Params
	{
	public:
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.GetItemClass
	 */
	struct UInfosConfig_GetItemClass_Params
	{
	public:
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.GetInfosConfig
	 */
	struct UInfosConfig_GetInfosConfig_Params
	{
	public:
		class UInfosConfig*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.GetContainersForAmmo
	 */
	struct UInfosConfig_GetContainersForAmmo_Params
	{
	public:
		struct FGameplayTag                                        AmmoTypeID;                                              // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPRAmmoContainerInfo>                        ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.GetBasicWeaponInfo
	 */
	struct UInfosConfig_GetBasicWeaponInfo_Params
	{
	public:
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FWeaponInfo                                         ReturnValue;                                             // 0x0008(0x0110)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.GetBasicItemInfo
	 */
	struct UInfosConfig_GetBasicItemInfo_Params
	{
	public:
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YBC8[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPRItemInfo                                         ReturnValue;                                             // 0x0010(0x01A0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.GetBasicAmmoContainerInfo
	 */
	struct UInfosConfig_GetBasicAmmoContainerInfo_Params
	{
	public:
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPRAmmoContainerInfo                                ReturnValue;                                             // 0x0008(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.GetAnotherItemTypeID
	 */
	struct UInfosConfig_GetAnotherItemTypeID_Params
	{
	public:
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       prev;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2RVM[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        ReturnValue;                                             // 0x000C(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.GetAnomalyInfo
	 */
	struct UInfosConfig_GetAnomalyInfo_Params
	{
	public:
		struct FGameplayTag                                        anomalyTypeID;                                           // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPRAnomalyInfo                                      ReturnValue;                                             // 0x0008(0x0058)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.GetAnomalyClass
	 */
	struct UInfosConfig_GetAnomalyClass_Params
	{
	public:
		struct FGameplayTag                                        anomalyTypeID;                                           // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.GetAmmoTypeName
	 */
	struct UInfosConfig_GetAmmoTypeName_Params
	{
	public:
		struct FGameplayTag                                        TypeID;                                                  // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.GetAmmoInfo
	 */
	struct UInfosConfig_GetAmmoInfo_Params
	{
	public:
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAmmoInfo                                           ReturnValue;                                             // 0x0008(0x0058)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InfosConfig.GetAmmoCaliberName
	 */
	struct UInfosConfig_GetAmmoCaliberName_Params
	{
	public:
		struct FGameplayTag                                        CaliberID;                                               // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IngameMenuController.OnIngameMenuDeactivated
	 */
	struct AIngameMenuController_OnIngameMenuDeactivated_Params
	{	};

	/**
	 * Function IntoTheRadius.IngameMenuController.OnIngameMenuActivated
	 */
	struct AIngameMenuController_OnIngameMenuActivated_Params
	{	};

	/**
	 * Function IntoTheRadius.IngameMenuControllerInterface.SwitchIngameMenu
	 */
	struct UIngameMenuControllerInterface_SwitchIngameMenu_Params
	{	};

	/**
	 * Function IntoTheRadius.IngameMenuControllerInterface.IsIngameMenuActive
	 */
	struct UIngameMenuControllerInterface_IsIngameMenuActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IngameMenuControllerInterface.GetPreMenuParameters
	 */
	struct UIngameMenuControllerInterface_GetPreMenuParameters_Params
	{
	public:
		struct FTransform                                          preMenuTransform;                                        // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             preMenuVelocity;                                         // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IngameMenuControllerInterface.CloseIngameMenu
	 */
	struct UIngameMenuControllerInterface_CloseIngameMenu_Params
	{	};

	/**
	 * Function IntoTheRadius.INIManager.TrySetVector
	 */
	struct UINIManager_TrySetVector_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Value;                                                   // 0x0030(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x003C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.INIManager.TrySetString
	 */
	struct UINIManager_TrySetString_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.INIManager.TrySetInt
	 */
	struct UINIManager_TrySetInt_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.INIManager.TrySetFloat
	 */
	struct UINIManager_TrySetFloat_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.INIManager.TrySetBool
	 */
	struct UINIManager_TrySetBool_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bValue;                                                  // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.INIManager.TryGetVector
	 */
	struct UINIManager_TryGetVector_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.INIManager.TryGetString
	 */
	struct UINIManager_TryGetString_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.INIManager.TryGetInt
	 */
	struct UINIManager_TryGetInt_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.INIManager.TryGetFloat
	 */
	struct UINIManager_TryGetFloat_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.INIManager.TryGetBool
	 */
	struct UINIManager_TryGetBool_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.INIManager.StoreInUserSave
	 */
	struct UINIManager_StoreInUserSave_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.INIManager.GetStringSilent
	 */
	struct UINIManager_GetStringSilent_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.INIManager.GetINIManager
	 */
	struct UINIManager_GetINIManager_Params
	{
	public:
		class UINIManager*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.INIManager.Exists
	 */
	struct UINIManager_Exists_Params
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Section;                                                 // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0020(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.INPC.SetDebug
	 */
	struct UINPC_SetDebug_Params
	{
	public:
		bool                                                       NewDebug;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.INPC.IsCriticalHit
	 */
	struct UINPC_IsCriticalHit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.INPC.IsAttacksLocked
	 */
	struct UINPC_IsAttacksLocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.INPC.IsArmored
	 */
	struct UINPC_IsArmored_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.INPC.GetNPCInfo
	 */
	struct UINPC_GetNPCInfo_Params
	{
	public:
		struct FPRNPCInfo                                          ReturnValue;                                             // 0x0000(0x01B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.INPC.GetIDs
	 */
	struct UINPC_GetIDs_Params
	{
	public:
		struct FGameplayTag                                        TypeID;                                                  // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InstanceId;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.INPC.Alert
	 */
	struct UINPC_Alert_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VNMX[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Location;                                                // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameInventory.SetAmmoBeltContent
	 */
	struct UGameInventory_SetAmmoBeltContent_Params
	{
	public:
		class FString                                              InstanceId;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FGameplayTag>                                beltContent;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameInventory.GetItem
	 */
	struct UGameInventory_GetItem_Params
	{
	public:
		class FString                                              InstanceId;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryItem*                                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameInventory.GetAmmoBeltContent
	 */
	struct UGameInventory_GetAmmoBeltContent_Params
	{
	public:
		class FString                                              InstanceId;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FGameplayTag>                                beltContent;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.UpdateUpgrades
	 */
	struct UInventoryItem_UpdateUpgrades_Params
	{
	public:
		TArray<struct FGameplayTag>                                UpgradeIDs;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bChangeMoney;                                            // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.UpdateDurabilityByUpgrade
	 */
	struct UInventoryItem_UpdateDurabilityByUpgrade_Params
	{
	public:
		struct FGameplayTag                                        UpgradeID;                                               // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.SwitchFireMode
	 */
	struct UInventoryItem_SwitchFireMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.SetFireMode
	 */
	struct UInventoryItem_SetFireMode_Params
	{
	public:
		EWeaponFireMode                                            FireMode;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.SetDurability
	 */
	struct UInventoryItem_SetDurability_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.SetChamberAmmo
	 */
	struct UInventoryItem_SetChamberAmmo_Params
	{
	public:
		struct FGameplayTag                                        ChamberAmmo;                                             // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.SetBoltState
	 */
	struct UInventoryItem_SetBoltState_Params
	{
	public:
		EWeaponBoltState                                           BoltState;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.SetAmmo
	 */
	struct UInventoryItem_SetAmmo_Params
	{
	public:
		TArray<struct FGameplayTag>                                Ammo;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.RemoveUpgrade
	 */
	struct UInventoryItem_RemoveUpgrade_Params
	{
	public:
		struct FGameplayTag                                        UpgradeID;                                               // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.RemoveExactAmmo
	 */
	struct UInventoryItem_RemoveExactAmmo_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VYLT[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        Ammo;                                                    // 0x0008(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.RemoveAmmo
	 */
	struct UInventoryItem_RemoveAmmo_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JDRC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        Ammo;                                                    // 0x0004(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.PrintItem
	 */
	struct UInventoryItem_PrintItem_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.IsUpgradeAvailable
	 */
	struct UInventoryItem_IsUpgradeAvailable_Params
	{
	public:
		struct FGameplayTag                                        UpgradeID;                                               // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMoneyCheck;                                             // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.IsRepairable
	 */
	struct UInventoryItem_IsRepairable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.IsArmorItem
	 */
	struct UInventoryItem_IsArmorItem_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.IsAmmoTypeAcceptable
	 */
	struct UInventoryItem_IsAmmoTypeAcceptable_Params
	{
	public:
		struct FGameplayTag                                        AmmoTag;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.IsActorOfAcceptableAmmo
	 */
	struct UInventoryItem_IsActorOfAcceptableAmmo_Params
	{
	public:
		class AActor*                                              AmmoActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAcceptable;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LZ3H[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        AmmoTag;                                                 // 0x000C(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.InstallUpgrade
	 */
	struct UInventoryItem_InstallUpgrade_Params
	{
	public:
		struct FGameplayTag                                        UpgradeID;                                               // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bChangeMoney;                                            // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.HasFireMode
	 */
	struct UInventoryItem_HasFireMode_Params
	{
	public:
		EWeaponFireMode                                            FireMode;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.HasDamageCategoryArmor
	 */
	struct UInventoryItem_HasDamageCategoryArmor_Params
	{
	public:
		EDamageCategory                                            DamageCategory;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.GetWeaponInfo
	 */
	struct UInventoryItem_GetWeaponInfo_Params
	{
	public:
		struct FWeaponInfo                                         ReturnValue;                                             // 0x0000(0x0110)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.GetSilencerAttachment
	 */
	struct UInventoryItem_GetSilencerAttachment_Params
	{
	public:
		class UInventoryItem*                                      AttachItem;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.GetSellPrice
	 */
	struct UInventoryItem_GetSellPrice_Params
	{
	public:
		bool                                                       bIgnoreIfAttached;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bItemOnly;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1JMD[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.GetRepairTime
	 */
	struct UInventoryItem_GetRepairTime_Params
	{
	public:
		bool                                                       bIgnoreIfAttached;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2AL1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.GetRepairPrice
	 */
	struct UInventoryItem_GetRepairPrice_Params
	{
	public:
		bool                                                       bIgnoreIfAttached;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QGDP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.GetPossibleUpgrades
	 */
	struct UInventoryItem_GetPossibleUpgrades_Params
	{
	public:
		TArray<struct FGameplayTag>                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.GetNextAmmo
	 */
	struct UInventoryItem_GetNextAmmo_Params
	{
	public:
		struct FGameplayTag                                        NextAmmoTag;                                             // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.GetMaxDurability
	 */
	struct UInventoryItem_GetMaxDurability_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.GetMaxAmmoCapacity
	 */
	struct UInventoryItem_GetMaxAmmoCapacity_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.GetMagAttachment
	 */
	struct UInventoryItem_GetMagAttachment_Params
	{
	public:
		class UInventoryItem*                                      AttachItem;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.GetItemWeight
	 */
	struct UInventoryItem_GetItemWeight_Params
	{
	public:
		bool                                                       bIgnoreAttachments;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A1UU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.GetItemInfo
	 */
	struct UInventoryItem_GetItemInfo_Params
	{
	public:
		struct FPRItemInfo                                         ReturnValue;                                             // 0x0000(0x01A0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.GetFireMode
	 */
	struct UInventoryItem_GetFireMode_Params
	{
	public:
		EWeaponFireMode                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.GetDurabilityRatio
	 */
	struct UInventoryItem_GetDurabilityRatio_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.GetDamageCategoryArmor
	 */
	struct UInventoryItem_GetDamageCategoryArmor_Params
	{
	public:
		EDamageCategory                                            DamageCategory;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7K4U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.GetBoltState
	 */
	struct UInventoryItem_GetBoltState_Params
	{
	public:
		EWeaponBoltState                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.GetAttachments
	 */
	struct UInventoryItem_GetAttachments_Params
	{
	public:
		struct FGameplayTag                                        TypeTag;                                                 // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UInventoryItem*>                              AttachItems;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.GetAmmoTypeName
	 */
	struct UInventoryItem_GetAmmoTypeName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.GetAmmoString
	 */
	struct UInventoryItem_GetAmmoString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.GetAmmoContainerInfo
	 */
	struct UInventoryItem_GetAmmoContainerInfo_Params
	{
	public:
		struct FPRAmmoContainerInfo                                ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.GetAllAttachments
	 */
	struct UInventoryItem_GetAllAttachments_Params
	{
	public:
		TArray<class UInventoryItem*>                              AttachItems;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.ChangeDurabilityByRatio
	 */
	struct UInventoryItem_ChangeDurabilityByRatio_Params
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDamageCategory                                            DamageCategory;                                          // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QUCO[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ChangedBy;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.ChangeDurability
	 */
	struct UInventoryItem_ChangeDurability_Params
	{
	public:
		float                                                      bY;                                                      // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDamageCategory                                            DamageCategory;                                          // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EZLJ[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ChangedBy;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.ChangeAmmoContainerDurability
	 */
	struct UInventoryItem_ChangeAmmoContainerDurability_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6MRD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ChangedBy;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryItem.ChamberNextAmmo
	 */
	struct UInventoryItem_ChamberNextAmmo_Params
	{	};

	/**
	 * Function IntoTheRadius.InventoryItem.AddAmmo
	 */
	struct UInventoryItem_AddAmmo_Params
	{
	public:
		struct FGameplayTag                                        AmmoTag;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.TakeActor
	 */
	struct UInventoryManager_TakeActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        holderID;                                                // 0x0008(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VEOS[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInventoryItem*                                      InventoryItem;                                           // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.SellItems
	 */
	struct UInventoryManager_SellItems_Params
	{
	public:
		TArray<class AActor*>                                      Items;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		float                                                      PriceMultiplier;                                         // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.RepairItems
	 */
	struct UInventoryManager_RepairItems_Params
	{
	public:
		TArray<class UInventoryItem*>                              Items;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.RemovePlayerItems
	 */
	struct UInventoryManager_RemovePlayerItems_Params
	{
	public:
		bool                                                       bDestroyActors;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.RemoveItemByRef
	 */
	struct UInventoryManager_RemoveItemByRef_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.RemoveItem
	 */
	struct UInventoryManager_RemoveItem_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.RecordUniqueItemSpawn
	 */
	struct UInventoryManager_RecordUniqueItemSpawn_Params
	{
	public:
		class FString                                              InstanceId;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.RecordStashOpen
	 */
	struct UInventoryManager_RecordStashOpen_Params
	{
	public:
		struct FGameplayTag                                        stashType;                                               // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              stashID;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.OnSecondsAddedToTime
	 */
	struct UInventoryManager_OnSecondsAddedToTime_Params
	{
	public:
		float                                                      Seconds;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.KillPlayerItems
	 */
	struct UInventoryManager_KillPlayerItems_Params
	{	};

	/**
	 * Function IntoTheRadius.InventoryManager.KillAllInventoryItems
	 */
	struct UInventoryManager_KillAllInventoryItems_Params
	{
	public:
		bool                                                       fullClear;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.IsUniqueItemSpawned
	 */
	struct UInventoryManager_IsUniqueItemSpawned_Params
	{
	public:
		class FString                                              InstanceId;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       spawned;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.IsStashOpened
	 */
	struct UInventoryManager_IsStashOpened_Params
	{
	public:
		struct FGameplayTag                                        stashType;                                               // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              stashID;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       opened;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.IsNeedRepair
	 */
	struct UInventoryManager_IsNeedRepair_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.IsInPlayerInventory
	 */
	struct UInventoryManager_IsInPlayerInventory_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.IsInLevelsInventory
	 */
	struct UInventoryManager_IsInLevelsInventory_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.IsInHubInventory
	 */
	struct UInventoryManager_IsInHubInventory_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.IsActorInPlayerInventory
	 */
	struct UInventoryManager_IsActorInPlayerInventory_Params
	{
	public:
		class AActor*                                              itemActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.GetSilencerAttachment
	 */
	struct UInventoryManager_GetSilencerAttachment_Params
	{
	public:
		class UInventoryItem*                                      parentItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryItem*                                      AttachItem;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.GetRepairStatus
	 */
	struct UInventoryManager_GetRepairStatus_Params
	{
	public:
		bool                                                       bEmpty;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bReady;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2T7P[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UInventoryItem*>                              RepairItems;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.GetPlayerItems
	 */
	struct UInventoryManager_GetPlayerItems_Params
	{
	public:
		TArray<class UInventoryItem*>                              inventoryItems;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.GetPlayerInventoryCollection
	 */
	struct UInventoryManager_GetPlayerInventoryCollection_Params
	{
	public:
		class UInventoryItemsCollection*                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.GetMagAttachment
	 */
	struct UInventoryManager_GetMagAttachment_Params
	{
	public:
		class UInventoryItem*                                      parentItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryItem*                                      AttachItem;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.GetLevelsItems
	 */
	struct UInventoryManager_GetLevelsItems_Params
	{
	public:
		TMap<struct FGameplayTag, class UInventoryItemsCollection*> levelsItems;                                             // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.GetItemLevel
	 */
	struct UInventoryManager_GetItemLevel_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.GetItemBP
	 */
	struct UInventoryManager_GetItemBP_Params
	{
	public:
		class FString                                              InstanceId;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryItem*                                      InventoryItem;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.GetInventoryWeight
	 */
	struct UInventoryManager_GetInventoryWeight_Params
	{
	public:
		struct FGameplayTag                                        inHolderID;                                              // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TotalWeight;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.GetInventoryManager
	 */
	struct UInventoryManager_GetInventoryManager_Params
	{
	public:
		class UInventoryManager*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.GetCurrentLevelItems
	 */
	struct UInventoryManager_GetCurrentLevelItems_Params
	{
	public:
		TArray<class UInventoryItem*>                              inventoryItems;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.GetAttachments
	 */
	struct UInventoryManager_GetAttachments_Params
	{
	public:
		class UInventoryItem*                                      parentItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        TypeTag;                                                 // 0x0008(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UInventoryItem*>                              AttachItems;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.GetAttachedToSlot
	 */
	struct UInventoryManager_GetAttachedToSlot_Params
	{
	public:
		class UInventoryItem*                                      parentItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EItemSlot                                                  Slot;                                                    // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z3WW[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInventoryItem*                                      AttachItem;                                              // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.GetAllAttachments
	 */
	struct UInventoryManager_GetAllAttachments_Params
	{
	public:
		class UInventoryItem*                                      parentItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UInventoryItem*>                              AttachItems;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.FindItemsByTagInPlayer
	 */
	struct UInventoryManager_FindItemsByTagInPlayer_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       strict;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MVR2[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UInventoryItem*>                              inventoryItems;                                          // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.FindItemsByTagInLevel
	 */
	struct UInventoryManager_FindItemsByTagInLevel_Params
	{
	public:
		struct FGameplayTag                                        Level;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       strict;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OMZ8[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UInventoryItem*>                              inventoryItems;                                          // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.FindItemsByTag
	 */
	struct UInventoryManager_FindItemsByTag_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       strict;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NRQR[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UInventoryItem*>                              inventoryItems;                                          // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.FindItemsByHolderID
	 */
	struct UInventoryManager_FindItemsByHolderID_Params
	{
	public:
		struct FGameplayTag                                        holderID;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YW58[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UInventoryItem*>                              inventoryItems;                                          // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.FindItemByRefInPlayer
	 */
	struct UInventoryManager_FindItemByRefInPlayer_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WC7V[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInventoryItem*                                      InventoryItem;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.FindItemByRef
	 */
	struct UInventoryManager_FindItemByRef_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WDBP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInventoryItem*                                      InventoryItem;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.DropPlayerInventory
	 */
	struct UInventoryManager_DropPlayerInventory_Params
	{
	public:
		bool                                                       bKillActors;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bDropOnGround;                                           // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_81BL[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        FromHolderID;                                            // 0x0004(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LocationOffset;                                          // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.DropItemActor
	 */
	struct UInventoryManager_DropItemActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForceBackpackDrop;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PJQG[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInventoryItem*                                      InventoryItem;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.DetachItems
	 */
	struct UInventoryManager_DetachItems_Params
	{
	public:
		class UInventoryItem*                                      itemParent;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryItem*                                      itemAttach;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.DetachItemActors
	 */
	struct UInventoryManager_DetachItemActors_Params
	{
	public:
		class AActor*                                              Parent;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              attach;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.ClearAllItemReferences
	 */
	struct UInventoryManager_ClearAllItemReferences_Params
	{	};

	/**
	 * Function IntoTheRadius.InventoryManager.CheckPlayerItem
	 */
	struct UInventoryManager_CheckPlayerItem_Params
	{
	public:
		struct FGameplayTag                                        ItemType;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       strictItemType;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZDN8[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        holderID;                                                // 0x000C(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       strictHolderID;                                          // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.CheckItem
	 */
	struct UInventoryManager_CheckItem_Params
	{
	public:
		class FString                                              itemInstanceID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       pick;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2E7P[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        holderID;                                                // 0x0014(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       strictHolderID;                                          // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.CheckAttachments
	 */
	struct UInventoryManager_CheckAttachments_Params
	{	};

	/**
	 * Function IntoTheRadius.InventoryManager.BreakActorLink
	 */
	struct UInventoryManager_BreakActorLink_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.AttachItems
	 */
	struct UInventoryManager_AttachItems_Params
	{
	public:
		class UInventoryItem*                                      itemParent;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryItem*                                      itemAttach;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EItemSlot                                                  attachSlot;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.AttachItemActors
	 */
	struct UInventoryManager_AttachItemActors_Params
	{
	public:
		class AActor*                                              Parent;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              attach;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EItemSlot                                                  attachToSlot;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.AddItemToPlayer
	 */
	struct UInventoryManager_AddItemToPlayer_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.AddItemToLevel
	 */
	struct UInventoryManager_AddItemToLevel_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       noAttachmentsCheck;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.AddDefaultItemToLevel
	 */
	struct UInventoryManager_AddDefaultItemToLevel_Params
	{
	public:
		struct FGameplayTag                                        ItemTag;                                                 // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_103Z[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       noAttachmentsCheck;                                      // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0041(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.InventoryManager.AddConfigItemToLevel
	 */
	struct UInventoryManager_AddConfigItemToLevel_Params
	{
	public:
		class UPRItemConfig*                                       itemConfig;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V5QL[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       noAttachmentsCheck;                                      // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0041(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HFY7[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInventoryItem*                                      ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPhysicsActor.GetPhysicsRootComponent
	 */
	struct UIPhysicsActor_GetPhysicsRootComponent_Params
	{
	public:
		class UPrimitiveComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPlayFootstepSounds.StopFootstepLoop
	 */
	struct UIPlayFootstepSounds_StopFootstepLoop_Params
	{	};

	/**
	 * Function IntoTheRadius.IPlayFootstepSounds.StartFootstepLoop
	 */
	struct UIPlayFootstepSounds_StartFootstepLoop_Params
	{	};

	/**
	 * Function IntoTheRadius.IPlayFootstepSounds.PlayFootstepSound
	 */
	struct UIPlayFootstepSounds_PlayFootstepSound_Params
	{	};

	/**
	 * Function IntoTheRadius.IPooledActor.PushToPoolActor
	 */
	struct UIPooledActor_PushToPoolActor_Params
	{	};

	/**
	 * Function IntoTheRadius.IPooledActor.PopFromPoolActor
	 */
	struct UIPooledActor_PopFromPoolActor_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPooledActor.IsExcludedFromPool
	 */
	struct UIPooledActor_IsExcludedFromPool_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRGameMode.TransferToLevel
	 */
	struct UIPRGameMode_TransferToLevel_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        LocationTag;                                             // 0x0008(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRGameMode.SpawnSavedNPC
	 */
	struct UIPRGameMode_SpawnSavedNPC_Params
	{
	public:
		struct FNPCGameData                                        Data;                                                    // 0x0000(0x0070)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		class AActor*                                              SpawnerActor;                                            // 0x0070(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0078(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCanWalkAway;                                            // 0x007C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       SnipingMode;                                             // 0x007D(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T0XM[0x2];                                   // 0x007E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0080(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRGameMode.SpawnNPC
	 */
	struct UIPRGameMode_SpawnNPC_Params
	{
	public:
		struct FGameplayTag                                        npcTypeID;                                               // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              SpawnerActor;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCanWalkAway;                                            // 0x0014(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       SnipingMode;                                             // 0x0015(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q4CP[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRGameMode.SpawnItemConfig
	 */
	struct UIPRGameMode_SpawnItemConfig_Params
	{
	public:
		class UPRItemConfig*                                       itemConfig;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YC2W[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bProjectOnGround;                                        // 0x0040(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSimulate;                                               // 0x0041(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAddToPlayer;                                            // 0x0042(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HDQ2[0x5];                                   // 0x0043(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRGameMode.SpawnItemByType
	 */
	struct UIPRGameMode_SpawnItemByType_Params
	{
	public:
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InstanceId;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DYDS[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0020(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bProjectOnGround;                                        // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSimulate;                                               // 0x0051(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0ZCR[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRGameMode.SpawnItem
	 */
	struct UIPRGameMode_SpawnItem_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IKXD[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bProjectOnGround;                                        // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSimulate;                                               // 0x0041(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1J2X[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRGameMode.SpawnAnomaly
	 */
	struct UIPRGameMode_SpawnAnomaly_Params
	{
	public:
		class FString                                              AnomalyName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              AnomalyClass;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JZ9V[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          AnomalyTransform;                                        // 0x0020(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bProjectOnGround;                                        // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VA47[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      AnomalyRadius;                                           // 0x0054(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APRAnomaly*                                          ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRGameMode.SleepAllowed
	 */
	struct UIPRGameMode_SleepAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRGameMode.SetSleepAllowed
	 */
	struct UIPRGameMode_SetSleepAllowed_Params
	{
	public:
		bool                                                       bAllow;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRGameMode.ResetPlayerAndItems
	 */
	struct UIPRGameMode_ResetPlayerAndItems_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRGameMode.ReprojectLocation
	 */
	struct UIPRGameMode_ReprojectLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRGameMode.ReEnterCurrentLevel
	 */
	struct UIPRGameMode_ReEnterCurrentLevel_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRGameMode.LaunchMainMenu
	 */
	struct UIPRGameMode_LaunchMainMenu_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRGameMode.LaunchGame
	 */
	struct UIPRGameMode_LaunchGame_Params
	{
	public:
		bool                                                       bStart;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRGameMode.GetNoiseAwarenessValue
	 */
	struct UIPRGameMode_GetNoiseAwarenessValue_Params
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRGameMode.GetDamageAwarenessValue
	 */
	struct UIPRGameMode_GetDamageAwarenessValue_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRGameMode.GetCurrentPlayerTransform
	 */
	struct UIPRGameMode_GetCurrentPlayerTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRGameMode.FinishTutorial
	 */
	struct UIPRGameMode_FinishTutorial_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRGameMode.FindSpawnLocation
	 */
	struct UIPRGameMode_FindSpawnLocation_Params
	{
	public:
		struct FVector                                             nearby;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InRadius;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bReachable;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D9TU[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRGameMode.ContinueAsFreeGame
	 */
	struct UIPRGameMode_ContinueAsFreeGame_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRGameMode.ApplySoundVolumes
	 */
	struct UIPRGameMode_ApplySoundVolumes_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRGameModeNative.GetIsInTransition
	 */
	struct UIPRGameModeNative_GetIsInTransition_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.UpdateInventoryItemLocation
	 */
	struct UIPRItem_UpdateInventoryItemLocation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.UpdateFireMode
	 */
	struct UIPRItem_UpdateFireMode_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRItem.UpdateAttachmentSlots
	 */
	struct UIPRItem_UpdateAttachmentSlots_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRItem.StopUse
	 */
	struct UIPRItem_StopUse_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRItem.SetupProxySystem
	 */
	struct UIPRItem_SetupProxySystem_Params
	{
	public:
		bool                                                       bStartWithProxy;                                         // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStartVisible;                                           // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.SetProxyMode
	 */
	struct UIPRItem_SetProxyMode_Params
	{
	public:
		bool                                                       bUseProxy;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.SetItemVisibility
	 */
	struct UIPRItem_SetItemVisibility_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.SetDistanceGripEnable
	 */
	struct UIPRItem_SetDistanceGripEnable_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.RegisterMeshComponentsAndOmittableColliders
	 */
	struct UIPRItem_RegisterMeshComponentsAndOmittableColliders_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRItem.Reconfigure
	 */
	struct UIPRItem_Reconfigure_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.OnRemovedFromHolster
	 */
	struct UIPRItem_OnRemovedFromHolster_Params
	{
	public:
		class UHolsterComponent*                                   Holster;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.OnProxySystemReady
	 */
	struct UIPRItem_OnProxySystemReady_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRItem.OnProxyEnabled
	 */
	struct UIPRItem_OnProxyEnabled_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRItem.OnProxyDisabled
	 */
	struct UIPRItem_OnProxyDisabled_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRItem.OnAddedToHolster
	 */
	struct UIPRItem_OnAddedToHolster_Params
	{
	public:
		class UHolsterComponent*                                   Holster;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.IsItemInDelivery
	 */
	struct UIPRItem_IsItemInDelivery_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.InitBought
	 */
	struct UIPRItem_InitBought_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRItem.GetTypeID
	 */
	struct UIPRItem_GetTypeID_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.GetProxyMode
	 */
	struct UIPRItem_GetProxyMode_Params
	{
	public:
		bool                                                       bUseProxy;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.GetPreparedItem
	 */
	struct UIPRItem_GetPreparedItem_Params
	{
	public:
		class UInventoryItem*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.GetPoseShift
	 */
	struct UIPRItem_GetPoseShift_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5G5L[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.GetItemVisibility
	 */
	struct UIPRItem_GetItemVisibility_Params
	{
	public:
		bool                                                       bIsVisible;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.GetItemInfo
	 */
	struct UIPRItem_GetItemInfo_Params
	{
	public:
		struct FPRItemInfo                                         ReturnValue;                                             // 0x0000(0x01A0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.GetItemCenterTransform
	 */
	struct UIPRItem_GetItemCenterTransform_Params
	{
	public:
		bool                                                       socket;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_42EX[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          itemCenterTransform;                                     // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.GetInventoryItem
	 */
	struct UIPRItem_GetInventoryItem_Params
	{
	public:
		class UInventoryItem*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.GetDefaultPoseType
	 */
	struct UIPRItem_GetDefaultPoseType_Params
	{
	public:
		EPRHandPoseType                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.GetCurrentWeight
	 */
	struct UIPRItem_GetCurrentWeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.GetCurrentCondition
	 */
	struct UIPRItem_GetCurrentCondition_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.GetConditionPercent
	 */
	struct UIPRItem_GetConditionPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.GetAttachmentTypeID
	 */
	struct UIPRItem_GetAttachmentTypeID_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.GetAttachmentsList
	 */
	struct UIPRItem_GetAttachmentsList_Params
	{
	public:
		TArray<class FString>                                      Attachments;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.GetActorUID
	 */
	struct UIPRItem_GetActorUID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.DropItemOnGround
	 */
	struct UIPRItem_DropItemOnGround_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRItem.DisableItemPhysics
	 */
	struct UIPRItem_DisableItemPhysics_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.UpdateHolders
	 */
	struct UIPRPlayerCharacter_UpdateHolders_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.TeleportPlayer
	 */
	struct UIPRPlayerCharacter_TeleportPlayer_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             Velocity;                                                // 0x0030(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       wristMenuHidden;                                         // 0x003C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReprojectLocation;                                       // 0x003D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPlayerTeleportAdjustType                                  adjust;                                                  // 0x003E(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.StopMovement
	 */
	struct UIPRPlayerCharacter_StopMovement_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.StopHapticses
	 */
	struct UIPRPlayerCharacter_StopHapticses_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.SpawnItemInHand
	 */
	struct UIPRPlayerCharacter_SpawnItemInHand_Params
	{
	public:
		bool                                                       LeftHand;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7NEN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0004(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.SpawnItemConfigInHand
	 */
	struct UIPRPlayerCharacter_SpawnItemConfigInHand_Params
	{
	public:
		bool                                                       bLeftHand;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_P32R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPRItemConfig*                                       itemConfig;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.SpawnInventory
	 */
	struct UIPRPlayerCharacter_SpawnInventory_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.SetWristMenuHidden
	 */
	struct UIPRPlayerCharacter_SetWristMenuHidden_Params
	{
	public:
		bool                                                       Hidden;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.SetPaused
	 */
	struct UIPRPlayerCharacter_SetPaused_Params
	{
	public:
		bool                                                       paused;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.SetInventoryMode
	 */
	struct UIPRPlayerCharacter_SetInventoryMode_Params
	{
	public:
		EInventoryMode                                             Mode;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.SetCurrentVelocity
	 */
	struct UIPRPlayerCharacter_SetCurrentVelocity_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.ReturnBackpack
	 */
	struct UIPRPlayerCharacter_ReturnBackpack_Params
	{
	public:
		bool                                                       instant;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.RefreshHandPose
	 */
	struct UIPRPlayerCharacter_RefreshHandPose_Params
	{
	public:
		class UGripMotionControllerComponent*                      Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.PreTeleport
	 */
	struct UIPRPlayerCharacter_PreTeleport_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.OpenEyes
	 */
	struct UIPRPlayerCharacter_OpenEyes_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.OnTeleported
	 */
	struct UIPRPlayerCharacter_OnTeleported_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.IsTeleporting
	 */
	struct UIPRPlayerCharacter_IsTeleporting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.IsItemActorSticked
	 */
	struct UIPRPlayerCharacter_IsItemActorSticked_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.IsImmuneToDamage
	 */
	struct UIPRPlayerCharacter_IsImmuneToDamage_Params
	{
	public:
		EDamageCategory                                            Type;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.IsActorLerpingToHand
	 */
	struct UIPRPlayerCharacter_IsActorLerpingToHand_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.Initialize
	 */
	struct UIPRPlayerCharacter_Initialize_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.GetTotalEquipmentWeight
	 */
	struct UIPRPlayerCharacter_GetTotalEquipmentWeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.GetRootTransform
	 */
	struct UIPRPlayerCharacter_GetRootTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.GetPlayerHeightScale
	 */
	struct UIPRPlayerCharacter_GetPlayerHeightScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.GetPlayerHeight
	 */
	struct UIPRPlayerCharacter_GetPlayerHeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.GetOneHeldItem
	 */
	struct UIPRPlayerCharacter_GetOneHeldItem_Params
	{
	public:
		EPRHand                                                    hand;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       onlyItem;                                                // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_308I[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             itemActorObject;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       SecondaryGrip;                                           // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.GetInventoryMode
	 */
	struct UIPRPlayerCharacter_GetInventoryMode_Params
	{
	public:
		EInventoryMode                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.GetHeldItems
	 */
	struct UIPRPlayerCharacter_GetHeldItems_Params
	{
	public:
		bool                                                       bOnlyItem;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NL9W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             Left;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Right;                                                   // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.GetHandsIKData
	 */
	struct UIPRPlayerCharacter_GetHandsIKData_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       alive;                                                   // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7RY0[0xE];                                   // 0x0002(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          leftHandTransform;                                       // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          leftHandShiftTransform;                                  // 0x0040(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EHandPose                                                  leftHandPose;                                            // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseGeometryType                                    leftHandGeometryType;                                    // 0x0071(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseNumber                                          leftHandPoseNumber;                                      // 0x0072(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X7NJ[0x5];                                   // 0x0073(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             leftHeldItem;                                            // 0x0078(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          rightHandTransform;                                      // 0x0080(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          rightHandShiftTransform;                                 // 0x00B0(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EHandPose                                                  rightHandPose;                                           // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseGeometryType                                    rightHandGeometryType;                                   // 0x00E1(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseNumber                                          rightHandPoseNumber;                                     // 0x00E2(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1136[0x5];                                   // 0x00E3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             rightHeldItem;                                           // 0x00E8(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.GetHandPivot
	 */
	struct UIPRPlayerCharacter_GetHandPivot_Params
	{
	public:
		class UGripMotionControllerComponent*                      Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     Pivot;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.GetDistanceToCamera
	 */
	struct UIPRPlayerCharacter_GetDistanceToCamera_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.GetCurrentVelocity
	 */
	struct UIPRPlayerCharacter_GetCurrentVelocity_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.GetControlsRefs
	 */
	struct UIPRPlayerCharacter_GetControlsRefs_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       alive;                                                   // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z5VD[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCameraComponent*                                    cameraRef;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     pivotHead;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGripMotionControllerComponent*                      leftControllerRef;                                       // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     pivotLeftController;                                     // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     pivotLeftHand;                                           // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USphereComponent*                                    sphereLeftHand;                                          // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstanceDynamic*                            materialLeftController;                                  // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGripMotionControllerComponent*                      rightControllerRef;                                      // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     pivotRightController;                                    // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     pivotRightHand;                                          // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USphereComponent*                                    sphereRightHand;                                         // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstanceDynamic*                            materialRightController;                                 // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.GetCameraRef
	 */
	struct UIPRPlayerCharacter_GetCameraRef_Params
	{
	public:
		class UCameraComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.GetBodyRef
	 */
	struct UIPRPlayerCharacter_GetBodyRef_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.GetBodyIKData
	 */
	struct UIPRPlayerCharacter_GetBodyIKData_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAlive;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WZW3[0xE];                                   // 0x0002(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          RootTransform;                                           // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          CameraTransform;                                         // 0x0040(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          NeckTransform;                                           // 0x0070(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.GetBeamPointerComponents
	 */
	struct UIPRPlayerCharacter_GetBeamPointerComponents_Params
	{
	public:
		class USceneComponent*                                     Left;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     Right;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.GetBackpackPivot
	 */
	struct UIPRPlayerCharacter_GetBackpackPivot_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.GetArmorStats
	 */
	struct UIPRPlayerCharacter_GetArmorStats_Params
	{
	public:
		TMap<EDamageCategory, float>                               ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.GetArmorItems
	 */
	struct UIPRPlayerCharacter_GetArmorItems_Params
	{
	public:
		TArray<class UInventoryItem*>                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.DropNotItems
	 */
	struct UIPRPlayerCharacter_DropNotItems_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.DropAll
	 */
	struct UIPRPlayerCharacter_DropAll_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRPlayerCharacter.CloseEyes
	 */
	struct UIPRPlayerCharacter_CloseEyes_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRPlayerController.IsAllInputBlocked
	 */
	struct UIPRPlayerController_IsAllInputBlocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IPRPlayerController.InitControlScheme
	 */
	struct UIPRPlayerController_InitControlScheme_Params
	{	};

	/**
	 * Function IntoTheRadius.IPRPlayerController.GetControllerType
	 */
	struct UIPRPlayerController_GetControllerType_Params
	{
	public:
		EPRControllerType                                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerPawn.SwitchBodyVisibility
	 */
	struct UPRPlayerPawn_SwitchBodyVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRecursive;                                              // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerPawn.ProcessMovementNative
	 */
	struct UPRPlayerPawn_ProcessMovementNative_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerPawn.IsSecondaryGrip
	 */
	struct UPRPlayerPawn_IsSecondaryGrip_Params
	{
	public:
		bool                                                       bLeft;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerPawn.IsBackpackInHands
	 */
	struct UPRPlayerPawn_IsBackpackInHands_Params
	{
	public:
		bool                                                       bCheckLeft;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCheckRight;                                             // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerPawn.IsBackpackDropped
	 */
	struct UPRPlayerPawn_IsBackpackDropped_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerPawn.IsAnyLampEnabled
	 */
	struct UPRPlayerPawn_IsAnyLampEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerPawn.GetVisibilityPrimitives
	 */
	struct UPRPlayerPawn_GetVisibilityPrimitives_Params
	{
	public:
		TArray<class UPrimitiveComponent*>                         ReturnValue;                                             // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerPawn.GetInputMovementVector
	 */
	struct UPRPlayerPawn_GetInputMovementVector_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerPawn.GetCrouch
	 */
	struct UPRPlayerPawn_GetCrouch_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerPawn.GetBackpackRef
	 */
	struct UPRPlayerPawn_GetBackpackRef_Params
	{
	public:
		class ABackpackSimple*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerPawn.DropGrip
	 */
	struct UPRPlayerPawn_DropGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GripMotionController;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O1PF[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripToDrop;                                              // 0x0010(0x01E0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             AngleVel;                                                // 0x01F0(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             LinearVel;                                               // 0x01FC(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerPawn.DropAllGrips
	 */
	struct UPRPlayerPawn_DropAllGrips_Params
	{
	public:
		class UGripMotionControllerComponent*                      GripMotionController;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bZeroVelo;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IRadiusExplosionActor.Launch
	 */
	struct UIRadiusExplosionActor_Launch_Params
	{	};

	/**
	 * Function IntoTheRadius.IRadiusExplosionActor.Initialeze
	 */
	struct UIRadiusExplosionActor_Initialeze_Params
	{
	public:
		struct FExplosionInfo                                      ExplosionInfo;                                           // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IRadiusExplosionActor.Dispose
	 */
	struct UIRadiusExplosionActor_Dispose_Params
	{	};

	/**
	 * Function IntoTheRadius.IRadiusProjectile.Launch
	 */
	struct UIRadiusProjectile_Launch_Params
	{	};

	/**
	 * Function IntoTheRadius.IRadiusProjectile.Initialize
	 */
	struct UIRadiusProjectile_Initialize_Params
	{
	public:
		class URadiusProjectileInfo*                               ProjectileInfo;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IStashActor.Setup
	 */
	struct UIStashActor_Setup_Params
	{
	public:
		struct FStashSpawnInfo                                     StashSpawnInfo;                                          // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRItemConfig.CloneWithUID
	 */
	struct UPRItemConfig_CloneWithUID_Params
	{
	public:
		class FString                                              newUID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPRItemConfig*                                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.ItemsManager.SetConditionsIgnore
	 */
	struct UItemsManager_SetConditionsIgnore_Params
	{
	public:
		bool                                                       ignoreCorpse;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ignoreStash;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.ItemsManager.PackItems
	 */
	struct UItemsManager_PackItems_Params
	{
	public:
		class USceneComponent*                                     Parent;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UInventoryItem*>                              Items;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class UInventoryItem*>                              Excluded;                                                // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bExcludeNonFit;                                          // 0x0028(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bProjectDown;                                            // 0x0029(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.ItemsManager.MultiPackItems
	 */
	struct UItemsManager_MultiPackItems_Params
	{
	public:
		TArray<class USceneComponent*>                             Bounds;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		TArray<class UInventoryItem*>                              Items;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bProjectDown;                                            // 0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.ItemsManager.GetLootForTable
	 */
	struct UItemsManager_GetLootForTable_Params
	{
	public:
		struct FGameplayTag                                        lootTableTag;                                            // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    LootPoints;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SXY4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              idOverride;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UInventoryItem*>                              Items;                                                   // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.ItemsManager.GetItemsManager
	 */
	struct UItemsManager_GetItemsManager_Params
	{
	public:
		class UItemsManager*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.ItemsManager.GetDefaultLoot
	 */
	struct UItemsManager_GetDefaultLoot_Params
	{
	public:
		TArray<struct FGameplayTag>                                itemTags;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FString                                              idOverride;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UInventoryItem*>                              Items;                                                   // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.ItemsManager.GetCurrentLevelLoot
	 */
	struct UItemsManager_GetCurrentLevelLoot_Params
	{
	public:
		int32_t                                                    LootPoints;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RDNJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              idOverride;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UInventoryItem*>                              Items;                                                   // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.ItemsManager.GetConfiguredLoot
	 */
	struct UItemsManager_GetConfiguredLoot_Params
	{
	public:
		TArray<class UPRItemConfig*>                               ItemConfigs;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FString                                              idOverride;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UInventoryItem*>                              Items;                                                   // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IWeapon.IsSmoothingScriptOn
	 */
	struct UIWeapon_IsSmoothingScriptOn_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.IWeapon.GetWeaponInfo
	 */
	struct UIWeapon_GetWeaponInfo_Params
	{
	public:
		struct FWeaponInfo                                         ReturnValue;                                             // 0x0000(0x0110)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.LevelManager.UnloadLevel
	 */
	struct ULevelManager_UnloadLevel_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.LevelManager.UnloadAll
	 */
	struct ULevelManager_UnloadAll_Params
	{	};

	/**
	 * Function IntoTheRadius.LevelManager.ShowSublevel
	 */
	struct ULevelManager_ShowSublevel_Params
	{
	public:
		class FName                                                SublevelName;                                            // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.LevelManager.OnUnloadingTick
	 */
	struct ULevelManager_OnUnloadingTick_Params
	{	};

	/**
	 * Function IntoTheRadius.LevelManager.OnLoadingTick
	 */
	struct ULevelManager_OnLoadingTick_Params
	{	};

	/**
	 * Function IntoTheRadius.LevelManager.LoadSublevel
	 */
	struct ULevelManager_LoadSublevel_Params
	{
	public:
		class FName                                                SublevelName;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.LevelManager.LoadLevel
	 */
	struct ULevelManager_LoadLevel_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.LevelManager.IsReady
	 */
	struct ULevelManager_IsReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.LevelManager.HideSublevel
	 */
	struct ULevelManager_HideSublevel_Params
	{
	public:
		class FName                                                SublevelName;                                            // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.LevelManager.GetLevelManager
	 */
	struct ULevelManager_GetLevelManager_Params
	{
	public:
		class ULevelManager*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.LightSensitiveManager.UnregisterLightSensitiveObject
	 */
	struct ULightSensitiveManager_UnregisterLightSensitiveObject_Params
	{
	public:
		class AActor*                                              LightSensitiveObject;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.LightSensitiveManager.RegisterLightSensitiveObject
	 */
	struct ULightSensitiveManager_RegisterLightSensitiveObject_Params
	{
	public:
		class AActor*                                              LightSensitiveObject;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.LightSensitiveManager.GetLightSensitiveManager
	 */
	struct ULightSensitiveManager_GetLightSensitiveManager_Params
	{
	public:
		class ULightSensitiveManager*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MapPointsConfig.WorldToLevelTransform
	 */
	struct UMapPointsConfig_WorldToLevelTransform_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DIO5[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          ReturnValue;                                             // 0x0040(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MapPointsConfig.WorldToLevelLocation
	 */
	struct UMapPointsConfig_WorldToLevelLocation_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MapPointsConfig.ResolvePoint
	 */
	struct UMapPointsConfig_ResolvePoint_Params
	{
	public:
		struct FGameplayTag                                        pointTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FGameplayTag>                                ExcludedPoints;                                          // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ResultPoint;                                             // 0x0018(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ResultLevel;                                             // 0x0020(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MapPointsConfig.LevelToWorldTransform
	 */
	struct UMapPointsConfig_LevelToWorldTransform_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZKRR[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          ReturnValue;                                             // 0x0040(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MapPointsConfig.LevelToWorldLocation
	 */
	struct UMapPointsConfig_LevelToWorldLocation_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MapPointsConfig.IsPointInLevel
	 */
	struct UMapPointsConfig_IsPointInLevel_Params
	{
	public:
		struct FGameplayTag                                        pointTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        LevelTag;                                                // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MapPointsConfig.IsPointACluster
	 */
	struct UMapPointsConfig_IsPointACluster_Params
	{
	public:
		struct FGameplayTag                                        pointTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MapPointsConfig.GetPointTransforms
	 */
	struct UMapPointsConfig_GetPointTransforms_Params
	{
	public:
		struct FGameplayTag                                        pointTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BC64[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        LevelTag;                                                // 0x000C(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SZI1[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          RelativeTransform;                                       // 0x0020(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          absoluteTransform;                                       // 0x0050(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MapPointsConfig.GetPointLevel
	 */
	struct UMapPointsConfig_GetPointLevel_Params
	{
	public:
		struct FGameplayTag                                        pointTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MapPointsConfig.GetMapPointsConfig
	 */
	struct UMapPointsConfig_GetMapPointsConfig_Params
	{
	public:
		class UMapPointsConfig*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MapPointsConfig.GetLevelGateInfos
	 */
	struct UMapPointsConfig_GetLevelGateInfos_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FGateInfo>                                   ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MinimapComposeHelper.PrepareLandscape
	 */
	struct UMinimapComposeHelper_PrepareLandscape_Params
	{
	public:
		class ALandscape*                                          Landscape;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MinimapComposeHelper.GetPointsFromFile
	 */
	struct UMinimapComposeHelper_GetPointsFromFile_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FIntVector>                                  ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MinimapComposeHelper.GetLocations
	 */
	struct UMinimapComposeHelper_GetLocations_Params
	{
	public:
		class UInstancedStaticMeshComponent*                       Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MinimapComposeHelper.GetLandscapeSplines
	 */
	struct UMinimapComposeHelper_GetLandscapeSplines_Params
	{
	public:
		class ALandscape*                                          Landscape;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ULandscapeSplinesComponent*                          ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MinimapComposeHelper.GetHeatmapFromFile
	 */
	struct UMinimapComposeHelper_GetHeatmapFromFile_Params
	{
	public:
		class FString                                              FilePath;                                                // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    step;                                                    // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ULYX[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<struct FIntPoint, int32_t>                            heatmap;                                                 // 0x0018(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FIntPoint                                           Min;                                                     // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIntPoint                                           Max;                                                     // 0x0070(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxValue;                                                // 0x0078(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MinimapComposeHelper.GetFoliageTransforms
	 */
	struct UMinimapComposeHelper_GetFoliageTransforms_Params
	{
	public:
		class AInstancedFoliageActor*                              foliageActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFoliageType*                                        FoliageType;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FTransform>                                  ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MinimapComposeHelper.GenerateHeatmapFromFile
	 */
	struct UMinimapComposeHelper_GenerateHeatmapFromFile_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FilePath;                                                // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    step;                                                    // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionsConfig.GetMissionsConfig
	 */
	struct UMissionsConfig_GetMissionsConfig_Params
	{
	public:
		class UMissionsConfig*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionNormalConfig.CheckObjectives
	 */
	struct UMissionNormalConfig_CheckObjectives_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionAbstractObjectiveData.HaveDelivery
	 */
	struct UMissionAbstractObjectiveData_HaveDelivery_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionAbstractObjectiveData.GetRewardMoney
	 */
	struct UMissionAbstractObjectiveData_GetRewardMoney_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionAbstractObjectiveData.GetMissionPoints
	 */
	struct UMissionAbstractObjectiveData_GetMissionPoints_Params
	{
	public:
		TArray<struct FGameplayTag>                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionAbstractObjectiveData.GetDeliveryCountString
	 */
	struct UMissionAbstractObjectiveData_GetDeliveryCountString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionAbstractObjectiveData.GetCountString
	 */
	struct UMissionAbstractObjectiveData_GetCountString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionAbstractObjectiveData.CollectDeliveryTags
	 */
	struct UMissionAbstractObjectiveData_CollectDeliveryTags_Params
	{
	public:
		TArray<struct FGameplayTag>                                DeliveryTags;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionAbstractObjectiveData.CheckObjectiveCompletion
	 */
	struct UMissionAbstractObjectiveData_CheckObjectiveCompletion_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionAbstractObjectiveData.BPPrint
	 */
	struct UMissionAbstractObjectiveData_BPPrint_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionTakePictureObjectiveData.GetObjectsTags
	 */
	struct UMissionTakePictureObjectiveData_GetObjectsTags_Params
	{
	public:
		TArray<struct FGameplayTag>                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionKillNPCObjectiveData.PointSpawnerID
	 */
	struct UMissionKillNPCObjectiveData_PointSpawnerID_Params
	{
	public:
		struct FGameplayTag                                        pointTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionKillNPCObjectiveData.PointSpawned
	 */
	struct UMissionKillNPCObjectiveData_PointSpawned_Params
	{
	public:
		struct FGameplayTag                                        pointTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionKillNPCObjectiveData.PointCleared
	 */
	struct UMissionKillNPCObjectiveData_PointCleared_Params
	{
	public:
		struct FGameplayTag                                        pointTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionKillNPCObjectiveData.MarkPointCleared
	 */
	struct UMissionKillNPCObjectiveData_MarkPointCleared_Params
	{
	public:
		struct FGameplayTag                                        pointTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionData.SetTutorStep
	 */
	struct UMissionData_SetTutorStep_Params
	{
	public:
		struct FGameplayTag                                        SequencerID;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    step;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionData.HaveDelivery
	 */
	struct UMissionData_HaveDelivery_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionData.HasPointsInCurrentLevel
	 */
	struct UMissionData_HasPointsInCurrentLevel_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionData.GetTotalReward
	 */
	struct UMissionData_GetTotalReward_Params
	{
	public:
		bool                                                       FinishedOnly;                                            // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UKPE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MoneyReward;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlayerLevel;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionData.GetTimeTillAbortAvailable
	 */
	struct UMissionData_GetTimeTillAbortAvailable_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionData.GetStashUID
	 */
	struct UMissionData_GetStashUID_Params
	{
	public:
		class UMissionAbstractObjectiveData*                       Objective;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        Tag;                                                     // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionData.GetMissionPoints
	 */
	struct UMissionData_GetMissionPoints_Params
	{
	public:
		TArray<struct FGameplayTag>                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionData.GetMissionCategoryID
	 */
	struct UMissionData_GetMissionCategoryID_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionData.GetMainObjectivePoint
	 */
	struct UMissionData_GetMainObjectivePoint_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionData.GetMainObjectiveLevel
	 */
	struct UMissionData_GetMainObjectiveLevel_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionData.GetItemUID
	 */
	struct UMissionData_GetItemUID_Params
	{
	public:
		class UMissionAbstractObjectiveData*                       Objective;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KXFY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionData.GetDuration
	 */
	struct UMissionData_GetDuration_Params
	{
	public:
		bool                                                       bHaveDuration;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VFDJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              FinishDateString;                                        // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionData.FinishObjective
	 */
	struct UMissionData_FinishObjective_Params
	{
	public:
		class UMissionAbstractObjectiveData*                       Objective;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnoreTutorialDelivery;                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionData.FinishAllObjectives
	 */
	struct UMissionData_FinishAllObjectives_Params
	{
	public:
		bool                                                       bIgnoreTutorialDelivery;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionData.CheckPrimaryObjectivesCompleted
	 */
	struct UMissionData_CheckPrimaryObjectivesCompleted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionData.CheckDelivery
	 */
	struct UMissionData_CheckDelivery_Params
	{
	public:
		TArray<class AActor*>                                      ItemActors;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bFinishObjectives;                                       // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R9ZB[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      ExcessiveActors;                                         // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionData.CheckCompletion
	 */
	struct UMissionData_CheckCompletion_Params
	{
	public:
		bool                                                       bCompleted;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionData.BPPrint
	 */
	struct UMissionData_BPPrint_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionsManager.StartMissionFromIdLatent
	 */
	struct UMissionsManager_StartMissionFromIdLatent_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3DTR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        GameplayTag;                                             // 0x0004(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F5Y7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             WorldContextObject;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0018(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionsManager.StartMission
	 */
	struct UMissionsManager_StartMission_Params
	{
	public:
		class FString                                              MissionInstanceId;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IRKY[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMissionData*                                        MissionData;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionsManager.SetSelectedMissionComplete
	 */
	struct UMissionsManager_SetSelectedMissionComplete_Params
	{
	public:
		class FString                                              MissionInstanceId;                                       // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionsManager.ResetTutorialMissions
	 */
	struct UMissionsManager_ResetTutorialMissions_Params
	{	};

	/**
	 * Function IntoTheRadius.MissionsManager.OnPlayerLevelChanged
	 */
	struct UMissionsManager_OnPlayerLevelChanged_Params
	{
	public:
		int32_t                                                    PlayerLevel;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionsManager.IsMissionSelected
	 */
	struct UMissionsManager_IsMissionSelected_Params
	{
	public:
		class FString                                              MissionInstanceId;                                       // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMissionSelected;                                        // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionsManager.IsMaxExecutingReached
	 */
	struct UMissionsManager_IsMaxExecutingReached_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionsManager.GetSelectedMissionsInState
	 */
	struct UMissionsManager_GetSelectedMissionsInState_Params
	{
	public:
		EMissionState                                              State;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OPNE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UMissionData*>                                SelectedMissions;                                        // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionsManager.GetSelectedMissionsInProgress
	 */
	struct UMissionsManager_GetSelectedMissionsInProgress_Params
	{
	public:
		TArray<class UMissionData*>                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionsManager.GetSelectedMissions
	 */
	struct UMissionsManager_GetSelectedMissions_Params
	{
	public:
		TArray<class UMissionData*>                                SelectedMissions;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionsManager.GetMissionsManager
	 */
	struct UMissionsManager_GetMissionsManager_Params
	{
	public:
		class UMissionsManager*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionsManager.GetMissionsFinishedAfter
	 */
	struct UMissionsManager_GetMissionsFinishedAfter_Params
	{
	public:
		struct FGameplayTag                                        ConfigID;                                                // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOnlySuccessful;                                         // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WSR4[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionsManager.GetMission
	 */
	struct UMissionsManager_GetMission_Params
	{
	public:
		class FString                                              MissionInstanceId;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMissionData*                                        MissionData;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionsManager.GetFinishedMissions
	 */
	struct UMissionsManager_GetFinishedMissions_Params
	{
	public:
		TArray<class UMissionData*>                                FinishedMissions;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionsManager.GetActiveMissions
	 */
	struct UMissionsManager_GetActiveMissions_Params
	{
	public:
		TMap<struct FGameplayTag, class UMissionData*>             ActiveMissions;                                          // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionsManager.GetActiveMissionOfType
	 */
	struct UMissionsManager_GetActiveMissionOfType_Params
	{
	public:
		struct FGameplayTag                                        Category;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMissionData*                                        MissionData;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionsManager.GenerateNewMissions
	 */
	struct UMissionsManager_GenerateNewMissions_Params
	{
	public:
		bool                                                       bTide;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionsManager.FinishMission
	 */
	struct UMissionsManager_FinishMission_Params
	{
	public:
		class FString                                              MissionInstanceId;                                       // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MissionsManager.CheckActive
	 */
	struct UMissionsManager_CheckActive_Params
	{	};

	/**
	 * Function IntoTheRadius.MissionsManager.AbortSelectedMission
	 */
	struct UMissionsManager_AbortSelectedMission_Params
	{
	public:
		class FString                                              MissionInstanceId;                                       // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MonsterSpawner.ToggleNpcSummary
	 */
	struct AMonsterSpawner_ToggleNpcSummary_Params
	{
	public:
		class UObject*                                             WorldContextObj;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MonsterSpawner.SpawnSavedNPC
	 */
	struct AMonsterSpawner_SpawnSavedNPC_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F3PB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              NPCActor;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MonsterSpawner.SpawnNPC
	 */
	struct AMonsterSpawner_SpawnNPC_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NLZV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              NPCActor;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MonsterSpawner.OnNPCDied
	 */
	struct AMonsterSpawner_OnNPCDied_Params
	{
	public:
		class AActor*                                              NPCActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MonsterSpawner.NPCsListToMonstersMap
	 */
	struct AMonsterSpawner_NPCsListToMonstersMap_Params
	{
	public:
		TArray<struct FGameplayTag>                                List;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TMap<struct FGameplayTag, int32_t>                         ReturnValue;                                             // 0x0010(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MonsterSpawner.IsNpcSummaryEnabled
	 */
	struct AMonsterSpawner_IsNpcSummaryEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.MonsterSpawner.IsFull
	 */
	struct AMonsterSpawner_IsFull_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.NpcPointQueryManager.GetNpcPointQueryManager
	 */
	struct UNpcPointQueryManager_GetNpcPointQueryManager_Params
	{
	public:
		class UNpcPointQueryManager*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.NpcPointQueryManager.FindShootingPoint
	 */
	struct UNpcPointQueryManager_FindShootingPoint_Params
	{
	public:
		struct FNpcPointQueryParam                                 Param;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      FinishCallback;                                          // 0x0040(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		struct FNpcPointQueryHandle                                ReturnValue;                                             // 0x0050(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.NpcPointQueryManager.FindCoverPoint
	 */
	struct UNpcPointQueryManager_FindCoverPoint_Params
	{
	public:
		struct FNpcPointQueryParam                                 Param;                                                   // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      FinishCallback;                                          // 0x0040(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		struct FNpcPointQueryHandle                                ReturnValue;                                             // 0x0050(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.NpcPointQueryManager.CancelQuery
	 */
	struct UNpcPointQueryManager_CancelQuery_Params
	{
	public:
		struct FNpcPointQueryHandle                                Handle;                                                  // 0x0000(0x0010)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerConfig.GetWeightToWarningColor
	 */
	struct UPlayerConfig_GetWeightToWarningColor_Params
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Color;                                                   // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerConfig.GetWeightToWalkSpeedCoefficient
	 */
	struct UPlayerConfig_GetWeightToWalkSpeedCoefficient_Params
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SpeedCoefficient;                                        // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerConfig.GetWeightToStaminaCoefficient
	 */
	struct UPlayerConfig_GetWeightToStaminaCoefficient_Params
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Coefficient;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerConfig.GetWeightToRunSpeedCoefficient
	 */
	struct UPlayerConfig_GetWeightToRunSpeedCoefficient_Params
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SpeedCoefficient;                                        // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerConfig.GetWaterMovementReductionCoefficient
	 */
	struct UPlayerConfig_GetWaterMovementReductionCoefficient_Params
	{
	public:
		float                                                      BodyInWaterRatio;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MovementCoefficient;                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerConfig.GetStaminaRegenerationSpeed
	 */
	struct UPlayerConfig_GetStaminaRegenerationSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerConfig.GetPlayerConfig
	 */
	struct UPlayerConfig_GetPlayerConfig_Params
	{
	public:
		class UPlayerConfig*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerConfig.GetFallDamage
	 */
	struct UPlayerConfig_GetFallDamage_Params
	{
	public:
		float                                                      SpeedDelta;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Damage;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerGameData.ToString
	 */
	struct UPlayerGameData_ToString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerGameData.SavePosition
	 */
	struct UPlayerGameData_SavePosition_Params
	{
	public:
		struct FGameplayTag                                        InLevel;                                                 // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M0DA[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Position;                                                // 0x0010(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             Velocity;                                                // 0x0040(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerGameData.SaveDroppedItems
	 */
	struct UPlayerGameData_SaveDroppedItems_Params
	{
	public:
		struct FGameplayTag                                        InLevel;                                                 // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DWGG[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Location;                                                // 0x0010(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ItemIds;                                                 // 0x0040(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerGameData.ResetStats
	 */
	struct UPlayerGameData_ResetStats_Params
	{
	public:
		bool                                                       bAlive;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerGameData.ResetPosition
	 */
	struct UPlayerGameData_ResetPosition_Params
	{	};

	/**
	 * Function IntoTheRadius.PlayerGameData.RemoveDroppedItem
	 */
	struct UPlayerGameData_RemoveDroppedItem_Params
	{
	public:
		struct FGameplayTag                                        InLevel;                                                 // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ItemId;                                                  // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEmpty;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerGameData.GetPosition
	 */
	struct UPlayerGameData_GetPosition_Params
	{
	public:
		struct FGameplayTag                                        InLevel;                                                 // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TMDV[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Position;                                                // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             Velocity;                                                // 0x0040(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       hasSaved;                                                // 0x004C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerGameData.GetDroppedItems
	 */
	struct UPlayerGameData_GetDroppedItems_Params
	{
	public:
		struct FGameplayTag                                        InLevel;                                                 // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FItemDropInfo>                               ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.ToTransform
	 */
	struct UPlayerHandsConfig_ToTransform_Params
	{
	public:
		struct FPRCleanTransform                                   cleanTransform;                                          // 0x0000(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2EZD[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0020(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.ShowDeviceModel
	 */
	struct UPlayerHandsConfig_ShowDeviceModel_Params
	{
	public:
		class USceneComponent*                                     Parent;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 DisplayComponent;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EControllerHand                                            hand;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4MS8[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 newDisplayComponent;                                     // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.SaveToAsset
	 */
	struct UPlayerHandsConfig_SaveToAsset_Params
	{	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.SavePoseDefault
	 */
	struct UPlayerHandsConfig_SavePoseDefault_Params
	{
	public:
		TMap<EPRControllerType, struct FPRCleanTransform>          leftItemShifts;                                          // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
		TMap<EPRControllerType, struct FPRCleanTransform>          rightItemShifts;                                         // 0x0050(0x0050)  (Parm, NativeAccessSpecifierPublic)
		struct FPRHandPoseInfosPair                                handsData;                                               // 0x00A0(0x02B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.HaveHandsPoseForTagByGeometryTypeAndPoseNumber
	 */
	struct UPlayerHandsConfig_HaveHandsPoseForTagByGeometryTypeAndPoseNumber_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T2KX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        Tag;                                                     // 0x0004(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseGeometryType                                    GeometryType;                                            // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseNumber                                          PoseNumber;                                              // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000E(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.HaveHandsPoseForTag
	 */
	struct UPlayerHandsConfig_HaveHandsPoseForTag_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HLRK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        Tag;                                                     // 0x0004(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.HaveHandsPoseForStaticMeshByGeometryTypeAndPoseNumber
	 */
	struct UPlayerHandsConfig_HaveHandsPoseForStaticMeshByGeometryTypeAndPoseNumber_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CQD0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMesh*                                         StaticMesh;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseGeometryType                                    GeometryType;                                            // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseNumber                                          PoseNumber;                                              // 0x0011(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0012(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.HaveHandsPoseForStaticMesh
	 */
	struct UPlayerHandsConfig_HaveHandsPoseForStaticMesh_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LFDZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMesh*                                         StaticMesh;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.HaveHandsPoseForObjectByGeometryTypeAndPoseNumber
	 */
	struct UPlayerHandsConfig_HaveHandsPoseForObjectByGeometryTypeAndPoseNumber_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YDZX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             Object;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseGeometryType                                    GeometryType;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseNumber                                          PoseNumber;                                              // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0012(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.HaveHandsPoseForObject
	 */
	struct UPlayerHandsConfig_HaveHandsPoseForObject_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5LRL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             Object;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.GetShiftForController
	 */
	struct UPlayerHandsConfig_GetShiftForController_Params
	{
	public:
		struct FPRHandPoseInfo                                     Info;                                                    // 0x0000(0x0140)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EPRControllerType                                          Controller;                                              // 0x0140(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8CEP[0xF];                                   // 0x0141(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0150(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.GetPointShiftForObjectByGeometryTypeAndPoseNumber
	 */
	struct UPlayerHandsConfig_GetPointShiftForObjectByGeometryTypeAndPoseNumber_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseGeometryType                                    GeometryType;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseNumber                                          PoseNumber;                                              // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DKI0[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             Object;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Left;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RIIR[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          handTransform;                                           // 0x0020(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YF9J[0xF];                                   // 0x0051(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Result;                                                  // 0x0060(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          WorldTransform;                                          // 0x0090(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPRHandPoseConditions                               HandPoseConditions;                                      // 0x00C0(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.GetPointShiftForObject
	 */
	struct UPlayerHandsConfig_GetPointShiftForObject_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_27KP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             Object;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Left;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2IDJ[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          handTransform;                                           // 0x0020(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FR25[0xF];                                   // 0x0051(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Result;                                                  // 0x0060(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          WorldTransform;                                          // 0x0090(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.GetPlayerHandsConfig
	 */
	struct UPlayerHandsConfig_GetPlayerHandsConfig_Params
	{
	public:
		class UPlayerHandsConfig*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.GetItemShiftForController
	 */
	struct UPlayerHandsConfig_GetItemShiftForController_Params
	{
	public:
		TMap<EPRControllerType, struct FTransform>                 shiftPerController;                                      // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EPRControllerType                                          Controller;                                              // 0x0050(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7HEB[0xF];                                   // 0x0051(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Shift;                                                   // 0x0060(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.GetHandsPoseForTagByGeometryTypeAndPoseNumber
	 */
	struct UPlayerHandsConfig_GetHandsPoseForTagByGeometryTypeAndPoseNumber_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BKPZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        Tag;                                                     // 0x0004(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseGeometryType                                    GeometryType;                                            // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseNumber                                          PoseNumber;                                              // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YS6J[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPRHandPoseInfosPair                                ReturnValue;                                             // 0x0010(0x02B0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.GetHandsPoseForTag
	 */
	struct UPlayerHandsConfig_GetHandsPoseForTag_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6YMA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        Tag;                                                     // 0x0004(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_40FA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPRHandPoseInfosPair                                ReturnValue;                                             // 0x0010(0x02B0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.GetHandsPoseForStaticMeshByGeometryTypeAndPoseNumber
	 */
	struct UPlayerHandsConfig_GetHandsPoseForStaticMeshByGeometryTypeAndPoseNumber_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8XA2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMesh*                                         StaticMesh;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseGeometryType                                    GeometryType;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseNumber                                          PoseNumber;                                              // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BC7U[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPRHandPoseInfosPair                                ReturnValue;                                             // 0x0018(0x02B0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.GetHandsPoseForStaticMesh
	 */
	struct UPlayerHandsConfig_GetHandsPoseForStaticMesh_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V0B3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMesh*                                         StaticMesh;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPRHandPoseInfosPair                                ReturnValue;                                             // 0x0010(0x02B0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.GetHandsPoseForObjectByGeometryTypeAndPoseNumber
	 */
	struct UPlayerHandsConfig_GetHandsPoseForObjectByGeometryTypeAndPoseNumber_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2NWV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             Object;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseGeometryType                                    GeometryType;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseNumber                                          PoseNumber;                                              // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TAHQ[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPRHandPoseInfosPair                                ReturnValue;                                             // 0x0018(0x02B0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.GetHandsPoseForObject
	 */
	struct UPlayerHandsConfig_GetHandsPoseForObject_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6M54[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             Object;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FPRHandPoseInfosPair                                ReturnValue;                                             // 0x0010(0x02B0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.GetHandShiftForObjectByGeometryTypeAndPoseNumber
	 */
	struct UPlayerHandsConfig_GetHandShiftForObjectByGeometryTypeAndPoseNumber_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseGeometryType                                    GeometryType;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseNumber                                          PoseNumber;                                              // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KK2G[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             Object;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Left;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YYBT[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          handTransform;                                           // 0x0020(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_N274[0xF];                                   // 0x0051(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Result;                                                  // 0x0060(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          WorldTransform;                                          // 0x0090(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPRHandPoseConditions                               HandPoseConditions;                                      // 0x00C0(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.GetHandShiftForObject
	 */
	struct UPlayerHandsConfig_GetHandShiftForObject_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WVUU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             Object;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Left;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BOB3[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          handTransform;                                           // 0x0020(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EZSQ[0xF];                                   // 0x0051(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Result;                                                  // 0x0060(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          WorldTransform;                                          // 0x0090(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.GetControllerShifts
	 */
	struct UPlayerHandsConfig_GetControllerShifts_Params
	{
	public:
		EPRControllerType                                          Controller;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_P7Y3[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          LeftShift;                                               // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          RightShift;                                              // 0x0040(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.GetBestPointShiftForObjectByConditions
	 */
	struct UPlayerHandsConfig_GetBestPointShiftForObjectByConditions_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J0T3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             Object;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Left;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H4BD[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          handTransform;                                           // 0x0020(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       useGripLimit;                                            // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_94WR[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             handRootLocation;                                        // 0x0054(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGripMotionControllerComponent*                      MotionController;                                        // 0x0060(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E76F[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Result;                                                  // 0x0070(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          WorldTransform;                                          // 0x00A0(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EPRHandPoseGeometryType                                    bestGeometryType;                                        // 0x00D0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseNumber                                          bestPoseNumber;                                          // 0x00D1(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.GetBestPointShiftForObject
	 */
	struct UPlayerHandsConfig_GetBestPointShiftForObject_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F7O7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             Object;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Left;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UIGE[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          handTransform;                                           // 0x0020(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U0ZE[0xF];                                   // 0x0051(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Result;                                                  // 0x0060(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          WorldTransform;                                          // 0x0090(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EPRHandPoseGeometryType                                    bestGeometryType;                                        // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseNumber                                          bestPoseNumber;                                          // 0x00C1(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.GetBestHandShiftForObjectByConditions
	 */
	struct UPlayerHandsConfig_GetBestHandShiftForObjectByConditions_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_N5BH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             Object;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLeft;                                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GM52[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          CurrentHandTransform;                                    // 0x0020(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bUseArmLengthLimit;                                      // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GAE1[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HandShoulderLocation;                                    // 0x0054(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGripMotionControllerComponent*                      MotionController;                                        // 0x0060(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QIZG[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          PoseRelativeTransform;                                   // 0x0070(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          PoseWorldTransform;                                      // 0x00A0(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EPRHandPoseGeometryType                                    PoseGeometryType;                                        // 0x00D0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseNumber                                          PoseNumber;                                              // 0x00D1(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.GetBestHandShiftForObject
	 */
	struct UPlayerHandsConfig_GetBestHandShiftForObject_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I10B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             Object;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Left;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OPAZ[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          handTransform;                                           // 0x0020(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       success;                                                 // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KKHA[0xF];                                   // 0x0051(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Result;                                                  // 0x0060(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          WorldTransform;                                          // 0x0090(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EPRHandPoseGeometryType                                    bestGeometryType;                                        // 0x00C0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseNumber                                          bestPoseNumber;                                          // 0x00C1(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerHandsConfig.FromTransform
	 */
	struct UPlayerHandsConfig_FromTransform_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPRCleanTransform                                   ReturnValue;                                             // 0x0030(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerLightSensitiveInterface.LightOn
	 */
	struct UPlayerLightSensitiveInterface_LightOn_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BDZ4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     Component;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRBasicActorComponent.OnLevelStarted
	 */
	struct UPRBasicActorComponent_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRBasicActorComponent.OnLevelPrepare
	 */
	struct UPRBasicActorComponent_OnLevelPrepare_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRBasicActorComponent.OnGameStartedPrivate
	 */
	struct UPRBasicActorComponent_OnGameStartedPrivate_Params
	{	};

	/**
	 * Function IntoTheRadius.PRBasicActorComponent.OnGameStarted
	 */
	struct UPRBasicActorComponent_OnGameStarted_Params
	{	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.UseStamina
	 */
	struct UPlayerStatsComponent_UseStamina_Params
	{
	public:
		bool                                                       Use;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_78NQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      StaminaUseMult;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.SetStats
	 */
	struct UPlayerStatsComponent_SetStats_Params
	{
	public:
		int32_t                                                    HealthPercent;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    StaminaPercent;                                          // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    RestPercent;                                             // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NutritionPercent;                                        // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    HungerPercent;                                           // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.SetStamina
	 */
	struct UPlayerStatsComponent_SetStamina_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.SetHealth
	 */
	struct UPlayerStatsComponent_SetHealth_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.Reset
	 */
	struct UPlayerStatsComponent_Reset_Params
	{
	public:
		bool                                                       bAlive;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.RegenerateHealth
	 */
	struct UPlayerStatsComponent_RegenerateHealth_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.HasStamina
	 */
	struct UPlayerStatsComponent_HasStamina_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.HasRest
	 */
	struct UPlayerStatsComponent_HasRest_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.HasNutrition
	 */
	struct UPlayerStatsComponent_HasNutrition_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.GetStatus
	 */
	struct UPlayerStatsComponent_GetStatus_Params
	{
	public:
		EPRStatStatus                                              Health;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRStatStatus                                              Stamina;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRStatStatus                                              Nutrition;                                               // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.GetStats
	 */
	struct UPlayerStatsComponent_GetStats_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      HealthPercent;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Stamina;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StaminaPercent;                                          // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Rest;                                                    // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      RestPercent;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Nutrition;                                               // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NutritionPercent;                                        // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.GetStaminaPercent
	 */
	struct UPlayerStatsComponent_GetStaminaPercent_Params
	{
	public:
		float                                                      StaminaPercent;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.GetSleepTimeTillRested
	 */
	struct UPlayerStatsComponent_GetSleepTimeTillRested_Params
	{
	public:
		int32_t                                                    RestPercent;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Seconds;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.GetSleepTimeTillHealed
	 */
	struct UPlayerStatsComponent_GetSleepTimeTillHealed_Params
	{
	public:
		int32_t                                                    HealthPercent;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Seconds;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.GetRestPercent
	 */
	struct UPlayerStatsComponent_GetRestPercent_Params
	{
	public:
		float                                                      RestPercent;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.GetMaxAvailableStamina
	 */
	struct UPlayerStatsComponent_GetMaxAvailableStamina_Params
	{
	public:
		float                                                      Stamina;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxAvailable;                                            // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.GetHealthMax
	 */
	struct UPlayerStatsComponent_GetHealthMax_Params
	{
	public:
		float                                                      HealthMax;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.EnoughStamina
	 */
	struct UPlayerStatsComponent_EnoughStamina_Params
	{
	public:
		float                                                      Stamina;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.ChangeStamina
	 */
	struct UPlayerStatsComponent_ChangeStamina_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.ChangeRestByPercent
	 */
	struct UPlayerStatsComponent_ChangeRestByPercent_Params
	{
	public:
		int32_t                                                    Percent;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.ChangeRest
	 */
	struct UPlayerStatsComponent_ChangeRest_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bBuff;                                                   // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.ChangeNutrition
	 */
	struct UPlayerStatsComponent_ChangeNutrition_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.ChangeHealthByPercent
	 */
	struct UPlayerStatsComponent_ChangeHealthByPercent_Params
	{
	public:
		int32_t                                                    Percent;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.CanRegenerateHealth
	 */
	struct UPlayerStatsComponent_CanRegenerateHealth_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayerStatsComponent.AllowRegeneration
	 */
	struct UPlayerStatsComponent_AllowRegeneration_Params
	{
	public:
		float                                                      HealthRegenStart;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      HealthRegenMax;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      HealthRegenPerSecond;                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PoolDisposeComponent.StopTimer
	 */
	struct UPoolDisposeComponent_StopTimer_Params
	{	};

	/**
	 * Function IntoTheRadius.PoolDisposeComponent.StartTimerWithDelay
	 */
	struct UPoolDisposeComponent_StartTimerWithDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PoolDisposeComponent.StartTimer
	 */
	struct UPoolDisposeComponent_StartTimer_Params
	{	};

	/**
	 * Function IntoTheRadius.PoolDisposeComponent.Dispose
	 */
	struct UPoolDisposeComponent_Dispose_Params
	{	};

	/**
	 * Function IntoTheRadius.PoolManager.ReturnActor
	 */
	struct UPoolManager_ReturnActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PoolManager.PrefillPoolFromConfig
	 */
	struct UPoolManager_PrefillPoolFromConfig_Params
	{	};

	/**
	 * Function IntoTheRadius.PoolManager.IsActorInPool
	 */
	struct UPoolManager_IsActorInPool_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PoolManager.GetPoolManager
	 */
	struct UPoolManager_GetPoolManager_Params
	{
	public:
		class UPoolManager*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PoolManager.GetActor
	 */
	struct UPoolManager_GetActor_Params
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O02N[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class AActor*                                              Owner;                                                   // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               Instigator;                                              // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PoolManagerConfig.GetPoolManagerConfig
	 */
	struct UPoolManagerConfig_GetPoolManagerConfig_Params
	{
	public:
		class UPoolManagerConfig*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRBasicCharacter.SetCoverReservationFromSearchResult
	 */
	struct APRBasicCharacter_SetCoverReservationFromSearchResult_Params
	{
	public:
		struct FNpcPointQueryResult                                Result;                                                  // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRBasicCharacter.OnTransitionStart
	 */
	struct APRBasicCharacter_OnTransitionStart_Params
	{	};

	/**
	 * Function IntoTheRadius.PRBasicCharacter.OnTransitionEnd
	 */
	struct APRBasicCharacter_OnTransitionEnd_Params
	{	};

	/**
	 * Function IntoTheRadius.PRBasicCharacter.OnLevelStarted
	 */
	struct APRBasicCharacter_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRBasicCharacter.OnLevelPrepare
	 */
	struct APRBasicCharacter_OnLevelPrepare_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRBasicCharacter.OnGameStartedPrivate
	 */
	struct APRBasicCharacter_OnGameStartedPrivate_Params
	{	};

	/**
	 * Function IntoTheRadius.PRBasicCharacter.OnGameStarted
	 */
	struct APRBasicCharacter_OnGameStarted_Params
	{	};

	/**
	 * Function IntoTheRadius.PRBasicCharacter.OnGamePaused
	 */
	struct APRBasicCharacter_OnGamePaused_Params
	{
	public:
		bool                                                       bPaused;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRBasicCharacter.OnGameDataSaved
	 */
	struct APRBasicCharacter_OnGameDataSaved_Params
	{	};

	/**
	 * Function IntoTheRadius.PRBasicCharacter.GetRandomReachablePoint
	 */
	struct APRBasicCharacter_GetRandomReachablePoint_Params
	{
	public:
		struct FVector                                             Origin;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             StartPoint;                                              // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MinDistance;                                             // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Point;                                                   // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRBasicCharacter.ClearCoverReservation
	 */
	struct APRBasicCharacter_ClearCoverReservation_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCharacter.WalkToLocation
	 */
	struct APRCharacter_WalkToLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.WalkToActorLocation
	 */
	struct APRCharacter_WalkToActorLocation_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.SpawnLoot
	 */
	struct APRCharacter_SpawnLoot_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCharacter.SetupState
	 */
	struct APRCharacter_SetupState_Params
	{
	public:
		float                                                      NewAwareness;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NewPOI;                                                  // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECharCommand                                               NewCommand;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.SetEnableEverything
	 */
	struct APRCharacter_SetEnableEverything_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.SetEnableAdditionalThings
	 */
	struct APRCharacter_SetEnableAdditionalThings_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.SetCommand
	 */
	struct APRCharacter_SetCommand_Params
	{
	public:
		ECharCommand                                               NewCommand;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Force;                                                   // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.SetBrainEnabled
	 */
	struct APRCharacter_SetBrainEnabled_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.SelectAndAttackClosest
	 */
	struct APRCharacter_SelectAndAttackClosest_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.SelectAndAttack
	 */
	struct APRCharacter_SelectAndAttack_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.SaveGameData
	 */
	struct APRCharacter_SaveGameData_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCharacter.RestartTree
	 */
	struct APRCharacter_RestartTree_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCharacter.ReappearOutOfSight
	 */
	struct APRCharacter_ReappearOutOfSight_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCharacter.ReappearCoverCallback
	 */
	struct APRCharacter_ReappearCoverCallback_Params
	{
	public:
		struct FNpcPointQueryResult                                QueryResult;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.ProcessNoise
	 */
	struct APRCharacter_ProcessNoise_Params
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.ProcessDamage
	 */
	struct APRCharacter_ProcessDamage_Params
	{
	public:
		class AActor*                                              causer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.PrintMessage
	 */
	struct APRCharacter_PrintMessage_Params
	{
	public:
		class FString                                              MessageToPrint;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.OnHeardNoise
	 */
	struct APRCharacter_OnHeardNoise_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Strength;                                                // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Tag;                                                     // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.OnDeath
	 */
	struct APRCharacter_OnDeath_Params
	{
	public:
		bool                                                       bEnableRagdoll;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.OnDamaged
	 */
	struct APRCharacter_OnDamaged_Params
	{
	public:
		class AActor*                                              causer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.NpcAwarenessLevelChanged
	 */
	struct APRCharacter_NpcAwarenessLevelChanged_Params
	{
	public:
		EAwarenessLevel                                            PrevLevel;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAwarenessLevel                                            NewLevel;                                                // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.LoadBaseSettings
	 */
	struct APRCharacter_LoadBaseSettings_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCharacter.LoadAdditionalSettings
	 */
	struct APRCharacter_LoadAdditionalSettings_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCharacter.IsPlayerNear
	 */
	struct APRCharacter_IsPlayerNear_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.IsLocInValidRange
	 */
	struct APRCharacter_IsLocInValidRange_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.IsEnabled
	 */
	struct APRCharacter_IsEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.InvestigateLocation
	 */
	struct APRCharacter_InvestigateLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.HealthEnd
	 */
	struct APRCharacter_HealthEnd_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCharacter.GetIdleOriginPoint
	 */
	struct APRCharacter_GetIdleOriginPoint_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.GetFootstepNoiseRange
	 */
	struct APRCharacter_GetFootstepNoiseRange_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.GetAwarenessLevel
	 */
	struct APRCharacter_GetAwarenessLevel_Params
	{
	public:
		EAwarenessLevel                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.GetAttackMoveDilationAngle
	 */
	struct APRCharacter_GetAttackMoveDilationAngle_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.GetAttackLostLocationTime
	 */
	struct APRCharacter_GetAttackLostLocationTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCharacter.EventBroadcastEnemyLocation
	 */
	struct APRCharacter_EventBroadcastEnemyLocation_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCharacter.EnableRagdoll
	 */
	struct APRCharacter_EnableRagdoll_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCharacter.DestroyController
	 */
	struct APRCharacter_DestroyController_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCharacter.CharEnabled
	 */
	struct APRCharacter_CharEnabled_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCharacter.AlertNearbyMonsters
	 */
	struct APRCharacter_AlertNearbyMonsters_Params
	{
	public:
		class AActor*                                              causer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.UpdateGroundedRotation
	 */
	struct APRALSCharacter_UpdateGroundedRotation_Params
	{	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.UpdateDynamicMovementSettings
	 */
	struct APRALSCharacter_UpdateDynamicMovementSettings_Params
	{
	public:
		EGait                                                      AllowedGait;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.UpdateCharacterMovement
	 */
	struct APRALSCharacter_UpdateCharacterMovement_Params
	{	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.SmoothCharacterRotation
	 */
	struct APRALSCharacter_SmoothCharacterRotation_Params
	{
	public:
		struct FRotator                                            Target;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      TargetInterpSpeed;                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ActorInterpSpeed;                                        // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.SetMovementModel
	 */
	struct APRALSCharacter_SetMovementModel_Params
	{	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.SetEssentialValues
	 */
	struct APRALSCharacter_SetEssentialValues_Params
	{	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.SetActorLocationDuringRagdoll
	 */
	struct APRALSCharacter_SetActorLocationDuringRagdoll_Params
	{	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.SetActorLocationAndRotation
	 */
	struct APRALSCharacter_SetActorLocationAndRotation_Params
	{
	public:
		struct FVector                                             NewLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            NewRotation;                                             // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bSweep;                                                  // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bTeleport;                                               // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L3YU[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          OutSweepHitResult;                                       // 0x001C(0x0088)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00A4(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.RagdollUpdate
	 */
	struct APRALSCharacter_RagdollUpdate_Params
	{	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.RagdollStart
	 */
	struct APRALSCharacter_RagdollStart_Params
	{	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.RagdollEnd
	 */
	struct APRALSCharacter_RagdollEnd_Params
	{	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.OnViewModeChanged
	 */
	struct APRALSCharacter_OnViewModeChanged_Params
	{
	public:
		EViewMode                                                  NewViewMode;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.OnStartCrouch
	 */
	struct APRALSCharacter_OnStartCrouch_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.OnStanceChanged
	 */
	struct APRALSCharacter_OnStanceChanged_Params
	{
	public:
		EStance                                                    NewStance;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.OnRotationModeChanged
	 */
	struct APRALSCharacter_OnRotationModeChanged_Params
	{
	public:
		ERotationMode                                              NewRotationMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.OnOverlayStateChanged
	 */
	struct APRALSCharacter_OnOverlayStateChanged_Params
	{
	public:
		EOverlayState                                              NewOverLayState;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.OnMovementStateChanged
	 */
	struct APRALSCharacter_OnMovementStateChanged_Params
	{
	public:
		EMovementState                                             NewMovementState;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.OnGaitChanged
	 */
	struct APRALSCharacter_OnGaitChanged_Params
	{
	public:
		EGait                                                      NewActualGait;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.OnEndCrouch
	 */
	struct APRALSCharacter_OnEndCrouch_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.OnCharacterMovementModeChanged
	 */
	struct APRALSCharacter_OnCharacterMovementModeChanged_Params
	{
	public:
		Engine_EMovementMode                                       NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.OnCharacterMovementActionChanged
	 */
	struct APRALSCharacter_OnCharacterMovementActionChanged_Params
	{
	public:
		EMovementAction                                            NewMovementAction;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.OnBeginPlay
	 */
	struct APRALSCharacter_OnBeginPlay_Params
	{	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.LimitRotation
	 */
	struct APRALSCharacter_LimitRotation_Params
	{
	public:
		float                                                      AimYawMin;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AimYawMax;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InterpSpeed;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.GetTargetMovementSettings
	 */
	struct APRALSCharacter_GetTargetMovementSettings_Params
	{
	public:
		struct FIntoTheRadius_FMovementSettings                    ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.GetRollAnimation
	 */
	struct APRALSCharacter_GetRollAnimation_Params
	{
	public:
		class UAnimMontage*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.GetMappedSpeed
	 */
	struct APRALSCharacter_GetMappedSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.GetGetUpAnimation
	 */
	struct APRALSCharacter_GetGetUpAnimation_Params
	{
	public:
		bool                                                       bRagDollFaceUp;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GRUP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.GetCapsuleLocationFromBase
	 */
	struct APRALSCharacter_GetCapsuleLocationFromBase_Params
	{
	public:
		struct FVector                                             BaseLocation;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ZOffset;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.GetCapsuleBaseLocation
	 */
	struct APRALSCharacter_GetCapsuleBaseLocation_Params
	{
	public:
		float                                                      ZOffset;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.GetAnimCurveValue
	 */
	struct APRALSCharacter_GetAnimCurveValue_Params
	{
	public:
		class FName                                                CurveName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.GetAimingRotation
	 */
	struct APRALSCharacter_GetAimingRotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.GetActualGait
	 */
	struct APRALSCharacter_GetActualGait_Params
	{
	public:
		EGait                                                      AllowedGait;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGait                                                      ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.CanUpdateMovingRotation
	 */
	struct APRALSCharacter_CanUpdateMovingRotation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.CanSprint
	 */
	struct APRALSCharacter_CanSprint_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.CalculateGroundedRotationRate
	 */
	struct APRALSCharacter_CalculateGroundedRotationRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.CalculateAcceleration
	 */
	struct APRALSCharacter_CalculateAcceleration_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.CacheValues
	 */
	struct APRALSCharacter_CacheValues_Params
	{	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.BeginPlay
	 */
	struct APRALSCharacter_BeginPlay_Params
	{	};

	/**
	 * Function IntoTheRadius.PRALSCharacter.AddToCharacterRotation
	 */
	struct APRALSCharacter_AddToCharacterRotation_Params
	{
	public:
		struct FRotator                                            DeltaRotation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRAnimInstance.GetSMC
	 */
	struct UPRAnimInstance_GetSMC_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRAnimInstance.GetActor
	 */
	struct UPRAnimInstance_GetActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRAnimPlayer.ReceiveInputDataNative
	 */
	struct UPRAnimPlayer_ReceiveInputDataNative_Params
	{	};

	/**
	 * Function IntoTheRadius.PRAnomaly.TriggerVisuals
	 */
	struct APRAnomaly_TriggerVisuals_Params
	{	};

	/**
	 * Function IntoTheRadius.PRAnomaly.OverlapTriggered
	 */
	struct APRAnomaly_OverlapTriggered_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRAnomaly.OverlapStartingTriggered
	 */
	struct APRAnomaly_OverlapStartingTriggered_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRAnomaly.OverlapLeavingTriggered
	 */
	struct APRAnomaly_OverlapLeavingTriggered_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRAnomaly.OverlapCheckerDelegate
	 */
	struct APRAnomaly_OverlapCheckerDelegate_Params
	{	};

	/**
	 * Function IntoTheRadius.PRAnomaly.OnSetupEvent
	 */
	struct APRAnomaly_OnSetupEvent_Params
	{	};

	/**
	 * Function IntoTheRadius.PRAnomaly.OnOverlapEndTrigger
	 */
	struct APRAnomaly_OnOverlapEndTrigger_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRAnomaly.OnOverlapBeginTrigger
	 */
	struct APRAnomaly_OnOverlapBeginTrigger_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComp;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZGW3[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRAnomaly.LevelStarted
	 */
	struct APRAnomaly_LevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRAnomaly.LevelPrepare
	 */
	struct APRAnomaly_LevelPrepare_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRAnomaly.GenerateTriggersOverlapEvents
	 */
	struct APRAnomaly_GenerateTriggersOverlapEvents_Params
	{
	public:
		bool                                                       ClearExistingEvents;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRAnomaly.ApplyAnomalyDamage
	 */
	struct APRAnomaly_ApplyAnomalyDamage_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRAnomaly.AnomalyTriggered
	 */
	struct APRAnomaly_AnomalyTriggered_Params
	{	};

	/**
	 * Function IntoTheRadius.PRAshMeshComponent.InitParticles
	 */
	struct UPRAshMeshComponent_InitParticles_Params
	{	};

	/**
	 * Function IntoTheRadius.PRBasicActorWithConditions.CheckActorConditions
	 */
	struct APRBasicActorWithConditions_CheckActorConditions_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRBasicSceneComponent.OnLevelStarted
	 */
	struct UPRBasicSceneComponent_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRBasicSceneComponent.OnLevelPrepare
	 */
	struct UPRBasicSceneComponent_OnLevelPrepare_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRBasicSceneComponent.OnGameStartedPrivate
	 */
	struct UPRBasicSceneComponent_OnGameStartedPrivate_Params
	{	};

	/**
	 * Function IntoTheRadius.PRBasicSceneComponent.OnGameStarted
	 */
	struct UPRBasicSceneComponent_OnGameStarted_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCheatManager.UnlockAllWeapons
	 */
	struct UPRCheatManager_UnlockAllWeapons_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCheatManager.ToggleProjectileDraw
	 */
	struct UPRCheatManager_ToggleProjectileDraw_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCheatManager.SpawnItem
	 */
	struct UPRCheatManager_SpawnItem_Params
	{
	public:
		class FString                                              Tag;                                                     // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCheatManager.ShowRevision
	 */
	struct UPRCheatManager_ShowRevision_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCheatManager.SetSkipTutorial
	 */
	struct UPRCheatManager_SetSkipTutorial_Params
	{
	public:
		bool                                                       b_new_skip;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCheatManager.SecurityLevel
	 */
	struct UPRCheatManager_SecurityLevel_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCheatManager.RIP
	 */
	struct UPRCheatManager_RIP_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCheatManager.ResetTideTimer
	 */
	struct UPRCheatManager_ResetTideTimer_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCheatManager.RefillAmmoContainer
	 */
	struct UPRCheatManager_RefillAmmoContainer_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCheatManager.RefillAmmo
	 */
	struct UPRCheatManager_RefillAmmo_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCheatManager.RaiseCrashReport
	 */
	struct UPRCheatManager_RaiseCrashReport_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCheatManager.PrintActors
	 */
	struct UPRCheatManager_PrintActors_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCheatManager.IsProjectileDraw
	 */
	struct UPRCheatManager_IsProjectileDraw_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCheatManager.GiveMeTheWeapon
	 */
	struct UPRCheatManager_GiveMeTheWeapon_Params
	{
	public:
		class FString                                              Tag;                                                     // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCheatManager.GiveMeTheMoney
	 */
	struct UPRCheatManager_GiveMeTheMoney_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCheatManager.GiveMeTheDurability
	 */
	struct UPRCheatManager_GiveMeTheDurability_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCheatManager.GiveMeTheBullets
	 */
	struct UPRCheatManager_GiveMeTheBullets_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCheatManager.GetSkipTutorial
	 */
	struct UPRCheatManager_GetSkipTutorial_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCheatManager.GetMission
	 */
	struct UPRCheatManager_GetMission_Params
	{
	public:
		struct FGameplayTag                                        MissionInstanceId;                                       // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMissionData*                                        MissionData;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCheatManager.GetChildTags
	 */
	struct UPRCheatManager_GetChildTags_Params
	{
	public:
		struct FGameplayTag                                        parentTag;                                               // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FGameplayTag>                                ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCheatManager.DoSpawnItem
	 */
	struct UPRCheatManager_DoSpawnItem_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryItem*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCheatManager.ChangeHealth
	 */
	struct UPRCheatManager_ChangeHealth_Params
	{
	public:
		int32_t                                                    Delta;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCheatManager.AddMission
	 */
	struct UPRCheatManager_AddMission_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRClusterSpawner.OnCheckTick
	 */
	struct APRClusterSpawner_OnCheckTick_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCommonGameData.SetTrigger
	 */
	struct UPRCommonGameData_SetTrigger_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCommonGameData.SaveShootingRun
	 */
	struct UPRCommonGameData_SaveShootingRun_Params
	{
	public:
		float                                                      RunTime;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Scores;                                                  // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Hits;                                                    // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Misses;                                                  // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    GrenadeKills;                                            // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCommonGameData.OnMissionChange
	 */
	struct UPRCommonGameData_OnMissionChange_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCommonGameData.OnItemTaken
	 */
	struct UPRCommonGameData_OnItemTaken_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCommonGameData.IsWeaponUnlocked
	 */
	struct UPRCommonGameData_IsWeaponUnlocked_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCommonGameData.Initialize
	 */
	struct UPRCommonGameData_Initialize_Params
	{	};

	/**
	 * Function IntoTheRadius.PRCommonGameData.IncrementGuitarPlayCount
	 */
	struct UPRCommonGameData_IncrementGuitarPlayCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCommonGameData.GetTrigger
	 */
	struct UPRCommonGameData_GetTrigger_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCommonGameData.GetTotalPlaytimeMinutes
	 */
	struct UPRCommonGameData_GetTotalPlaytimeMinutes_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRCommonGameData.GetCommonGameData
	 */
	struct UPRCommonGameData_GetCommonGameData_Params
	{
	public:
		class UPRCommonGameData*                                   Data;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PREnvironment.Startup
	 */
	struct APREnvironment_Startup_Params
	{	};

	/**
	 * Function IntoTheRadius.PREnvironment.SetEnvironmentHidden
	 */
	struct APREnvironment_SetEnvironmentHidden_Params
	{
	public:
		bool                                                       bEnvironmentHidden;                                      // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PREnvironment.OnGameTimeChanged
	 */
	struct APREnvironment_OnGameTimeChanged_Params
	{
	public:
		float                                                      AddedSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PREnvironment.OnGameplayTimeDilationChanged
	 */
	struct APREnvironment_OnGameplayTimeDilationChanged_Params
	{
	public:
		float                                                      Dilation;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PREnvironment.GetRadiusLocation
	 */
	struct APREnvironment_GetRadiusLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.UpdateMarker
	 */
	struct UPRGameData_UpdateMarker_Params
	{
	public:
		class FString                                              Marker;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRemove;                                                 // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.UnsetTrigger
	 */
	struct UPRGameData_UnsetTrigger_Params
	{
	public:
		struct FGameplayTag                                        Trigger;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.StatAddUniqueItem
	 */
	struct UPRGameData_StatAddUniqueItem_Params
	{
	public:
		struct FGameplayTag                                        ItemId;                                                  // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.StatAddKill
	 */
	struct UPRGameData_StatAddKill_Params
	{
	public:
		struct FGameplayTag                                        NPCTag;                                                  // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        weaponTag;                                               // 0x0008(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.StatAddDeath
	 */
	struct UPRGameData_StatAddDeath_Params
	{
	public:
		struct FGameplayTag                                        KillerTag;                                               // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.SetTrigger
	 */
	struct UPRGameData_SetTrigger_Params
	{
	public:
		struct FGameplayTag                                        Trigger;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.SetPlayerLevel
	 */
	struct UPRGameData_SetPlayerLevel_Params
	{
	public:
		int32_t                                                    PlayerLevel;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.SaveSleepLocation
	 */
	struct UPRGameData_SaveSleepLocation_Params
	{
	public:
		struct FGameplayTag                                        Level;                                                   // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.SaveDecorItemTransform
	 */
	struct UPRGameData_SaveDecorItemTransform_Params
	{
	public:
		class FString                                              DecorId;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.SaveDecorItemDestroyed
	 */
	struct UPRGameData_SaveDecorItemDestroyed_Params
	{
	public:
		class FString                                              DecorId;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.SaveDeathLocation
	 */
	struct UPRGameData_SaveDeathLocation_Params
	{
	public:
		struct FGameplayTag                                        Level;                                                   // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.ResetGameData
	 */
	struct UPRGameData_ResetGameData_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameData.RemoveSleepLocation
	 */
	struct UPRGameData_RemoveSleepLocation_Params
	{
	public:
		struct FGameplayTag                                        Level;                                                   // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.RemoveDeathLocation
	 */
	struct UPRGameData_RemoveDeathLocation_Params
	{
	public:
		struct FGameplayTag                                        Level;                                                   // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.PrintMissions
	 */
	struct UPRGameData_PrintMissions_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.PrintInventory
	 */
	struct UPRGameData_PrintInventory_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.PrintData
	 */
	struct UPRGameData_PrintData_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.PrepareNewGame
	 */
	struct UPRGameData_PrepareNewGame_Params
	{
	public:
		struct FRadiusGameDifficulty                               NewDifficulty;                                           // 0x0000(0x0010)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bIronman;                                                // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSkipTutorial;                                           // 0x0011(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStartupConfig;                                          // 0x0012(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZW7S[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FGameplayTag>                                Triggers;                                                // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.OnPlayerLevelChanged
	 */
	struct UPRGameData_OnPlayerLevelChanged_Params
	{
	public:
		int32_t                                                    PlayerLevel;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.OnObjectiveChange
	 */
	struct UPRGameData_OnObjectiveChange_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMissionAbstractObjectiveData*                       Objective;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.OnMissionChange
	 */
	struct UPRGameData_OnMissionChange_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.OnItemTaken
	 */
	struct UPRGameData_OnItemTaken_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.OnItemStored
	 */
	struct UPRGameData_OnItemStored_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.IsManOfHisWord
	 */
	struct UPRGameData_IsManOfHisWord_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.IsKatyaMonologueInvalid
	 */
	struct UPRGameData_IsKatyaMonologueInvalid_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIgnoreConditions;                                       // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.IsJournalGroupHasNewNotes
	 */
	struct UPRGameData_IsJournalGroupHasNewNotes_Params
	{
	public:
		EJournalGroup                                              Group;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.HasMoney
	 */
	struct UPRGameData_HasMoney_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.GetUID
	 */
	struct UPRGameData_GetUID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.GetSpawnSaveData
	 */
	struct UPRGameData_GetSpawnSaveData_Params
	{
	public:
		class USpawnerGameData*                                    SpawnSaveData;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.GetSleepLocation
	 */
	struct UPRGameData_GetSleepLocation_Params
	{
	public:
		struct FGameplayTag                                        Level;                                                   // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.GetSecondsPassed
	 */
	struct UPRGameData_GetSecondsPassed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.GetSecondsLastTide
	 */
	struct UPRGameData_GetSecondsLastTide_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.GetRealSecondsToTide
	 */
	struct UPRGameData_GetRealSecondsToTide_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.GetPlaytimeSeconds
	 */
	struct UPRGameData_GetPlaytimeSeconds_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.GetPlaytimeMinutes
	 */
	struct UPRGameData_GetPlaytimeMinutes_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.GetPlayerLevel
	 */
	struct UPRGameData_GetPlayerLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.GetMapRenderTarget
	 */
	struct UPRGameData_GetMapRenderTarget_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.GetJournalGroupNotes
	 */
	struct UPRGameData_GetJournalGroupNotes_Params
	{
	public:
		EJournalGroup                                              Group;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I9BM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FNoteData>                                   ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.GetGameSecondsToTide
	 */
	struct UPRGameData_GetGameSecondsToTide_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.GetGameData
	 */
	struct UPRGameData_GetGameData_Params
	{
	public:
		class UPRGameData*                                         GameData;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.GetDifficultyPreset
	 */
	struct UPRGameData_GetDifficultyPreset_Params
	{
	public:
		EPRGameDifficultyPreset                                    ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.GetDecorItemTransform
	 */
	struct UPRGameData_GetDecorItemTransform_Params
	{
	public:
		class FString                                              DecorId;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bDestroyed;                                              // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0041(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.GetDeathLocation
	 */
	struct UPRGameData_GetDeathLocation_Params
	{
	public:
		struct FGameplayTag                                        Level;                                                   // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.FillFrom
	 */
	struct UPRGameData_FillFrom_Params
	{
	public:
		class UPRGameData*                                         Other;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.DumpData
	 */
	struct UPRGameData_DumpData_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.CheckTrigger
	 */
	struct UPRGameData_CheckTrigger_Params
	{
	public:
		struct FGameplayTag                                        Trigger;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.CheckTideTriggers
	 */
	struct UPRGameData_CheckTideTriggers_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameData.CheckMarker
	 */
	struct UPRGameData_CheckMarker_Params
	{
	public:
		class FString                                              Marker;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.CheckGameTriggers
	 */
	struct UPRGameData_CheckGameTriggers_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameData.ChangeMoney
	 */
	struct UPRGameData_ChangeMoney_Params
	{
	public:
		int32_t                                                    ChangeBy;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ABC9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      AnalyticsParams;                                         // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.ChangeGameDifficulty
	 */
	struct UPRGameData_ChangeGameDifficulty_Params
	{
	public:
		struct FRadiusGameDifficulty                               Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameData.ApplyTideReset
	 */
	struct UPRGameData_ApplyTideReset_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGIReferences.GetControllerReference
	 */
	struct UPRGIReferences_GetControllerReference_Params
	{
	public:
		class UClass*                                              Interface;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameInstance.SetShutdown
	 */
	struct UPRGameInstance_SetShutdown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameInstance.RestartGame
	 */
	struct UPRGameInstance_RestartGame_Params
	{
	public:
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       skipTutorial;                                            // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Ironman;                                                 // 0x0005(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRadiusGameDifficulty                               Difficulty;                                              // 0x0006(0x0010)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameInstance.ReceiveOnGameStart
	 */
	struct UPRGameInstance_ReceiveOnGameStart_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameInstance.OnShutdown
	 */
	struct UPRGameInstance_OnShutdown_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameInstance.OnBeforeLoad
	 */
	struct UPRGameInstance_OnBeforeLoad_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameInstance.IsEAPlayer
	 */
	struct UPRGameInstance_IsEAPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameInstance.IsBetaPlayer
	 */
	struct UPRGameInstance_IsBetaPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameInstance.HmdToString
	 */
	struct UPRGameInstance_HmdToString_Params
	{
	public:
		EPRHmdDeviceType                                           HMD;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y8TJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameInstance.HideVersionRevision
	 */
	struct UPRGameInstance_HideVersionRevision_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameInstance.HasSaveOnStartup
	 */
	struct UPRGameInstance_HasSaveOnStartup_Params
	{
	public:
		bool                                                       hasSave;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameInstance.GetPurchaseDate
	 */
	struct UPRGameInstance_GetPurchaseDate_Params
	{
	public:
		struct FDateTime                                           PurchaseDate;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PurchaseDateString;                                      // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameInstance.GetPlayerID
	 */
	struct UPRGameInstance_GetPlayerID_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameInstance.GetPlayerCountry
	 */
	struct UPRGameInstance_GetPlayerCountry_Params
	{
	public:
		class FString                                              countryCode;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameInstance.GetHMDDeviceType
	 */
	struct UPRGameInstance_GetHMDDeviceType_Params
	{
	public:
		EPRHmdDeviceType                                           HMD;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameInstance.GetDeviceTypeString
	 */
	struct UPRGameInstance_GetDeviceTypeString_Params
	{
	public:
		class FString                                              HMD;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Controller;                                              // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameInstance.GetControllerType
	 */
	struct UPRGameInstance_GetControllerType_Params
	{
	public:
		EPRControllerType                                          Controller;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsDefault;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameInstance.GetAnalyticsManager
	 */
	struct UPRGameInstance_GetAnalyticsManager_Params
	{
	public:
		class UAnalyticsManager*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameInstance.FixTutorialSaveLevel
	 */
	struct UPRGameInstance_FixTutorialSaveLevel_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameInstance.ExitGameBP
	 */
	struct UPRGameInstance_ExitGameBP_Params
	{
	public:
		bool                                                       bMenu;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSave;                                                   // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameInstance.DoStart
	 */
	struct UPRGameInstance_DoStart_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameInstance.ControllerToString
	 */
	struct UPRGameInstance_ControllerToString_Params
	{
	public:
		EPRControllerType                                          Controller;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y3V7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameMode.TogglePause
	 */
	struct APRGameMode_TogglePause_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.TickDebug
	 */
	struct APRGameMode_TickDebug_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.SetGameplayTimeDilation
	 */
	struct APRGameMode_SetGameplayTimeDilation_Params
	{
	public:
		float                                                      Dilation;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameMode.RestorePlayerIfDead
	 */
	struct APRGameMode_RestorePlayerIfDead_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.ResetAutosaveTimer_Native
	 */
	struct APRGameMode_ResetAutosaveTimer_Native_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.RecallLevelLoaded
	 */
	struct APRGameMode_RecallLevelLoaded_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.PreparePlayerForFinalChoice
	 */
	struct APRGameMode_PreparePlayerForFinalChoice_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.PrepareMissionExecutor
	 */
	struct APRGameMode_PrepareMissionExecutor_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.OnTransitionStart
	 */
	struct APRGameMode_OnTransitionStart_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.OnTransitionHint
	 */
	struct APRGameMode_OnTransitionHint_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.OnTransitionEnd
	 */
	struct APRGameMode_OnTransitionEnd_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.OnTideHappening
	 */
	struct APRGameMode_OnTideHappening_Params
	{
	public:
		bool                                                       bReload;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameMode.OnStartedGame
	 */
	struct APRGameMode_OnStartedGame_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.OnStartedEditor
	 */
	struct APRGameMode_OnStartedEditor_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.OnMissionStateChanged
	 */
	struct APRGameMode_OnMissionStateChanged_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameMode.OnLevelUnloaded
	 */
	struct APRGameMode_OnLevelUnloaded_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.OnLevelStarted
	 */
	struct APRGameMode_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameMode.OnLevelPrepare
	 */
	struct APRGameMode_OnLevelPrepare_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameMode.OnLevelLoaded
	 */
	struct APRGameMode_OnLevelLoaded_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.OnInitializeGame
	 */
	struct APRGameMode_OnInitializeGame_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.OnInitializeEditor
	 */
	struct APRGameMode_OnInitializeEditor_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.OnGameStarted
	 */
	struct APRGameMode_OnGameStarted_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.OnGameDataPreSave
	 */
	struct APRGameMode_OnGameDataPreSave_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.OnEnteredMenu
	 */
	struct APRGameMode_OnEnteredMenu_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.OnEditorLevelLoaded
	 */
	struct APRGameMode_OnEditorLevelLoaded_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.MakeActorUID
	 */
	struct APRGameMode_MakeActorUID_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameMode.KillActorsOnReload
	 */
	struct APRGameMode_KillActorsOnReload_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.GetPRGameMode
	 */
	struct APRGameMode_GetPRGameMode_Params
	{
	public:
		class APRGameMode*                                         GameMode;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameMode.GetGameplayTimeDilation
	 */
	struct APRGameMode_GetGameplayTimeDilation_Params
	{
	public:
		float                                                      Dilation;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameMode.GetCurrentEnvironment
	 */
	struct APRGameMode_GetCurrentEnvironment_Params
	{
	public:
		class APREnvironment*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameMode.GetActorUID
	 */
	struct APRGameMode_GetActorUID_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameMode.FinishTransfer
	 */
	struct APRGameMode_FinishTransfer_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.FindLevelStart
	 */
	struct APRGameMode_FindLevelStart_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        LocationTag;                                             // 0x0008(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             Velocity;                                                // 0x0040(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFromSave;                                               // 0x004C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGameMode.DoTransferToLevel
	 */
	struct APRGameMode_DoTransferToLevel_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.DoStart
	 */
	struct APRGameMode_DoStart_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.DoPrepare
	 */
	struct APRGameMode_DoPrepare_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.DoEndTransition
	 */
	struct APRGameMode_DoEndTransition_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.ContinueTransitionLoad
	 */
	struct APRGameMode_ContinueTransitionLoad_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.CheckFocusPause
	 */
	struct APRGameMode_CheckFocusPause_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGameMode.BeginWaitingForPSO
	 */
	struct APRGameMode_BeginWaitingForPSO_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGenerateInstancedStaticMeshVolume.ShowHiddenStaticMeshComponents
	 */
	struct APRGenerateInstancedStaticMeshVolume_ShowHiddenStaticMeshComponents_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGenerateInstancedStaticMeshVolume.ShowAllGeneratedInstanced
	 */
	struct APRGenerateInstancedStaticMeshVolume_ShowAllGeneratedInstanced_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGenerateInstancedStaticMeshVolume.RestoreHidden
	 */
	struct APRGenerateInstancedStaticMeshVolume_RestoreHidden_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGenerateInstancedStaticMeshVolume.RehideHiddenStaticMeshComponents
	 */
	struct APRGenerateInstancedStaticMeshVolume_RehideHiddenStaticMeshComponents_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGenerateInstancedStaticMeshVolume.HideAllGeneratedInstanced
	 */
	struct APRGenerateInstancedStaticMeshVolume_HideAllGeneratedInstanced_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGenerateInstancedStaticMeshVolume.GatherMulitipleSmActors
	 */
	struct APRGenerateInstancedStaticMeshVolume_GatherMulitipleSmActors_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGenerateInstancedStaticMeshVolume.DestroyAllGeneratedInstanced
	 */
	struct APRGenerateInstancedStaticMeshVolume_DestroyAllGeneratedInstanced_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGenerateInstancedStaticMeshVolume.CreateMultipleInstanced
	 */
	struct APRGenerateInstancedStaticMeshVolume_CreateMultipleInstanced_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGenerateInstancedStaticMeshVolume.CreateInstanced
	 */
	struct APRGenerateInstancedStaticMeshVolume_CreateInstanced_Params
	{	};

	/**
	 * Function IntoTheRadius.PRGrassAnomaly.ReduceComponent
	 */
	struct APRGrassAnomaly_ReduceComponent_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRGrassAnomaly.Initialize
	 */
	struct APRGrassAnomaly_Initialize_Params
	{	};

	/**
	 * Function IntoTheRadius.PRHolderMark.Update
	 */
	struct APRHolderMark_Update_Params
	{	};

	/**
	 * Function IntoTheRadius.PRHolderMark.LinkActor
	 */
	struct APRHolderMark_LinkActor_Params
	{
	public:
		class AActor*                                              ActorInHand;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsLeft;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRHolderMark.InitHolsterRef
	 */
	struct APRHolderMark_InitHolsterRef_Params
	{
	public:
		class UHolsterComponent*                                   holsterRef;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRHolderMark.Highlight
	 */
	struct APRHolderMark_Highlight_Params
	{
	public:
		bool                                                       bIsLeft;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRHolderMark.GetDistances
	 */
	struct APRHolderMark_GetDistances_Params
	{
	public:
		bool                                                       bLeftInRange;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0NT0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      leftDistance;                                            // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRightInRange;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K7GZ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      rightDistance;                                           // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRHolderMark.GetActorInRightHand
	 */
	struct APRHolderMark_GetActorInRightHand_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRHolderMark.GetActorInLeftHand
	 */
	struct APRHolderMark_GetActorInLeftHand_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRItemDurabilityComponent.OnTakePointDamage
	 */
	struct UPRItemDurabilityComponent_OnTakePointDamage_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J9WJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitLocation;                                             // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SHTN[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0028(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ShotFromDirection;                                       // 0x0038(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3VS8[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0048(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRItemDurabilityComponent.OnTakeAnyDamage
	 */
	struct UPRItemDurabilityComponent_OnTakeAnyDamage_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QRKZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         InstigatedBy;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRItemDurabilityComponent.ChangeDurability
	 */
	struct UPRItemDurabilityComponent_ChangeDurability_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_77MO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              causer;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        weponTag;                                                // 0x0010(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDamageType*                                         DamageType;                                              // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRItemSpawner.FillAmmo
	 */
	struct APRItemSpawner_FillAmmo_Params
	{	};

	/**
	 * Function IntoTheRadius.PRLootSpawner.OnCheckDistanceTick
	 */
	struct APRLootSpawner_OnCheckDistanceTick_Params
	{	};

	/**
	 * Function IntoTheRadius.PRMapMarker.IsConditionsPassed
	 */
	struct APRMapMarker_IsConditionsPassed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.VerifyPlayerSelection
	 */
	struct UPRNpcPerceptionComponent_VerifyPlayerSelection_Params
	{	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.UnselectPlayer
	 */
	struct UPRNpcPerceptionComponent_UnselectPlayer_Params
	{	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.SpotPlayer
	 */
	struct UPRNpcPerceptionComponent_SpotPlayer_Params
	{	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.SpotActor
	 */
	struct UPRNpcPerceptionComponent_SpotActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.SetupInitialState
	 */
	struct UPRNpcPerceptionComponent_SetupInitialState_Params
	{
	public:
		float                                                      InitialAwareness;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPlayerInitiallySelected;                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.SetSelection
	 */
	struct UPRNpcPerceptionComponent_SetSelection_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FW46[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Selection;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.SetPoiFollowSelection
	 */
	struct UPRNpcPerceptionComponent_SetPoiFollowSelection_Params
	{
	public:
		bool                                                       bShouldFollow;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.SetPoi
	 */
	struct UPRNpcPerceptionComponent_SetPoi_Params
	{
	public:
		struct FVector                                             NewPOI;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bChanged;                                                // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K5O4[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              POIActor;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.SelectPlayer
	 */
	struct UPRNpcPerceptionComponent_SelectPlayer_Params
	{	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.SelectionIsAlive
	 */
	struct UPRNpcPerceptionComponent_SelectionIsAlive_Params
	{
	public:
		bool                                                       bAlive;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.IsSpotted
	 */
	struct UPRNpcPerceptionComponent_IsSpotted_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSpotted;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.IsPlayerSpotted
	 */
	struct UPRNpcPerceptionComponent_IsPlayerSpotted_Params
	{
	public:
		bool                                                       bSpotted;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.IsPlayerSelectionAlive
	 */
	struct UPRNpcPerceptionComponent_IsPlayerSelectionAlive_Params
	{
	public:
		bool                                                       bAlive;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.IsEnemy
	 */
	struct UPRNpcPerceptionComponent_IsEnemy_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsEnemy;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.IsActorSpottable
	 */
	struct UPRNpcPerceptionComponent_IsActorSpottable_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSpottable;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.HaveSelection
	 */
	struct UPRNpcPerceptionComponent_HaveSelection_Params
	{
	public:
		bool                                                       bValid;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.GetSensedPlayerLocation
	 */
	struct UPRNpcPerceptionComponent_GetSensedPlayerLocation_Params
	{
	public:
		bool                                                       bValid;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MGBF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.GetSelection
	 */
	struct UPRNpcPerceptionComponent_GetSelection_Params
	{
	public:
		bool                                                       bValid;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NY1M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Selection;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          BodyTransform;                                           // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.GetPoi
	 */
	struct UPRNpcPerceptionComponent_GetPoi_Params
	{
	public:
		bool                                                       bValid;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2LJE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              POIActor;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.GetPlayerSelection
	 */
	struct UPRNpcPerceptionComponent_GetPlayerSelection_Params
	{
	public:
		bool                                                       bValid;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KD4F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Player;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          BodyTransform;                                           // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.GetClosestActor
	 */
	struct UPRNpcPerceptionComponent_GetClosestActor_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_29CR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.GetAwareness
	 */
	struct UPRNpcPerceptionComponent_GetAwareness_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAwarenessLevel                                            Level;                                                   // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.ChangeAwarenessByTag
	 */
	struct UPRNpcPerceptionComponent_ChangeAwarenessByTag_Params
	{
	public:
		float                                                      Strength;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                Tag;                                                     // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.ChangeAwareness
	 */
	struct UPRNpcPerceptionComponent_ChangeAwareness_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRNpcPerceptionComponent.AIPerceptionUpdate
	 */
	struct UPRNpcPerceptionComponent_AIPerceptionUpdate_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAIStimulus                                         Stimulus;                                                // 0x0008(0x003C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.UpdateItemInfos
	 */
	struct APRPlayerCharacter_UpdateItemInfos_Params
	{	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.UpdateIndicatorsVisibility_Native
	 */
	struct APRPlayerCharacter_UpdateIndicatorsVisibility_Native_Params
	{	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.UnbindInteractable
	 */
	struct APRPlayerCharacter_UnbindInteractable_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.TryToGrabObject_Native
	 */
	struct APRPlayerCharacter_TryToGrabObject_Native_Params
	{
	public:
		class UObject*                                             ObjectToTryToGrab;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LAS0[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          WorldTransform;                                          // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class UGripMotionControllerComponent*                      CallingHand;                                             // 0x0040(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGripMotionControllerComponent*                      OtherHand;                                               // 0x0048(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsSlotGrip;                                             // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EControllerHand                                            EnumHand;                                                // 0x0051(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsDistanceGrip;                                         // 0x0052(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0053(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.TryDropSimulating_Native
	 */
	struct APRPlayerCharacter_TryDropSimulating_Native_Params
	{
	public:
		class UGripMotionControllerComponent*                      hand;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.TakeInHand_Native
	 */
	struct APRPlayerCharacter_TakeInHand_Native_Params
	{
	public:
		class UGripMotionControllerComponent*                      hand;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Object;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsCallerHandLeft;                                       // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.RecreateBackpack_Native
	 */
	struct APRPlayerCharacter_RecreateBackpack_Native_Params
	{	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.ProcessDamageArmor
	 */
	struct APRPlayerCharacter_ProcessDamageArmor_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EDamageCategory                                            DamageCategory;                                          // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8O9I[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              causer;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ResultDamage;                                            // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.PositionClimbingIndicatorNative
	 */
	struct APRPlayerCharacter_PositionClimbingIndicatorNative_Params
	{
	public:
		bool                                                       bIsLeftHand;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bReset;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.OverlapsUINative
	 */
	struct APRPlayerCharacter_OverlapsUINative_Params
	{
	public:
		class UPrimitiveComponent*                                 Prim;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLeft;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOverlaps;                                               // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.OverlapGripNative
	 */
	struct APRPlayerCharacter_OverlapGripNative_Params
	{
	public:
		bool                                                       bLeft;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.OnInventoryModeChanged
	 */
	struct APRPlayerCharacter_OnInventoryModeChanged_Params
	{
	public:
		EInventoryMode                                             Mode;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.LerpRightGrip
	 */
	struct APRPlayerCharacter_LerpRightGrip_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGripMotionControllerComponent*                      hand;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsSlot;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JQ3X[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Offset;                                                  // 0x0020(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bDisableCollision;                                       // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bKeepHandSnapped;                                        // 0x0051(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.LerpLeftGrip
	 */
	struct APRPlayerCharacter_LerpLeftGrip_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGripMotionControllerComponent*                      hand;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsSlot;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OKGG[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Offset;                                                  // 0x0020(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bDisableCollision;                                       // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bKeepHandSnapped;                                        // 0x0051(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.IsCrouch
	 */
	struct APRPlayerCharacter_IsCrouch_Params
	{
	public:
		bool                                                       bCrouch;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.IsAliveNative
	 */
	struct APRPlayerCharacter_IsAliveNative_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.InitClimbing_Native
	 */
	struct APRPlayerCharacter_InitClimbing_Native_Params
	{
	public:
		class UGripMotionControllerComponent*                      hand;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Object;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isObjectRelative;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.HandHaptics
	 */
	struct APRPlayerCharacter_HandHaptics_Params
	{
	public:
		EHapticsCurve                                              Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EControllerHand                                            hand;                                                    // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GripOrDropObject_Native
	 */
	struct APRPlayerCharacter_GripOrDropObject_Native_Params
	{
	public:
		class UGripMotionControllerComponent*                      CallingHand;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGripMotionControllerComponent*                      OtherHand;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GripOrDrop_Native
	 */
	struct APRPlayerCharacter_GripOrDrop_Native_Params
	{
	public:
		class UGripMotionControllerComponent*                      CallingHand;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGripMotionControllerComponent*                      OtherHand;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsGrip;                                                 // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JVJ3[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USphereComponent*                                    GrabSphere;                                              // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetWidgetInteractionRight
	 */
	struct APRPlayerCharacter_GetWidgetInteractionRight_Params
	{
	public:
		class UWidgetInteractionComponent*                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetWidgetInteractionLeft
	 */
	struct APRPlayerCharacter_GetWidgetInteractionLeft_Params
	{
	public:
		class UWidgetInteractionComponent*                         ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetW_R_WristMenu
	 */
	struct APRPlayerCharacter_GetW_R_WristMenu_Params
	{
	public:
		class UWidgetComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetW_L_WristMenu
	 */
	struct APRPlayerCharacter_GetW_L_WristMenu_Params
	{
	public:
		class UWidgetComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetUIPoseTriggerRight
	 */
	struct APRPlayerCharacter_GetUIPoseTriggerRight_Params
	{
	public:
		class UCapsuleComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetUIPoseTriggerLeft
	 */
	struct APRPlayerCharacter_GetUIPoseTriggerLeft_Params
	{
	public:
		class UCapsuleComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetTriggerWeaponSecondary
	 */
	struct APRPlayerCharacter_GetTriggerWeaponSecondary_Params
	{
	public:
		class UBoxComponent*                                       ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetTriggerWeaponPrimary
	 */
	struct APRPlayerCharacter_GetTriggerWeaponPrimary_Params
	{
	public:
		class UBoxComponent*                                       ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetTriggerMelee
	 */
	struct APRPlayerCharacter_GetTriggerMelee_Params
	{
	public:
		class UBoxComponent*                                       ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetTriggerMap
	 */
	struct APRPlayerCharacter_GetTriggerMap_Params
	{
	public:
		class UBoxComponent*                                       ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetTriggerDetector
	 */
	struct APRPlayerCharacter_GetTriggerDetector_Params
	{
	public:
		class UBoxComponent*                                       ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetTriggerBackpack
	 */
	struct APRPlayerCharacter_GetTriggerBackpack_Params
	{
	public:
		class UBoxComponent*                                       ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetSM_ClimbingIndicatorRight
	 */
	struct APRPlayerCharacter_GetSM_ClimbingIndicatorRight_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetSM_ClimbingIndicatorLeft
	 */
	struct APRPlayerCharacter_GetSM_ClimbingIndicatorLeft_Params
	{
	public:
		class UStaticMeshComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetRHandCollider
	 */
	struct APRPlayerCharacter_GetRHandCollider_Params
	{
	public:
		class USphereComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetPS_BeamPointerRight
	 */
	struct APRPlayerCharacter_GetPS_BeamPointerRight_Params
	{
	public:
		class UParticleSystemComponent*                            ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetPS_BeamPointerLeft
	 */
	struct APRPlayerCharacter_GetPS_BeamPointerLeft_Params
	{
	public:
		class UParticleSystemComponent*                            ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetPivotVest
	 */
	struct APRPlayerCharacter_GetPivotVest_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetPivotNeck
	 */
	struct APRPlayerCharacter_GetPivotNeck_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetPivotBackpack
	 */
	struct APRPlayerCharacter_GetPivotBackpack_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetNearestOverlapObjectNative
	 */
	struct APRPlayerCharacter_GetNearestOverlapObjectNative_Params
	{
	public:
		class USphereComponent*                                    OverlapComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGripMotionControllerComponent*                      hand;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGripMotionControllerComponent*                      OtherHand;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             OutNearestObject;                                        // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOutImplementsInterface;                                 // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LISS[0xF];                                   // 0x0021(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          OutObjectTransform;                                      // 0x0030(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bOutCanBeClimbed;                                        // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OKA1[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 OutPrimitive;                                            // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOutIsDistanceGrip;                                      // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QTA9[0xF];                                   // 0x0071(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          OutGripPoint;                                            // 0x0080(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bOutIsSlotGrip;                                          // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3B3L[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 OutTriggerPrimitive;                                     // 0x00B8(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          OutTriggerTransform;                                     // 0x00C0(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bOutSecondary;                                           // 0x00F0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_H0JI[0xF];                                   // 0x00F1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          OutHandTransformWhenOverlap;                             // 0x0100(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EPRHandPoseGeometryType                                    OutGeometryType;                                         // 0x0130(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseNumber                                          OutPoseNumber;                                           // 0x0131(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetLHandCollider
	 */
	struct APRPlayerCharacter_GetLHandCollider_Params
	{
	public:
		class USphereComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetIsInteractableHolsterable
	 */
	struct APRPlayerCharacter_GetIsInteractableHolsterable_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetHolsterWeaponSecondary
	 */
	struct APRPlayerCharacter_GetHolsterWeaponSecondary_Params
	{
	public:
		class UHolsterComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetHolsterWeaponPrimary
	 */
	struct APRPlayerCharacter_GetHolsterWeaponPrimary_Params
	{
	public:
		class UHolsterComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetHolsterProbes_R
	 */
	struct APRPlayerCharacter_GetHolsterProbes_R_Params
	{
	public:
		class UHolsterComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetHolsterProbes_L
	 */
	struct APRPlayerCharacter_GetHolsterProbes_L_Params
	{
	public:
		class UHolsterComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetHolsterMelee
	 */
	struct APRPlayerCharacter_GetHolsterMelee_Params
	{
	public:
		class UHolsterComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetHolsterMap
	 */
	struct APRPlayerCharacter_GetHolsterMap_Params
	{
	public:
		class UHolsterComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetHolsterDetector
	 */
	struct APRPlayerCharacter_GetHolsterDetector_Params
	{
	public:
		class UHolsterComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetHolderSmallPouchActorComponent
	 */
	struct APRPlayerCharacter_GetHolderSmallPouchActorComponent_Params
	{
	public:
		class UChildActorComponent*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetHandDataNative
	 */
	struct APRPlayerCharacter_GetHandDataNative_Params
	{
	public:
		bool                                                       bLeftHand;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A3W8[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ControllerTransform;                                     // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          HandWorldTransform;                                      // 0x0040(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          HandShiftTransform;                                      // 0x0070(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class UObject*                                             Object;                                                  // 0x00A0(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       SecondaryGrip;                                           // 0x00A8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseGeometryType                                    HandPoseGeometryType;                                    // 0x00A9(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseNumber                                          HandPoseNumber;                                          // 0x00AA(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetGripRelativeTransformByGeometryTypeAndPoseNumber
	 */
	struct APRPlayerCharacter_GetGripRelativeTransformByGeometryTypeAndPoseNumber_Params
	{
	public:
		class UObject*                                             GripObject;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGripMotionControllerComponent*                      handController;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseType                                            poseType;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseGeometryType                                    GeometryType;                                            // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRHandPoseNumber                                          PoseNumber;                                              // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0013(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EPMD[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          GripRelativeTransform;                                   // 0x0020(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetGrabSphereRight
	 */
	struct APRPlayerCharacter_GetGrabSphereRight_Params
	{
	public:
		class USphereComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetGrabSphereLeft
	 */
	struct APRPlayerCharacter_GetGrabSphereLeft_Params
	{
	public:
		class USphereComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetBPC_VRController_Right
	 */
	struct APRPlayerCharacter_GetBPC_VRController_Right_Params
	{
	public:
		class UVRControllerComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.GetBPC_VRController_Left
	 */
	struct APRPlayerCharacter_GetBPC_VRController_Left_Params
	{
	public:
		class UVRControllerComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.DropOrRetakeOrHolster_Native
	 */
	struct APRPlayerCharacter_DropOrRetakeOrHolster_Native_Params
	{
	public:
		class UGripMotionControllerComponent*                      CallingHand;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ObjectToGrip;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSecondaryGrip;                                          // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bZeroVelocity;                                           // 0x0011(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0012(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.DropOrHolster_Native
	 */
	struct APRPlayerCharacter_DropOrHolster_Native_Params
	{
	public:
		class UGripMotionControllerComponent*                      CallingHand;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ObjectToGrip;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSecondaryGrip;                                          // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.DoesPlayerHolsterPreventInteraction
	 */
	struct APRPlayerCharacter_DoesPlayerHolsterPreventInteraction_Params
	{
	public:
		class AActor*                                              Interactable;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.ClearClimbing_Native
	 */
	struct APRPlayerCharacter_ClearClimbing_Native_Params
	{
	public:
		bool                                                       bBecauseOfStepUp;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.CheckTriggerOverlaps_Native
	 */
	struct APRPlayerCharacter_CheckTriggerOverlaps_Native_Params
	{
	public:
		class USphereComponent*                                    GrabSphere;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGripMotionControllerComponent*                      CallingHand;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.CheckHolster_Native
	 */
	struct APRPlayerCharacter_CheckHolster_Native_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRemove;                                                 // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsLeftHand;                                             // 0x0009(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHolsterFound;                                           // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHolsterOk;                                              // 0x000B(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4FLW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UHolsterComponent*                                   Holster;                                                 // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.CallNightGlow
	 */
	struct APRPlayerCharacter_CallNightGlow_Params
	{
	public:
		class UObject*                                             Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOn;                                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.BindInteractable
	 */
	struct APRPlayerCharacter_BindInteractable_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerCharacter.BeamPointerToggleNative
	 */
	struct APRPlayerCharacter_BeamPointerToggleNative_Params
	{
	public:
		bool                                                       bOnOff;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TUS9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             TargetPoint;                                             // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsLeftHand;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUIGrip;                                                 // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerController.ReportReady
	 */
	struct APRPlayerController_ReportReady_Params
	{	};

	/**
	 * Function IntoTheRadius.PRPlayerController.IsPossessingPlayer
	 */
	struct APRPlayerController_IsPossessingPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerControlsInterface.GrabRight
	 */
	struct UPRPlayerControlsInterface_GrabRight_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerControlsInterface.GrabLeft
	 */
	struct UPRPlayerControlsInterface_GrabLeft_Params
	{
	public:
		bool                                                       bPressed;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerGripSystemComponent.UnregisterForDistanceGrip
	 */
	struct UPRPlayerGripSystemComponent_UnregisterForDistanceGrip_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerGripSystemComponent.ToggleDebugDrawDistanceGrip
	 */
	struct UPRPlayerGripSystemComponent_ToggleDebugDrawDistanceGrip_Params
	{	};

	/**
	 * Function IntoTheRadius.PRPlayerGripSystemComponent.RegisterForDistanceGrip
	 */
	struct UPRPlayerGripSystemComponent_RegisterForDistanceGrip_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerGripSystemComponent.PerformOverlapGrip
	 */
	struct UPRPlayerGripSystemComponent_PerformOverlapGrip_Params
	{
	public:
		bool                                                       isLeftHand;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_P9CQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      otherHandGrippedActors;                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class USphereComponent*                                    gripSphere;                                              // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          HandWorldTransform;                                      // 0x0020(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             handRootLocation;                                        // 0x0050(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BSBF[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGripMotionControllerComponent*                      MotionController;                                        // 0x0060(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 compToGrip;                                              // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 triggerToGrip;                                           // 0x0070(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UWA0[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          triggerTransform;                                        // 0x0080(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerGripSystemComponent.PerformDistanceGrip
	 */
	struct UPRPlayerGripSystemComponent_PerformDistanceGrip_Params
	{
	public:
		bool                                                       isLeftHand;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8OCK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      otherHandGrippedActors;                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class USphereComponent*                                    gripSphere;                                              // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 compToGrip;                                              // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             compHitLoc;                                              // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             distanceGripPoint;                                       // 0x0034(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerGripSystemComponent.IsDebugDrawDistanceGrip
	 */
	struct UPRPlayerGripSystemComponent_IsDebugDrawDistanceGrip_Params
	{
	public:
		bool                                                       bDebugDrawing;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerVisibilityComponent.InitOnLevelStart
	 */
	struct UPRPlayerVisibilityComponent_InitOnLevelStart_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRPlayerVisibilityComponent.InitOnGameStart
	 */
	struct UPRPlayerVisibilityComponent_InitOnGameStart_Params
	{	};

	/**
	 * Function IntoTheRadius.PRPlayerVisibilityComponent.CleanupOnTransitionStart
	 */
	struct UPRPlayerVisibilityComponent_CleanupOnTransitionStart_Params
	{	};

	/**
	 * Function IntoTheRadius.PRSkyBox.GetRadiusLocation
	 */
	struct APRSkyBox_GetRadiusLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRSublevelStreamingVolume.UpdateVolume
	 */
	struct APRSublevelStreamingVolume_UpdateVolume_Params
	{	};

	/**
	 * Function IntoTheRadius.PRSublevelStreamingVolume.Reset
	 */
	struct APRSublevelStreamingVolume_Reset_Params
	{	};

	/**
	 * Function IntoTheRadius.PRSublevelStreamingVolume.OnTransitionStart
	 */
	struct APRSublevelStreamingVolume_OnTransitionStart_Params
	{	};

	/**
	 * Function IntoTheRadius.PRSublevelStreamingVolume.OnTransitionEnd
	 */
	struct APRSublevelStreamingVolume_OnTransitionEnd_Params
	{	};

	/**
	 * Function IntoTheRadius.PRSublevelStreamingVolume.OnLevelStarted
	 */
	struct APRSublevelStreamingVolume_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRSublevelStreamingVolume.OnLevelPrepare
	 */
	struct APRSublevelStreamingVolume_OnLevelPrepare_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRSublevelStreamingVolume.OnGameStartedPrivate
	 */
	struct APRSublevelStreamingVolume_OnGameStartedPrivate_Params
	{	};

	/**
	 * Function IntoTheRadius.PRSublevelStreamingVolume.OnGameStarted
	 */
	struct APRSublevelStreamingVolume_OnGameStarted_Params
	{	};

	/**
	 * Function IntoTheRadius.PRSublevelStreamingVolume.LoadSublevels
	 */
	struct APRSublevelStreamingVolume_LoadSublevels_Params
	{
	public:
		bool                                                       evented;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRSublevelStreamingVolume.IsLoaded
	 */
	struct APRSublevelStreamingVolume_IsLoaded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRSublevelStreamingVolume.CheckSphere
	 */
	struct APRSublevelStreamingVolume_CheckSphere_Params
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Coefficient;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRSublevelStreamingVolume.CheckLocation
	 */
	struct APRSublevelStreamingVolume_CheckLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Coefficient;                                             // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PRTransitionHint.ShowTransitionHint
	 */
	struct APRTransitionHint_ShowTransitionHint_Params
	{	};

	/**
	 * Function IntoTheRadius.PRTransitionHint.HideTransitionHint
	 */
	struct APRTransitionHint_HideTransitionHint_Params
	{	};

	/**
	 * Function IntoTheRadius.RadiusAudioBoxComponent.UpdateVolumeSettings
	 */
	struct URadiusAudioBoxComponent_UpdateVolumeSettings_Params
	{	};

	/**
	 * Function IntoTheRadius.RadiusAudioBoxComponent.SetPriority
	 */
	struct URadiusAudioBoxComponent_SetPriority_Params
	{
	public:
		float                                                      NewPriority;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusAudioBoxComponent.SetEnabled
	 */
	struct URadiusAudioBoxComponent_SetEnabled_Params
	{
	public:
		bool                                                       bNewEnabled;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusAudioBoxComponent.OnOwnerDestroyed
	 */
	struct URadiusAudioBoxComponent_OnOwnerDestroyed_Params
	{
	public:
		class AActor*                                              DestoryedObject;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusAutomationComponent.MainMenuReadyCallback
	 */
	struct URadiusAutomationComponent_MainMenuReadyCallback_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusAutomationComponent.GameStartedCallback
	 */
	struct URadiusAutomationComponent_GameStartedCallback_Params
	{	};

	/**
	 * Function IntoTheRadius.RadiusBaseItem.Setup
	 */
	struct ARadiusBaseItem_Setup_Params
	{
	public:
		struct FBaseItemSpawnInfo                                  BaseItemSpawnInfo;                                       // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusBaseItem.ResetInventoryItemRef
	 */
	struct ARadiusBaseItem_ResetInventoryItemRef_Params
	{	};

	/**
	 * Function IntoTheRadius.RadiusBaseItem.IsInitInventoryItem
	 */
	struct ARadiusBaseItem_IsInitInventoryItem_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusBaseItem.InitInventoryItem
	 */
	struct ARadiusBaseItem_InitInventoryItem_Params
	{
	public:
		class UInventoryItem*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusBulletComponent.ProcessHit
	 */
	struct URadiusBulletComponent_ProcessHit_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             Velocity;                                                // 0x0088(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusBulletComponent.Initialize
	 */
	struct URadiusBulletComponent_Initialize_Params
	{
	public:
		struct FAmmoInfo                                           AmmoInfo;                                                // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      MuzzleVelocity;                                          // 0x0058(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BaseDamage;                                              // 0x005C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusBulletImpulseComponent.Suspend
	 */
	struct URadiusBulletImpulseComponent_Suspend_Params
	{
	public:
		bool                                                       IsSuspend;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusBulletImpulseComponent.Stop
	 */
	struct URadiusBulletImpulseComponent_Stop_Params
	{	};

	/**
	 * Function IntoTheRadius.RadiusBulletImpulseComponent.Start
	 */
	struct URadiusBulletImpulseComponent_Start_Params
	{	};

	/**
	 * Function IntoTheRadius.RadiusBulletImpulseComponent.Ricochet
	 */
	struct URadiusBulletImpulseComponent_Ricochet_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Force;                                                   // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsPenetration;                                           // 0x0018(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusBulletImpulseComponent.Initialize
	 */
	struct URadiusBulletImpulseComponent_Initialize_Params
	{
	public:
		class UPrimitiveComponent*                                 TargetComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Mass;                                                    // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InitialVelocity;                                         // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCurveFloat*                                         SpeedCurve;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusProjectile.Dispose
	 */
	struct ARadiusProjectile_Dispose_Params
	{	};

	/**
	 * Function IntoTheRadius.RadiusBulletProjectile.SphereColliderHit
	 */
	struct ARadiusBulletProjectile_SphereColliderHit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComponent;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusBulletProjectile.OnSpawnImpact
	 */
	struct ARadiusBulletProjectile_OnSpawnImpact_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		float                                                      Scale;                                                   // 0x0088(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusBulletProjectile.BulletComponentRicochet
	 */
	struct ARadiusBulletProjectile_BulletComponentRicochet_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Force;                                                   // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsPenetration;                                           // 0x0018(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusBulletProjectile.BulletComponentImpact
	 */
	struct ARadiusBulletProjectile_BulletComponentImpact_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusBulletTracerComponent.Suspend
	 */
	struct URadiusBulletTracerComponent_Suspend_Params
	{
	public:
		bool                                                       IsSuspend;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusBulletTracerComponent.Stop
	 */
	struct URadiusBulletTracerComponent_Stop_Params
	{	};

	/**
	 * Function IntoTheRadius.RadiusBulletTracerComponent.Start
	 */
	struct URadiusBulletTracerComponent_Start_Params
	{	};

	/**
	 * Function IntoTheRadius.RadiusBulletTracerComponent.Initialize
	 */
	struct URadiusBulletTracerComponent_Initialize_Params
	{
	public:
		bool                                                       ForceTracer;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CAPW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      MinSpeed;                                                // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxSpeed;                                                // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        AmmoTypeID;                                              // 0x000C(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       DebugMode;                                               // 0x0014(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusBulletTracerComponent.DelayedStart
	 */
	struct URadiusBulletTracerComponent_DelayedStart_Params
	{	};

	/**
	 * Function IntoTheRadius.RadiusEmitter.GetParticalSystemRef
	 */
	struct ARadiusEmitter_GetParticalSystemRef_Params
	{
	public:
		class UParticleSystemComponent*                            ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusExplosionActor.SetTriggerMaxRange
	 */
	struct ARadiusExplosionActor_SetTriggerMaxRange_Params
	{
	public:
		float                                                      MaxRange;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusExplosionActor.GetExplosionInfo
	 */
	struct ARadiusExplosionActor_GetExplosionInfo_Params
	{
	public:
		struct FExplosionInfo                                      ReturnValue;                                             // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusFirearmShellActor.Setup
	 */
	struct ARadiusFirearmShellActor_Setup_Params
	{
	public:
		struct FRadiusFirearmShellInfo                             Info;                                                    // 0x0000(0x0024)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusGameInstanceInterface.StartNewGame
	 */
	struct URadiusGameInstanceInterface_StartNewGame_Params
	{
	public:
		int32_t                                                    ProfileNumber;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSkipTutorial;                                           // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIronman;                                                // 0x0005(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRadiusGameDifficulty                               GameDifficulty;                                          // 0x0006(0x0010)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bFromMainMenu;                                           // 0x0016(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusGameInstanceInterface.LoadGame
	 */
	struct URadiusGameInstanceInterface_LoadGame_Params
	{
	public:
		int32_t                                                    SlotNr;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SaveNr;                                                  // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusGameInstanceInterface.ExitGame
	 */
	struct URadiusGameInstanceInterface_ExitGame_Params
	{
	public:
		bool                                                       bMenu;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSave;                                                   // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusGameInstanceInterface.ContinueLastGameInSlot
	 */
	struct URadiusGameInstanceInterface_ContinueLastGameInSlot_Params
	{
	public:
		int32_t                                                    SlotNr;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusGameInstanceInterface.ContinueLastGame
	 */
	struct URadiusGameInstanceInterface_ContinueLastGame_Params
	{	};

	/**
	 * Function IntoTheRadius.RadiusGameStatistics.GetStatisticsValueString
	 */
	struct URadiusGameStatistics_GetStatisticsValueString_Params
	{
	public:
		ERadiusCommonStatisticsType                                Type;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O92Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusGameStatistics.GetStatisticsTitle
	 */
	struct URadiusGameStatistics_GetStatisticsTitle_Params
	{
	public:
		ERadiusCommonStatisticsType                                Type;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J32V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusGameStatistics.GetRadiusGameStatistics
	 */
	struct URadiusGameStatistics_GetRadiusGameStatistics_Params
	{
	public:
		class URadiusGameStatistics*                               RadiusGameStatistics;                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusGameStatistics.GetPlayerKills
	 */
	struct URadiusGameStatistics_GetPlayerKills_Params
	{
	public:
		TMap<struct FGameplayTag, int32_t>                         Enemies;                                                 // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		TMap<struct FGameplayTag, int32_t>                         Weapon;                                                  // 0x0050(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusGameStatistics.GetPlayerDeaths
	 */
	struct URadiusGameStatistics_GetPlayerDeaths_Params
	{
	public:
		TMap<struct FGameplayTag, int32_t>                         Deaths;                                                  // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusImpactActor.Setup
	 */
	struct ARadiusImpactActor_Setup_Params
	{
	public:
		struct FRadiusImpactInfo                                   Info;                                                    // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusPlayerMovementComponent.StopMovement
	 */
	struct URadiusPlayerMovementComponent_StopMovement_Params
	{	};

	/**
	 * Function IntoTheRadius.RadiusPlayerMovementComponent.ProcessMovementTeleport
	 */
	struct URadiusPlayerMovementComponent_ProcessMovementTeleport_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusPlayerMovementComponent.ProcessMovementNormal
	 */
	struct URadiusPlayerMovementComponent_ProcessMovementNormal_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusPlayerMovementComponent.ProcessMovement
	 */
	struct URadiusPlayerMovementComponent_ProcessMovement_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusPlayerMovementComponent.PreparePointsToTeleport
	 */
	struct URadiusPlayerMovementComponent_PreparePointsToTeleport_Params
	{
	public:
		struct FVector                                             From;                                                    // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             To;                                                      // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FTeleportPointInfo>                          ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusPlayerMovementComponent.IsTeleporting
	 */
	struct URadiusPlayerMovementComponent_IsTeleporting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusBulletProjectileInfo.CreateInfo
	 */
	struct URadiusBulletProjectileInfo_CreateInfo_Params
	{
	public:
		struct FAmmoInfo                                           AmmoInfo;                                                // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      Velocity;                                                // 0x0058(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BaseDamage;                                              // 0x005C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ForceTracer;                                             // 0x0060(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7LKT[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class URadiusBulletProjectileInfo*                         ReturnValue;                                             // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusShrapnelProjectileInfo.CreateInfo
	 */
	struct URadiusShrapnelProjectileInfo_CreateInfo_Params
	{
	public:
		struct FAmmoInfo                                           AmmoInfo;                                                // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      BaseDamage;                                              // 0x0058(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AccuracyInternal;                                        // 0x005C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      AccuracyMultiplier;                                      // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Offset;                                                  // 0x0064(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TraceDistance;                                           // 0x0068(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z487[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class URadiusShrapnelProjectileInfo*                       ReturnValue;                                             // 0x0070(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusShrapnelComponent.Initialize
	 */
	struct URadiusShrapnelComponent_Initialize_Params
	{
	public:
		struct FAmmoInfo                                           AmmoInfo;                                                // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      Damage;                                                  // 0x0058(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Accuracy;                                                // 0x005C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Offset;                                                  // 0x0060(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TraceDistance;                                           // 0x006C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RadiusShrapnelComponent.Execute
	 */
	struct URadiusShrapnelComponent_Execute_Params
	{	};

	/**
	 * Function IntoTheRadius.RadiusTeleportArcController.TickArc
	 */
	struct ARadiusTeleportArcController_TickArc_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayFootstepHelper.OnMoveStart
	 */
	struct UPlayFootstepHelper_OnMoveStart_Params
	{
	public:
		struct FAIRequestID                                        RequestID;                                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPathFollowingStatus                                       MovementStatus;                                          // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.PlayFootstepHelper.OnMoveEnd
	 */
	struct UPlayFootstepHelper_OnMoveEnd_Params
	{
	public:
		struct FAIRequestID                                        RequestID;                                               // 0x0000(0x0004)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPathFollowingResult                                       MovementResult;                                          // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.RelevanceManager.OnLevelUnloaded
	 */
	struct URelevanceManager_OnLevelUnloaded_Params
	{	};

	/**
	 * Function IntoTheRadius.ResizableDecalComponent.SetDecalSize
	 */
	struct UResizableDecalComponent_SetDecalSize_Params
	{
	public:
		struct FVector                                             newSize;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.TurnType
	 */
	struct USettingsManager_TurnType_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetVolumeSounds
	 */
	struct USettingsManager_SetVolumeSounds_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetVolumeMusic
	 */
	struct USettingsManager_SetVolumeMusic_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetVolumeMaster
	 */
	struct USettingsManager_SetVolumeMaster_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetVolumeAmbient
	 */
	struct USettingsManager_SetVolumeAmbient_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetVirtualStock
	 */
	struct USettingsManager_SetVirtualStock_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetVignetteShown
	 */
	struct USettingsManager_SetVignetteShown_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetVignetteRunShown
	 */
	struct USettingsManager_SetVignetteRunShown_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetVestShift
	 */
	struct USettingsManager_SetVestShift_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetUpscaleSharpen
	 */
	struct USettingsManager_SetUpscaleSharpen_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetUpscaleMethod
	 */
	struct USettingsManager_SetUpscaleMethod_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetUpdateNoticeShown
	 */
	struct USettingsManager_SetUpdateNoticeShown_Params
	{	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetTurnType
	 */
	struct USettingsManager_SetTurnType_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetTurnSpeed
	 */
	struct USettingsManager_SetTurnSpeed_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SettingsValueToString
	 */
	struct USettingsManager_SettingsValueToString_Params
	{
	public:
		ESettingsValue                                             Value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_498C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetTeleportMovement
	 */
	struct USettingsManager_SetTeleportMovement_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetShowSubtitles
	 */
	struct USettingsManager_SetShowSubtitles_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetShowBody
	 */
	struct USettingsManager_SetShowBody_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetSeatedMode
	 */
	struct USettingsManager_SetSeatedMode_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetPlayerHeight
	 */
	struct USettingsManager_SetPlayerHeight_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetNeckHeight
	 */
	struct USettingsManager_SetNeckHeight_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetMovementDirectionType
	 */
	struct USettingsManager_SetMovementDirectionType_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetMirrorHolsters
	 */
	struct USettingsManager_SetMirrorHolsters_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetLeftHanded
	 */
	struct USettingsManager_SetLeftHanded_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetImperialUnits
	 */
	struct USettingsManager_SetImperialUnits_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetHoldGrip
	 */
	struct USettingsManager_SetHoldGrip_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetHmdDeviceType
	 */
	struct USettingsManager_SetHmdDeviceType_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetGraphicsSetting
	 */
	struct USettingsManager_SetGraphicsSetting_Params
	{
	public:
		EGraphicsSettingsType                                      Type;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESettingsValue                                             Value;                                                   // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetGraphicsQualityIndex
	 */
	struct USettingsManager_SetGraphicsQualityIndex_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetGrabWithTrigger
	 */
	struct USettingsManager_SetGrabWithTrigger_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetGPUQualityIndex
	 */
	struct USettingsManager_SetGPUQualityIndex_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetFSRMode
	 */
	struct USettingsManager_SetFSRMode_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetFirstLaunch
	 */
	struct USettingsManager_SetFirstLaunch_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetDLSSMode
	 */
	struct USettingsManager_SetDLSSMode_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetControllerType
	 */
	struct USettingsManager_SetControllerType_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetControllerShift
	 */
	struct USettingsManager_SetControllerShift_Params
	{
	public:
		EPRControllerType                                          Controller;                                              // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZGPK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Value;                                                   // 0x0004(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetControllerRotation
	 */
	struct USettingsManager_SetControllerRotation_Params
	{
	public:
		EPRControllerType                                          Controller;                                              // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1OLK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            Value;                                                   // 0x0004(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetBrightnessAdjustment
	 */
	struct USettingsManager_SetBrightnessAdjustment_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetArmLength
	 */
	struct USettingsManager_SetArmLength_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.SetAimSmoothingIntensity
	 */
	struct USettingsManager_SetAimSmoothingIntensity_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.RestoreDefaultControllerRotation
	 */
	struct USettingsManager_RestoreDefaultControllerRotation_Params
	{
	public:
		EPRControllerType                                          Controller;                                              // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.MovementDirectionType
	 */
	struct USettingsManager_MovementDirectionType_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.IsVirtualStock
	 */
	struct USettingsManager_IsVirtualStock_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.IsVignetteShown
	 */
	struct USettingsManager_IsVignetteShown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.IsVignetteRunShown
	 */
	struct USettingsManager_IsVignetteRunShown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.IsTeleportMovement
	 */
	struct USettingsManager_IsTeleportMovement_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.IsShowUpdateNotice
	 */
	struct USettingsManager_IsShowUpdateNotice_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.IsShowSubtitles
	 */
	struct USettingsManager_IsShowSubtitles_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.IsShowBody
	 */
	struct USettingsManager_IsShowBody_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.IsSeatedMode
	 */
	struct USettingsManager_IsSeatedMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.IsMirrorHolsters
	 */
	struct USettingsManager_IsMirrorHolsters_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.IsLeftHanded
	 */
	struct USettingsManager_IsLeftHanded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.IsImperialUnits
	 */
	struct USettingsManager_IsImperialUnits_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.IsHoldGrip
	 */
	struct USettingsManager_IsHoldGrip_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.IsGrabWithTrigger
	 */
	struct USettingsManager_IsGrabWithTrigger_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.IsFirstLaunch
	 */
	struct USettingsManager_IsFirstLaunch_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.IsAchievementsDisabled
	 */
	struct USettingsManager_IsAchievementsDisabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.IncrementGraphicsQuality
	 */
	struct USettingsManager_IncrementGraphicsQuality_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GraphicsSettingsTypeToString
	 */
	struct USettingsManager_GraphicsSettingsTypeToString_Params
	{
	public:
		EGraphicsSettingsType                                      Value;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CPV5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetVolumeSounds
	 */
	struct USettingsManager_GetVolumeSounds_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetVolumeMusic
	 */
	struct USettingsManager_GetVolumeMusic_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetVolumeMaster
	 */
	struct USettingsManager_GetVolumeMaster_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetVolumeAmbient
	 */
	struct USettingsManager_GetVolumeAmbient_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetVestShift
	 */
	struct USettingsManager_GetVestShift_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetUpscaleSharpen
	 */
	struct USettingsManager_GetUpscaleSharpen_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetUpscaleMethod
	 */
	struct USettingsManager_GetUpscaleMethod_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetTurnSpeed
	 */
	struct USettingsManager_GetTurnSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetTeleportArcRotationForSecondaryGrip
	 */
	struct USettingsManager_GetTeleportArcRotationForSecondaryGrip_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetSettingsManager
	 */
	struct USettingsManager_GetSettingsManager_Params
	{
	public:
		class USettingsManager*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetScreenPercentages
	 */
	struct USettingsManager_GetScreenPercentages_Params
	{
	public:
		TArray<int32_t>                                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetScreenPercentage
	 */
	struct USettingsManager_GetScreenPercentage_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetPlayerHeight
	 */
	struct USettingsManager_GetPlayerHeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetPixelDensity
	 */
	struct USettingsManager_GetPixelDensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetNeckHeight
	 */
	struct USettingsManager_GetNeckHeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetHMDDeviceType
	 */
	struct USettingsManager_GetHMDDeviceType_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetGraphicsSetting
	 */
	struct USettingsManager_GetGraphicsSetting_Params
	{
	public:
		EGraphicsSettingsType                                      Type;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESettingsValue                                             ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetGraphicsQualityIndex
	 */
	struct USettingsManager_GetGraphicsQualityIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetGPUQualityIndex
	 */
	struct USettingsManager_GetGPUQualityIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetFSRMode
	 */
	struct USettingsManager_GetFSRMode_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetDLSSMode
	 */
	struct USettingsManager_GetDLSSMode_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetControllerType
	 */
	struct USettingsManager_GetControllerType_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetControllerTransform
	 */
	struct USettingsManager_GetControllerTransform_Params
	{
	public:
		EPRControllerType                                          Controller;                                              // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CU87[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Left;                                                    // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          Right;                                                   // 0x0040(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetControllerShift
	 */
	struct USettingsManager_GetControllerShift_Params
	{
	public:
		EPRControllerType                                          Controller;                                              // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S0N4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetControllerRotation
	 */
	struct USettingsManager_GetControllerRotation_Params
	{
	public:
		EPRControllerType                                          Controller;                                              // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OB76[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetBrightnessAdjustment
	 */
	struct USettingsManager_GetBrightnessAdjustment_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetArmLength
	 */
	struct USettingsManager_GetArmLength_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SettingsManager.GetAimSmoothingIntensity
	 */
	struct USettingsManager_GetAimSmoothingIntensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.ShopShowcase.SwitchToIndex
	 */
	struct AShopShowcase_SwitchToIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.ShopShowcase.SetUnlockedTypes
	 */
	struct AShopShowcase_SetUnlockedTypes_Params
	{
	public:
		TArray<struct FGameplayTag>                                GameplayTag;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.ShopShowcase.GetSelectedIndex
	 */
	struct AShopShowcase_GetSelectedIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.ShopSlot.UpdateSlot
	 */
	struct AShopSlot_UpdateSlot_Params
	{
	public:
		class USceneComponent*                                     componentToReturnActorTo;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        GameplayTag;                                             // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              actorToAttach;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.ShopSlot.SetLock
	 */
	struct AShopSlot_SetLock_Params
	{
	public:
		bool                                                       bLock;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAnnounce;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.ShopSlot.Clear
	 */
	struct AShopSlot_Clear_Params
	{	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.ToString
	 */
	struct USpawnerGameData_ToString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.SpawnSavedItems
	 */
	struct USpawnerGameData_SpawnSavedItems_Params
	{
	public:
		class FString                                              SpawnerId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.SpawnSavedArtifacts
	 */
	struct USpawnerGameData_SpawnSavedArtifacts_Params
	{
	public:
		class FString                                              SpawnerId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.SpawnSavedAnomalies
	 */
	struct USpawnerGameData_SpawnSavedAnomalies_Params
	{
	public:
		class FString                                              SpawnerId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.SpawnLootSpawnerData
	 */
	struct USpawnerGameData_SpawnLootSpawnerData_Params
	{
	public:
		class FString                                              InstanceId;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       HasData;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       NeedPlacement;                                           // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E0P1[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UInventoryItem*>                              spawned;                                                 // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.SaveSpawnedLootData
	 */
	struct USpawnerGameData_SaveSpawnedLootData_Params
	{
	public:
		class FString                                              InstanceId;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UInventoryItem*>                              Loot;                                                    // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.SaveSpawnedItemData
	 */
	struct USpawnerGameData_SaveSpawnedItemData_Params
	{
	public:
		class FString                                              SpawnerId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryItem*                                      Item;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CCTR[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0020(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.SaveSpawnedArtifactData
	 */
	struct USpawnerGameData_SaveSpawnedArtifactData_Params
	{
	public:
		class FString                                              SpawnerId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InstanceId;                                              // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        TypeID;                                                  // 0x0020(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_27LO[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0030(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.SaveSpawnedAnomalyData
	 */
	struct USpawnerGameData_SaveSpawnedAnomalyData_Params
	{
	public:
		class FString                                              SpawnerId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APRAnomaly*                                          anomaly;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.SaveNpcData
	 */
	struct USpawnerGameData_SaveNpcData_Params
	{
	public:
		class FString                                              SpawnerId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FNPCGameData                                        Data;                                                    // 0x0010(0x0070)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.SaveGeneratorData
	 */
	struct USpawnerGameData_SaveGeneratorData_Params
	{
	public:
		class FString                                              generatorID;                                             // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      HP;                                                      // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BWGX[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0020(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Cooldown;                                                // 0x0050(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.SaveGeneratedLootData
	 */
	struct USpawnerGameData_SaveGeneratedLootData_Params
	{
	public:
		class FString                                              InstanceId;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UInventoryItem*>                              Loot;                                                    // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.SaveFurnitureSocketData
	 */
	struct USpawnerGameData_SaveFurnitureSocketData_Params
	{
	public:
		class FString                                              InstanceId;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FName, struct FTransform>                       Data;                                                    // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class FName>                                        Broken;                                                  // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.SaveFurnitureEmptySocket
	 */
	struct USpawnerGameData_SaveFurnitureEmptySocket_Params
	{
	public:
		class FString                                              InstanceId;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                EmptySlotId;                                             // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.SaveEmptyLootData
	 */
	struct USpawnerGameData_SaveEmptyLootData_Params
	{
	public:
		class FString                                              InstanceId;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.SaveBodyType
	 */
	struct USpawnerGameData_SaveBodyType_Params
	{
	public:
		class FString                                              SpawnerId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    bodyType;                                                // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.SaveAnomalyData
	 */
	struct USpawnerGameData_SaveAnomalyData_Params
	{
	public:
		class FString                                              SpawnerId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAnomalyData                                        Data;                                                    // 0x0010(0x0070)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.RemoveSpawnedItemData
	 */
	struct USpawnerGameData_RemoveSpawnedItemData_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.RemoveNpcData
	 */
	struct USpawnerGameData_RemoveNpcData_Params
	{
	public:
		class FString                                              SpawnerId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InstanceId;                                              // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.RemoveFieldDataArtifact
	 */
	struct USpawnerGameData_RemoveFieldDataArtifact_Params
	{
	public:
		class FString                                              InstanceId;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.MakeFurnitureSlotData
	 */
	struct USpawnerGameData_MakeFurnitureSlotData_Params
	{
	public:
		TArray<class UInventoryItem*>                              Items;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FSpawnSlotData                                      ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.IsGeneratorSaved
	 */
	struct USpawnerGameData_IsGeneratorSaved_Params
	{
	public:
		class FString                                              generatorID;                                             // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.HasSpawner
	 */
	struct USpawnerGameData_HasSpawner_Params
	{
	public:
		class FString                                              SpawnerId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.HasLootSpawnerData
	 */
	struct USpawnerGameData_HasLootSpawnerData_Params
	{
	public:
		class FString                                              InstanceId;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHasData;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.GetRandomStream
	 */
	struct USpawnerGameData_GetRandomStream_Params
	{
	public:
		class FString                                              SpawnerId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRandomStream                                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.GetNpcData
	 */
	struct USpawnerGameData_GetNpcData_Params
	{
	public:
		class FString                                              SpawnerId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TMap<class FString, struct FNPCGameData>                   DataMap;                                                 // 0x0010(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.GetLootSpawnerData
	 */
	struct USpawnerGameData_GetLootSpawnerData_Params
	{
	public:
		class FString                                              InstanceId;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UInventoryItem*>                              Loot;                                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bIsEmpty;                                                // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHasData;                                                // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.GetFurnitureData
	 */
	struct USpawnerGameData_GetFurnitureData_Params
	{
	public:
		class FString                                              InstanceId;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FFurnitureData                                      Data;                                                    // 0x0010(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FNameArray                                          BrokenSlots;                                             // 0x0060(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FNameArray                                          EmptySlots;                                              // 0x0070(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       bHasData;                                                // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.GetBodyType
	 */
	struct USpawnerGameData_GetBodyType_Params
	{
	public:
		class FString                                              SpawnerId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.GetAnomalyFieldData
	 */
	struct USpawnerGameData_GetAnomalyFieldData_Params
	{
	public:
		class FString                                              SpawnerId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAnomalyFieldData                                   Data;                                                    // 0x0010(0x0030)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGameData.GetAnomalyData
	 */
	struct USpawnerGameData_GetAnomalyData_Params
	{
	public:
		class FString                                              SpawnerId;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAnomalyData                                        ReturnValue;                                             // 0x0010(0x0070)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGenerator.StopGenerator
	 */
	struct ASpawnerGenerator_StopGenerator_Params
	{	};

	/**
	 * Function IntoTheRadius.SpawnerGenerator.Special
	 */
	struct ASpawnerGenerator_Special_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGenerator.SaveGeneratorData
	 */
	struct ASpawnerGenerator_SaveGeneratorData_Params
	{	};

	/**
	 * Function IntoTheRadius.SpawnerGenerator.OnSpawnerReadyToCall
	 */
	struct ASpawnerGenerator_OnSpawnerReadyToCall_Params
	{
	public:
		class AMonsterSpawner*                                     Spawner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnerGenerator.CallSpawner
	 */
	struct ASpawnerGenerator_CallSpawner_Params
	{
	public:
		class AMonsterSpawner*                                     Spawner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NGT2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              NPCActor;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SpawnSlotComponent.MarkSocketMatch
	 */
	struct USpawnSlotComponent_MarkSocketMatch_Params
	{
	public:
		TArray<class FName>                                        SocketNames;                                             // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FColor                                              Color;                                                   // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.StorageDoorComponent.SetLock
	 */
	struct UStorageDoorComponent_SetLock_Params
	{
	public:
		bool                                                       lock;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.StorageDoorComponent.Open
	 */
	struct UStorageDoorComponent_Open_Params
	{	};

	/**
	 * Function IntoTheRadius.StorageDoorComponent.OnTick
	 */
	struct UStorageDoorComponent_OnTick_Params
	{	};

	/**
	 * Function IntoTheRadius.StorageDoorComponent.OnLevelStarted
	 */
	struct UStorageDoorComponent_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.StorageDoorComponent.OnGameStarted
	 */
	struct UStorageDoorComponent_OnGameStarted_Params
	{	};

	/**
	 * Function IntoTheRadius.StorageDoorComponent.IsOpened
	 */
	struct UStorageDoorComponent_IsOpened_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.StorageDoorComponent.IsClosed
	 */
	struct UStorageDoorComponent_IsClosed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.StorageDoorComponent.GetCurrentState
	 */
	struct UStorageDoorComponent_GetCurrentState_Params
	{
	public:
		EStorageDoorState                                          CurrentState;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.StorageDoorComponent.Close
	 */
	struct UStorageDoorComponent_Close_Params
	{	};

	/**
	 * Function IntoTheRadius.StoryConfig.ParseRecordsTags
	 */
	struct UStoryConfig_ParseRecordsTags_Params
	{
	public:
		TArray<struct FGameplayTag>                                ItemAdditionalTags;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FGameplayTag>                                ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.StoryConfig.IsJournalNote
	 */
	struct UStoryConfig_IsJournalNote_Params
	{
	public:
		struct FGameplayTag                                        NoteID;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.StoryConfig.HasNote
	 */
	struct UStoryConfig_HasNote_Params
	{
	public:
		struct FGameplayTag                                        NoteID;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.StoryConfig.HasMissionTip
	 */
	struct UStoryConfig_HasMissionTip_Params
	{
	public:
		struct FGameplayTag                                        TipID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.StoryConfig.GetSubtitleForTime
	 */
	struct UStoryConfig_GetSubtitleForTime_Params
	{
	public:
		struct FRecord                                             Record;                                                  // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
		float                                                      TimeSeconds;                                             // 0x0050(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1K90[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRecordSubtitle                                     ReturnValue;                                             // 0x0058(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.StoryConfig.GetStoryConfig
	 */
	struct UStoryConfig_GetStoryConfig_Params
	{
	public:
		class UStoryConfig*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.StoryConfig.GetRandomCassette
	 */
	struct UStoryConfig_GetRandomCassette_Params
	{
	public:
		bool                                                       bMissingOnly;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UXW9[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        CassetteTag;                                             // 0x0004(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_46N0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDialogue                                           CassetteDialogue;                                        // 0x0010(0x0060)  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.StoryConfig.GetPaperNote
	 */
	struct UStoryConfig_GetPaperNote_Params
	{
	public:
		struct FGameplayTag                                        NoteID;                                                  // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_69RB[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPaperNote                                          Note;                                                    // 0x0010(0x0058)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.StoryConfig.GetNPCJournalNote
	 */
	struct UStoryConfig_GetNPCJournalNote_Params
	{
	public:
		struct FGameplayTag                                        NpcID;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.StoryConfig.GetMissionTip
	 */
	struct UStoryConfig_GetMissionTip_Params
	{
	public:
		struct FGameplayTag                                        TipID;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2CQ2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRecord                                             Record;                                                  // 0x0010(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.StoryConfig.GetKatyaMonologue
	 */
	struct UStoryConfig_GetKatyaMonologue_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OVE7[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDialogue                                           Monologue;                                               // 0x0010(0x0060)  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.StoryConfig.GetCassette
	 */
	struct UStoryConfig_GetCassette_Params
	{
	public:
		struct FGameplayTag                                        CassetteTag;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1CIP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDialogue                                           CassetteDialogue;                                        // 0x0010(0x0060)  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SubtitlesControllerInterface.ShowSubtitlesString
	 */
	struct USubtitlesControllerInterface_ShowSubtitlesString_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0010(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRSubtitleType                                            Type;                                                    // 0x0014(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSwitchable;                                             // 0x0015(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SubtitlesControllerInterface.ShowSubtitles
	 */
	struct USubtitlesControllerInterface_ShowSubtitles_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0018(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPRSubtitleType                                            Type;                                                    // 0x001C(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSwitchable;                                             // 0x001D(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SubtitlesControllerInterface.ShowSaveIcon
	 */
	struct USubtitlesControllerInterface_ShowSaveIcon_Params
	{
	public:
		bool                                                       bAutoSave;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SubtitlesControllerInterface.SetDressingMode
	 */
	struct USubtitlesControllerInterface_SetDressingMode_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SubtitlesControllerInterface.HideSubtitles
	 */
	struct USubtitlesControllerInterface_HideSubtitles_Params
	{	};

	/**
	 * Function IntoTheRadius.SystemConfig.GetSystemConfig
	 */
	struct USystemConfig_GetSystemConfig_Params
	{
	public:
		class USystemConfig*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SystemConfig.GetLevelName
	 */
	struct USystemConfig_GetLevelName_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                Placeholder;                                             // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0020(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SystemConfig.GetLevelConfig
	 */
	struct USystemConfig_GetLevelConfig_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLevelConfig                                        Config;                                                  // 0x0008(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.SystemConfig.GetCurrentLevelConfig
	 */
	struct USystemConfig_GetCurrentLevelConfig_Params
	{
	public:
		struct FLevelConfig                                        Config;                                                  // 0x0000(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.ReadyMarkInterface.ReadyTrigger
	 */
	struct UReadyMarkInterface_ReadyTrigger_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameStarterInterface.GameStarted
	 */
	struct UGameStarterInterface_GameStarted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameStarterInterface.GameShuttingDown
	 */
	struct UGameStarterInterface_GameShuttingDown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.GameStarterInterface.CheckGameStart
	 */
	struct UGameStarterInterface_CheckGameStart_Params
	{	};

	/**
	 * Function IntoTheRadius.IClearable.Clear
	 */
	struct UIClearable_Clear_Params
	{	};

	/**
	 * Function IntoTheRadius.IPreparable.Prepare
	 */
	struct UIPreparable_Prepare_Params
	{	};

	/**
	 * Function IntoTheRadius.TagsConfig.GetTagsConfig
	 */
	struct UTagsConfig_GetTagsConfig_Params
	{
	public:
		class UTagsConfig*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.TeleportAutomation.LevelReadyCallback
	 */
	struct UTeleportAutomation_LevelReadyCallback_Params
	{	};

	/**
	 * Function IntoTheRadius.TimeManager.SetDateTime
	 */
	struct UTimeManager_SetDateTime_Params
	{
	public:
		struct FDateTime                                           NewDateTime;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.TimeManager.IsNight
	 */
	struct UTimeManager_IsNight_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.TimeManager.IsDay
	 */
	struct UTimeManager_IsDay_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.TimeManager.GetTimeManager
	 */
	struct UTimeManager_GetTimeManager_Params
	{
	public:
		class UTimeManager*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.TimeManager.GetTime
	 */
	struct UTimeManager_GetTime_Params
	{
	public:
		int32_t                                                    Hour;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Minute;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.TimeManager.GetSecondsTill
	 */
	struct UTimeManager_GetSecondsTill_Params
	{
	public:
		float                                                      Hour;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.TimeManager.GetSecondsPassed
	 */
	struct UTimeManager_GetSecondsPassed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.TimeManager.GetHoursPassed
	 */
	struct UTimeManager_GetHoursPassed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.TimeManager.GetHour
	 */
	struct UTimeManager_GetHour_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.TimeManager.GetDateTimeStrings
	 */
	struct UTimeManager_GetDateTimeStrings_Params
	{
	public:
		class FString                                              Date;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              DayOfWeek;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Hour;                                                    // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Minute;                                                  // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Second;                                                  // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.TimeManager.GetDateTime
	 */
	struct UTimeManager_GetDateTime_Params
	{
	public:
		struct FDateTime                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.TimeManager.DebugSetHour
	 */
	struct UTimeManager_DebugSetHour_Params
	{
	public:
		float                                                      Hour;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.TimeManager.AddTimeTill
	 */
	struct UTimeManager_AddTimeTill_Params
	{
	public:
		float                                                      Hour;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.TimeManager.AddSeconds
	 */
	struct UTimeManager_AddSeconds_Params
	{
	public:
		float                                                      Seconds;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.TimeManager.AddHours
	 */
	struct UTimeManager_AddHours_Params
	{
	public:
		float                                                      Hours;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.VfxConfig.GetVfxConfig
	 */
	struct UVfxConfig_GetVfxConfig_Params
	{
	public:
		class UVfxConfig*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.VRControllerComponent.UpdateControllerMesh
	 */
	struct UVRControllerComponent_UpdateControllerMesh_Params
	{
	public:
		class USceneComponent*                                     Parent;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.VRControllerComponent.SetMeshVisibility
	 */
	struct UVRControllerComponent_SetMeshVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.VRControllerComponent.IsMeshVisibile
	 */
	struct UVRControllerComponent_IsMeshVisibile_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.VRControllerComponent.GetMaterial
	 */
	struct UVRControllerComponent_GetMaterial_Params
	{
	public:
		class UMaterialInstanceDynamic*                            Material;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.WeaponBoltComponent.OnTick
	 */
	struct UWeaponBoltComponent_OnTick_Params
	{	};

	/**
	 * Function IntoTheRadius.WeaponBoltComponent.OnLevelStarted
	 */
	struct UWeaponBoltComponent_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.WeaponBoltComponent.OnGameStarted
	 */
	struct UWeaponBoltComponent_OnGameStarted_Params
	{	};

	/**
	 * Function IntoTheRadius.WeaponBoltComponent.IsOpened
	 */
	struct UWeaponBoltComponent_IsOpened_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.WeaponBoltComponent.IsClosed
	 */
	struct UWeaponBoltComponent_IsClosed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.WeaponBoltComponent.GetCurrentState
	 */
	struct UWeaponBoltComponent_GetCurrentState_Params
	{
	public:
		EWeaponBoltState                                           CurrentState;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.WeaponBoltComponent.Drop
	 */
	struct UWeaponBoltComponent_Drop_Params
	{	};

	/**
	 * Function IntoTheRadius.WElement_ShowcaseCategory.ShowNewItemExclamationMark
	 */
	struct UWElement_ShowcaseCategory_ShowNewItemExclamationMark_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.WPage.UpdateFooterTexts
	 */
	struct UWPage_UpdateFooterTexts_Params
	{
	public:
		class UTextBlock*                                          textPlayerLevel;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextBlock*                                          textMoney;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextBlock*                                          textTime;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.WMCPage_ShowcaseCategories.UpdateSelection
	 */
	struct UWMCPage_ShowcaseCategories_UpdateSelection_Params
	{
	public:
		int32_t                                                    selectedIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.WMCPage_ShowcaseCategories.CheckForHasNewItems
	 */
	struct UWMCPage_ShowcaseCategories_CheckForHasNewItems_Params
	{	};

	/**
	 * Function IntoTheRadius.WShopComputer.UpdateNewItems
	 */
	struct UWShopComputer_UpdateNewItems_Params
	{	};

	/**
	 * Function IntoTheRadius.WShopComputer.ShowTakeItems
	 */
	struct UWShopComputer_ShowTakeItems_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.WShopComputer.ShowShopBin
	 */
	struct UWShopComputer_ShowShopBin_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.WShopComputer.OnSCTick
	 */
	struct UWShopComputer_OnSCTick_Params
	{	};

	/**
	 * Function IntoTheRadius.WShopComputer.OnLevelStarted
	 */
	struct UWShopComputer_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.WShopComputer.OnGameStarted
	 */
	struct UWShopComputer_OnGameStarted_Params
	{	};

	/**
	 * Function IntoTheRadius.WShopComputer.IsShopBinVisible
	 */
	struct UWShopComputer_IsShopBinVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function IntoTheRadius.WShopComputer.InitializeByActor
	 */
	struct UWShopComputer_InitializeByActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
