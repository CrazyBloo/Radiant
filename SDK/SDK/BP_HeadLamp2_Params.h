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
	 * Function BP_HeadLamp2.BP_HeadLamp2_C.TurnOffLightHelper
	 */
	struct ABP_HeadLamp2_C_TurnOffLightHelper_Params
	{	};

	/**
	 * Function BP_HeadLamp2.BP_HeadLamp2_C.TurnOffBasedOnFlashlightType
	 */
	struct ABP_HeadLamp2_C_TurnOffBasedOnFlashlightType_Params
	{	};

	/**
	 * Function BP_HeadLamp2.BP_HeadLamp2_C.OnUsed
	 */
	struct ABP_HeadLamp2_C_OnUsed_Params
	{	};

	/**
	 * Function BP_HeadLamp2.BP_HeadLamp2_C.OnChildGrip
	 */
	struct ABP_HeadLamp2_C_OnChildGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M8XL[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_HeadLamp2.BP_HeadLamp2_C.OnChildGripRelease
	 */
	struct ABP_HeadLamp2_C_OnChildGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2HER[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HeadLamp2.BP_HeadLamp2_C.ThumbLeft
	 */
	struct ABP_HeadLamp2_C_ThumbLeft_Params
	{	};

	/**
	 * Function BP_HeadLamp2.BP_HeadLamp2_C.OnGripRelease
	 */
	struct ABP_HeadLamp2_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D8ML[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HeadLamp2.BP_HeadLamp2_C.TurnOffBasedOnLightType
	 */
	struct ABP_HeadLamp2_C_TurnOffBasedOnLightType_Params
	{	};

	/**
	 * Function BP_HeadLamp2.BP_HeadLamp2_C.ExecuteUbergraph_BP_HeadLamp2
	 */
	struct ABP_HeadLamp2_C_ExecuteUbergraph_BP_HeadLamp2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
