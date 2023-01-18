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
	 * Function BP_Anomaly_Web.BP_Anomaly_Web_C.SpawnMeshes
	 */
	struct ABP_Anomaly_Web_C_SpawnMeshes_Params
	{	};

	/**
	 * Function BP_Anomaly_Web.BP_Anomaly_Web_C.FindPoints
	 */
	struct ABP_Anomaly_Web_C_FindPoints_Params
	{
	public:
		bool                                                       HasValidPoint;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0JKX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector>                                     Points;                                                  // 0x0008(0x0010)  (Parm, OutParm)
		TArray<class AActor*>                                      Actors;                                                  // 0x0018(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Anomaly_Web.BP_Anomaly_Web_C.SplineMesh
	 */
	struct ABP_Anomaly_Web_C_SplineMesh_Params
	{	};

	/**
	 * Function BP_Anomaly_Web.BP_Anomaly_Web_C.FindPairofPoints
	 */
	struct ABP_Anomaly_Web_C_FindPairofPoints_Params
	{
	public:
		bool                                                       HasValidPair;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B59R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector>                                     Points;                                                  // 0x0008(0x0010)  (Parm, OutParm)
		TArray<class AActor*>                                      Actors;                                                  // 0x0018(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Anomaly_Web.BP_Anomaly_Web_C.Overlapped
	 */
	struct ABP_Anomaly_Web_C_Overlapped_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F1UB[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Anomaly_Web.BP_Anomaly_Web_C.PushToPoolActor
	 */
	struct ABP_Anomaly_Web_C_PushToPoolActor_Params
	{	};

	/**
	 * Function BP_Anomaly_Web.BP_Anomaly_Web_C.OnSetupEvent
	 */
	struct ABP_Anomaly_Web_C_OnSetupEvent_Params
	{	};

	/**
	 * Function BP_Anomaly_Web.BP_Anomaly_Web_C.ReceiveBeginPlay
	 */
	struct ABP_Anomaly_Web_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Anomaly_Web.BP_Anomaly_Web_C.ReceiveEndPlay
	 */
	struct ABP_Anomaly_Web_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Web.BP_Anomaly_Web_C.ExecuteUbergraph_BP_Anomaly_Web
	 */
	struct ABP_Anomaly_Web_C_ExecuteUbergraph_BP_Anomaly_Web_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
