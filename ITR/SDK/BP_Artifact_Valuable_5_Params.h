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
	 * Function BP_Artifact_Valuable_5.BP_Artifact_Valuable_4_C.ApplyEffect
	 */
	struct ABP_Artifact_Valuable_4_C_ApplyEffect_Params
	{	};

	/**
	 * Function BP_Artifact_Valuable_5.BP_Artifact_Valuable_4_C.OnGripRelease
	 */
	struct ABP_Artifact_Valuable_4_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2Z5C[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Artifact_Valuable_5.BP_Artifact_Valuable_4_C.OnUsed
	 */
	struct ABP_Artifact_Valuable_4_C_OnUsed_Params
	{	};

	/**
	 * Function BP_Artifact_Valuable_5.BP_Artifact_Valuable_4_C.ReceiveEndPlay
	 */
	struct ABP_Artifact_Valuable_4_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Artifact_Valuable_5.BP_Artifact_Valuable_4_C.StopUse
	 */
	struct ABP_Artifact_Valuable_4_C_StopUse_Params
	{	};

	/**
	 * Function BP_Artifact_Valuable_5.BP_Artifact_Valuable_4_C.ExecuteUbergraph_BP_Artifact_Valuable_5
	 */
	struct ABP_Artifact_Valuable_4_C_ExecuteUbergraph_BP_Artifact_Valuable_5_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5KJZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
