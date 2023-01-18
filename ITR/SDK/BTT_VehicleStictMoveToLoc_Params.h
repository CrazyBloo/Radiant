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
	 * Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.CalcThrottle
	 */
	struct UBTT_VehicleStictMoveToLoc_C_CalcThrottle_Params
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Throttle;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Break;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.CalcSteering
	 */
	struct UBTT_VehicleStictMoveToLoc_C_CalcSteering_Params
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Steering;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.Event Reverse
	 */
	struct UBTT_VehicleStictMoveToLoc_C_EventReverse_Params
	{	};

	/**
	 * Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.ReverseCalcs
	 */
	struct UBTT_VehicleStictMoveToLoc_C_ReverseCalcs_Params
	{	};

	/**
	 * Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.ReceiveExecuteAI
	 */
	struct UBTT_VehicleStictMoveToLoc_C_ReceiveExecuteAI_Params
	{
	public:
		class AAIController*                                       OwnerController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.CustomEvent
	 */
	struct UBTT_VehicleStictMoveToLoc_C_CustomEvent_Params
	{	};

	/**
	 * Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.Continue
	 */
	struct UBTT_VehicleStictMoveToLoc_C_Continue_Params
	{	};

	/**
	 * Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.ExecuteUbergraph_BTT_VehicleStictMoveToLoc
	 */
	struct UBTT_VehicleStictMoveToLoc_C_ExecuteUbergraph_BTT_VehicleStictMoveToLoc_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3M44[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
