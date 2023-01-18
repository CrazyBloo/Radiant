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
	 * Function BP_PRGameMode.BP_PRGameMode_C.GetCheatShowClimabledistance
	 */
	struct ABP_PRGameMode_C_GetCheatShowClimabledistance_Params
	{
	public:
		int32_t                                                    Distance;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.GetCheatShowItems
	 */
	struct ABP_PRGameMode_C_GetCheatShowItems_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.GetCheatShowNearbyNPCs
	 */
	struct ABP_PRGameMode_C_GetCheatShowNearbyNPCs_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.GetCheatSpeed
	 */
	struct ABP_PRGameMode_C_GetCheatSpeed_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.GetEnvironment
	 */
	struct ABP_PRGameMode_C_GetEnvironment_Params
	{
	public:
		class ABP_Environment_C*                                   Environment;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.HideTransitionHint
	 */
	struct ABP_PRGameMode_C_HideTransitionHint_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.CreateTransitionHint
	 */
	struct ABP_PRGameMode_C_CreateTransitionHint_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.GetCheatGodMode
	 */
	struct ABP_PRGameMode_C_GetCheatGodMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.GetDamageAwarenessValue
	 */
	struct ABP_PRGameMode_C_GetDamageAwarenessValue_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.GetNoiseAwarenessValue
	 */
	struct ABP_PRGameMode_C_GetNoiseAwarenessValue_Params
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MA0O[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.GetCheatInvisibility
	 */
	struct ABP_PRGameMode_C_GetCheatInvisibility_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.SpawnItem
	 */
	struct ABP_PRGameMode_C_SpawnItem_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_749L[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		bool                                                       bProjectOnGround;                                        // 0x0040(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSimulate;                                               // 0x0041(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P9YU[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.TickAutosave
	 */
	struct ABP_PRGameMode_C_TickAutosave_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.ReprojectLocation
	 */
	struct ABP_PRGameMode_C_ReprojectLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.SpawnItemByType
	 */
	struct ABP_PRGameMode_C_SpawnItemByType_Params
	{
	public:
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		class FString                                              InstanceId;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LZLI[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Transform;                                               // 0x0020(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       bProjectOnGround;                                        // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSimulate;                                               // 0x0051(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0BIQ[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.SpawnSavedNPC
	 */
	struct ABP_PRGameMode_C_SpawnSavedNPC_Params
	{
	public:
		struct FNPCGameData                                        Data;                                                    // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
		class AActor*                                              SpawnerActor;                                            // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Radius;                                                  // 0x0078(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCanWalkAway;                                            // 0x007C(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SnipingMode;                                             // 0x007D(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AA83[0x2];                                   // 0x007E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0080(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.SpawnNPC
	 */
	struct ABP_PRGameMode_C_SpawnNPC_Params
	{
	public:
		struct FGameplayTag                                        npcTypeID;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              SpawnerActor;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Radius;                                                  // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCanWalkAway;                                            // 0x0014(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SnipingMode;                                             // 0x0015(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PZ5A[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.SpawnAnomaly
	 */
	struct ABP_PRGameMode_C_SpawnAnomaly_Params
	{
	public:
		class FString                                              AnomalyName;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UClass*                                              AnomalyClass;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0FXG[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          AnomalyTransform;                                        // 0x0020(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		bool                                                       bProjectOnGround;                                        // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0308[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      AnomalyRadius;                                           // 0x0054(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APRAnomaly*                                          ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.FindStartTransform
	 */
	struct ABP_PRGameMode_C_FindStartTransform_Params
	{
	public:
		struct FGameplayTag                                        Level;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        Location;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.GetCurrentPlayerVelocity
	 */
	struct ABP_PRGameMode_C_GetCurrentPlayerVelocity_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.KillActorsOnReload
	 */
	struct ABP_PRGameMode_C_KillActorsOnReload_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.RestorePlayerIfDead
	 */
	struct ABP_PRGameMode_C_RestorePlayerIfDead_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.TraceLocationDown
	 */
	struct ABP_PRGameMode_C_TraceLocationDown_Params
	{
	public:
		struct FVector                                             In;                                                      // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Out;                                                     // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.FindLevelStart
	 */
	struct ABP_PRGameMode_C_FindLevelStart_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        LocationTag;                                             // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Velocity;                                                // 0x0040(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSave;                                               // 0x004C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6Z5U[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.GetCurrentPlayerTransform
	 */
	struct ABP_PRGameMode_C_GetCurrentPlayerTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.SpawnLocationMarkers
	 */
	struct ABP_PRGameMode_C_SpawnLocationMarkers_Params
	{
	public:
		struct FGameplayTag                                        Level;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.GetQuestStartTransform
	 */
	struct ABP_PRGameMode_C_GetQuestStartTransform_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DU42[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Result;                                                  // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.GetSplineStartTransform
	 */
	struct ABP_PRGameMode_C_GetSplineStartTransform_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0F3L[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Result;                                                  // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.GetPlayerStartTransform
	 */
	struct ABP_PRGameMode_C_GetPlayerStartTransform_Params
	{
	public:
		struct FGameplayTag                                        StartTransformLevelTag;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JV8Z[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Result;                                                  // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.SetCheatShowNearbyNPCs
	 */
	struct ABP_PRGameMode_C_SetCheatShowNearbyNPCs_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.SwitchCheatShowNearbyNPCs
	 */
	struct ABP_PRGameMode_C_SwitchCheatShowNearbyNPCs_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.SetCheatSpeed
	 */
	struct ABP_PRGameMode_C_SetCheatSpeed_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.SwitchCheatSpeed
	 */
	struct ABP_PRGameMode_C_SwitchCheatSpeed_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.SetCheatInvisibility
	 */
	struct ABP_PRGameMode_C_SetCheatInvisibility_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.SwitchCheatInvisibility
	 */
	struct ABP_PRGameMode_C_SwitchCheatInvisibility_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.OnPlayerDeath
	 */
	struct ABP_PRGameMode_C_OnPlayerDeath_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.SetCheatShowItems
	 */
	struct ABP_PRGameMode_C_SetCheatShowItems_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.SwitchCheatShowItems
	 */
	struct ABP_PRGameMode_C_SwitchCheatShowItems_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.SwitchNightVision
	 */
	struct ABP_PRGameMode_C_SwitchNightVision_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.OnMissionStateChanged
	 */
	struct ABP_PRGameMode_C_OnMissionStateChanged_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.OnTransitionStart
	 */
	struct ABP_PRGameMode_C_OnTransitionStart_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.OnTransitionEnd
	 */
	struct ABP_PRGameMode_C_OnTransitionEnd_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.OnInitializeGame
	 */
	struct ABP_PRGameMode_C_OnInitializeGame_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.OnInitializeEditor
	 */
	struct ABP_PRGameMode_C_OnInitializeEditor_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.OnStartedGame
	 */
	struct ABP_PRGameMode_C_OnStartedGame_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.OnStartedEditor
	 */
	struct ABP_PRGameMode_C_OnStartedEditor_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.OnEnteredMenu
	 */
	struct ABP_PRGameMode_C_OnEnteredMenu_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.ApplySoundVolumes
	 */
	struct ABP_PRGameMode_C_ApplySoundVolumes_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.OnTransitionHint
	 */
	struct ABP_PRGameMode_C_OnTransitionHint_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.OnLevelStarted
	 */
	struct ABP_PRGameMode_C_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.ApplyBightnessMult
	 */
	struct ABP_PRGameMode_C_ApplyBightnessMult_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.OnGameDataPreSave
	 */
	struct ABP_PRGameMode_C_OnGameDataPreSave_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.DoSavePlayerPosition
	 */
	struct ABP_PRGameMode_C_DoSavePlayerPosition_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.OnLevelPrepare
	 */
	struct ABP_PRGameMode_C_OnLevelPrepare_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.ResetEffects
	 */
	struct ABP_PRGameMode_C_ResetEffects_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.PrepareMissionExecutor
	 */
	struct ABP_PRGameMode_C_PrepareMissionExecutor_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.SwitchCheatShowClimableActors
	 */
	struct ABP_PRGameMode_C_SwitchCheatShowClimableActors_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.CheatShowActorsOfClass
	 */
	struct ABP_PRGameMode_C_CheatShowActorsOfClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.OnTideHappening
	 */
	struct ABP_PRGameMode_C_OnTideHappening_Params
	{
	public:
		bool                                                       bReload;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.OnTideFinished
	 */
	struct ABP_PRGameMode_C_OnTideFinished_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.TickDebug
	 */
	struct ABP_PRGameMode_C_TickDebug_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.SetCheatGodMode
	 */
	struct ABP_PRGameMode_C_SetCheatGodMode_Params
	{
	public:
		bool                                                       bValue;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.SwitchCheatGodMode
	 */
	struct ABP_PRGameMode_C_SwitchCheatGodMode_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.OnVirtualStockChangedEvent
	 */
	struct ABP_PRGameMode_C_OnVirtualStockChangedEvent_Params
	{	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.OnContinue_Event
	 */
	struct ABP_PRGameMode_C_OnContinue_Event_Params
	{
	public:
		bool                                                       doNotShowAgain;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRGameMode.BP_PRGameMode_C.ExecuteUbergraph_BP_PRGameMode
	 */
	struct ABP_PRGameMode_C_ExecuteUbergraph_BP_PRGameMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
