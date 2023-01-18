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
	 * Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.GetAnomalyInfo
	 */
	struct ABP_Anomaly_Grass_C_GetAnomalyInfo_Params
	{
	public:
		struct FPRAnomalyInfo                                      ReturnValue;                                             // 0x0000(0x0058)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.GetRadius
	 */
	struct ABP_Anomaly_Grass_C_GetRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.GetTypeID
	 */
	struct ABP_Anomaly_Grass_C_GetTypeID_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.GetInstanceID
	 */
	struct ABP_Anomaly_Grass_C_GetInstanceID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.GetDamageDealerTag
	 */
	struct ABP_Anomaly_Grass_C_GetDamageDealerTag_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.GetDamageDealerName
	 */
	struct ABP_Anomaly_Grass_C_GetDamageDealerName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.FindPoints
	 */
	struct ABP_Anomaly_Grass_C_FindPoints_Params
	{
	public:
		bool                                                       HasValidPoint;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2XYC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector>                                     PointArr;                                                // 0x0008(0x0010)  (Parm, OutParm)
		TArray<struct FVector>                                     Normals;                                                 // 0x0018(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.Spawn
	 */
	struct ABP_Anomaly_Grass_C_Spawn_Params
	{	};

	/**
	 * Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.UserConstructionScript
	 */
	struct ABP_Anomaly_Grass_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.CheckSun
	 */
	struct ABP_Anomaly_Grass_C_CheckSun_Params
	{	};

	/**
	 * Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.OnLevelStarted
	 */
	struct ABP_Anomaly_Grass_C_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.ReceiveEndPlay
	 */
	struct ABP_Anomaly_Grass_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.ReceiveBeginPlay
	 */
	struct ABP_Anomaly_Grass_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.OverlapStartingTriggered
	 */
	struct ABP_Anomaly_Grass_C_OverlapStartingTriggered_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.ApplyDamageToAffectedActors
	 */
	struct ABP_Anomaly_Grass_C_ApplyDamageToAffectedActors_Params
	{	};

	/**
	 * Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.OverlapLeavingTriggered
	 */
	struct ABP_Anomaly_Grass_C_OverlapLeavingTriggered_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Grass.BP_Anomaly_Grass_C.ExecuteUbergraph_BP_Anomaly_Grass
	 */
	struct ABP_Anomaly_Grass_C_ExecuteUbergraph_BP_Anomaly_Grass_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
