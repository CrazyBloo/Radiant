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
	 * Function BP_Anomaly_Distortion.BP_Anomaly_Distortion_C.SetupVisual
	 */
	struct ABP_Anomaly_Distortion_C_SetupVisual_Params
	{	};

	/**
	 * Function BP_Anomaly_Distortion.BP_Anomaly_Distortion_C.Turn Fx Off
	 */
	struct ABP_Anomaly_Distortion_C_TurnFxOff_Params
	{	};

	/**
	 * Function BP_Anomaly_Distortion.BP_Anomaly_Distortion_C.UserConstructionScript
	 */
	struct ABP_Anomaly_Distortion_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Anomaly_Distortion.BP_Anomaly_Distortion_C.OnLevelStarted
	 */
	struct ABP_Anomaly_Distortion_C_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Distortion.BP_Anomaly_Distortion_C.Interact With Actors
	 */
	struct ABP_Anomaly_Distortion_C_InteractWithActors_Params
	{	};

	/**
	 * Function BP_Anomaly_Distortion.BP_Anomaly_Distortion_C.OnOverlapTimer
	 */
	struct ABP_Anomaly_Distortion_C_OnOverlapTimer_Params
	{	};

	/**
	 * Function BP_Anomaly_Distortion.BP_Anomaly_Distortion_C.OnSetupEvent
	 */
	struct ABP_Anomaly_Distortion_C_OnSetupEvent_Params
	{	};

	/**
	 * Function BP_Anomaly_Distortion.BP_Anomaly_Distortion_C.PopFromPoolActor
	 */
	struct ABP_Anomaly_Distortion_C_PopFromPoolActor_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Anomaly_Distortion.BP_Anomaly_Distortion_C.PushToPoolActor
	 */
	struct ABP_Anomaly_Distortion_C_PushToPoolActor_Params
	{	};

	/**
	 * Function BP_Anomaly_Distortion.BP_Anomaly_Distortion_C.AnomalyTriggered
	 */
	struct ABP_Anomaly_Distortion_C_AnomalyTriggered_Params
	{	};

	/**
	 * Function BP_Anomaly_Distortion.BP_Anomaly_Distortion_C.OverlapLeavingTriggered
	 */
	struct ABP_Anomaly_Distortion_C_OverlapLeavingTriggered_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Distortion.BP_Anomaly_Distortion_C.PlaySound
	 */
	struct ABP_Anomaly_Distortion_C_PlaySound_Params
	{	};

	/**
	 * Function BP_Anomaly_Distortion.BP_Anomaly_Distortion_C.ExecuteUbergraph_BP_Anomaly_Distortion
	 */
	struct ABP_Anomaly_Distortion_C_ExecuteUbergraph_BP_Anomaly_Distortion_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
