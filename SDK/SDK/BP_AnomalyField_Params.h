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
	 * Function BP_AnomalyField.BP_AnomalyField_C.CheckPreparator
	 */
	struct ABP_AnomalyField_C_CheckPreparator_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6OAT[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_AnomalyField.BP_AnomalyField_C.IsPreparing
	 */
	struct ABP_AnomalyField_C_IsPreparing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AnomalyField.BP_AnomalyField_C.GetInstanceID
	 */
	struct ABP_AnomalyField_C_GetInstanceID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AnomalyField.BP_AnomalyField_C.Debug
	 */
	struct ABP_AnomalyField_C_Debug_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AnomalyField.BP_AnomalyField_C.PrepareVariables
	 */
	struct ABP_AnomalyField_C_PrepareVariables_Params
	{	};

	/**
	 * Function BP_AnomalyField.BP_AnomalyField_C.FixScale
	 */
	struct ABP_AnomalyField_C_FixScale_Params
	{	};

	/**
	 * Function BP_AnomalyField.BP_AnomalyField_C.CheckUID
	 */
	struct ABP_AnomalyField_C_CheckUID_Params
	{	};

	/**
	 * Function BP_AnomalyField.BP_AnomalyField_C.CheckPlayer
	 */
	struct ABP_AnomalyField_C_CheckPlayer_Params
	{
	public:
		struct FVector                                             Point;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Radius;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bLock;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2WT0[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_AnomalyField.BP_AnomalyField_C.PrepareBlocks
	 */
	struct ABP_AnomalyField_C_PrepareBlocks_Params
	{	};

	/**
	 * Function BP_AnomalyField.BP_AnomalyField_C.CheckAnomalySpawn
	 */
	struct ABP_AnomalyField_C_CheckAnomalySpawn_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XXVO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              Class;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AnomalyField.BP_AnomalyField_C.CheckBlocks
	 */
	struct ABP_AnomalyField_C_CheckBlocks_Params
	{
	public:
		struct FVector                                             Point;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Radius;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bLocked;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2NNI[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_AnomalyField.BP_AnomalyField_C.GetSpawnPoint
	 */
	struct ABP_AnomalyField_C_GetSpawnPoint_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       success;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UU3N[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Point;                                                   // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AnomalyField.BP_AnomalyField_C.SpawnAnomaly
	 */
	struct ABP_AnomalyField_C_SpawnAnomaly_Params
	{	};

	/**
	 * Function BP_AnomalyField.BP_AnomalyField_C.UserConstructionScript
	 */
	struct ABP_AnomalyField_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_AnomalyField.BP_AnomalyField_C.DoSpawn
	 */
	struct ABP_AnomalyField_C_DoSpawn_Params
	{	};

	/**
	 * Function BP_AnomalyField.BP_AnomalyField_C.CheckIfPlayerInRange
	 */
	struct ABP_AnomalyField_C_CheckIfPlayerInRange_Params
	{	};

	/**
	 * Function BP_AnomalyField.BP_AnomalyField_C.ReceiveEndPlay
	 */
	struct ABP_AnomalyField_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AnomalyField.BP_AnomalyField_C.OnTransitionStartOnceEvent
	 */
	struct ABP_AnomalyField_C_OnTransitionStartOnceEvent_Params
	{	};

	/**
	 * Function BP_AnomalyField.BP_AnomalyField_C.ReceiveTick
	 */
	struct ABP_AnomalyField_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AnomalyField.BP_AnomalyField_C.ForceSpawn
	 */
	struct ABP_AnomalyField_C_ForceSpawn_Params
	{	};

	/**
	 * Function BP_AnomalyField.BP_AnomalyField_C.EndSpawn
	 */
	struct ABP_AnomalyField_C_EndSpawn_Params
	{	};

	/**
	 * Function BP_AnomalyField.BP_AnomalyField_C.OnLevelPrepare
	 */
	struct ABP_AnomalyField_C_OnLevelPrepare_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AnomalyField.BP_AnomalyField_C.ExecuteUbergraph_BP_AnomalyField
	 */
	struct ABP_AnomalyField_C_ExecuteUbergraph_BP_AnomalyField_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
