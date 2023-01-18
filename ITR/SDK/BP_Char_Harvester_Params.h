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
	 * Function BP_Char_Harvester.BP_Char_Harvester_C.ReceiveTick
	 */
	struct ABP_Char_Harvester_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Harvester.BP_Char_Harvester_C.LoadAdditionalSettings
	 */
	struct ABP_Char_Harvester_C_LoadAdditionalSettings_Params
	{	};

	/**
	 * Function BP_Char_Harvester.BP_Char_Harvester_C.BndEvt__AliveComp_K2Node_ComponentBoundEvent_6_HealthEnd__DelegateSignature
	 */
	struct ABP_Char_Harvester_C_BndEvt__AliveComp_K2Node_ComponentBoundEvent_6_HealthEnd__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Char_Harvester.BP_Char_Harvester_C.SetEnableAdditionalThings
	 */
	struct ABP_Char_Harvester_C_SetEnableAdditionalThings_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Harvester.BP_Char_Harvester_C.ReceiveEndPlay
	 */
	struct ABP_Char_Harvester_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Harvester.BP_Char_Harvester_C.CustomEvent_1
	 */
	struct ABP_Char_Harvester_C_CustomEvent_1_Params
	{	};

	/**
	 * Function BP_Char_Harvester.BP_Char_Harvester_C.BndEvt__BP_Char_Harvester_PerceptionComponent_K2Node_ComponentBoundEvent_1_OneParamActor__DelegateSignature
	 */
	struct ABP_Char_Harvester_C_BndEvt__BP_Char_Harvester_PerceptionComponent_K2Node_ComponentBoundEvent_1_OneParamActor__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Harvester.BP_Char_Harvester_C.BndEvt__BP_Char_Harvester_PerceptionComponent_K2Node_ComponentBoundEvent_2_PlayerLostDelegate__DelegateSignature
	 */
	struct ABP_Char_Harvester_C_BndEvt__BP_Char_Harvester_PerceptionComponent_K2Node_ComponentBoundEvent_2_PlayerLostDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             LocLastSeen;                                             // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Harvester.BP_Char_Harvester_C.OnAttackCommandStarted
	 */
	struct ABP_Char_Harvester_C_OnAttackCommandStarted_Params
	{	};

	/**
	 * Function BP_Char_Harvester.BP_Char_Harvester_C.OnIdleCommandFinished
	 */
	struct ABP_Char_Harvester_C_OnIdleCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Harvester.BP_Char_Harvester_C.OnWalkCommandFinished
	 */
	struct ABP_Char_Harvester_C_OnWalkCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Harvester.BP_Char_Harvester_C.OnAttackCommandFinished
	 */
	struct ABP_Char_Harvester_C_OnAttackCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Harvester.BP_Char_Harvester_C.ExecuteUbergraph_BP_Char_Harvester
	 */
	struct ABP_Char_Harvester_C_ExecuteUbergraph_BP_Char_Harvester_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
