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
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnTutorialControls
	 */
	struct UBPO_AnalyticsManager_C_OnTutorialControls_Params
	{	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.AddParamsFromArray
	 */
	struct UBPO_AnalyticsManager_C_AddParamsFromArray_Params
	{
	public:
		TArray<class FString>                                      ParamsArray;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FAnalyticsEventAttr>                         EventAttrIn;                                             // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FAnalyticsEventAttr>                         EventAttrOut;                                            // 0x0020(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.CountFinishedStoryMissions
	 */
	struct UBPO_AnalyticsManager_C_CountFinishedStoryMissions_Params
	{
	public:
		TArray<class UMissionData*>                                Missions;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    Count;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.SendPlayerPositions
	 */
	struct UBPO_AnalyticsManager_C_SendPlayerPositions_Params
	{	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.SendChangedGameplaySettings
	 */
	struct UBPO_AnalyticsManager_C_SendChangedGameplaySettings_Params
	{
	public:
		bool                                                       VirtualStock;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PlayerHeight;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NeckHeight;                                              // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ArmLength;                                               // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       VignetteTurn;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       VignetteRun;                                             // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShowBody;                                                // 0x0006(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SeatedMode;                                              // 0x0007(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.SendChangedControlsSettings
	 */
	struct UBPO_AnalyticsManager_C_SendChangedControlsSettings_Params
	{
	public:
		bool                                                       TurnType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TurnSpeed;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       MovementDirectionType;                                   // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ControllerRotation;                                      // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HoldGrip;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       LeftHanded;                                              // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       MirrorHolsters;                                          // 0x0006(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TeleportMovement;                                        // 0x0007(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.AddDefaultParams
	 */
	struct UBPO_AnalyticsManager_C_AddDefaultParams_Params
	{
	public:
		TArray<struct FAnalyticsEventAttr>                         EventAttrIn;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FAnalyticsEventAttr>                         EventAttrOut;                                            // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.Add Difficulty Params
	 */
	struct UBPO_AnalyticsManager_C_AddDifficultyParams_Params
	{
	public:
		TArray<struct FAnalyticsEventAttr>                         EventAttrIn;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FRadiusGameDifficulty                               GameDifficulty;                                          // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		TArray<struct FAnalyticsEventAttr>                         EventAttrOut;                                            // 0x0020(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.EventFourParams
	 */
	struct UBPO_AnalyticsManager_C_EventFourParams_Params
	{
	public:
		class FString                                              Event;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              param1;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              value1;                                                  // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              param2;                                                  // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              value2;                                                  // 0x0040(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              param3;                                                  // 0x0050(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              value3;                                                  // 0x0060(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              param4;                                                  // 0x0070(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              value4;                                                  // 0x0080(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.EventThreeParams
	 */
	struct UBPO_AnalyticsManager_C_EventThreeParams_Params
	{
	public:
		class FString                                              Event;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              param1;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              value1;                                                  // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              param2;                                                  // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              value2;                                                  // 0x0040(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              param3;                                                  // 0x0050(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              value3;                                                  // 0x0060(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.EventTwoParams
	 */
	struct UBPO_AnalyticsManager_C_EventTwoParams_Params
	{
	public:
		class FString                                              Event;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              param1;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              value1;                                                  // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              param2;                                                  // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              value2;                                                  // 0x0040(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.EventOneParam
	 */
	struct UBPO_AnalyticsManager_C_EventOneParam_Params
	{
	public:
		class FString                                              Event;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Param;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Value;                                                   // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.EventDefaultParams
	 */
	struct UBPO_AnalyticsManager_C_EventDefaultParams_Params
	{
	public:
		class FString                                              Event;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.Begin
	 */
	struct UBPO_AnalyticsManager_C_Begin_Params
	{
	public:
		class UPRGameInstance*                                     GameInstance;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.End
	 */
	struct UBPO_AnalyticsManager_C_End_Params
	{	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnDifficultyChanged
	 */
	struct UBPO_AnalyticsManager_C_OnDifficultyChanged_Params
	{	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnFinalChoice
	 */
	struct UBPO_AnalyticsManager_C_OnFinalChoice_Params
	{
	public:
		class FString                                              Choice;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnGameStart
	 */
	struct UBPO_AnalyticsManager_C_OnGameStart_Params
	{	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnKatyasMonologue
	 */
	struct UBPO_AnalyticsManager_C_OnKatyasMonologue_Params
	{
	public:
		struct FGameplayTag                                        MonologueTag;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnLevelStarted
	 */
	struct UBPO_AnalyticsManager_C_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        Value;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnLogFPS
	 */
	struct UBPO_AnalyticsManager_C_OnLogFPS_Params
	{
	public:
		class FString                                              Location;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Min;                                                     // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Max;                                                     // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Average;                                                 // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnLogHmdDevice
	 */
	struct UBPO_AnalyticsManager_C_OnLogHmdDevice_Params
	{	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnMenuNewGame
	 */
	struct UBPO_AnalyticsManager_C_OnMenuNewGame_Params
	{
	public:
		bool                                                       SkipTutor;                                               // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Ironman;                                                 // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRadiusGameDifficulty                               Difficulty;                                              // 0x0002(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnMissionFinished
	 */
	struct UBPO_AnalyticsManager_C_OnMissionFinished_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnMissionStateChanged
	 */
	struct UBPO_AnalyticsManager_C_OnMissionStateChanged_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnPlayerDeath
	 */
	struct UBPO_AnalyticsManager_C_OnPlayerDeath_Params
	{
	public:
		class FText                                                DeathCauserName;                                         // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             DeathLocation;                                           // 0x0018(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnPlayerKill
	 */
	struct UBPO_AnalyticsManager_C_OnPlayerKill_Params
	{
	public:
		class AActor*                                              KilledActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        weaponTag;                                               // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsSmoothing;                                            // 0x0010(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9ELJ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             DeathLocation;                                           // 0x0014(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnPlayerLocation
	 */
	struct UBPO_AnalyticsManager_C_OnPlayerLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AverageDelta;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnSettingsControls
	 */
	struct UBPO_AnalyticsManager_C_OnSettingsControls_Params
	{
	public:
		bool                                                       bTurnType;                                               // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bTurnSpeed;                                              // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bMovementDirectionType;                                  // 0x0002(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bControllerRotation;                                     // 0x0003(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bHoldGrip;                                               // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLeftHanded;                                             // 0x0005(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bMirrorHolsters;                                         // 0x0006(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bTeleportMovement;                                       // 0x0007(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnSettingsGameplay
	 */
	struct UBPO_AnalyticsManager_C_OnSettingsGameplay_Params
	{
	public:
		bool                                                       VirtualStock;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PlayerHeight;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NeckHeight;                                              // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ArmLength;                                               // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       VignetteTurn;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       VignetteRun;                                             // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShowBody;                                                // 0x0006(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SeatedMode;                                              // 0x0007(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnSleep
	 */
	struct UBPO_AnalyticsManager_C_OnSleep_Params
	{
	public:
		float                                                      Seconds;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isBlackout;                                              // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnTideHappening
	 */
	struct UBPO_AnalyticsManager_C_OnTideHappening_Params
	{	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnTransitionStart
	 */
	struct UBPO_AnalyticsManager_C_OnTransitionStart_Params
	{	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnUnstuck
	 */
	struct UBPO_AnalyticsManager_C_OnUnstuck_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnTutorialEnd
	 */
	struct UBPO_AnalyticsManager_C_OnTutorialEnd_Params
	{
	public:
		struct FGameplayTag                                        TutorialId;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TotalSteps;                                              // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CompletedSteps;                                          // 0x000C(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnTutorialStart
	 */
	struct UBPO_AnalyticsManager_C_OnTutorialStart_Params
	{
	public:
		struct FGameplayTag                                        TutorialId;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TotalSteps;                                              // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnMoneyChanged
	 */
	struct UBPO_AnalyticsManager_C_OnMoneyChanged_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KC4P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      AnalyticsParams;                                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnGuitarPlayed
	 */
	struct UBPO_AnalyticsManager_C_OnGuitarPlayed_Params
	{
	public:
		int32_t                                                    PlayCount;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PlayTimeSeconds;                                         // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnJournalOpened
	 */
	struct UBPO_AnalyticsManager_C_OnJournalOpened_Params
	{
	public:
		struct FGameplayTag                                        TabTag;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.OnFirstTimeTaken
	 */
	struct UBPO_AnalyticsManager_C_OnFirstTimeTaken_Params
	{
	public:
		struct FGameplayTag                                        Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPO_AnalyticsManager.BPO_AnalyticsManager_C.ExecuteUbergraph_BPO_AnalyticsManager
	 */
	struct UBPO_AnalyticsManager_C_ExecuteUbergraph_BPO_AnalyticsManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
