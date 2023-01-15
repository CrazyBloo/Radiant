﻿#pragma once

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
	 * Function BP_Artifact_Grail.BP_Artifact_Grail_C.ApplyEffect
	 */
	struct ABP_Artifact_Grail_C_ApplyEffect_Params
	{	};

	/**
	 * Function BP_Artifact_Grail.BP_Artifact_Grail_C.OnGripRelease
	 */
	struct ABP_Artifact_Grail_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CDOV[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Artifact_Grail.BP_Artifact_Grail_C.OnUsed
	 */
	struct ABP_Artifact_Grail_C_OnUsed_Params
	{	};

	/**
	 * Function BP_Artifact_Grail.BP_Artifact_Grail_C.OnEndUsed
	 */
	struct ABP_Artifact_Grail_C_OnEndUsed_Params
	{	};

	/**
	 * Function BP_Artifact_Grail.BP_Artifact_Grail_C.ReceiveTick
	 */
	struct ABP_Artifact_Grail_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Artifact_Grail.BP_Artifact_Grail_C.OnGrip
	 */
	struct ABP_Artifact_Grail_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_371L[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Artifact_Grail.BP_Artifact_Grail_C.MakeVisible
	 */
	struct ABP_Artifact_Grail_C_MakeVisible_Params
	{
	public:
		bool                                                       NoGlow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       dropItem;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Artifact_Grail.BP_Artifact_Grail_C.OnStart
	 */
	struct ABP_Artifact_Grail_C_OnStart_Params
	{	};

	/**
	 * Function BP_Artifact_Grail.BP_Artifact_Grail_C.ExecuteUbergraph_BP_Artifact_Grail
	 */
	struct ABP_Artifact_Grail_C_ExecuteUbergraph_BP_Artifact_Grail_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
