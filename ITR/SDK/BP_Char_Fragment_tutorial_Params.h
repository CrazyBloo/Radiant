﻿#pragma once

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
	 * Function BP_Char_Fragment_tutorial.BP_Char_Fragment_tutorial_C.IsAttacksLocked
	 */
	struct ABP_Char_Fragment_tutorial_C_IsAttacksLocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Fragment_tutorial.BP_Char_Fragment_tutorial_C.MatAnim__FinishedFunc
	 */
	struct ABP_Char_Fragment_tutorial_C_MatAnim__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Char_Fragment_tutorial.BP_Char_Fragment_tutorial_C.MatAnim__UpdateFunc
	 */
	struct ABP_Char_Fragment_tutorial_C_MatAnim__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Char_Fragment_tutorial.BP_Char_Fragment_tutorial_C.LoadAdditionalSettings
	 */
	struct ABP_Char_Fragment_tutorial_C_LoadAdditionalSettings_Params
	{	};

	/**
	 * Function BP_Char_Fragment_tutorial.BP_Char_Fragment_tutorial_C.BndEvt__MeleeAttackComponent_K2Node_ComponentBoundEvent_0_OnTargetHit__DelegateSignature
	 */
	struct ABP_Char_Fragment_tutorial_C_BndEvt__MeleeAttackComponent_K2Node_ComponentBoundEvent_0_OnTargetHit__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Char_Fragment_tutorial.BP_Char_Fragment_tutorial_C.SetEnableAdditionalThings
	 */
	struct ABP_Char_Fragment_tutorial_C_SetEnableAdditionalThings_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Fragment_tutorial.BP_Char_Fragment_tutorial_C.SpawnArmor
	 */
	struct ABP_Char_Fragment_tutorial_C_SpawnArmor_Params
	{	};

	/**
	 * Function BP_Char_Fragment_tutorial.BP_Char_Fragment_tutorial_C.DamagedState
	 */
	struct ABP_Char_Fragment_tutorial_C_DamagedState_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Fragment_tutorial.BP_Char_Fragment_tutorial_C.DeathTest
	 */
	struct ABP_Char_Fragment_tutorial_C_DeathTest_Params
	{	};

	/**
	 * Function BP_Char_Fragment_tutorial.BP_Char_Fragment_tutorial_C.ReceiveAnyDamage
	 */
	struct ABP_Char_Fragment_tutorial_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LX05[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Fragment_tutorial.BP_Char_Fragment_tutorial_C.OnDeath
	 */
	struct ABP_Char_Fragment_tutorial_C_OnDeath_Params
	{
	public:
		bool                                                       EnableRagdoll;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Fragment_tutorial.BP_Char_Fragment_tutorial_C.ReceiveEndPlay
	 */
	struct ABP_Char_Fragment_tutorial_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Fragment_tutorial.BP_Char_Fragment_tutorial_C.BndEvt__BP_Char_Fragment_tutorial_PerceptionComponent_K2Node_ComponentBoundEvent_1_OneParamActor__DelegateSignature
	 */
	struct ABP_Char_Fragment_tutorial_C_BndEvt__BP_Char_Fragment_tutorial_PerceptionComponent_K2Node_ComponentBoundEvent_1_OneParamActor__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Fragment_tutorial.BP_Char_Fragment_tutorial_C.BndEvt__BP_Char_Fragment_tutorial_PerceptionComponent_K2Node_ComponentBoundEvent_2_PlayerLostDelegate__DelegateSignature
	 */
	struct ABP_Char_Fragment_tutorial_C_BndEvt__BP_Char_Fragment_tutorial_PerceptionComponent_K2Node_ComponentBoundEvent_2_PlayerLostDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             LocLastSeen;                                             // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Fragment_tutorial.BP_Char_Fragment_tutorial_C.OnAttackCommandStarted
	 */
	struct ABP_Char_Fragment_tutorial_C_OnAttackCommandStarted_Params
	{	};

	/**
	 * Function BP_Char_Fragment_tutorial.BP_Char_Fragment_tutorial_C.OnIdleCommandFinished
	 */
	struct ABP_Char_Fragment_tutorial_C_OnIdleCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Fragment_tutorial.BP_Char_Fragment_tutorial_C.OnWalkCommandFinished
	 */
	struct ABP_Char_Fragment_tutorial_C_OnWalkCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Fragment_tutorial.BP_Char_Fragment_tutorial_C.OnAttackCommandFinished
	 */
	struct ABP_Char_Fragment_tutorial_C_OnAttackCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Fragment_tutorial.BP_Char_Fragment_tutorial_C.ExecuteUbergraph_BP_Char_Fragment_tutorial
	 */
	struct ABP_Char_Fragment_tutorial_C_ExecuteUbergraph_BP_Char_Fragment_tutorial_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
