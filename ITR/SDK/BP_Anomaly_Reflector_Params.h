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
	 * Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.ProcessNonplayerTargetList
	 */
	struct ABP_Anomaly_Reflector_C_ProcessNonplayerTargetList_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.Handle Nonplayer Interaction
	 */
	struct ABP_Anomaly_Reflector_C_HandleNonplayerInteraction_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.NonplayerPostRotation
	 */
	struct ABP_Anomaly_Reflector_C_NonplayerPostRotation_Params
	{
	public:
		struct FReflectorAnomlyNonplayerTarget                     Target;                                                  // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.IsItemHeldOrAttached
	 */
	struct ABP_Anomaly_Reflector_C_IsItemHeldOrAttached_Params
	{
	public:
		class ARadiusItemActor*                                    Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HeldOrAttached;                                          // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6G2O[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.CalcShootPosition
	 */
	struct ABP_Anomaly_Reflector_C_CalcShootPosition_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             LocOut;                                                  // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.UserConstructionScript
	 */
	struct ABP_Anomaly_Reflector_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.SpawnBeam
	 */
	struct ABP_Anomaly_Reflector_C_SpawnBeam_Params
	{
	public:
		struct FVector                                             vel;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Loc;                                                     // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.ThrowBack
	 */
	struct ABP_Anomaly_Reflector_C_ThrowBack_Params
	{
	public:
		struct FVector                                             vel;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Loc;                                                     // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.Process
	 */
	struct ABP_Anomaly_Reflector_C_Process_Params
	{
	public:
		class AActor*                                              OverlappingActor;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.VisualTrigger
	 */
	struct ABP_Anomaly_Reflector_C_VisualTrigger_Params
	{	};

	/**
	 * Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.ReceiveTick
	 */
	struct ABP_Anomaly_Reflector_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.OnLevelStarted
	 */
	struct ABP_Anomaly_Reflector_C_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.OnSetupEvent
	 */
	struct ABP_Anomaly_Reflector_C_OnSetupEvent_Params
	{	};

	/**
	 * Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.PopFromPoolActor
	 */
	struct ABP_Anomaly_Reflector_C_PopFromPoolActor_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.PushToPoolActor
	 */
	struct ABP_Anomaly_Reflector_C_PushToPoolActor_Params
	{	};

	/**
	 * Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.AnomalyTriggered
	 */
	struct ABP_Anomaly_Reflector_C_AnomalyTriggered_Params
	{	};

	/**
	 * Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.OverlapStartingTriggered
	 */
	struct ABP_Anomaly_Reflector_C_OverlapStartingTriggered_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Anomaly_Reflector.BP_Anomaly_Reflector_C.ExecuteUbergraph_BP_Anomaly_Reflector
	 */
	struct ABP_Anomaly_Reflector_C_ExecuteUbergraph_BP_Anomaly_Reflector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P9W5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
