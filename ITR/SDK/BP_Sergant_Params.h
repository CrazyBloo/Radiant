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
	 * Function BP_Sergant.BP_Sergant_C.GetCommand
	 */
	struct ABP_Sergant_C_GetCommand_Params
	{
	public:
		ECharCommand                                               CurrentCommand;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sergant.BP_Sergant_C.GetDesiredPosition
	 */
	struct ABP_Sergant_C_GetDesiredPosition_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sergant.BP_Sergant_C.GetPerception
	 */
	struct ABP_Sergant_C_GetPerception_Params
	{
	public:
		class UPRNpcPerceptionComponent*                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sergant.BP_Sergant_C.GetSquadMembers
	 */
	struct ABP_Sergant_C_GetSquadMembers_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Sergant.BP_Sergant_C.GetTargetActor
	 */
	struct ABP_Sergant_C_GetTargetActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sergant.BP_Sergant_C.GetTargetLocation
	 */
	struct ABP_Sergant_C_GetTargetLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sergant.BP_Sergant_C.AddSquadMember
	 */
	struct ABP_Sergant_C_AddSquadMember_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sergant.BP_Sergant_C.OrderAttack
	 */
	struct ABP_Sergant_C_OrderAttack_Params
	{	};

	/**
	 * Function BP_Sergant.BP_Sergant_C.OrderCover
	 */
	struct ABP_Sergant_C_OrderCover_Params
	{	};

	/**
	 * Function BP_Sergant.BP_Sergant_C.RemoveSquadMember
	 */
	struct ABP_Sergant_C_RemoveSquadMember_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sergant.BP_Sergant_C.SetDesiredPosition
	 */
	struct ABP_Sergant_C_SetDesiredPosition_Params
	{
	public:
		struct FVector                                             Pos;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sergant.BP_Sergant_C.SetLeader
	 */
	struct ABP_Sergant_C_SetLeader_Params
	{
	public:
		class APRBasicActor*                                       NewLeader;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sergant.BP_Sergant_C.SetTargetActor
	 */
	struct ABP_Sergant_C_SetTargetActor_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sergant.BP_Sergant_C.SpreadOut
	 */
	struct ABP_Sergant_C_SpreadOut_Params
	{	};

	/**
	 * Function BP_Sergant.BP_Sergant_C.ReceiveTick
	 */
	struct ABP_Sergant_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sergant.BP_Sergant_C.OnGameStarted
	 */
	struct ABP_Sergant_C_OnGameStarted_Params
	{	};

	/**
	 * Function BP_Sergant.BP_Sergant_C.OrderCompleted
	 */
	struct ABP_Sergant_C_OrderCompleted_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sergant.BP_Sergant_C.ReportEnemyLocation
	 */
	struct ABP_Sergant_C_ReportEnemyLocation_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sergant.BP_Sergant_C.ExecuteUbergraph_BP_Sergant
	 */
	struct ABP_Sergant_C_ExecuteUbergraph_BP_Sergant_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
