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
	 * Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.GetBrushingSpeed
	 */
	struct ABP_Cleaner_Brush_C_GetBrushingSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.MakeBrushingSound
	 */
	struct ABP_Cleaner_Brush_C_MakeBrushingSound_Params
	{	};

	/**
	 * Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.DoRepairPc
	 */
	struct ABP_Cleaner_Brush_C_DoRepairPc_Params
	{
	public:
		struct FHitResult                                          TraceResult;                                             // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		float                                                      DeltaTime;                                               // 0x0088(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.DoRepairQuest
	 */
	struct ABP_Cleaner_Brush_C_DoRepairQuest_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.OnGrip
	 */
	struct ABP_Cleaner_Brush_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NXWY[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.ReceiveBeginPlay
	 */
	struct ABP_Cleaner_Brush_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.OnGripRelease
	 */
	struct ABP_Cleaner_Brush_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JPGI[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.ReceiveTick
	 */
	struct ABP_Cleaner_Brush_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.ExecuteUbergraph_BP_Cleaner_Brush
	 */
	struct ABP_Cleaner_Brush_C_ExecuteUbergraph_BP_Cleaner_Brush_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9SEU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
