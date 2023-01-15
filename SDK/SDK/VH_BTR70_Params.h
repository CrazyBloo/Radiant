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
	 * Function VH_BTR70.VH_BTR70_C.GetAliveStats
	 */
	struct AVH_BTR70_C_GetAliveStats_Params
	{
	public:
		class UActorComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.GetBoneTransform
	 */
	struct AVH_BTR70_C_GetBoneTransform_Params
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7R9P[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.GetBotMovementMode
	 */
	struct AVH_BTR70_C_GetBotMovementMode_Params
	{
	public:
		EBotMovementMode                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.GetBotShootingComponent
	 */
	struct AVH_BTR70_C_GetBotShootingComponent_Params
	{
	public:
		class UActorComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.GetIdleWalkDistance
	 */
	struct AVH_BTR70_C_GetIdleWalkDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.GetOptimalRange
	 */
	struct AVH_BTR70_C_GetOptimalRange_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.GetPatrolPath
	 */
	struct AVH_BTR70_C_GetPatrolPath_Params
	{
	public:
		class USplineComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.GetPatrolTargets
	 */
	struct AVH_BTR70_C_GetPatrolTargets_Params
	{
	public:
		bool                                                       IsValidOut;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U981[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      TargetsOut;                                              // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.GetPerception
	 */
	struct AVH_BTR70_C_GetPerception_Params
	{
	public:
		class UPRNpcPerceptionComponent*                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.GetSelection
	 */
	struct AVH_BTR70_C_GetSelection_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.GetStealth
	 */
	struct AVH_BTR70_C_GetStealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.SetBotMovementMode
	 */
	struct AVH_BTR70_C_SetBotMovementMode_Params
	{
	public:
		EBotMovementMode                                           MovementMode;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Changed;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.GetHealth
	 */
	struct AVH_BTR70_C_GetHealth_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.GetHealthPercent
	 */
	struct AVH_BTR70_C_GetHealthPercent_Params
	{
	public:
		float                                                      HealthPercent;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.IsAlive
	 */
	struct AVH_BTR70_C_IsAlive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.IsArmored
	 */
	struct AVH_BTR70_C_IsArmored_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.IsCriticalHit
	 */
	struct AVH_BTR70_C_IsCriticalHit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.GetIDs
	 */
	struct AVH_BTR70_C_GetIDs_Params
	{
	public:
		struct FGameplayTag                                        TypeID;                                                  // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
		class FString                                              InstanceId;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.GetNPCInfo
	 */
	struct AVH_BTR70_C_GetNPCInfo_Params
	{
	public:
		struct FPRNPCInfo                                          ReturnValue;                                             // 0x0000(0x01B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.IsAttacksLocked
	 */
	struct AVH_BTR70_C_IsAttacksLocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.GetInstanceID
	 */
	struct AVH_BTR70_C_GetInstanceID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.ComputeSmallestTurnAngle
	 */
	struct AVH_BTR70_C_ComputeSmallestTurnAngle_Params
	{
	public:
		struct FVector                                             TargetLoc;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            TurnTransform;                                           // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.InitCritBone
	 */
	struct AVH_BTR70_C_InitCritBone_Params
	{	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.LoadConfig
	 */
	struct AVH_BTR70_C_LoadConfig_Params
	{	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.BroadcastEnemyLoc
	 */
	struct AVH_BTR70_C_BroadcastEnemyLoc_Params
	{	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.CcmStartWaitingForCombat
	 */
	struct AVH_BTR70_C_CcmStartWaitingForCombat_Params
	{	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.CcmStopWaitingForCombat
	 */
	struct AVH_BTR70_C_CcmStopWaitingForCombat_Params
	{	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.OnEnterPlayerViewport
	 */
	struct AVH_BTR70_C_OnEnterPlayerViewport_Params
	{	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.OnExitPlayerViewport
	 */
	struct AVH_BTR70_C_OnExitPlayerViewport_Params
	{	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.ReportDeath
	 */
	struct AVH_BTR70_C_ReportDeath_Params
	{
	public:
		class AActor*                                              DeadActorRef;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.SetFlyForce
	 */
	struct AVH_BTR70_C_SetFlyForce_Params
	{
	public:
		struct FVector                                             Force;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.SetTargetRotation
	 */
	struct AVH_BTR70_C_SetTargetRotation_Params
	{
	public:
		struct FRotator                                            TargetRotation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.ChangeHealth
	 */
	struct AVH_BTR70_C_ChangeHealth_Params
	{
	public:
		float                                                      HealthDelta;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.Alert
	 */
	struct AVH_BTR70_C_Alert_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WTKA[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Location;                                                // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.SetDebug
	 */
	struct AVH_BTR70_C_SetDebug_Params
	{
	public:
		bool                                                       NewDebug;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.CustomThrottle
	 */
	struct AVH_BTR70_C_CustomThrottle_Params
	{
	public:
		float                                                      TargetAngle;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DestinationDistance;                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DesiredSpeed;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CalculatedThrottle;                                      // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.CustomSteering
	 */
	struct AVH_BTR70_C_CustomSteering_Params
	{
	public:
		float                                                      TargetAngle;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Steering;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DestinationDistance;                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.CustomBraking
	 */
	struct AVH_BTR70_C_CustomBraking_Params
	{
	public:
		float                                                      TargetAngle;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DestinationDistance;                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DesiredSpeed;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CalculatedBrake;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.ReceiveTick
	 */
	struct AVH_BTR70_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.ReceiveBeginPlay
	 */
	struct AVH_BTR70_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.saveData
	 */
	struct AVH_BTR70_C_saveData_Params
	{	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.FixPosition
	 */
	struct AVH_BTR70_C_FixPosition_Params
	{	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.StopMovement
	 */
	struct AVH_BTR70_C_StopMovement_Params
	{	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.TeleportToNextPos
	 */
	struct AVH_BTR70_C_TeleportToNextPos_Params
	{	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.BndEvt__VH_BTR70_AliveStats_K2Node_ComponentBoundEvent_2_OnHealthEnd__DelegateSignature
	 */
	struct AVH_BTR70_C_BndEvt__VH_BTR70_AliveStats_K2Node_ComponentBoundEvent_2_OnHealthEnd__DelegateSignature_Params
	{	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.BndEvt__VH_BTR70_AliveStats_K2Node_ComponentBoundEvent_3_OnDamaged__DelegateSignature
	 */
	struct AVH_BTR70_C_BndEvt__VH_BTR70_AliveStats_K2Node_ComponentBoundEvent_3_OnDamaged__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.CheckFlip
	 */
	struct AVH_BTR70_C_CheckFlip_Params
	{	};

	/**
	 * Function VH_BTR70.VH_BTR70_C.ExecuteUbergraph_VH_BTR70
	 */
	struct AVH_BTR70_C_ExecuteUbergraph_VH_BTR70_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
