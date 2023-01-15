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
	 * Function BP_Mission_Artifact_7.BP_Mission_Artifact_6_C.ApplyEffect
	 */
	struct ABP_Mission_Artifact_6_C_ApplyEffect_Params
	{	};

	/**
	 * Function BP_Mission_Artifact_7.BP_Mission_Artifact_6_C.OnUsed
	 */
	struct ABP_Mission_Artifact_6_C_OnUsed_Params
	{	};

	/**
	 * Function BP_Mission_Artifact_7.BP_Mission_Artifact_6_C.OnEndUsed
	 */
	struct ABP_Mission_Artifact_6_C_OnEndUsed_Params
	{	};

	/**
	 * Function BP_Mission_Artifact_7.BP_Mission_Artifact_6_C.ReceiveTick
	 */
	struct ABP_Mission_Artifact_6_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Mission_Artifact_7.BP_Mission_Artifact_6_C.MakeVisible
	 */
	struct ABP_Mission_Artifact_6_C_MakeVisible_Params
	{
	public:
		bool                                                       NoGlow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       dropItem;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Mission_Artifact_7.BP_Mission_Artifact_6_C.OnStart
	 */
	struct ABP_Mission_Artifact_6_C_OnStart_Params
	{	};

	/**
	 * Function BP_Mission_Artifact_7.BP_Mission_Artifact_6_C.ExecuteUbergraph_BP_Mission_Artifact_7
	 */
	struct ABP_Mission_Artifact_6_C_ExecuteUbergraph_BP_Mission_Artifact_7_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
