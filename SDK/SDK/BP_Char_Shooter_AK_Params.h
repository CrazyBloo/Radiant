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
	 * Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.UserConstructionScript
	 */
	struct ABP_Char_Shooter_AK_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.StartFootstepLoop
	 */
	struct ABP_Char_Shooter_AK_C_StartFootstepLoop_Params
	{	};

	/**
	 * Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.StopFootstepLoop
	 */
	struct ABP_Char_Shooter_AK_C_StopFootstepLoop_Params
	{	};

	/**
	 * Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.LoadAdditionalSettings
	 */
	struct ABP_Char_Shooter_AK_C_LoadAdditionalSettings_Params
	{	};

	/**
	 * Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.SetEnableAdditionalThings
	 */
	struct ABP_Char_Shooter_AK_C_SetEnableAdditionalThings_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.BndEvt__FireArmedComponent_K2Node_ComponentBoundEvent_2_OnShotsLimitEvent__DelegateSignature
	 */
	struct ABP_Char_Shooter_AK_C_BndEvt__FireArmedComponent_K2Node_ComponentBoundEvent_2_OnShotsLimitEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.SetCommand
	 */
	struct ABP_Char_Shooter_AK_C_SetCommand_Params
	{
	public:
		ECharCommand                                               NewCommand;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Force;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.ProcessDamage
	 */
	struct ABP_Char_Shooter_AK_C_ProcessDamage_Params
	{
	public:
		class AActor*                                              causer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.ReceiveEndPlay
	 */
	struct ABP_Char_Shooter_AK_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.OnDeath
	 */
	struct ABP_Char_Shooter_AK_C_OnDeath_Params
	{
	public:
		bool                                                       EnableRagdoll;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.CoverResult
	 */
	struct ABP_Char_Shooter_AK_C_CoverResult_Params
	{
	public:
		class UEnvQueryInstanceBlueprintWrapper*                   QueryInstance;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEnvQueryStatus                                            QueryStatus;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.FindCover
	 */
	struct ABP_Char_Shooter_AK_C_FindCover_Params
	{	};

	/**
	 * Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.Wait
	 */
	struct ABP_Char_Shooter_AK_C_Wait_Params
	{	};

	/**
	 * Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.BndEvt__BP_Char_Shooter_AK_PerceptionComponent_K2Node_ComponentBoundEvent_0_OneParamActor__DelegateSignature
	 */
	struct ABP_Char_Shooter_AK_C_BndEvt__BP_Char_Shooter_AK_PerceptionComponent_K2Node_ComponentBoundEvent_0_OneParamActor__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.BndEvt__BP_Char_Shooter_AK_PerceptionComponent_K2Node_ComponentBoundEvent_1_PlayerLostDelegate__DelegateSignature
	 */
	struct ABP_Char_Shooter_AK_C_BndEvt__BP_Char_Shooter_AK_PerceptionComponent_K2Node_ComponentBoundEvent_1_PlayerLostDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             LocLastSeen;                                             // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.OnWalkCommandStarted
	 */
	struct ABP_Char_Shooter_AK_C_OnWalkCommandStarted_Params
	{	};

	/**
	 * Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.OnIdleCommandStarted
	 */
	struct ABP_Char_Shooter_AK_C_OnIdleCommandStarted_Params
	{	};

	/**
	 * Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.OnIdleCommandFinished
	 */
	struct ABP_Char_Shooter_AK_C_OnIdleCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.OnAttackCommandStarted
	 */
	struct ABP_Char_Shooter_AK_C_OnAttackCommandStarted_Params
	{	};

	/**
	 * Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.OnAttackCommandFinished
	 */
	struct ABP_Char_Shooter_AK_C_OnAttackCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.OnWalkCommandFinished
	 */
	struct ABP_Char_Shooter_AK_C_OnWalkCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.PlayFootstepSound
	 */
	struct ABP_Char_Shooter_AK_C_PlayFootstepSound_Params
	{	};

	/**
	 * Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.ExecuteUbergraph_BP_Char_Shooter_AK
	 */
	struct ABP_Char_Shooter_AK_C_ExecuteUbergraph_BP_Char_Shooter_AK_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
