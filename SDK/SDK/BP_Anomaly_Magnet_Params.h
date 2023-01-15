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
	 * Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.VerifyAndEnd
	 */
	struct ABP_Anomaly_Magnet_C_VerifyAndEnd_Params
	{	};

	/**
	 * Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.AffectPlayerItems
	 */
	struct ABP_Anomaly_Magnet_C_AffectPlayerItems_Params
	{	};

	/**
	 * Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.AddRadialImpulse
	 */
	struct ABP_Anomaly_Magnet_C_AddRadialImpulse_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.CheckDistance
	 */
	struct ABP_Anomaly_Magnet_C_CheckDistance_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldFly;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QP9D[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.GetPlayerAffectedItems
	 */
	struct ABP_Anomaly_Magnet_C_GetPlayerAffectedItems_Params
	{	};

	/**
	 * Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.ReceiveBeginPlay
	 */
	struct ABP_Anomaly_Magnet_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.ExplodeItems
	 */
	struct ABP_Anomaly_Magnet_C_ExplodeItems_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.ReceiveTick
	 */
	struct ABP_Anomaly_Magnet_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.OnOverlapTimer
	 */
	struct ABP_Anomaly_Magnet_C_OnOverlapTimer_Params
	{	};

	/**
	 * Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.OverlapLeavingTriggered
	 */
	struct ABP_Anomaly_Magnet_C_OverlapLeavingTriggered_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.ExecuteUbergraph_BP_Anomaly_Magnet
	 */
	struct ABP_Anomaly_Magnet_C_ExecuteUbergraph_BP_Anomaly_Magnet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_51QY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
