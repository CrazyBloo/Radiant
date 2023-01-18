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
	 * Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.GetThrowVelocity
	 */
	struct ABP_Probes_ShellsPouch_C_GetThrowVelocity_Params
	{
	public:
		float                                                      Multiplier;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             CurrentAvrgLinVel;                                       // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             CurentAvrgAnglVel;                                       // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.SpawnProbe
	 */
	struct ABP_Probes_ShellsPouch_C_SpawnProbe_Params
	{
	public:
		class AActor*                                              SpawnedProbe;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.OnUsed
	 */
	struct ABP_Probes_ShellsPouch_C_OnUsed_Params
	{	};

	/**
	 * Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.OnEndUsed
	 */
	struct ABP_Probes_ShellsPouch_C_OnEndUsed_Params
	{	};

	/**
	 * Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.ReceiveTick
	 */
	struct ABP_Probes_ShellsPouch_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.ThrowItem
	 */
	struct ABP_Probes_ShellsPouch_C_ThrowItem_Params
	{	};

	/**
	 * Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.OnGripRelease
	 */
	struct ABP_Probes_ShellsPouch_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2AK6[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.StopUse
	 */
	struct ABP_Probes_ShellsPouch_C_StopUse_Params
	{	};

	/**
	 * Function BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C.ExecuteUbergraph_BP_Probes_ShellsPouch
	 */
	struct ABP_Probes_ShellsPouch_C_ExecuteUbergraph_BP_Probes_ShellsPouch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
