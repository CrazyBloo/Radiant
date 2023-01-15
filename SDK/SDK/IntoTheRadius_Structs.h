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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum IntoTheRadius.EPRStatStatus
	 */
	enum class EPRStatStatus : uint8_t
	{
		End    = 0,
		Low    = 1,
		Normal = 2,
		MAX    = 3
	};

	/**
	 * Enum IntoTheRadius.EAwarenessLevel
	 */
	enum class EAwarenessLevel : uint8_t
	{
		None = 0,
		Low  = 1,
		High = 2,
		MAX  = 3
	};

	/**
	 * Enum IntoTheRadius.EWeaponBoltState
	 */
	enum class EWeaponBoltState : uint8_t
	{
		Closed   = 0,
		Rotating = 1,
		HalfWay  = 2,
		Sliding  = 3,
		Opened   = 4,
		MAX      = 5
	};

	/**
	 * Enum IntoTheRadius.ERadiusLeaderboard
	 */
	enum class ERadiusLeaderboard : uint8_t
	{
		None          = 0,
		Artifacts     = 1,
		LoreCassettes = 2,
		MAX           = 3
	};

	/**
	 * Enum IntoTheRadius.ERadiusAchievement
	 */
	enum class ERadiusAchievement : uint8_t
	{
		None                  = 0,
		FirstWeapon           = 1,
		FirstDeath            = 2,
		CompleteShootingRange = 3,
		CompleteIronman       = 4,
		ClimbCrane            = 5,
		KillFromDistance      = 6,
		KillWithBarrel        = 7,
		HitByStomper          = 8,
		CollectArtifacts      = 9,
		CollectLoreCassettes  = 10,
		MAX                   = 11
	};

	/**
	 * Enum IntoTheRadius.EOverlayState
	 */
	enum class EOverlayState : uint8_t
	{
		Default    = 0,
		Masculine  = 1,
		Feminine   = 2,
		Injured    = 3,
		HandsTied  = 4,
		Rifle      = 5,
		Pistol1H   = 6,
		Pistol2H   = 7,
		Bow        = 8,
		Torch      = 9,
		Binoculars = 10,
		Box        = 11,
		Barrel     = 12,
		MAX        = 13
	};

	/**
	 * Enum IntoTheRadius.EViewMode
	 */
	enum class EViewMode : uint8_t
	{
		ThirdPerson = 0,
		FirstPerson = 1,
		MAX         = 2
	};

	/**
	 * Enum IntoTheRadius.EMovementAction
	 */
	enum class EMovementAction : uint8_t
	{
		None       = 0,
		LowMantle  = 1,
		HighMantle = 2,
		Rolling    = 3,
		GettingUp  = 4,
		MAX        = 5
	};

	/**
	 * Enum IntoTheRadius.EMovementState
	 */
	enum class EMovementState : uint8_t
	{
		None     = 0,
		Grounded = 1,
		InAir    = 2,
		Mantling = 3,
		Ragdoll  = 4,
		MAX      = 5
	};

	/**
	 * Enum IntoTheRadius.EGait
	 */
	enum class EGait : uint8_t
	{
		Walking   = 0,
		Running   = 1,
		Sprinting = 2,
		MAX       = 3
	};

	/**
	 * Enum IntoTheRadius.EStance
	 */
	enum class EStance : uint8_t
	{
		Standing  = 0,
		Crouching = 1,
		MAX       = 2
	};

	/**
	 * Enum IntoTheRadius.ERotationMode
	 */
	enum class ERotationMode : uint8_t
	{
		VelocityDirection = 0,
		LookingDirection  = 1,
		Aiming            = 2,
		MAX               = 3
	};

	/**
	 * Enum IntoTheRadius.EGroundedEntryState
	 */
	enum class EGroundedEntryState : uint8_t
	{
		None = 0,
		Roll = 1,
		MAX  = 2
	};

	/**
	 * Enum IntoTheRadius.EHipsDirection
	 */
	enum class EHipsDirection : uint8_t
	{
		F   = 0,
		B   = 1,
		RF  = 2,
		RB  = 3,
		LF  = 4,
		LB  = 5,
		MAX = 6
	};

	/**
	 * Enum IntoTheRadius.EFootStepType
	 */
	enum class EFootStepType : uint8_t
	{
		Step      = 0,
		WalkOrRun = 1,
		Jump      = 2,
		Land      = 3,
		MAX       = 4
	};

	/**
	 * Enum IntoTheRadius.EBotMovementMode
	 */
	enum class EBotMovementMode : uint8_t
	{
		WalkIdle     = 0,
		CrouchIdle   = 1,
		Sprint       = 2,
		RunIdle      = 3,
		WalkAiming   = 4,
		CrouchAiming = 5,
		RunAiming    = 6,
		MAX          = 7
	};

	/**
	 * Enum IntoTheRadius.ENpcCombatState
	 */
	enum class ENpcCombatState : uint8_t
	{
		Uninitialized    = 0,
		InCombat         = 1,
		WaitingForCombat = 2,
		MAX              = 3
	};

	/**
	 * Enum IntoTheRadius.ENpcPointQueryType
	 */
	enum class ENpcPointQueryType : uint8_t
	{
		None     = 0,
		Cover    = 1,
		Shooting = 2,
		MAX      = 3
	};

	/**
	 * Enum IntoTheRadius.EEnemySenseType
	 */
	enum class EEnemySenseType : uint8_t
	{
		Reduced = 0,
		Normal  = 1,
		MAX     = 2
	};

	/**
	 * Enum IntoTheRadius.ETracersShowType
	 */
	enum class ETracersShowType : uint8_t
	{
		None    = 0,
		Enemies = 1,
		Player  = 2,
		All     = 3,
		MAX     = 4
	};

	/**
	 * Enum IntoTheRadius.EItemsDropType
	 */
	enum class EItemsDropType : uint8_t
	{
		Backpack = 0,
		All      = 1,
		MAX      = 2
	};

	/**
	 * Enum IntoTheRadius.EDifficultyType
	 */
	enum class EDifficultyType : uint8_t
	{
		None            = 0,
		HighlyDecreased = 1,
		Decreased       = 2,
		Normal          = 3,
		Increased       = 4,
		HighlyIncreased = 5,
		MAX             = 6
	};

	/**
	 * Enum IntoTheRadius.EPRGameDifficultyPreset
	 */
	enum class EPRGameDifficultyPreset : uint8_t
	{
		Easy   = 0,
		Normal = 1,
		Hard   = 2,
		Custom = 3,
		MAX    = 4
	};

	/**
	 * Enum IntoTheRadius.EHapticsCurve
	 */
	enum class EHapticsCurve : uint8_t
	{
		Interact   = 0,
		FirePistol = 1,
		Grab       = 2,
		MAX        = 3
	};

	/**
	 * Enum IntoTheRadius.EHapticsType
	 */
	enum class EHapticsType : uint8_t
	{
		None                    = 0,
		Death                   = 1,
		DistanceGrip_Left       = 2,
		DistanceGrip_Right      = 3,
		BulletHit               = 4,
		Climb_Left              = 5,
		Climb_Right             = 6,
		Ping_Left               = 7,
		Ping_Right              = 8,
		Recoil                  = 9,
		Heartbeat               = 10,
		BackpackTake            = 11,
		BackpackReturn          = 12,
		Eat                     = 13,
		Drink                   = 14,
		Smoke                   = 15,
		DamageAnomaly           = 16,
		DamageFall_Light        = 17,
		DamageFall_Heavy        = 18,
		DamageSlash_Front_Left  = 19,
		DamageSlash_Back_Left   = 20,
		DamageSlash_Front_Right = 21,
		DamageSlash_Back_Right  = 22,
		MAX                     = 23
	};

	/**
	 * Enum IntoTheRadius.ELevelManagerState
	 */
	enum class ELevelManagerState : uint8_t
	{
		Ready     = 0,
		Loading   = 1,
		Unloading = 2,
		MAX       = 3
	};

	/**
	 * Enum IntoTheRadius.EMissionType
	 */
	enum class EMissionType : uint8_t
	{
		Tutorial          = 0,
		Story             = 1,
		Generic           = 2,
		SpecialArtifacts  = 3,
		SpecialGenerators = 4,
		MAX               = 5
	};

	/**
	 * Enum IntoTheRadius.EMissionState
	 */
	enum class EMissionState : uint8_t
	{
		Ready      = 0,
		Briefing   = 1,
		Debriefing = 2,
		Executing  = 3,
		Successful = 4,
		Failed     = 5,
		Rejected   = 6,
		Missed     = 7,
		MAX        = 8
	};

	/**
	 * Enum IntoTheRadius.EMissionObjectiveImportance
	 */
	enum class EMissionObjectiveImportance : uint8_t
	{
		Primary   = 0,
		Secondary = 1,
		Hint      = 2,
		MAX       = 3
	};

	/**
	 * Enum IntoTheRadius.EPRHandPoseType
	 */
	enum class EPRHandPoseType : uint8_t
	{
		Primary          = 0,
		PrimaryTriggered = 1,
		PrimarySafety    = 2,
		Secondary        = 3,
		Throw            = 4,
		Slide            = 5,
		MAX              = 6
	};

	/**
	 * Enum IntoTheRadius.EPRHandPoseSaveType
	 */
	enum class EPRHandPoseSaveType : uint8_t
	{
		Tag                     = 0,
		StaticMeshComponentPath = 1,
		MAX                     = 2
	};

	/**
	 * Enum IntoTheRadius.EPRHandPoseNumber
	 */
	enum class EPRHandPoseNumber : uint8_t
	{
		Pose1  = 0,
		Pose2  = 1,
		Pose3  = 2,
		Pose4  = 3,
		Pose5  = 4,
		Pose6  = 5,
		Pose7  = 6,
		Pose8  = 7,
		Pose9  = 8,
		Pose10 = 9,
		Count  = 10,
		MAX    = 11
	};

	/**
	 * Enum IntoTheRadius.EPRHandPoseGeometryType
	 */
	enum class EPRHandPoseGeometryType : uint8_t
	{
		Point  = 0,
		Spline = 1,
		Count  = 2,
		MAX    = 3
	};

	/**
	 * Enum IntoTheRadius.ESpeedCoefficient
	 */
	enum class ESpeedCoefficient : uint8_t
	{
		Default      = 0,
		Anomaly      = 1,
		Tide         = 2,
		TutorialZone = 3,
		WaterPatch   = 4,
		MAX          = 5
	};

	/**
	 * Enum IntoTheRadius.ECharReappearWaitingReason
	 */
	enum class ECharReappearWaitingReason : uint8_t
	{
		None                 = 0,
		WaitForReappearDelay = 1,
		WaitForCoverSearch   = 2,
		WaitToLeaveView      = 3,
		MAX                  = 4
	};

	/**
	 * Enum IntoTheRadius.ECharDetailLevel
	 */
	enum class ECharDetailLevel : uint8_t
	{
		Normal         = 0,
		PendingDisable = 1,
		Disabled       = 2,
		MAX            = 3
	};

	/**
	 * Enum IntoTheRadius.ECharCommand
	 */
	enum class ECharCommand : uint8_t
	{
		Idle   = 0,
		Walk   = 1,
		Attack = 2,
		MAX    = 3
	};

	/**
	 * Enum IntoTheRadius.EInventoryMode
	 */
	enum class EInventoryMode : uint8_t
	{
		None     = 0,
		Normal   = 1,
		Dressing = 2,
		MAX      = 3
	};

	/**
	 * Enum IntoTheRadius.EPlayerTeleportAdjustType
	 */
	enum class EPlayerTeleportAdjustType : uint8_t
	{
		None                = 0,
		Location            = 1,
		LocationAndRotation = 2,
		MAX                 = 3
	};

	/**
	 * Enum IntoTheRadius.EDamageCategory
	 */
	enum class EDamageCategory : uint8_t
	{
		None          = 0,
		Physical      = 1,
		Anomaly       = 2,
		Environmental = 3,
		Technical     = 4,
		Gas           = 5,
		MAX           = 6
	};

	/**
	 * Enum IntoTheRadius.EWeaponInfoParameter
	 */
	enum class EWeaponInfoParameter : uint8_t
	{
		Damage      = 0,
		Recoil      = 1,
		Accuracy    = 2,
		FireRate    = 3,
		Reliability = 4,
		MAX         = 5
	};

	/**
	 * Enum IntoTheRadius.EWeaponFireMode
	 */
	enum class EWeaponFireMode : uint8_t
	{
		Safety   = 0,
		Single   = 1,
		FullAuto = 2,
		Burst3   = 3,
		MAX      = 4
	};

	/**
	 * Enum IntoTheRadius.EItemSlot
	 */
	enum class EItemSlot : uint8_t
	{
		None     = 0,
		Magazine = 1,
		Barrel   = 2,
		Stock    = 3,
		Rail_01  = 4,
		Rail_02  = 5,
		Rail_03  = 6,
		Rail_04  = 7,
		Slot_01  = 8,
		Slot_02  = 9,
		Slot_03  = 10,
		Slot_04  = 11,
		MAX      = 12
	};

	/**
	 * Enum IntoTheRadius.EPRSubtitleType
	 */
	enum class EPRSubtitleType : uint8_t
	{
		Record   = 0,
		Player   = 1,
		Katya    = 2,
		Presence = 3,
		Unknown  = 4,
		MAX      = 5
	};

	/**
	 * Enum IntoTheRadius.EMapMarker
	 */
	enum class EMapMarker : uint8_t
	{
		None             = 0,
		MissionStart     = 1,
		MissionPrimary   = 2,
		MissionSecondary = 3,
		MissionHint      = 4,
		LastDeath        = 5,
		LastCamp         = 6,
		Custom           = 7,
		PlayerPosition   = 8,
		GatePosition     = 9,
		GateShortcut     = 10,
		GateHub          = 11,
		MAX              = 12
	};

	/**
	 * Enum IntoTheRadius.EPlayerControlAction
	 */
	enum class EPlayerControlAction : uint8_t
	{
		InteractLeft      = 0,
		InteractRight     = 1,
		GrabLeft          = 2,
		GrabRight         = 3,
		Move              = 4,
		Turn              = 5,
		Sprint            = 6,
		Menu              = 7,
		FireSelectorLeft  = 8,
		FireSelectorRight = 9,
		EjectMagLeft      = 10,
		EjectMagRight     = 11,
		MAX               = 12
	};

	/**
	 * Enum IntoTheRadius.EStartupType
	 */
	enum class EStartupType : uint8_t
	{
		BuildShipping = 0,
		BuildDebug    = 1,
		EditorNormal  = 2,
		EditorCustom  = 3,
		MAX           = 4
	};

	/**
	 * Enum IntoTheRadius.EHandPose
	 */
	enum class EHandPose : uint8_t
	{
		Default                 = 0,
		Open                    = 1,
		CanGrab                 = 2,
		GrabFull                = 3,
		SolveFingers            = 4,
		ConfiguredPose          = 5,
		FingerPoint             = 6,
		FingerPressed           = 7,
		ConfiguredPoseSecondary = 8,
		ConfiguredTriggerPose   = 9,
		MAX                     = 10
	};

	/**
	 * Enum IntoTheRadius.EPRHand
	 */
	enum class EPRHand : uint8_t
	{
		Left  = 0,
		Right = 1,
		MAX   = 2
	};

	/**
	 * Enum IntoTheRadius.EPRPlatformType
	 */
	enum class EPRPlatformType : uint8_t
	{
		Unknown = 0,
		Oculus  = 1,
		Steam   = 2,
		Quest   = 3,
		MAX     = 4
	};

	/**
	 * Enum IntoTheRadius.EPRHmdDeviceType
	 */
	enum class EPRHmdDeviceType : uint8_t
	{
		Unknown     = 0,
		PIE         = 1,
		ValveIndex  = 2,
		Vive        = 3,
		ViveCosmos  = 4,
		Oculus      = 5,
		OculusRiftS = 6,
		WindowsMR   = 7,
		MAX         = 8
	};

	/**
	 * Enum IntoTheRadius.EPRControllerType
	 */
	enum class EPRControllerType : uint8_t
	{
		Unknown     = 0,
		Index       = 1,
		Vive        = 2,
		ViveCosmos  = 3,
		Rift        = 4,
		RiftS       = 5,
		NativeRift  = 6,
		NativeRiftS = 7,
		WMR         = 8,
		MAX         = 9
	};

	/**
	 * Enum IntoTheRadius.EPRGameModeState
	 */
	enum class EPRGameModeState : uint8_t
	{
		Init                    = 0,
		Ready                   = 1,
		TransitionUnloading     = 2,
		TransitionLoading       = 3,
		TransitionWaitingForPSO = 4,
		TransitionPreparing     = 5,
		TransitionStarting      = 6,
		MAX                     = 7
	};

	/**
	 * Enum IntoTheRadius.ERadiusCommonStatisticsType
	 */
	enum class ERadiusCommonStatisticsType : uint8_t
	{
		TimePlayed               = 0,
		FinishedMissions         = 1,
		CollectedArtifacts       = 2,
		CollectedCassettes       = 3,
		CollectedWeaponPrimary   = 4,
		CollectedWeaponSecondary = 5,
		MAX                      = 6
	};

	/**
	 * Enum IntoTheRadius.ESettingsValue
	 */
	enum class ESettingsValue : uint8_t
	{
		Low    = 0,
		Medium = 1,
		High   = 2,
		MAX    = 3
	};

	/**
	 * Enum IntoTheRadius.EGraphicsSettingsType
	 */
	enum class EGraphicsSettingsType : uint8_t
	{
		ViewDistance   = 0,
		ShadowQuality  = 1,
		FoliageDensity = 2,
		Effects        = 3,
		Textures       = 4,
		Geometry       = 5,
		MAX            = 6
	};

	/**
	 * Enum IntoTheRadius.EStorageDoorState
	 */
	enum class EStorageDoorState : uint8_t
	{
		Closed   = 0,
		Opened   = 1,
		Gripping = 2,
		Lerping  = 3,
		MAX      = 4
	};

	/**
	 * Enum IntoTheRadius.EJournalGroup
	 */
	enum class EJournalGroup : uint8_t
	{
		Letters   = 0,
		Pechorsk  = 1,
		Tapes     = 2,
		Tips      = 3,
		Radius    = 4,
		Enemies   = 5,
		Anomalies = 6,
		MAX       = 7
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct IntoTheRadius.RelevanceDescription
	 * Size -> 0x0018
	 */
	struct FRelevanceDescription
	{
	public:
		class URelevanceCriteriaDescription*                       Criteria;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class URelevanceActionDescription*>                 Actions;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.NpcInfo
	 * Size -> 0x0028
	 */
	struct FNpcInfo
	{
	public:
		class ACharacter*                                          CharacterRef;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BSM4[0x20];                                  // 0x0008(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.DistanceGripCandidate
	 * Size -> 0x0040
	 */
	struct FDistanceGripCandidate
	{
	public:
		unsigned char                                              UnknownData_QFXW[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGrippableStaticMeshActor*                           Actor;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPrimitiveComponent*                                 Component;                                               // 0x0010(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_47CJ[0x28];                                  // 0x0018(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.PRTriggerConfig
	 * Size -> 0x0018
	 */
	struct FPRTriggerConfig
	{
	public:
		struct FGameplayTag                                        Trigger;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPRCondition*>                                Conditions;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.TideTriggerConfig
	 * Size -> 0x0030
	 */
	struct FTideTriggerConfig
	{
	public:
		TArray<class UPRCondition*>                                Conditions;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                TriggersToSet;                                           // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                TriggersToUnset;                                         // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.ConditionsList
	 * Size -> 0x0010
	 */
	struct FConditionsList
	{
	public:
		TArray<class UPRCondition*>                                Conditions;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.TutorialConfig
	 * Size -> 0x0018
	 */
	struct FTutorialConfig
	{
	public:
		int32_t                                                    PlayerLevel;                                             // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Reward;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TriggerTag;                                              // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        LevelTag;                                                // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.StartupConfig
	 * Size -> 0x0038
	 */
	struct FStartupConfig
	{
	public:
		int32_t                                                    Money;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YUUX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPRItemConfig*>                               Items;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                Triggers;                                                // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                OpenedLevels;                                            // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.NPCAwarenessValues
	 * Size -> 0x0010
	 */
	struct FNPCAwarenessValues
	{
	public:
		float                                                      NoiseFootsteps;                                          // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NoiseWeaponSounds;                                       // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NoiseWeaponShot;                                         // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageMultiplier;                                        // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.CloseCombatManagerEnemyGroup
	 * Size -> 0x0028
	 */
	struct FCloseCombatManagerEnemyGroup
	{
	public:
		int32_t                                                    MinEnemyAllowed;                                         // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WX5R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               EnemyGroup;                                              // 0x0008(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.CloseCombatManagerConfig
	 * Size -> 0x0028
	 */
	struct FCloseCombatManagerConfig
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OZ5V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CloseRangeRadius;                                        // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CircleOfInterestRadius;                                  // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistanceFromPlayerToReappear;                         // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TeleportSearchRadius;                                    // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Budget;                                                  // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCloseCombatManagerEnemyGroup>               EnemyGroups;                                             // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.PRLootTableConfig
	 * Size -> 0x0028
	 */
	struct FPRLootTableConfig
	{
	public:
		TArray<class UPRCondition*>                                Conditions;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		int32_t                                                    LootPoints;                                              // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X7PJ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          LootTable;                                               // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ExcludeGeneration;                                       // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IIR9[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.ShopShowcaseSideConfig
	 * Size -> 0x0020
	 */
	struct FShopShowcaseSideConfig
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                Items;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.MinMaxFloat
	 * Size -> 0x0008
	 */
	struct FMinMaxFloat
	{
	public:
		float                                                      Min;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.RadiusGameDifficulty
	 * Size -> 0x0010
	 */
	struct FRadiusGameDifficulty
	{
	public:
		bool                                                       SleepRestoreHealth;                                      // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LocationOnMap;                                           // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowTips;                                                // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDifficultyType                                            Hunger;                                                  // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDifficultyType                                            EnemySense;                                              // 0x0004(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDifficultyType                                            EnemyHealth;                                             // 0x0005(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDifficultyType                                            EnemyDamage;                                             // 0x0006(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDifficultyType                                            EnemyCount;                                              // 0x0007(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemsDropType                                             ItemsDropType;                                           // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDifficultyType                                            ItemSellPrice;                                           // 0x0009(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDifficultyType                                            WeaponShotDamage;                                        // 0x000A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDifficultyType                                            AnomalyDamage;                                           // 0x000B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDifficultyType                                            AnomalyAmount;                                           // 0x000C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETracersShowType                                           ShowTracers;                                             // 0x000D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDifficultyType                                            MissionMoneyReward;                                      // 0x000E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDifficultyType                                            TideTime;                                                // 0x000F(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.EnemySenseMultiplier
	 * Size -> 0x0010
	 */
	struct FEnemySenseMultiplier
	{
	public:
		float                                                      HearingRadiusRange;                                      // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SightDistanceRange;                                      // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SightAnglesHorizontal;                                   // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SightAnglesVertical;                                     // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.StringToTagsList
	 * Size -> 0x0020
	 */
	struct FStringToTagsList
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                List;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.AmmoContainerData
	 * Size -> 0x0018
	 */
	struct FAmmoContainerData
	{
	public:
		TArray<struct FGameplayTag>                                Ammo;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ChamberAmmo;                                             // 0x0010(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.TagToTransformsList
	 * Size -> 0x0050
	 */
	struct FTagToTransformsList
	{
	public:
		TMap<struct FGameplayTag, struct FTransform>               List;                                                    // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.GateInfo
	 * Size -> 0x0024
	 */
	struct FGateInfo
	{
	public:
		struct FGameplayTag                                        LeadsFrom;                                               // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        LeadsTo;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        UnlockTrigger;                                           // 0x0010(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LocationInLevel;                                         // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.MinimapMeshMappingConfig
	 * Size -> 0x0018
	 */
	struct FMinimapMeshMappingConfig
	{
	public:
		TArray<class UStaticMesh*>                                 appliedTo;                                               // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       rotateToMesh;                                            // 0x0014(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MUO6[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.MinimapFoliageMappingConfig
	 * Size -> 0x0018
	 */
	struct FMinimapFoliageMappingConfig
	{
	public:
		TArray<class UFoliageType*>                                appliedTo;                                               // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       rotateToMesh;                                            // 0x0014(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2NVF[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.MinimapCliffMappingConfig
	 * Size -> 0x0008
	 */
	struct FMinimapCliffMappingConfig
	{
	public:
		float                                                      scaleThreshold;                                          // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      scaleRatio;                                              // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.MissionsCategory
	 * Size -> 0x0030
	 */
	struct FMissionsCategory
	{
	public:
		struct FGameplayTag                                        CategoryID;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxSimultaneously;                                       // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RestrictMaxSuccessfulPerTide;                            // 0x000C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OnceInALife;                                             // 0x000D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_20TX[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPRCondition*>                                Conditions;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UMissionNormalConfig*>                        CategoryMissions;                                        // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.TagToTagsList
	 * Size -> 0x0018
	 */
	struct FTagToTagsList
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                List;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.TagToItemConfigsList
	 * Size -> 0x0028
	 */
	struct FTagToItemConfigsList
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPRItemConfig*>                               Configs;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FString                                              CustomUID;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.MissionTriggersConfig
	 * Size -> 0x0020
	 */
	struct FMissionTriggersConfig
	{
	public:
		TArray<struct FGameplayTag>                                TriggersToSet;                                           // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                TriggersToUnset;                                         // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.MissionRecord
	 * Size -> 0x0020
	 */
	struct FMissionRecord
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        Tag;                                                     // 0x0010(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        Weapon;                                                  // 0x0018(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.SpawnGameData
	 * Size -> 0x0050
	 */
	struct FSpawnGameData
	{
	public:
		class FString                                              InstanceId;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TypeID;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1IAX[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.NPCGameData
	 * Size -> 0x0020 (FullSize[0x0070] - InheritedSize[0x0050])
	 */
	struct FNPCGameData : public FSpawnGameData
	{
	public:
		float                                                      Health;                                                  // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Awareness;                                               // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             POI;                                                     // 0x0058(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Command;                                                 // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3005[0xB];                                   // 0x0065(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.ItemDropInfo
	 * Size -> 0x0050
	 */
	struct FItemDropInfo
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4QGR[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      ItemIdList;                                              // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.ShiftsPair
	 * Size -> 0x0060
	 */
	struct FShiftsPair
	{
	public:
		struct FTransform                                          LeftShift;                                               // 0x0000(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          RightShift;                                              // 0x0030(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.PRCleanTransform
	 * Size -> 0x0018
	 */
	struct FPRCleanTransform
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Rotation;                                                // 0x000C(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.PRSplineData
	 * Size -> 0x0040
	 */
	struct FPRSplineData
	{
	public:
		struct FPRCleanTransform                                   SplineShift;                                             // 0x0000(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPRCleanTransform                                   HandShiftRelatedSpline;                                  // 0x0018(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FSplinePoint>                                Points;                                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.PRHandPoseConditions
	 * Size -> 0x0004
	 */
	struct FPRHandPoseConditions
	{
	public:
		float                                                      MaxDistanceForGrip;                                      // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.PRHandPoseInfo
	 * Size -> 0x0140
	 */
	struct FPRHandPoseInfo
	{
	public:
		TMap<EPRControllerType, struct FPRCleanTransform>          ItemShiftPerController;                                  // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPRCleanTransform                                   HandShift;                                               // 0x0050(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPRCleanTransform                                   PointShift;                                              // 0x0068(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPRSplineData                                       SplineData;                                              // 0x0080(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPRHandPoseConditions                               HandPoseConditions;                                      // 0x00C0(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPRCleanTransform                                   FingerThumbShift;                                        // 0x00C4(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPRCleanTransform                                   FingerIndexShift;                                        // 0x00DC(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPRCleanTransform                                   FingerMiddleShift;                                       // 0x00F4(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPRCleanTransform                                   FingerRingShift;                                         // 0x010C(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPRCleanTransform                                   FingerPinkyShift;                                        // 0x0124(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5P43[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.PRHandPoseInfosPair
	 * Size -> 0x02A8 (FullSize[0x02B0] - InheritedSize[0x0008])
	 */
	struct FPRHandPoseInfosPair : public FTableRowBase
	{
	public:
		EPRHandPoseSaveType                                        SaveType;                                                // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPRHandPoseNumber                                          PoseNumber;                                              // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPRHandPoseGeometryType                                    GeometryType;                                            // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_54DZ[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        PoseTag;                                                 // 0x000C(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JC8K[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StaticMeshComponentPath;                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StaticMeshComponentName;                                 // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPRHandPoseInfo                                     Left;                                                    // 0x0030(0x0140) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPRHandPoseInfo                                     Right;                                                   // 0x0170(0x0140) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.ActorsArray
	 * Size -> 0x0058
	 */
	struct FActorsArray
	{
	public:
		TArray<class AActor*>                                      Actors;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<bool>                                               InUseFlags;                                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UJMW[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             WorldContext;                                            // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WI22[0x28];                                  // 0x0030(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.PoolActorConfig
	 * Size -> 0x0028
	 */
	struct FPoolActorConfig
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EPRPlatformType>                                    PlatformTypes;                                           // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    InitCount;                                               // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCount;                                                // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ReCreateOnDestroy;                                       // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V9Q2[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.NPCAwarenessConfig
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FNPCAwarenessConfig : public FTableRowBase
	{
	public:
		float                                                      AwarenessLowLevel;                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AwarenessHighLevel;                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AwarenessDecrease;                                       // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5X3W[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.NPCIdleConfig
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FNPCIdleConfig : public FTableRowBase
	{
	public:
		struct FMinMaxFloat                                        WalkSpeedRange;                                          // 0x0008(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        IdleTimeRange;                                           // 0x0010(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        RotationSpeedRange;                                      // 0x0018(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       LookAroundAfterWalk;                                     // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E3HT[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNPCAwarenessConfig                                 AwarenessConfig;                                         // 0x0028(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FNPCAwarenessConfig                                 ReducedAwarenessConfig;                                  // 0x0040(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.NPCSightConfig
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FNPCSightConfig : public FTableRowBase
	{
	public:
		struct FMinMaxFloat                                        DistanceRange;                                           // 0x0008(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      AngleLeft;                                               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngleRight;                                              // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngleUp;                                                 // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngleDown;                                               // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.NPCPerceptionConfig
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FNPCPerceptionConfig : public FTableRowBase
	{
	public:
		struct FMinMaxFloat                                        SenseHearingRadiusRange;                                 // 0x0008(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        SenseNearRadiusRange;                                    // 0x0010(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FNPCSightConfig                                     SenseSightConfig;                                        // 0x0018(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        SensesTickTimeRange;                                     // 0x0038(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      SenseSightNightModifier;                                 // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6C6O[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.NPCMeleeConfig
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FNPCMeleeConfig : public FTableRowBase
	{
	public:
		struct FMinMaxFloat                                        DamageRange;                                             // 0x0008(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        DistanceRange;                                           // 0x0010(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.NPCFirearmConfig
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FNPCFirearmConfig : public FTableRowBase
	{
	public:
		struct FMinMaxFloat                                        DelayRange;                                              // 0x0008(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        FireDeviation;                                           // 0x0010(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        ReloadTime;                                              // 0x0018(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       InfiniteAmmo;                                            // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowFriendlyFire;                                       // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0QO7[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMinMaxFloat                                        AttackLostLocationTime;                                  // 0x0024(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BN4V[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.NPCCloseCombatConfig
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FNPCCloseCombatConfig : public FTableRowBase
	{
	public:
		bool                                                       UseCloseCombatManager;                                   // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YMJV[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CloseCombatWeight;                                       // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.PRNPCInfo
	 * Size -> 0x01B0 (FullSize[0x01B8] - InheritedSize[0x0008])
	 */
	struct FPRNPCInfo : public FTableRowBase
	{
	public:
		struct FGameplayTag                                        NPCConfigID;                                             // 0x0008(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ActorClass;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Name;                                                    // 0x0018(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0030(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        MaxHealthRange;                                          // 0x0048(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                CritBoneName;                                            // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNPCIdleConfig                                      IdleConfig;                                              // 0x0058(0x0058) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FNPCPerceptionConfig                                PerceptionConfig;                                        // 0x00B0(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FNPCPerceptionConfig                                ReducedPerceptionConfig;                                 // 0x00F8(0x0048) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FNPCMeleeConfig                                     MeleeConfig;                                             // 0x0140(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FNPCFirearmConfig                                   FirearmConfig;                                           // 0x0158(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        AttackMoveDilationAngle;                                 // 0x0188(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      LootPossibilityPercent;                                  // 0x0190(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        CoreItemTypeID;                                          // 0x0194(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        FootstepNoiseRange;                                      // 0x019C(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       IsArmored;                                               // 0x01A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U1XT[0x3];                                   // 0x01A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNPCCloseCombatConfig                               CloseCombatConfig;                                       // 0x01A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.MovementSettings
	 * Size -> 0x0020
	 */
	struct FIntoTheRadius_FMovementSettings
	{
	public:
		float                                                      WalkSpeed;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RunSpeed;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SprintSpeed;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D6NZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        MovementCurve;                                           // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         RotationRateCurve;                                       // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.MovementSettingsStance
	 * Size -> 0x0040
	 */
	struct FMovementSettingsStance
	{
	public:
		struct FIntoTheRadius_FMovementSettings                    Standing;                                                // 0x0000(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FIntoTheRadius_FMovementSettings                    Crouching;                                               // 0x0020(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.MovementSettingsState
	 * Size -> 0x00C0 (FullSize[0x00C8] - InheritedSize[0x0008])
	 */
	struct FMovementSettingsState : public FTableRowBase
	{
	public:
		struct FMovementSettingsStance                             VelocityDirection;                                       // 0x0008(0x0040) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FMovementSettingsStance                             LookingDirection;                                        // 0x0048(0x0040) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FMovementSettingsStance                             Aiming;                                                  // 0x0088(0x0040) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.FollowPlayerData
	 * Size -> 0x0014
	 */
	struct FFollowPlayerData
	{
	public:
		bool                                                       bFollowPlayer;                                           // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YKVO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayerFollowVelocityModifier;                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PlayerFollowOffset;                                      // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.MinMaxInt
	 * Size -> 0x0008
	 */
	struct FMinMaxInt
	{
	public:
		int32_t                                                    Min;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Max;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.ShootingScores
	 * Size -> 0x0020
	 */
	struct FShootingScores
	{
	public:
		struct FDateTime                                           Date;                                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Score;                                                   // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Hits;                                                    // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Misses;                                                  // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GrenadeKills;                                            // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PCFR[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.GameplayTagsTuple
	 * Size -> 0x0010
	 */
	struct FGameplayTagsTuple
	{
	public:
		struct FGameplayTag                                        First;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        Second;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.PlayerStats
	 * Size -> 0x0040
	 */
	struct FPlayerStats
	{
	public:
		TArray<struct FGameplayTag>                                Deaths;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameplayTagsTuple>                          Kills;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      OfflineAchievements;                                     // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                CollectedItems;                                          // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.GameDifficulty
	 * Size -> 0x0006
	 */
	struct FGameDifficulty
	{
	public:
		bool                                                       SleepRestoreHealth;                                      // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LocationOnMap;                                           // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEnemySenseType                                            EnemySense;                                              // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowTracers;                                             // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowTips;                                                // 0x0004(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemsDropType                                             ItemsDropType;                                           // 0x0005(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.MapData
	 * Size -> 0x0010
	 */
	struct FMapData
	{
	public:
		TArray<unsigned char>                                      Data;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.LevelDecorData
	 * Size -> 0x0060
	 */
	struct FLevelDecorData
	{
	public:
		TMap<class FString, struct FTransform>                     ItemTransforms;                                          // 0x0000(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<class FString>                                      DestroyedItems;                                          // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.StaticMeshDataForInstanced
	 * Size -> 0x0030
	 */
	struct FStaticMeshDataForInstanced
	{
	public:
		struct FVector                                             LocationsAccumulated;                                    // 0x0000(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CountOfStaticMeshInstances;                              // 0x000C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PAQV[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MaterialsUsedByStaticMesh[0x10];                         // 0x0010(0x0010) UNKNOWN PROPERTY: ArrayProperty
		float                                                      MaxCullDistance;                                         // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CollisionProfileName;                                    // 0x0024(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableCollisionOverlapEvents;                            // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EComponentMobility                                         ComponentMobility;                                       // 0x002D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M6RL[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.GripOverlap
	 * Size -> 0x0110
	 */
	struct FGripOverlap
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ImplementsInterface;                                     // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A9GL[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          ObjectTransform;                                         // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       CanBeClimbed;                                            // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_25TI[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 OverlapedPrimitive;                                      // 0x0048(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDistanceGrip;                                          // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FN00[0xF];                                   // 0x0051(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          GripPoint;                                               // 0x0060(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       IsSlotGrip;                                              // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EQ4F[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 TriggerPrimitive;                                        // 0x0098(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          TriggerPoint;                                            // 0x00A0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          HandTransformWhenOverlap;                                // 0x00D0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EPRHandPoseGeometryType                                    GeometryType;                                            // 0x0100(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPRHandPoseNumber                                          PoseNumer;                                               // 0x0101(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7L5I[0xE];                                   // 0x0102(0x000E) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.PRSplashDesc
	 * Size -> 0x0080
	 */
	struct FPRSplashDesc
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           QuadSize;                                                // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBox2D                                              UVRect;                                                  // 0x0038(0x0014) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FHOP[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               DeltaRotation;                                           // 0x0050(0x0010) Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIgnoreAlpha;                                            // 0x0060(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDynamic;                                              // 0x0061(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsExternal;                                             // 0x0062(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLerpToHeadsetLocal;                                     // 0x0063(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LerpToHeadsetLocalSpeed;                                 // 0x0064(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            Texture;                                                 // 0x0068(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            LeftTexture;                                             // 0x0070(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DU29[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.AmmoInfo
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FAmmoInfo : public FTableRowBase
	{
	public:
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0008(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        AmmoCaliberID;                                           // 0x0010(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        AmmoTypeID;                                              // 0x0018(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         ShellMesh;                                               // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         WholeMesh;                                               // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShortInfo;                                               // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_00FQ[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VelocityMultiplier;                                      // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageType;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Penetration;                                             // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BounceMax;                                               // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArmorPiercing;                                           // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageModifier;                                          // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         SpeedDropCurve;                                          // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.NPCDataMap
	 * Size -> 0x0050
	 */
	struct FNPCDataMap
	{
	public:
		TMap<class FString, struct FNPCGameData>                   DataMap;                                                 // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.AnomalyData
	 * Size -> 0x0020 (FullSize[0x0070] - InheritedSize[0x0050])
	 */
	struct FAnomalyData : public FSpawnGameData
	{
	public:
		class FName                                                Name;                                                    // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_027P[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  Points;                                                  // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.ItemGameData
	 * Size -> 0x0040
	 */
	struct FItemGameData
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X3DI[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.AnomalyFieldData
	 * Size -> 0x0030
	 */
	struct FAnomalyFieldData
	{
	public:
		TArray<struct FAnomalyData>                                AnomalyData;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSpawnGameData>                              ArtifactData;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FItemGameData>                               ItemData;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.FurnitureData
	 * Size -> 0x0050
	 */
	struct FFurnitureData
	{
	public:
		TMap<class FName, struct FTransform>                       SocketTransform;                                         // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.NameArray
	 * Size -> 0x0010
	 */
	struct FNameArray
	{
	public:
		TArray<class FName>                                        Names;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.SpawnSlotData
	 * Size -> 0x0018
	 */
	struct FSpawnSlotData
	{
	public:
		bool                                                       IsEmpty;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsSpawned;                                               // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3YCF[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FItemGameData>                               ItemsData;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.DialogueLine
	 * Size -> 0x0020
	 */
	struct FDialogueLine
	{
	public:
		EPRSubtitleType                                            Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_383C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Text;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeNoAudio;                                             // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4CBU[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.Dialogue
	 * Size -> 0x0060
	 */
	struct FDialogue
	{
	public:
		EJournalGroup                                              Group;                                                   // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RR9J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<class UPRCondition*>                                Conditions;                                              // 0x0020(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FText                                                JournalText;                                             // 0x0030(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class USoundBase*                                          Sound;                                                   // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDialogueLine>                               Lines;                                                   // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.DialoguesGroup
	 * Size -> 0x0068
	 */
	struct FDialoguesGroup
	{
	public:
		struct FGameplayTag                                        GroupID;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPRCondition*>                                Conditions;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, struct FDialogue>                Cassettes;                                               // 0x0018(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.PaperNote
	 * Size -> 0x0058
	 */
	struct FPaperNote
	{
	public:
		struct FGameplayTag                                        NoteID;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EJournalGroup                                              Group;                                                   // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NSCR[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                PaperText;                                               // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                JournalText;                                             // 0x0040(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.ConditionalPaperNote
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	struct FConditionalPaperNote : public FPaperNote
	{
	public:
		TArray<class UPRCondition*>                                Conditions;                                              // 0x0058(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.HostileDescription
	 * Size -> 0x0040
	 */
	struct FHostileDescription
	{
	public:
		EJournalGroup                                              Group;                                                   // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMVZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UTexture2D*                                          Image;                                                   // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                JournalText;                                             // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.RecordSubtitle
	 * Size -> 0x0028
	 */
	struct FRecordSubtitle
	{
	public:
		EPRSubtitleType                                            Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BV6O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Text;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        TimeFromTo;                                              // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.Record
	 * Size -> 0x0050
	 */
	struct FRecord
	{
	public:
		EJournalGroup                                              Group;                                                   // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B6FJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                JournalText;                                             // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class USoundBase*                                          Sound;                                                   // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRecordSubtitle>                             Subtitles;                                               // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.LevelConfig
	 * Size -> 0x0060
	 */
	struct FLevelConfig
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LevelName;                                               // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MainSublevel;                                            // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        StaticSublevels;                                         // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bTutorialLevel;                                          // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StopGameTimeTick;                                        // 0x0029(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ReloadOnTideHappening;                                   // 0x002A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InventoryAllowed;                                        // 0x002B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SleepAllowed;                                            // 0x002C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2W30[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMinMaxInt                                          AllowedGenerators;                                       // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       SaveOnExit;                                              // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Autosave;                                                // 0x0039(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SaveOnLoad;                                              // 0x003A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JQGN[0x5];                                   // 0x003B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  MapMaterial;                                             // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  MapLegendMaterial;                                       // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MapScale;                                                // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MapRotation;                                             // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLevelRadius;                                          // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FullPlayerStats;                                         // 0x005C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W091[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.PRClusterAnomalyConfig
	 * Size -> 0x0020
	 */
	struct FPRClusterAnomalyConfig
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IOMM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Class;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0D4P[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.PRClusterPatternConfig
	 * Size -> 0x0030
	 */
	struct FPRClusterPatternConfig
	{
	public:
		TArray<struct FPRClusterAnomalyConfig>                     AnomalyPoints;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     ArtifactPoints;                                          // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FVector                                             BlockExtent;                                             // 0x0020(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X737[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.AchievementsConfig
	 * Size -> 0x0058
	 */
	struct FAchievementsConfig
	{
	public:
		TArray<class UClass*>                                      BarrelClasses;                                           // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		float                                                      KillDistance;                                            // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DIV5[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               LoreCassetteTags;                                        // 0x0018(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               ArtifactTags;                                            // 0x0038(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.NpcPointQueryResult
	 * Size -> 0x0020
	 */
	struct FNpcPointQueryResult
	{
	public:
		bool                                                       bPointFound;                                             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4NJS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Point;                                                   // 0x0004(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_US7S[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.Mantle_Trace_Settings
	 * Size -> 0x0014
	 */
	struct FMantle_Trace_Settings
	{
	public:
		float                                                      MaxLedgeHeight;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinLedgeHeight;                                          // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReachDistance;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForwardTraceRadius;                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DownwardTraceRadius;                                     // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.Mantle_Params
	 * Size -> 0x0028
	 */
	struct FIntoTheRadius_FMantle_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveVector*                                        PositionOrCorrectionCurve;                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartingPosition;                                        // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             StartingOffset;                                          // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H66L[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.Mantle_Asset
	 * Size -> 0x0038
	 */
	struct FIntoTheRadius_FMantle_Asset
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveVector*                                        PositionOrCorrectionCurve;                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             StartingOffset;                                          // 0x0010(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LowHeight;                                               // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LowPlayRate;                                             // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LowStartPosition;                                        // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HighHeight;                                              // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HighPlayRate;                                            // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HighStartPosition;                                       // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D86V[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.Component_And_Transform
	 * Size -> 0x0040
	 */
	struct FComponent_And_Transform
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 PrimitiveComponent;                                      // 0x0030(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8PH1[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.AmmoCommonInfo
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FAmmoCommonInfo : public FTableRowBase
	{
	public:
		struct FGameplayTag                                        AmmoType;                                                // 0x0008(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Name;                                                    // 0x0010(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.PRAnomalyInfo
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FPRAnomalyInfo : public FTableRowBase
	{
	public:
		struct FGameplayTag                                        TypeID;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ActorClass;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Name;                                                    // 0x0018(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0030(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        RadiusRange;                                             // 0x0048(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        DamageRange;                                             // 0x0050(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.CloseCombatManagerTickFunction
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FCloseCombatManagerTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_9ZPZ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.PriorityGroupQuota
	 * Size -> 0x0028
	 */
	struct FPriorityGroupQuota
	{
	public:
		unsigned char                                              UnknownData_QA0U[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.SaveMaps
	 * Size -> 0x0058
	 */
	struct FSaveMaps
	{
	public:
		int32_t                                                    SlotNr;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SaveNr;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<struct FGameplayTag, class UTextureRenderTarget2D*>   RenderTargets;                                           // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.SaveInfo
	 * Size -> 0x0028
	 */
	struct FSaveInfo
	{
	public:
		int32_t                                                    SaveNr;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Autosave;                                                // 0x0004(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Ironman;                                                 // 0x0005(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T8KE[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           DateTime;                                                // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TimeSpentMinutes;                                        // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Money;                                                   // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SaveMessage;                                             // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.SaveSlotInfo
	 * Size -> 0x0058
	 */
	struct FSaveSlotInfo
	{
	public:
		int32_t                                                    SlotNr;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_69B7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, struct FSaveInfo>                            Saves;                                                   // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.ExplosionParticalInfo
	 * Size -> 0x001C
	 */
	struct FExplosionParticalInfo
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Velocity;                                                // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseDamage;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistance;                                             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInAir;                                                 // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F4WP[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.ExplosionInfo
	 * Size -> 0x0040
	 */
	struct FExplosionInfo
	{
	public:
		float                                                      MaxDamage;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRange;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasImpulse;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9UOZ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NoiseDistance;                                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FExplosionParticalInfo                              ParticalInfo;                                            // 0x0010(0x001C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J2C8[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          ExplosionSound;                                          // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsForceTrace;                                            // 0x0038(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1SMJ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.ItemConfigsList
	 * Size -> 0x0020
	 */
	struct FItemConfigsList
	{
	public:
		TArray<class UPRItemConfig*>                               Configs;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FString                                              CustomUID;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.TagToItemConfig
	 * Size -> 0x0010
	 */
	struct FTagToItemConfig
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPRItemConfig*                                       Config;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.AttachmentSlotInfo
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FAttachmentSlotInfo : public FTableRowBase
	{
	public:
		struct FGameplayTag                                        TypeID;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0018(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.AccuracyParameters
	 * Size -> 0x0018
	 */
	struct FAccuracyParameters
	{
	public:
		float                                                      AccuracyMax;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccuracyMultiplier;                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccuracyRunCoefficient;                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccuracyOneHandCoefficient;                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccuracyDurabilityCoefficient;                           // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccuracyAutoFireCoefficient;                             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.RecoilParameters
	 * Size -> 0x0044
	 */
	struct FRecoilParameters
	{
	public:
		int32_t                                                    OverallRecoilInfoPercent;                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        VerticalRecoil;                                          // 0x0004(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        HorizontalRecoil;                                        // 0x000C(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             RecoilLocationOffset;                                    // 0x0014(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        StabilizedVerticalRecoil;                                // 0x0020(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        StabilizedHorizontalRecoil;                              // 0x0028(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             StabilizedRecoilLocationOffset;                          // 0x0030(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilAutoFireCoefficient;                               // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecoilLocationAutoFireCoefficient;                       // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.WeaponParameters
	 * Size -> 0x0038
	 */
	struct FWeaponParameters
	{
	public:
		float                                                      FireRate;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShotLoudness;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MuzzleVelocity;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmmoDamage;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurabilityDamagePerShot;                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurabilityDamageAutoFireCoefficient;                     // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Reliability;                                             // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6T09[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EWeaponFireMode>                                    FireModes;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    BurstModeCount;                                          // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NNL1[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.WeaponInfo
	 * Size -> 0x0100 (FullSize[0x0108] - InheritedSize[0x0008])
	 */
	struct FWeaponInfo : public FTableRowBase
	{
	public:
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0008(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseVirtualStock;                                         // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AAO9[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAccuracyParameters                                 AccuracyParameters;                                      // 0x0014(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FRecoilParameters                                   RecoilParameters;                                        // 0x002C(0x0044) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FWeaponParameters                                   WeaponParameters;                                        // 0x0070(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                PossibleUpgrades;                                        // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<EItemSlot, struct FGameplayTag>                       AttachmentSlots;                                         // 0x00B8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.AmmoContainerParameters
	 * Size -> 0x0028
	 */
	struct FAmmoContainerParameters
	{
	public:
		TArray<struct FGameplayTag>                                AcceptedAmmoTypes;                                       // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    ChamberCapacity;                                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HolderCapacity;                                          // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurabilityDamagePerAmmo;                                 // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CapacityDurabilityCoefficient;                           // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageToReliabilityDebonus;                              // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z6IO[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.PRAmmoContainerInfo
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FPRAmmoContainerInfo : public FTableRowBase
	{
	public:
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0008(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreChamberCountInInspect;                             // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V8MF[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAmmoContainerParameters                            Parameters;                                              // 0x0018(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                PossibleUpgrades;                                        // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.ItemShopInfo
	 * Size -> 0x0050
	 */
	struct FItemShopInfo
	{
	public:
		int32_t                                                    SellPriceOverride;                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BuyPrice;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_18JY[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          ItemTransformInSlot;                                     // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      RepairPricePerPercent;                                   // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RepairSecondsPerPercent;                                 // 0x0044(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequiredPlayerLevel;                                     // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CK8U[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.ItemParameters
	 * Size -> 0x0018
	 */
	struct FItemParameters
	{
	public:
		class UStaticMesh*                                         MeshOverride;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Durability;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurabilityDamageCoefficient;                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DurabilityDamagePerHour;                                 // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.ArmorParameters
	 * Size -> 0x0058
	 */
	struct FArmorParameters
	{
	public:
		TMap<EDamageCategory, float>                               ArmorCoefficients;                                       // 0x0000(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      AdditionalNoiseCoefficient;                              // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H5PI[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.PRItemInfo
	 * Size -> 0x0198 (FullSize[0x01A0] - InheritedSize[0x0008])
	 */
	struct FPRItemInfo : public FTableRowBase
	{
	public:
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0008(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        AttachmentTypeID;                                        // 0x0010(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ActorClass;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ProxyClass;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ItemName;                                                // 0x0028(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                ItemDescription;                                         // 0x0040(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FText                                                ItemHelp;                                                // 0x0058(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       DestroyedAtZeroDurability;                               // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ChangeWeightFromDurability;                              // 0x0071(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8S17[0xE];                                   // 0x0072(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemShopInfo                                       Prices;                                                  // 0x0080(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FItemParameters                                     ItemParameters;                                          // 0x00D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FArmorParameters                                    ArmorParameters;                                         // 0x00E8(0x0058) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                PossibleUpgrades;                                        // 0x0140(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<EItemSlot, struct FGameplayTag>                       AttachmentSlots;                                         // 0x0150(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.UpgradeInfo
	 * Size -> 0x0228 (FullSize[0x0230] - InheritedSize[0x0008])
	 */
	struct FUpgradeInfo : public FTableRowBase
	{
	public:
		struct FGameplayTag                                        UpgradeID;                                               // 0x0008(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                ConflictUpgradeIDs;                                      // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                RequiredUpgradeIDs;                                      // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0038(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    InstallPrice;                                            // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowInInfo;                                              // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4MDH[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EWeaponInfoParameter, int32_t>                        InfoParametersChange;                                    // 0x0058(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZM64[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemShopInfo                                       ItemPricesChange;                                        // 0x00B0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FItemParameters                                     ItemParametersChange;                                    // 0x0100(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAccuracyParameters                                 AccuracyParametersChange;                                // 0x0118(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FRecoilParameters                                   RecoilParametersChange;                                  // 0x0130(0x0044) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VTCC[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FWeaponParameters                                   WeaponParametersChange;                                  // 0x0178(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FAmmoContainerParameters                            AmmoContainerParametersChange;                           // 0x01B0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<EItemSlot, struct FGameplayTag>                       AttachmentSlotsChange;                                   // 0x01D8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MCS1[0x8];                                   // 0x0228(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.PRLootTablesByTier
	 * Size -> 0x0058
	 */
	struct FPRLootTablesByTier
	{
	public:
		bool                                                       RandomizePassedTier;                                     // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7FD5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, struct FPRLootTableConfig>                   Tiers;                                                   // 0x0008(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.PRLootEntryConfig
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FPRLootEntryConfig : public FTableRowBase
	{
	public:
		struct FGameplayTag                                        ItemTag;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LootPoints;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RandomizeDurability;                                     // 0x0014(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7P2W[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMinMaxFloat                                        RandomDurability;                                        // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       ChangeLootPointsFromDurability;                          // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RandomizeAmmo;                                           // 0x0021(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9BL3[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMinMaxInt                                          RandomAmmo;                                              // 0x0024(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FGameplayTag                                        AmmoType;                                                // 0x002C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ChangeLootPointsFromAmmo;                                // 0x0034(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UIOX[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                ConfigTags;                                              // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.NpcPointQueryManagerTickFunction
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FNpcPointQueryManagerTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_MCBW[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.NpcPointQueryHandle
	 * Size -> 0x0010
	 */
	struct FNpcPointQueryHandle
	{
	public:
		unsigned char                                              UnknownData_T4A8[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.NpcPointQueryParam
	 * Size -> 0x0040
	 */
	struct FNpcPointQueryParam
	{
	public:
		class ACharacter*                                          NpcCharacterRef;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SearchCenter;                                            // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SearchRadius;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DesiredLocation;                                         // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDistanceToCenter;                                     // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoPathLengthCheck;                                      // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LV1M[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxPathLength;                                           // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoSquadDistanceCheck;                                   // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JGWK[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxSquadDistance;                                        // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxSearchIteration;                                      // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S2Y3[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.TagToTransform
	 * Size -> 0x0040
	 */
	struct FTagToTransform
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5LDK[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.VectorToClass
	 * Size -> 0x0018
	 */
	struct FVectorToClass
	{
	public:
		struct FVector                                             Vector;                                                  // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QUTC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Class;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.TagToTagTuplesList
	 * Size -> 0x0018
	 */
	struct FTagToTagTuplesList
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTagsTuple>                          List;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.TransformsTuple
	 * Size -> 0x0060
	 */
	struct FTransformsTuple
	{
	public:
		struct FTransform                                          First;                                                   // 0x0000(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Second;                                                  // 0x0030(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.NoteData
	 * Size -> 0x0048
	 */
	struct FNoteData
	{
	public:
		struct FGameplayTag                                        ID;                                                      // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EJournalGroup                                              Group;                                                   // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DWA8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Title;                                                   // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Text;                                                    // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UTexture2D*                                          Image;                                                   // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.StaticMeshDataForInstancedCollection
	 * Size -> 0x0010
	 */
	struct FStaticMeshDataForInstancedCollection
	{
	public:
		TArray<struct FStaticMeshDataForInstanced>                 StaticMeshDataForInstanced;                              // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.ReflectorAnomlyNonplayerTarget
	 * Size -> 0x0030
	 */
	struct FReflectorAnomlyNonplayerTarget
	{
	public:
		class AActor*                                              ActorRef;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ActorLocation;                                           // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ShootLocation;                                           // 0x0014(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ActorVelocity;                                           // 0x0020(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpinTime;                                                // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.FalseTrueFloat
	 * Size -> 0x0008
	 */
	struct FFalseTrueFloat
	{
	public:
		float                                                      FalseValue;                                              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TrueValue;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.FingerCurls
	 * Size -> 0x0014
	 */
	struct FFingerCurls
	{
	public:
		float                                                      Thumb;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Index;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Middle;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ring;                                                    // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Pinky;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.Parallelepiped
	 * Size -> 0x0040
	 */
	struct FParallelepiped
	{
	public:
		struct FTransform                                          Center;                                                  // 0x0000(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Extent;                                                  // 0x0030(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NI2K[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.RadiusEmitterVectorParameter
	 * Size -> 0x0014
	 */
	struct FRadiusEmitterVectorParameter
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Value;                                                   // 0x0008(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.RadiusEmitterIntParameter
	 * Size -> 0x000C
	 */
	struct FRadiusEmitterIntParameter
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.RadiusEmitterParams
	 * Size -> 0x0030
	 */
	struct FRadiusEmitterParams
	{
	public:
		TArray<struct FRadiusEmitterVectorParameter>               VectorParameters;                                        // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRadiusEmitterIntParameter>                  FloatParameters;                                         // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRadiusEmitterIntParameter>                  IntParameters;                                           // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.RadiusEmitterInfo
	 * Size -> 0x0048
	 */
	struct FRadiusEmitterInfo
	{
	public:
		class UParticleSystem*                                     Template;                                                // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ReflectionVector;                                        // 0x0008(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q7RH[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRadiusEmitterParams                                Parameters;                                              // 0x0018(0x0030) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.RadiusEmitterFloatParameter
	 * Size -> 0x000C
	 */
	struct FRadiusEmitterFloatParameter
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.RadiusFirearmShellInfo
	 * Size -> 0x0024
	 */
	struct FRadiusFirearmShellInfo
	{
	public:
		struct FGameplayTag                                        AmmoTag;                                                 // 0x0000(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFired;                                                 // 0x0008(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsMetal;                                                 // 0x0009(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BUUL[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LinearImpulse;                                           // 0x000C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularImpulse;                                          // 0x0018(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.RadiusImpactAssetRow
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRadiusImpactAssetRow : public FTableRowBase
	{
	public:
		EPhysicalSurface                                           Surface;                                                 // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_022Z[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     Particle;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ParticleScale;                                           // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PJGA[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstance*                                   DEcal;                                                   // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecalScale;                                              // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9KI6[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          Sound;                                                   // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SoundDelay;                                              // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolumnMulti;                                             // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.RadiusImpactInfo
	 * Size -> 0x0050
	 */
	struct FRadiusImpactInfo
	{
	public:
		class UParticleSystem*                                     Template;                                                // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ReflectionVector;                                        // 0x0008(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EXPF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          SoundCue;                                                // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SoundDistance;                                           // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SoundVolumnMultiplier;                                   // 0x0024(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SoundDelay;                                              // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W6MQ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstance*                                   DecalMaterial;                                           // 0x0030(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DecalScale;                                              // 0x0038(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_130C[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 AttachToComponent;                                       // 0x0048(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.RadiusNiagaraEmitterInfo
	 * Size -> 0x0038
	 */
	struct FRadiusNiagaraEmitterInfo
	{
	public:
		class UNiagaraSystem*                                      Template;                                                // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRadiusEmitterParams                                Parameters;                                              // 0x0008(0x0030) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.TeleportPointInfo
	 * Size -> 0x0094
	 */
	struct FTeleportPointInfo
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHitResult                                          HitResult;                                               // 0x000C(0x0088) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.StashData
	 * Size -> 0x0030 (FullSize[0x0080] - InheritedSize[0x0050])
	 */
	struct FStashData : public FSpawnGameData
	{
	public:
		struct FItemConfigsList                                    ItemConfigs;                                             // 0x0050(0x0020) Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       UseCustomConfigs;                                        // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NXTT[0xF];                                   // 0x0071(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.ActorSpawnInfo
	 * Size -> 0x0048
	 */
	struct FActorSpawnInfo
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              ActorClass;                                              // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseRelevanceManager;                                     // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FC6C[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Owner;                                                   // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.StashSpawnInfo
	 * Size -> 0x0038 (FullSize[0x0080] - InheritedSize[0x0048])
	 */
	struct FStashSpawnInfo : public FActorSpawnInfo
	{
	public:
		float                                                      SpawnChange;                                             // 0x0048(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CNRP[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              InstanceId;                                              // 0x0050(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LoopPoints;                                              // 0x0060(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        LootTable;                                               // 0x0064(0x0008) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5VYZ[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPRItemConfig*>                               LootConfigs;                                             // 0x0070(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct IntoTheRadius.BaseItemSpawnInfo
	 * Size -> 0x0038 (FullSize[0x0080] - InheritedSize[0x0048])
	 */
	struct FBaseItemSpawnInfo : public FActorSpawnInfo
	{
	public:
		bool                                                       Preconfigured;                                           // 0x0048(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5NYX[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomUID;                                               // 0x0050(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NotUnique;                                               // 0x0060(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I7S5[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                CustomAdditionalTags;                                    // 0x0068(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      CustomDurabilityRatio;                                   // 0x0078(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QFOO[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.ItemSpawnInfo
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	struct FItemSpawnInfo : public FActorSpawnInfo
	{
	public:
		class FString                                              SpawnerId;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LootPossibilityOverride;                                 // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ProjectOnGround;                                         // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VPA0[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.NpcSpawnInfo
	 * Size -> 0x0028 (FullSize[0x0070] - InheritedSize[0x0048])
	 */
	struct FNpcSpawnInfo : public FActorSpawnInfo
	{
	public:
		class FString                                              CustomID;                                                // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SpawnerId;                                               // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LootPossibilityOverride;                                 // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3MNK[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct IntoTheRadius.AnomalySpawnInfo
	 * Size -> 0x0028 (FullSize[0x0070] - InheritedSize[0x0048])
	 */
	struct FAnomalySpawnInfo : public FActorSpawnInfo
	{
	public:
		class FString                                              CustomID;                                                // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ProjectOnGround;                                         // 0x006C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X5J3[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
