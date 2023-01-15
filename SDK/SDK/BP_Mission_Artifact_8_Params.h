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
	 * Function BP_Mission_Artifact_8.BP_Mission_Artifact_7_C.ApplyEffect
	 */
	struct ABP_Mission_Artifact_7_C_ApplyEffect_Params
	{	};

	/**
	 * Function BP_Mission_Artifact_8.BP_Mission_Artifact_7_C.OnGripRelease
	 */
	struct ABP_Mission_Artifact_7_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1OZU[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Mission_Artifact_8.BP_Mission_Artifact_7_C.OnUsed
	 */
	struct ABP_Mission_Artifact_7_C_OnUsed_Params
	{	};

	/**
	 * Function BP_Mission_Artifact_8.BP_Mission_Artifact_7_C.ReceiveEndPlay
	 */
	struct ABP_Mission_Artifact_7_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Mission_Artifact_8.BP_Mission_Artifact_7_C.StopUse
	 */
	struct ABP_Mission_Artifact_7_C_StopUse_Params
	{	};

	/**
	 * Function BP_Mission_Artifact_8.BP_Mission_Artifact_7_C.ExecuteUbergraph_BP_Mission_Artifact_8
	 */
	struct ABP_Mission_Artifact_7_C_ExecuteUbergraph_BP_Mission_Artifact_8_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WXUB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
