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
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.GetCommand
	 */
	struct ABP_Char_Mimic_C_GetCommand_Params
	{
	public:
		ECharCommand                                               CurrentCommand;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N20X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.SetBotMovementMode
	 */
	struct ABP_Char_Mimic_C_SetBotMovementMode_Params
	{
	public:
		EBotMovementMode                                           MovementMode;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Changed;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.GetBotMovementMode
	 */
	struct ABP_Char_Mimic_C_GetBotMovementMode_Params
	{
	public:
		EBotMovementMode                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.GetBotShootingComponent
	 */
	struct ABP_Char_Mimic_C_GetBotShootingComponent_Params
	{
	public:
		class UActorComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.GetPatrolPath
	 */
	struct ABP_Char_Mimic_C_GetPatrolPath_Params
	{
	public:
		class USplineComponent*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.GetBoneTransform
	 */
	struct ABP_Char_Mimic_C_GetBoneTransform_Params
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QCSI[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.GetAliveStats
	 */
	struct ABP_Char_Mimic_C_GetAliveStats_Params
	{
	public:
		class UActorComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.GetIdleWalkDistance
	 */
	struct ABP_Char_Mimic_C_GetIdleWalkDistance_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.GetStealth
	 */
	struct ABP_Char_Mimic_C_GetStealth_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.GetSelection
	 */
	struct ABP_Char_Mimic_C_GetSelection_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.GetOptimalRange
	 */
	struct ABP_Char_Mimic_C_GetOptimalRange_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5H6D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.GetPerception
	 */
	struct ABP_Char_Mimic_C_GetPerception_Params
	{
	public:
		class UPRNpcPerceptionComponent*                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.MantleStart
	 */
	struct ABP_Char_Mimic_C_MantleStart_Params
	{
	public:
		float                                                      MantleHeight;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0EOE[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FALS_ComponentAndTransform                          MantleLedgeWS;                                           // 0x0010(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
		EMantleType                                                MantleType;                                              // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.RagdollEnd
	 */
	struct ABP_Char_Mimic_C_RagdollEnd_Params
	{	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.RagdollStart
	 */
	struct ABP_Char_Mimic_C_RagdollStart_Params
	{	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.GetGetUpAnimation
	 */
	struct ABP_Char_Mimic_C_GetGetUpAnimation_Params
	{
	public:
		bool                                                       RagdollFaceUp;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XEU4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.MantleEnd
	 */
	struct ABP_Char_Mimic_C_MantleEnd_Params
	{	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.GetRollAnimation
	 */
	struct ABP_Char_Mimic_C_GetRollAnimation_Params
	{
	public:
		class UAnimMontage*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.OnOverlayStateChanged
	 */
	struct ABP_Char_Mimic_C_OnOverlayStateChanged_Params
	{
	public:
		EOverlayState                                              NewOverLayState;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.BPI_Get_3P_TraceParams
	 */
	struct ABP_Char_Mimic_C_BPI_Get_3P_TraceParams_Params
	{
	public:
		struct FVector                                             TraceOrigin;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TraceRadius;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETraceTypeQuery                                            TraceChannel;                                            // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_61VV[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.GetMantleAsset
	 */
	struct ABP_Char_Mimic_C_GetMantleAsset_Params
	{
	public:
		EMantleType                                                MantleType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_76LZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMantle_Asset_FMantle_Asset                         ReturnValue;                                             // 0x0008(0x0038)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.BPI_Get_FP_CameraTarget
	 */
	struct ABP_Char_Mimic_C_BPI_Get_FP_CameraTarget_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.BPI_Get_3P_PivotTarget
	 */
	struct ABP_Char_Mimic_C_BPI_Get_3P_PivotTarget_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Char_Mimic_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Char_Mimic_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps Walking__FinishedFunc
	 */
	struct ABP_Char_Mimic_C_Footsteps_Walking__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps Walking__UpdateFunc
	 */
	struct ABP_Char_Mimic_C_Footsteps_Walking__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps Walking__Play footstep__EventFunc
	 */
	struct ABP_Char_Mimic_C_Footsteps_Walking__Play_footstep__EventFunc_Params
	{	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps RUnning__FinishedFunc
	 */
	struct ABP_Char_Mimic_C_Footsteps_RUnning__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps RUnning__UpdateFunc
	 */
	struct ABP_Char_Mimic_C_Footsteps_RUnning__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps RUnning__Play Footstep__EventFunc
	 */
	struct ABP_Char_Mimic_C_Footsteps_RUnning__Play_Footstep__EventFunc_Params
	{	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps Sprinting__FinishedFunc
	 */
	struct ABP_Char_Mimic_C_Footsteps_Sprinting__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps Sprinting__UpdateFunc
	 */
	struct ABP_Char_Mimic_C_Footsteps_Sprinting__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.Footsteps Sprinting__Play Footstep__EventFunc
	 */
	struct ABP_Char_Mimic_C_Footsteps_Sprinting__Play_Footstep__EventFunc_Params
	{	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.OnStart
	 */
	struct ABP_Char_Mimic_C_OnStart_Params
	{	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.ReceiveTick
	 */
	struct ABP_Char_Mimic_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.OnDeath
	 */
	struct ABP_Char_Mimic_C_OnDeath_Params
	{
	public:
		bool                                                       EnableRagdoll;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.PlayFootstepSound
	 */
	struct ABP_Char_Mimic_C_PlayFootstepSound_Params
	{	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.SetEnableAdditionalThings
	 */
	struct ABP_Char_Mimic_C_SetEnableAdditionalThings_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.SaveGameData
	 */
	struct ABP_Char_Mimic_C_SaveGameData_Params
	{	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.StartFootstepLoop
	 */
	struct ABP_Char_Mimic_C_StartFootstepLoop_Params
	{	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.StopFootstepLoop
	 */
	struct ABP_Char_Mimic_C_StopFootstepLoop_Params
	{	};

	/**
	 * Function BP_Char_Mimic.BP_Char_Mimic_C.ExecuteUbergraph_BP_Char_Mimic
	 */
	struct ABP_Char_Mimic_C_ExecuteUbergraph_BP_Char_Mimic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
