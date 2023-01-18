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
	 * Function BP_Optics_Monocular.BP_Optics_Monocular_C.UserConstructionScript
	 */
	struct ABP_Optics_Monocular_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Optics_Monocular.BP_Optics_Monocular_C.ReceiveTick
	 */
	struct ABP_Optics_Monocular_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Optics_Monocular.BP_Optics_Monocular_C.ThumbUp
	 */
	struct ABP_Optics_Monocular_C_ThumbUp_Params
	{	};

	/**
	 * Function BP_Optics_Monocular.BP_Optics_Monocular_C.EjectMag
	 */
	struct ABP_Optics_Monocular_C_EjectMag_Params
	{	};

	/**
	 * Function BP_Optics_Monocular.BP_Optics_Monocular_C.OnGrip
	 */
	struct ABP_Optics_Monocular_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H8CR[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Optics_Monocular.BP_Optics_Monocular_C.OnGripRelease
	 */
	struct ABP_Optics_Monocular_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H8T9[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Optics_Monocular.BP_Optics_Monocular_C.ReceiveBeginPlay
	 */
	struct ABP_Optics_Monocular_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Optics_Monocular.BP_Optics_Monocular_C.ExecuteUbergraph_BP_Optics_Monocular
	 */
	struct ABP_Optics_Monocular_C_ExecuteUbergraph_BP_Optics_Monocular_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4YNT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
