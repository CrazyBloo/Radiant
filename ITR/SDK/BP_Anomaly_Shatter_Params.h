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
	 * Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.FindPoints
	 */
	struct ABP_Anomaly_Shatter_C_FindPoints_Params
	{
	public:
		bool                                                       HasValidPoint;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R121[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector>                                     PointArr;                                                // 0x0008(0x0010)  (Parm, OutParm)
		TArray<struct FVector>                                     Normals;                                                 // 0x0018(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.Spawn
	 */
	struct ABP_Anomaly_Shatter_C_Spawn_Params
	{	};

	/**
	 * Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.UserConstructionScript
	 */
	struct ABP_Anomaly_Shatter_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.ChargeComponent
	 */
	struct ABP_Anomaly_Shatter_C_ChargeComponent_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ChargeValue;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.ReceiveTick
	 */
	struct ABP_Anomaly_Shatter_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.ReceiveBeginPlay
	 */
	struct ABP_Anomaly_Shatter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.Explode
	 */
	struct ABP_Anomaly_Shatter_C_Explode_Params
	{	};

	/**
	 * Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.CheckSun
	 */
	struct ABP_Anomaly_Shatter_C_CheckSun_Params
	{	};

	/**
	 * Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.LightOn_2
	 */
	struct ABP_Anomaly_Shatter_C_LightOn_2_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_685D[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     Component;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Shatter.BP_Anomaly_Shatter_C.ExecuteUbergraph_BP_Anomaly_Shatter
	 */
	struct ABP_Anomaly_Shatter_C_ExecuteUbergraph_BP_Anomaly_Shatter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
