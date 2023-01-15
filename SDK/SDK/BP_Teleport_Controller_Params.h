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
	 * Function BP_Teleport_Controller.BP_Teleport_Controller_C.GetTraceStartComponent
	 */
	struct ABP_Teleport_Controller_C_GetTraceStartComponent_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Teleport_Controller.BP_Teleport_Controller_C.GetMotionController
	 */
	struct ABP_Teleport_Controller_C_GetMotionController_Params
	{
	public:
		class UGripMotionControllerComponent*                      Controller;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Teleport_Controller.BP_Teleport_Controller_C.GetVRLocation
	 */
	struct ABP_Teleport_Controller_C_GetVRLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LU3U[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Teleport_Controller.BP_Teleport_Controller_C.TeleportHandle
	 */
	struct ABP_Teleport_Controller_C_TeleportHandle_Params
	{
	public:
		float                                                      ForwardBackwardAxis;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KLGB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Teleport_Controller.BP_Teleport_Controller_C.ToggleTick
	 */
	struct ABP_Teleport_Controller_C_ToggleTick_Params
	{	};

	/**
	 * Function BP_Teleport_Controller.BP_Teleport_Controller_C.GetTeleWorldLocAndForwardVector
	 */
	struct ABP_Teleport_Controller_C_GetTeleWorldLocAndForwardVector_Params
	{
	public:
		struct FVector                                             WorldLoc;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ForwardVector;                                           // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Teleport_Controller.BP_Teleport_Controller_C.GetTeleportDestination
	 */
	struct ABP_Teleport_Controller_C_GetTeleportDestination_Params
	{
	public:
		bool                                                       RelativeToHMD;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4QA2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Teleport_Controller.BP_Teleport_Controller_C.UpdateArcEndpoint
	 */
	struct ABP_Teleport_Controller_C_UpdateArcEndpoint_Params
	{
	public:
		struct FVector                                             NewLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ValidLocationFound;                                      // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AZJ5[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Teleport_Controller.BP_Teleport_Controller_C.UpdateArcSpline
	 */
	struct ABP_Teleport_Controller_C_UpdateArcSpline_Params
	{
	public:
		bool                                                       FoundValidLocation;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PJUJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector>                                     SplinePoints;                                            // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Teleport_Controller.BP_Teleport_Controller_C.ClearArc
	 */
	struct ABP_Teleport_Controller_C_ClearArc_Params
	{	};

	/**
	 * Function BP_Teleport_Controller.BP_Teleport_Controller_C.TraceTeleportDestination
	 */
	struct ABP_Teleport_Controller_C_TraceTeleportDestination_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S4TH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector>                                     TracePoints;                                             // 0x0008(0x0010)  (Parm, OutParm)
		struct FVector                                             TraceLocation;                                           // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Teleport_Controller.BP_Teleport_Controller_C.DisableTeleporter
	 */
	struct ABP_Teleport_Controller_C_DisableTeleporter_Params
	{	};

	/**
	 * Function BP_Teleport_Controller.BP_Teleport_Controller_C.ActivateTeleporter
	 */
	struct ABP_Teleport_Controller_C_ActivateTeleporter_Params
	{	};

	/**
	 * Function BP_Teleport_Controller.BP_Teleport_Controller_C.RumbleController
	 */
	struct ABP_Teleport_Controller_C_RumbleController_Params
	{
	public:
		float                                                      Intensity;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Teleport_Controller.BP_Teleport_Controller_C.ReceiveTick
	 */
	struct ABP_Teleport_Controller_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Teleport_Controller.BP_Teleport_Controller_C.ReceiveBeginPlay
	 */
	struct ABP_Teleport_Controller_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Teleport_Controller.BP_Teleport_Controller_C.ReceiveEndPlay
	 */
	struct ABP_Teleport_Controller_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Teleport_Controller.BP_Teleport_Controller_C.TickArc
	 */
	struct ABP_Teleport_Controller_C_TickArc_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Teleport_Controller.BP_Teleport_Controller_C.ExecuteUbergraph_BP_Teleport_Controller
	 */
	struct ABP_Teleport_Controller_C_ExecuteUbergraph_BP_Teleport_Controller_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G8D6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
