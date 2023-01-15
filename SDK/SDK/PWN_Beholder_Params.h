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
	 * Function PWN_Beholder.PWN_Beholder_C.GetAliveStats
	 */
	struct APWN_Beholder_C_GetAliveStats_Params
	{
	public:
		class UActorComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.GetBoneTransform
	 */
	struct APWN_Beholder_C_GetBoneTransform_Params
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JPZF[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.GetBotMovementMode
	 */
	struct APWN_Beholder_C_GetBotMovementMode_Params
	{
	public:
		EBotMovementMode                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.GetBotShootingComponent
	 */
	struct APWN_Beholder_C_GetBotShootingComponent_Params
	{
	public:
		class UActorComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.GetIdleWalkDistance
	 */
	struct APWN_Beholder_C_GetIdleWalkDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.GetOptimalRange
	 */
	struct APWN_Beholder_C_GetOptimalRange_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.GetPatrolPath
	 */
	struct APWN_Beholder_C_GetPatrolPath_Params
	{
	public:
		class USplineComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.GetPatrolTargets
	 */
	struct APWN_Beholder_C_GetPatrolTargets_Params
	{
	public:
		bool                                                       IsValidOut;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RWFD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      TargetsOut;                                              // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.GetPerception
	 */
	struct APWN_Beholder_C_GetPerception_Params
	{
	public:
		class UPRNpcPerceptionComponent*                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.GetSelection
	 */
	struct APWN_Beholder_C_GetSelection_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.GetStealth
	 */
	struct APWN_Beholder_C_GetStealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.SetBotMovementMode
	 */
	struct APWN_Beholder_C_SetBotMovementMode_Params
	{
	public:
		EBotMovementMode                                           MovementMode;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Changed;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.GetHealth
	 */
	struct APWN_Beholder_C_GetHealth_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.GetHealthPercent
	 */
	struct APWN_Beholder_C_GetHealthPercent_Params
	{
	public:
		float                                                      HealthPercent;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.IsAlive
	 */
	struct APWN_Beholder_C_IsAlive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.IsArmored
	 */
	struct APWN_Beholder_C_IsArmored_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.IsCriticalHit
	 */
	struct APWN_Beholder_C_IsCriticalHit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.GetIDs
	 */
	struct APWN_Beholder_C_GetIDs_Params
	{
	public:
		struct FGameplayTag                                        TypeID;                                                  // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
		class FString                                              InstanceId;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.GetNPCInfo
	 */
	struct APWN_Beholder_C_GetNPCInfo_Params
	{
	public:
		struct FPRNPCInfo                                          ReturnValue;                                             // 0x0000(0x01B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.IsAttacksLocked
	 */
	struct APWN_Beholder_C_IsAttacksLocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.GetInstanceID
	 */
	struct APWN_Beholder_C_GetInstanceID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.BroadcastEnemyLoc
	 */
	struct APWN_Beholder_C_BroadcastEnemyLoc_Params
	{	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.CcmStartWaitingForCombat
	 */
	struct APWN_Beholder_C_CcmStartWaitingForCombat_Params
	{	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.CcmStopWaitingForCombat
	 */
	struct APWN_Beholder_C_CcmStopWaitingForCombat_Params
	{	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.OnEnterPlayerViewport
	 */
	struct APWN_Beholder_C_OnEnterPlayerViewport_Params
	{	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.OnExitPlayerViewport
	 */
	struct APWN_Beholder_C_OnExitPlayerViewport_Params
	{	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.ReportDeath
	 */
	struct APWN_Beholder_C_ReportDeath_Params
	{
	public:
		class AActor*                                              DeadActorRef;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.SetFlyForce
	 */
	struct APWN_Beholder_C_SetFlyForce_Params
	{
	public:
		struct FVector                                             Force;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.SetTargetRotation
	 */
	struct APWN_Beholder_C_SetTargetRotation_Params
	{
	public:
		struct FRotator                                            TargetRotation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.StopMovement
	 */
	struct APWN_Beholder_C_StopMovement_Params
	{	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.TeleportToNextPos
	 */
	struct APWN_Beholder_C_TeleportToNextPos_Params
	{	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.ChangeHealth
	 */
	struct APWN_Beholder_C_ChangeHealth_Params
	{
	public:
		float                                                      HealthDelta;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.Alert
	 */
	struct APWN_Beholder_C_Alert_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UC9D[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          Location;                                                // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.SetDebug
	 */
	struct APWN_Beholder_C_SetDebug_Params
	{
	public:
		bool                                                       NewDebug;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.ReceiveTick
	 */
	struct APWN_Beholder_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.ReceiveBeginPlay
	 */
	struct APWN_Beholder_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PWN_Beholder.PWN_Beholder_C.ExecuteUbergraph_PWN_Beholder
	 */
	struct APWN_Beholder_C_ExecuteUbergraph_PWN_Beholder_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ONTS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
