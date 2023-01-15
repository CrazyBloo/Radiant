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
	 * Function BP_OilSpray.BP_OilSpray_C.CheckWidgetInteraction
	 */
	struct ABP_OilSpray_C_CheckWidgetInteraction_Params
	{
	public:
		bool                                                       IsWidgetInteraction;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OilSpray.BP_OilSpray_C.ReceiveBeginPlay
	 */
	struct ABP_OilSpray_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_OilSpray.BP_OilSpray_C.ReceiveTick
	 */
	struct ABP_OilSpray_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_OilSpray.BP_OilSpray_C.OnUsed
	 */
	struct ABP_OilSpray_C_OnUsed_Params
	{	};

	/**
	 * Function BP_OilSpray.BP_OilSpray_C.OnEndUsed
	 */
	struct ABP_OilSpray_C_OnEndUsed_Params
	{	};

	/**
	 * Function BP_OilSpray.BP_OilSpray_C.OnGripRelease
	 */
	struct ABP_OilSpray_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EUI5[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OilSpray.BP_OilSpray_C.ToggleFX
	 */
	struct ABP_OilSpray_C_ToggleFX_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_OilSpray.BP_OilSpray_C.ExecuteUbergraph_BP_OilSpray
	 */
	struct ABP_OilSpray_C_ExecuteUbergraph_BP_OilSpray_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
