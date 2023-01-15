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
	 * Function AIC_Bot.AIC_Bot_C.GetDamageDealerName
	 */
	struct AAIC_Bot_C_GetDamageDealerName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function AIC_Bot.AIC_Bot_C.GetDamageDealerTag
	 */
	struct AAIC_Bot_C_GetDamageDealerTag_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot.AIC_Bot_C.FGetStats
	 */
	struct AAIC_Bot_C_FGetStats_Params
	{
	public:
		class UBPC_AliveStats_C*                                   CAlive;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot.AIC_Bot_C.FDistanceToSelection
	 */
	struct AAIC_Bot_C_FDistanceToSelection_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Distance;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot.AIC_Bot_C.FAdvanceToLocation
	 */
	struct AAIC_Bot_C_FAdvanceToLocation_Params
	{
	public:
		struct FVector                                             InLoc;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Loc;                                                     // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot.AIC_Bot_C.FGetPerception
	 */
	struct AAIC_Bot_C_FGetPerception_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZRYO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPRNpcPerceptionComponent*                           PerceptionComp;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot.AIC_Bot_C.OnTransitionEndOnceEventDelegate
	 */
	struct AAIC_Bot_C_OnTransitionEndOnceEventDelegate_Params
	{	};

	/**
	 * Function AIC_Bot.AIC_Bot_C.ReceiveBeginPlay
	 */
	struct AAIC_Bot_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function AIC_Bot.AIC_Bot_C.OnStart
	 */
	struct AAIC_Bot_C_OnStart_Params
	{	};

	/**
	 * Function AIC_Bot.AIC_Bot_C.EnemySpoted
	 */
	struct AAIC_Bot_C_EnemySpoted_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot.AIC_Bot_C.AwarenessChanged
	 */
	struct AAIC_Bot_C_AwarenessChanged_Params
	{
	public:
		EAwarenessLevel                                            PrevLvl;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EAwarenessLevel                                            NewLvl;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot.AIC_Bot_C.ReactToNoise
	 */
	struct AAIC_Bot_C_ReactToNoise_Params
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Loc;                                                     // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot.AIC_Bot_C.OnGameStartedEventDelegate
	 */
	struct AAIC_Bot_C_OnGameStartedEventDelegate_Params
	{	};

	/**
	 * Function AIC_Bot.AIC_Bot_C.GameStarted
	 */
	struct AAIC_Bot_C_GameStarted_Params
	{	};

	/**
	 * Function AIC_Bot.AIC_Bot_C.EnemyLost
	 */
	struct AAIC_Bot_C_EnemyLost_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             LocLastSeen;                                             // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot.AIC_Bot_C.ReceiveUnPossess
	 */
	struct AAIC_Bot_C_ReceiveUnPossess_Params
	{
	public:
		class APawn*                                               UnpossessedPawn;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot.AIC_Bot_C.SetPausedState
	 */
	struct AAIC_Bot_C_SetPausedState_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AIC_Bot.AIC_Bot_C.ReceivePossess
	 */
	struct AAIC_Bot_C_ReceivePossess_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AIC_Bot.AIC_Bot_C.ExecuteUbergraph_AIC_Bot
	 */
	struct AAIC_Bot_C_ExecuteUbergraph_AIC_Bot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9S06[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
