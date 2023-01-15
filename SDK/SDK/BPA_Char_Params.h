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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPA_Char.BPA_Char_C.GetAliveStats
	 */
	struct ABPA_Char_C_GetAliveStats_Params
	{
	public:
		class UActorComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.GetBoneTransform
	 */
	struct ABPA_Char_C_GetBoneTransform_Params
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RET5[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.GetBotMovementMode
	 */
	struct ABPA_Char_C_GetBotMovementMode_Params
	{
	public:
		EBotMovementMode                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.GetBotShootingComponent
	 */
	struct ABPA_Char_C_GetBotShootingComponent_Params
	{
	public:
		class UActorComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.GetIdleWalkDistance
	 */
	struct ABPA_Char_C_GetIdleWalkDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.GetOptimalRange
	 */
	struct ABPA_Char_C_GetOptimalRange_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.GetPatrolPath
	 */
	struct ABPA_Char_C_GetPatrolPath_Params
	{
	public:
		class USplineComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.GetPatrolTargets
	 */
	struct ABPA_Char_C_GetPatrolTargets_Params
	{
	public:
		bool                                                       IsValidOut;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J99K[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      TargetsOut;                                              // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.GetPerception
	 */
	struct ABPA_Char_C_GetPerception_Params
	{
	public:
		class UPRNpcPerceptionComponent*                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.GetSelection
	 */
	struct ABPA_Char_C_GetSelection_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.GetStealth
	 */
	struct ABPA_Char_C_GetStealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.SetBotMovementMode
	 */
	struct ABPA_Char_C_SetBotMovementMode_Params
	{
	public:
		EBotMovementMode                                           MovementMode;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Changed;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.GetHealth
	 */
	struct ABPA_Char_C_GetHealth_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.GetHealthPercent
	 */
	struct ABPA_Char_C_GetHealthPercent_Params
	{
	public:
		float                                                      HealthPercent;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.IsAlive
	 */
	struct ABPA_Char_C_IsAlive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.GetInstanceID
	 */
	struct ABPA_Char_C_GetInstanceID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.IsArmored
	 */
	struct ABPA_Char_C_IsArmored_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.IsCriticalHit
	 */
	struct ABPA_Char_C_IsCriticalHit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.IsAttacksLocked
	 */
	struct ABPA_Char_C_IsAttacksLocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.GetNPCInfo
	 */
	struct ABPA_Char_C_GetNPCInfo_Params
	{
	public:
		struct FPRNPCInfo                                          ReturnValue;                                             // 0x0000(0x01B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.GetIDs
	 */
	struct ABPA_Char_C_GetIDs_Params
	{
	public:
		struct FGameplayTag                                        TypeID;                                                  // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
		class FString                                              InstanceId;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.GetCurrentDetailLevel
	 */
	struct ABPA_Char_C_GetCurrentDetailLevel_Params
	{
	public:
		ECharDetailLevel                                           DetailLevel;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.Reappear Cover Callback
	 */
	struct ABPA_Char_C_Reappear_Cover_Callback_Params
	{
	public:
		struct FNpcPointQueryResult                                QueryResult;                                             // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.Reappear Out Of Sight
	 */
	struct ABPA_Char_C_Reappear_Out_Of_Sight_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.NpcAwarenessLevelChanged
	 */
	struct ABPA_Char_C_NpcAwarenessLevelChanged_Params
	{
	public:
		EAwarenessLevel                                            PrevAwarenessLevel;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EAwarenessLevel                                            NewAwarenessLevel;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.Set Brain Enabled
	 */
	struct ABPA_Char_C_Set_Brain_Enabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.RequestDetailLevelUpdate
	 */
	struct ABPA_Char_C_RequestDetailLevelUpdate_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.InitDetailLevel
	 */
	struct ABPA_Char_C_InitDetailLevel_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.SetNpcEnabled
	 */
	struct ABPA_Char_C_SetNpcEnabled_Params
	{
	public:
		bool                                                       bNewEnable;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VTHU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_Char.BPA_Char_C.UpdateActivationStatus
	 */
	struct ABPA_Char_C_UpdateActivationStatus_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.TogglePendingDisableState
	 */
	struct ABPA_Char_C_TogglePendingDisableState_Params
	{
	public:
		bool                                                       bEnableOptim;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.CheckedSetNpcEnabled
	 */
	struct ABPA_Char_C_CheckedSetNpcEnabled_Params
	{
	public:
		bool                                                       bNewEnable;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.UpdateDetailLevel
	 */
	struct ABPA_Char_C_UpdateDetailLevel_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.CloseCombatCleanup
	 */
	struct ABPA_Char_C_CloseCombatCleanup_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.CloseCombatSetup
	 */
	struct ABPA_Char_C_CloseCombatSetup_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.WalkToLocation
	 */
	struct ABPA_Char_C_WalkToLocation_Params
	{
	public:
		struct FVector                                             Actor;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.CheckDistanceToPlayerMet
	 */
	struct ABPA_Char_C_CheckDistanceToPlayerMet_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.IsLocInValidRange
	 */
	struct ABPA_Char_C_IsLocInValidRange_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.SetupState
	 */
	struct ABPA_Char_C_SetupState_Params
	{
	public:
		float                                                      Awareness;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             POI;                                                     // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECharCommand                                               Command;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.GetAttackLostLocationTime
	 */
	struct ABPA_Char_C_GetAttackLostLocationTime_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.GetAttackMoveDilationAngle
	 */
	struct ABPA_Char_C_GetAttackMoveDilationAngle_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.GetFootstepNoiseRange
	 */
	struct ABPA_Char_C_GetFootstepNoiseRange_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.InvestigateLocation
	 */
	struct ABPA_Char_C_InvestigateLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.ProcessDamage
	 */
	struct ABPA_Char_C_ProcessDamage_Params
	{
	public:
		class AActor*                                              causer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.SpawnLoot
	 */
	struct ABPA_Char_C_SpawnLoot_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.ProcessNoise
	 */
	struct ABPA_Char_C_ProcessNoise_Params
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3NGN[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_Char.BPA_Char_C.GetAwarenessLevel
	 */
	struct ABPA_Char_C_GetAwarenessLevel_Params
	{
	public:
		EAwarenessLevel                                            AwarenessLevel;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.IsEnabled
	 */
	struct ABPA_Char_C_IsEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.IsPlayerNear
	 */
	struct ABPA_Char_C_IsPlayerNear_Params
	{
	public:
		bool                                                       PlayerNear;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IU65[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_Char.BPA_Char_C.SetEnableAdditionalThings
	 */
	struct ABPA_Char_C_SetEnableAdditionalThings_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.SelectAndAttack
	 */
	struct ABPA_Char_C_SelectAndAttack_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.WalkToActorLocation
	 */
	struct ABPA_Char_C_WalkToActorLocation_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.SelectAndAttackClosestTarget
	 */
	struct ABPA_Char_C_SelectAndAttackClosestTarget_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.DestroyController
	 */
	struct ABPA_Char_C_DestroyController_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.LoadBaseSettings
	 */
	struct ABPA_Char_C_LoadBaseSettings_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.LoadAdditionalSettings
	 */
	struct ABPA_Char_C_LoadAdditionalSettings_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.GetIdleOriginPoint
	 */
	struct ABPA_Char_C_GetIdleOriginPoint_Params
	{
	public:
		struct FVector                                             Point;                                                   // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.RestartTree
	 */
	struct ABPA_Char_C_RestartTree_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.PrintMessage
	 */
	struct ABPA_Char_C_PrintMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.EnableRagdoll
	 */
	struct ABPA_Char_C_EnableRagdoll_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.SetEnableEverything
	 */
	struct ABPA_Char_C_SetEnableEverything_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.SetCommand
	 */
	struct ABPA_Char_C_SetCommand_Params
	{
	public:
		ECharCommand                                               NewCommand;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Force;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.GetCommand
	 */
	struct ABPA_Char_C_GetCommand_Params
	{
	public:
		ECharCommand                                               CurrentCommand;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.OnAttackCommandFinished
	 */
	struct ABPA_Char_C_OnAttackCommandFinished_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.OnAttackCommandStarted
	 */
	struct ABPA_Char_C_OnAttackCommandStarted_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.OnIdleCommandFinished
	 */
	struct ABPA_Char_C_OnIdleCommandFinished_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.OnIdleCommandStarted
	 */
	struct ABPA_Char_C_OnIdleCommandStarted_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.OnWalkCommandFinished
	 */
	struct ABPA_Char_C_OnWalkCommandFinished_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.OnWalkCommandStarted
	 */
	struct ABPA_Char_C_OnWalkCommandStarted_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.ReportDeath
	 */
	struct ABPA_Char_C_ReportDeath_Params
	{
	public:
		class AActor*                                              DeadActorRef;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.SetFlyForce
	 */
	struct ABPA_Char_C_SetFlyForce_Params
	{
	public:
		struct FVector                                             Force;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.SetTargetRotation
	 */
	struct ABPA_Char_C_SetTargetRotation_Params
	{
	public:
		struct FRotator                                            TargetRotation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.StopMovement
	 */
	struct ABPA_Char_C_StopMovement_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.TeleportToNextPos
	 */
	struct ABPA_Char_C_TeleportToNextPos_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.ReceiveBeginPlay
	 */
	struct ABPA_Char_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.BndEvt__HealthComp_K2Node_ComponentBoundEvent_0_HealthEnd__DelegateSignature
	 */
	struct ABPA_Char_C_BndEvt__HealthComp_K2Node_ComponentBoundEvent_0_HealthEnd__DelegateSignature_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.ReceiveTick
	 */
	struct ABPA_Char_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.BndEvt__PerceptionComponent_K2Node_ComponentBoundEvent_0_OnHeardNoise__DelegateSignature
	 */
	struct ABPA_Char_C_BndEvt__PerceptionComponent_K2Node_ComponentBoundEvent_0_OnHeardNoise__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Strength;                                                // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Tag;                                                     // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.BndEvt__AliveComp_K2Node_ComponentBoundEvent_1_OnDamaged__DelegateSignature
	 */
	struct ABPA_Char_C_BndEvt__AliveComp_K2Node_ComponentBoundEvent_1_OnDamaged__DelegateSignature_Params
	{
	public:
		class AActor*                                              causer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.OnStart
	 */
	struct ABPA_Char_C_OnStart_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.CharEnabled
	 */
	struct ABPA_Char_C_CharEnabled_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.OnDeath
	 */
	struct ABPA_Char_C_OnDeath_Params
	{
	public:
		bool                                                       EnableRagdoll;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.ReceiveEndPlay
	 */
	struct ABPA_Char_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.AlertNearbyMonsters
	 */
	struct ABPA_Char_C_AlertNearbyMonsters_Params
	{
	public:
		class AActor*                                              causer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.ChangeHealth
	 */
	struct ABPA_Char_C_ChangeHealth_Params
	{
	public:
		float                                                      HealthDelta;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.LightOn
	 */
	struct ABPA_Char_C_LightOn_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5GJK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     Component;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.SetPausedState
	 */
	struct ABPA_Char_C_SetPausedState_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.BroadcastEnemyLoc
	 */
	struct ABPA_Char_C_BroadcastEnemyLoc_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.Alert
	 */
	struct ABPA_Char_C_Alert_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EYL7[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Location;                                                // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.OnGameStateChange
	 */
	struct ABPA_Char_C_OnGameStateChange_Params
	{
	public:
		bool                                                       IsPause;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.SetDebug
	 */
	struct ABPA_Char_C_SetDebug_Params
	{
	public:
		bool                                                       NewDebug;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.OnEnterPlayerViewport
	 */
	struct ABPA_Char_C_OnEnterPlayerViewport_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.OnExitPlayerViewport
	 */
	struct ABPA_Char_C_OnExitPlayerViewport_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.OnTransitionEndOnceEventDelegate
	 */
	struct ABPA_Char_C_OnTransitionEndOnceEventDelegate_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.SetVolumeActivationState
	 */
	struct ABPA_Char_C_SetVolumeActivationState_Params
	{
	public:
		bool                                                       NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.CcmStartWaitingForCombat
	 */
	struct ABPA_Char_C_CcmStartWaitingForCombat_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.CcmStopWaitingForCombat
	 */
	struct ABPA_Char_C_CcmStopWaitingForCombat_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.OnTransitionStartOnce
	 */
	struct ABPA_Char_C_OnTransitionStartOnce_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.SaveGameData
	 */
	struct ABPA_Char_C_SaveGameData_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.OnGameStartedEventDelegate
	 */
	struct ABPA_Char_C_OnGameStartedEventDelegate_Params
	{	};

	/**
	 * Function BPA_Char.BPA_Char_C.ExecuteUbergraph_BPA_Char
	 */
	struct ABPA_Char_C_ExecuteUbergraph_BPA_Char_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Char.BPA_Char_C.OnDeathDispatcher__DelegateSignature
	 */
	struct ABPA_Char_C_OnDeathDispatcher__DelegateSignature_Params
	{
	public:
		class AActor*                                              CharacterRef;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
