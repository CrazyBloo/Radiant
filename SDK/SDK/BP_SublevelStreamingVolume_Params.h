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
	 * Function BP_SublevelStreamingVolume.BP_SublevelStreamingVolume_C.FixScale
	 */
	struct ABP_SublevelStreamingVolume_C_FixScale_Params
	{	};

	/**
	 * Function BP_SublevelStreamingVolume.BP_SublevelStreamingVolume_C.UserConstructionScript
	 */
	struct ABP_SublevelStreamingVolume_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_SublevelStreamingVolume.BP_SublevelStreamingVolume_C.OnLevelStarted
	 */
	struct ABP_SublevelStreamingVolume_C_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SublevelStreamingVolume.BP_SublevelStreamingVolume_C.CheckPlayerTimerEvent
	 */
	struct ABP_SublevelStreamingVolume_C_CheckPlayerTimerEvent_Params
	{	};

	/**
	 * Function BP_SublevelStreamingVolume.BP_SublevelStreamingVolume_C.CheckAndShowSublevels
	 */
	struct ABP_SublevelStreamingVolume_C_CheckAndShowSublevels_Params
	{
	public:
		struct FVector                                             Point;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Coefficient;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SublevelStreamingVolume.BP_SublevelStreamingVolume_C.ExecuteUbergraph_BP_SublevelStreamingVolume
	 */
	struct ABP_SublevelStreamingVolume_C_ExecuteUbergraph_BP_SublevelStreamingVolume_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_68T6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
