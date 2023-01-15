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
	 * Function BP_Char_Shade.BP_Char_Shade_C.UserConstructionScript
	 */
	struct ABP_Char_Shade_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Char_Shade.BP_Char_Shade_C.Footsteps Loop__FinishedFunc
	 */
	struct ABP_Char_Shade_C_Footsteps_Loop__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Char_Shade.BP_Char_Shade_C.Footsteps Loop__UpdateFunc
	 */
	struct ABP_Char_Shade_C_Footsteps_Loop__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Char_Shade.BP_Char_Shade_C.Footsteps Loop__Play Footstep__EventFunc
	 */
	struct ABP_Char_Shade_C_Footsteps_Loop__Play_Footstep__EventFunc_Params
	{	};

	/**
	 * Function BP_Char_Shade.BP_Char_Shade_C.ReceiveBeginPlay
	 */
	struct ABP_Char_Shade_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Char_Shade.BP_Char_Shade_C.BndEvt__AliveComp_K2Node_ComponentBoundEvent_5_HealthEnd__DelegateSignature
	 */
	struct ABP_Char_Shade_C_BndEvt__AliveComp_K2Node_ComponentBoundEvent_5_HealthEnd__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Char_Shade.BP_Char_Shade_C.SetEnableAdditionalThings
	 */
	struct ABP_Char_Shade_C_SetEnableAdditionalThings_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Shade.BP_Char_Shade_C.ReceiveEndPlay
	 */
	struct ABP_Char_Shade_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Shade.BP_Char_Shade_C.BndEvt__BP_Char_Shade_PerceptionComponent_K2Node_ComponentBoundEvent_0_OneParamActor__DelegateSignature
	 */
	struct ABP_Char_Shade_C_BndEvt__BP_Char_Shade_PerceptionComponent_K2Node_ComponentBoundEvent_0_OneParamActor__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Shade.BP_Char_Shade_C.BndEvt__BP_Char_Shade_PerceptionComponent_K2Node_ComponentBoundEvent_1_PlayerLostDelegate__DelegateSignature
	 */
	struct ABP_Char_Shade_C_BndEvt__BP_Char_Shade_PerceptionComponent_K2Node_ComponentBoundEvent_1_PlayerLostDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             LocLastSeen;                                             // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Shade.BP_Char_Shade_C.OnIdleCommandFinished
	 */
	struct ABP_Char_Shade_C_OnIdleCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Shade.BP_Char_Shade_C.OnWalkCommandFinished
	 */
	struct ABP_Char_Shade_C_OnWalkCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Shade.BP_Char_Shade_C.OnAttackCommandFinished
	 */
	struct ABP_Char_Shade_C_OnAttackCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Shade.BP_Char_Shade_C.PlayFootstepSound
	 */
	struct ABP_Char_Shade_C_PlayFootstepSound_Params
	{	};

	/**
	 * Function BP_Char_Shade.BP_Char_Shade_C.StartFootstepLoop
	 */
	struct ABP_Char_Shade_C_StartFootstepLoop_Params
	{	};

	/**
	 * Function BP_Char_Shade.BP_Char_Shade_C.StopFootstepLoop
	 */
	struct ABP_Char_Shade_C_StopFootstepLoop_Params
	{	};

	/**
	 * Function BP_Char_Shade.BP_Char_Shade_C.ExecuteUbergraph_BP_Char_Shade
	 */
	struct ABP_Char_Shade_C_ExecuteUbergraph_BP_Char_Shade_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5N5B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
