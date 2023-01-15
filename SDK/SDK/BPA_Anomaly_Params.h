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
	 * Function BPA_Anomaly.BPA_Anomaly_C.CopyNativeToBp
	 */
	struct ABPA_Anomaly_C_CopyNativeToBp_Params
	{	};

	/**
	 * Function BPA_Anomaly.BPA_Anomaly_C.CopyBpToNative
	 */
	struct ABPA_Anomaly_C_CopyBpToNative_Params
	{	};

	/**
	 * Function BPA_Anomaly.BPA_Anomaly_C.CheckIfDiscovered
	 */
	struct ABPA_Anomaly_C_CheckIfDiscovered_Params
	{	};

	/**
	 * Function BPA_Anomaly.BPA_Anomaly_C.GetDamageDealerTag
	 */
	struct ABPA_Anomaly_C_GetDamageDealerTag_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Anomaly.BPA_Anomaly_C.GetAnomalyInfo
	 */
	struct ABPA_Anomaly_C_GetAnomalyInfo_Params
	{
	public:
		struct FPRAnomalyInfo                                      ReturnValue;                                             // 0x0000(0x0058)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPA_Anomaly.BPA_Anomaly_C.GetDamageDealerName
	 */
	struct ABPA_Anomaly_C_GetDamageDealerName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPA_Anomaly.BPA_Anomaly_C.CheckIfSignificant
	 */
	struct ABPA_Anomaly_C_CheckIfSignificant_Params
	{	};

	/**
	 * Function BPA_Anomaly.BPA_Anomaly_C.GetTypeID
	 */
	struct ABPA_Anomaly_C_GetTypeID_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Anomaly.BPA_Anomaly_C.GetInstanceID
	 */
	struct ABPA_Anomaly_C_GetInstanceID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Anomaly.BPA_Anomaly_C.GetRadius
	 */
	struct ABPA_Anomaly_C_GetRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Anomaly.BPA_Anomaly_C.CheckItemActor
	 */
	struct ABPA_Anomaly_C_CheckItemActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       inInventory;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NUPR[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_Anomaly.BPA_Anomaly_C.Fn_EnableEverything
	 */
	struct ABPA_Anomaly_C_Fn_EnableEverything_Params
	{	};

	/**
	 * Function BPA_Anomaly.BPA_Anomaly_C.Fn_DisableEverything
	 */
	struct ABPA_Anomaly_C_Fn_DisableEverything_Params
	{	};

	/**
	 * Function BPA_Anomaly.BPA_Anomaly_C.Fn_CheckArray
	 */
	struct ABPA_Anomaly_C_Fn_CheckArray_Params
	{
	public:
		TArray<class UObject*>                                     ObjectArr;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsValid;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ADIL[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_Anomaly.BPA_Anomaly_C.Fn_CheckLOS
	 */
	struct ABPA_Anomaly_C_Fn_CheckLOS_Params
	{	};

	/**
	 * Function BPA_Anomaly.BPA_Anomaly_C.Fn_CheckOverlap
	 */
	struct ABPA_Anomaly_C_Fn_CheckOverlap_Params
	{
	public:
		bool                                                       HasOverlaps;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V1HZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      ActorArray;                                              // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPA_Anomaly.BPA_Anomaly_C.OnLevelStarted
	 */
	struct ABPA_Anomaly_C_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Anomaly.BPA_Anomaly_C.OverlapTriggered
	 */
	struct ABPA_Anomaly_C_OverlapTriggered_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Anomaly.BPA_Anomaly_C.OnOverlapActor
	 */
	struct ABPA_Anomaly_C_OnOverlapActor_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Anomaly.BPA_Anomaly_C.OnOverlapTimer
	 */
	struct ABPA_Anomaly_C_OnOverlapTimer_Params
	{	};

	/**
	 * Function BPA_Anomaly.BPA_Anomaly_C.ExecuteUbergraph_BPA_Anomaly
	 */
	struct ABPA_Anomaly_C_ExecuteUbergraph_BPA_Anomaly_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
