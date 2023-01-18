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
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.TL_HitReact__FinishedFunc
	 */
	struct ABP_Char_Fracture_C_TL_HitReact__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.TL_HitReact__UpdateFunc
	 */
	struct ABP_Char_Fracture_C_TL_HitReact__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.Timeline_1__FinishedFunc
	 */
	struct ABP_Char_Fracture_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.Timeline_1__UpdateFunc
	 */
	struct ABP_Char_Fracture_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.Timeline_2__FinishedFunc
	 */
	struct ABP_Char_Fracture_C_Timeline_2__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.Timeline_2__UpdateFunc
	 */
	struct ABP_Char_Fracture_C_Timeline_2__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.Footsteps Loop__FinishedFunc
	 */
	struct ABP_Char_Fracture_C_FootstepsLoop__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.Footsteps Loop__UpdateFunc
	 */
	struct ABP_Char_Fracture_C_FootstepsLoop__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.Footsteps Loop__Play Footstep__EventFunc
	 */
	struct ABP_Char_Fracture_C_FootstepsLoop__PlayFootstep__EventFunc_Params
	{	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.LoadAdditionalSettings
	 */
	struct ABP_Char_Fracture_C_LoadAdditionalSettings_Params
	{	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.BndEvt__MeleeAttackComponent_K2Node_ComponentBoundEvent_0_OnTargetHit__DelegateSignature
	 */
	struct ABP_Char_Fracture_C_BndEvt__MeleeAttackComponent_K2Node_ComponentBoundEvent_0_OnTargetHit__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.SetEnableAdditionalThings
	 */
	struct ABP_Char_Fracture_C_SetEnableAdditionalThings_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.ReceiveEndPlay
	 */
	struct ABP_Char_Fracture_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.ReceiveTick
	 */
	struct ABP_Char_Fracture_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.ReceivePointDamage
	 */
	struct ABP_Char_Fracture_C_ReceivePointDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N12X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ShotFromDirection;                                       // 0x0038(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FW6I[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AController*                                         InstigatedBy;                                            // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitInfo;                                                 // 0x0058(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.ThrowStone
	 */
	struct ABP_Char_Fracture_C_ThrowStone_Params
	{	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.ReceiveAnyDamage
	 */
	struct ABP_Char_Fracture_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GBZA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.OnDeath
	 */
	struct ABP_Char_Fracture_C_OnDeath_Params
	{
	public:
		bool                                                       EnableRagdoll;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.DamagedState
	 */
	struct ABP_Char_Fracture_C_DamagedState_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.BndEvt__BP_Char_Fracture_PerceptionComponent_K2Node_ComponentBoundEvent_1_OneParamActor__DelegateSignature
	 */
	struct ABP_Char_Fracture_C_BndEvt__BP_Char_Fracture_PerceptionComponent_K2Node_ComponentBoundEvent_1_OneParamActor__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.BndEvt__BP_Char_Fracture_PerceptionComponent_K2Node_ComponentBoundEvent_2_PlayerLostDelegate__DelegateSignature
	 */
	struct ABP_Char_Fracture_C_BndEvt__BP_Char_Fracture_PerceptionComponent_K2Node_ComponentBoundEvent_2_PlayerLostDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             LocLastSeen;                                             // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.OnAttackCommandStarted
	 */
	struct ABP_Char_Fracture_C_OnAttackCommandStarted_Params
	{	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.OnAttackCommandFinished
	 */
	struct ABP_Char_Fracture_C_OnAttackCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.OnIdleCommandFinished
	 */
	struct ABP_Char_Fracture_C_OnIdleCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.OnWalkCommandFinished
	 */
	struct ABP_Char_Fracture_C_OnWalkCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.PlayFootstepSound
	 */
	struct ABP_Char_Fracture_C_PlayFootstepSound_Params
	{	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.StartFootstepLoop
	 */
	struct ABP_Char_Fracture_C_StartFootstepLoop_Params
	{	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.StopFootstepLoop
	 */
	struct ABP_Char_Fracture_C_StopFootstepLoop_Params
	{	};

	/**
	 * Function BP_Char_Fracture.BP_Char_Fracture_C.ExecuteUbergraph_BP_Char_Fracture
	 */
	struct ABP_Char_Fracture_C_ExecuteUbergraph_BP_Char_Fracture_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5LBW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
