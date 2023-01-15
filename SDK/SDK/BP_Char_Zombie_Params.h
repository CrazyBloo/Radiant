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
	 * Function BP_Char_Zombie.BP_Char_Zombie_C.UserConstructionScript
	 */
	struct ABP_Char_Zombie_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Char_Zombie.BP_Char_Zombie_C.TimelineFX__FinishedFunc
	 */
	struct ABP_Char_Zombie_C_TimelineFX__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Char_Zombie.BP_Char_Zombie_C.TimelineFX__UpdateFunc
	 */
	struct ABP_Char_Zombie_C_TimelineFX__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Char_Zombie.BP_Char_Zombie_C.SetEnableAdditionalThings
	 */
	struct ABP_Char_Zombie_C_SetEnableAdditionalThings_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Zombie.BP_Char_Zombie_C.BndEvt__TeleportToPOISkillComponent_K2Node_ComponentBoundEvent_0_OnTeleportStart__DelegateSignature
	 */
	struct ABP_Char_Zombie_C_BndEvt__TeleportToPOISkillComponent_K2Node_ComponentBoundEvent_0_OnTeleportStart__DelegateSignature_Params
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time;                                                    // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Zombie.BP_Char_Zombie_C.BndEvt__TeleportToPOISkillComponent_K2Node_ComponentBoundEvent_1_OnTeleportFinish__DelegateSignature
	 */
	struct ABP_Char_Zombie_C_BndEvt__TeleportToPOISkillComponent_K2Node_ComponentBoundEvent_1_OnTeleportFinish__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Char_Zombie.BP_Char_Zombie_C.StopFootstepLoop
	 */
	struct ABP_Char_Zombie_C_StopFootstepLoop_Params
	{	};

	/**
	 * Function BP_Char_Zombie.BP_Char_Zombie_C.StartFootstepLoop
	 */
	struct ABP_Char_Zombie_C_StartFootstepLoop_Params
	{	};

	/**
	 * Function BP_Char_Zombie.BP_Char_Zombie_C.BndEvt__MeleeOnceAttackComponent_K2Node_ComponentBoundEvent_0_OnTargetHit__DelegateSignature
	 */
	struct ABP_Char_Zombie_C_BndEvt__MeleeOnceAttackComponent_K2Node_ComponentBoundEvent_0_OnTargetHit__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Char_Zombie.BP_Char_Zombie_C.ReceiveEndPlay
	 */
	struct ABP_Char_Zombie_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Zombie.BP_Char_Zombie_C.OnDeath
	 */
	struct ABP_Char_Zombie_C_OnDeath_Params
	{
	public:
		bool                                                       EnableRagdoll;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Zombie.BP_Char_Zombie_C.BndEvt__BP_Char_Zombie_PerceptionComponent_K2Node_ComponentBoundEvent_2_OneParamActor__DelegateSignature
	 */
	struct ABP_Char_Zombie_C_BndEvt__BP_Char_Zombie_PerceptionComponent_K2Node_ComponentBoundEvent_2_OneParamActor__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Zombie.BP_Char_Zombie_C.BndEvt__BP_Char_Zombie_PerceptionComponent_K2Node_ComponentBoundEvent_4_PlayerLostDelegate__DelegateSignature
	 */
	struct ABP_Char_Zombie_C_BndEvt__BP_Char_Zombie_PerceptionComponent_K2Node_ComponentBoundEvent_4_PlayerLostDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             LocLastSeen;                                             // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Zombie.BP_Char_Zombie_C.OnWalkCommandFinished
	 */
	struct ABP_Char_Zombie_C_OnWalkCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Zombie.BP_Char_Zombie_C.OnAttackCommandStarted
	 */
	struct ABP_Char_Zombie_C_OnAttackCommandStarted_Params
	{	};

	/**
	 * Function BP_Char_Zombie.BP_Char_Zombie_C.OnIdleCommandStarted
	 */
	struct ABP_Char_Zombie_C_OnIdleCommandStarted_Params
	{	};

	/**
	 * Function BP_Char_Zombie.BP_Char_Zombie_C.OnAttackCommandFinished
	 */
	struct ABP_Char_Zombie_C_OnAttackCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Zombie.BP_Char_Zombie_C.PlayFootstepSound
	 */
	struct ABP_Char_Zombie_C_PlayFootstepSound_Params
	{	};

	/**
	 * Function BP_Char_Zombie.BP_Char_Zombie_C.ExecuteUbergraph_BP_Char_Zombie
	 */
	struct ABP_Char_Zombie_C_ExecuteUbergraph_BP_Char_Zombie_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
