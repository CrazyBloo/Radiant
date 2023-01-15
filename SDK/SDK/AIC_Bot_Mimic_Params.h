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
	 * Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.GetCommand
	 */
	struct AAIC_Bot_Mimic_C_GetCommand_Params
	{
	public:
		ECharCommand                                               CurrentCommand;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.GetDesiredPosition
	 */
	struct AAIC_Bot_Mimic_C_GetDesiredPosition_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.GetPerception
	 */
	struct AAIC_Bot_Mimic_C_GetPerception_Params
	{
	public:
		class UPRNpcPerceptionComponent*                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.GetSquadMembers
	 */
	struct AAIC_Bot_Mimic_C_GetSquadMembers_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.GetTargetActor
	 */
	struct AAIC_Bot_Mimic_C_GetTargetActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.GetTargetLocation
	 */
	struct AAIC_Bot_Mimic_C_GetTargetLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.OrderAttack
	 */
	struct AAIC_Bot_Mimic_C_OrderAttack_Params
	{	};

	/**
	 * Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.OrderCompleted
	 */
	struct AAIC_Bot_Mimic_C_OrderCompleted_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.OrderCover
	 */
	struct AAIC_Bot_Mimic_C_OrderCover_Params
	{	};

	/**
	 * Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.EnemySpoted
	 */
	struct AAIC_Bot_Mimic_C_EnemySpoted_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.GameStarted
	 */
	struct AAIC_Bot_Mimic_C_GameStarted_Params
	{	};

	/**
	 * Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.SwitchToIdle
	 */
	struct AAIC_Bot_Mimic_C_SwitchToIdle_Params
	{	};

	/**
	 * Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.ReceiveUnPossess
	 */
	struct AAIC_Bot_Mimic_C_ReceiveUnPossess_Params
	{
	public:
		class APawn*                                               UnpossessedPawn;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.EnemyLost
	 */
	struct AAIC_Bot_Mimic_C_EnemyLost_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             LocLastSeen;                                             // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.SetLeader
	 */
	struct AAIC_Bot_Mimic_C_SetLeader_Params
	{
	public:
		class APRBasicActor*                                       NewLeader;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.SetTargetActor
	 */
	struct AAIC_Bot_Mimic_C_SetTargetActor_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.SetDesiredPosition
	 */
	struct AAIC_Bot_Mimic_C_SetDesiredPosition_Params
	{
	public:
		struct FVector                                             Pos;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.ReportEnemyLocation
	 */
	struct AAIC_Bot_Mimic_C_ReportEnemyLocation_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.AddSquadMember
	 */
	struct AAIC_Bot_Mimic_C_AddSquadMember_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.RemoveSquadMember
	 */
	struct AAIC_Bot_Mimic_C_RemoveSquadMember_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot_Mimic.AIC_Bot_Mimic_C.ExecuteUbergraph_AIC_Bot_Mimic
	 */
	struct AAIC_Bot_Mimic_C_ExecuteUbergraph_AIC_Bot_Mimic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3OKK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
