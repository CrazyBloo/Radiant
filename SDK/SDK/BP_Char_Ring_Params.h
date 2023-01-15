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
	 * Function BP_Char_Ring.BP_Char_Ring_C.CheckTrace
	 */
	struct ABP_Char_Ring_C_CheckTrace_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              targetActor;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KZI4[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Char_Ring.BP_Char_Ring_C.UserConstructionScript
	 */
	struct ABP_Char_Ring_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Char_Ring.BP_Char_Ring_C.SetEnableAdditionalThings
	 */
	struct ABP_Char_Ring_C_SetEnableAdditionalThings_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Ring.BP_Char_Ring_C.BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_0_OnAttackLaunched__DelegateSignature
	 */
	struct ABP_Char_Ring_C_BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_0_OnAttackLaunched__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Char_Ring.BP_Char_Ring_C.BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_0_OnDamageInstigated__DelegateSignature
	 */
	struct ABP_Char_Ring_C_BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_0_OnDamageInstigated__DelegateSignature_Params
	{
	public:
		class AActor*                                              To;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Char_Ring.BP_Char_Ring_C.BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_1_OnStuck__DelegateSignature
	 */
	struct ABP_Char_Ring_C_BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_1_OnStuck__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Char_Ring.BP_Char_Ring_C.BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_2_OnBounce__DelegateSignature
	 */
	struct ABP_Char_Ring_C_BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_2_OnBounce__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Char_Ring.BP_Char_Ring_C.CharEnabled
	 */
	struct ABP_Char_Ring_C_CharEnabled_Params
	{	};

	/**
	 * Function BP_Char_Ring.BP_Char_Ring_C.OnStart
	 */
	struct ABP_Char_Ring_C_OnStart_Params
	{	};

	/**
	 * Function BP_Char_Ring.BP_Char_Ring_C.ReceiveEndPlay
	 */
	struct ABP_Char_Ring_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Ring.BP_Char_Ring_C.OnDeath
	 */
	struct ABP_Char_Ring_C_OnDeath_Params
	{
	public:
		bool                                                       EnableRagdoll;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Ring.BP_Char_Ring_C.ReceivePointDamage
	 */
	struct ABP_Char_Ring_C_ReceivePointDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_POKZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ShotFromDirection;                                       // 0x0038(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T2V9[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AController*                                         InstigatedBy;                                            // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitInfo;                                                 // 0x0058(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Char_Ring.BP_Char_Ring_C.DisablePhysics
	 */
	struct ABP_Char_Ring_C_DisablePhysics_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Ring.BP_Char_Ring_C.BndEvt__BP_Char_Ring_PerceptionComponent_K2Node_ComponentBoundEvent_3_OneParamActor__DelegateSignature
	 */
	struct ABP_Char_Ring_C_BndEvt__BP_Char_Ring_PerceptionComponent_K2Node_ComponentBoundEvent_3_OneParamActor__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Ring.BP_Char_Ring_C.BndEvt__BP_Char_Ring_PerceptionComponent_K2Node_ComponentBoundEvent_5_PlayerLostDelegate__DelegateSignature
	 */
	struct ABP_Char_Ring_C_BndEvt__BP_Char_Ring_PerceptionComponent_K2Node_ComponentBoundEvent_5_PlayerLostDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             LocLastSeen;                                             // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Ring.BP_Char_Ring_C.OnAttackCommandStarted
	 */
	struct ABP_Char_Ring_C_OnAttackCommandStarted_Params
	{	};

	/**
	 * Function BP_Char_Ring.BP_Char_Ring_C.OnAttackCommandFinished
	 */
	struct ABP_Char_Ring_C_OnAttackCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Ring.BP_Char_Ring_C.OnIdleCommandFinished
	 */
	struct ABP_Char_Ring_C_OnIdleCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Ring.BP_Char_Ring_C.OnWalkCommandFinished
	 */
	struct ABP_Char_Ring_C_OnWalkCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Ring.BP_Char_Ring_C.PlayFootstepSound
	 */
	struct ABP_Char_Ring_C_PlayFootstepSound_Params
	{	};

	/**
	 * Function BP_Char_Ring.BP_Char_Ring_C.StartFootstepLoop
	 */
	struct ABP_Char_Ring_C_StartFootstepLoop_Params
	{	};

	/**
	 * Function BP_Char_Ring.BP_Char_Ring_C.StopFootstepLoop
	 */
	struct ABP_Char_Ring_C_StopFootstepLoop_Params
	{	};

	/**
	 * Function BP_Char_Ring.BP_Char_Ring_C.ExecuteUbergraph_BP_Char_Ring
	 */
	struct ABP_Char_Ring_C_ExecuteUbergraph_BP_Char_Ring_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
