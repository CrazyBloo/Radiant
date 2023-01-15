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
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.GetDamageDealerName
	 */
	struct ABP_Char_Fragment_Seeker_C_GetDamageDealerName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.GetDamageDealerTag
	 */
	struct ABP_Char_Fragment_Seeker_C_GetDamageDealerTag_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.IsAttacksLocked
	 */
	struct ABP_Char_Fragment_Seeker_C_IsAttacksLocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.LightDamage
	 */
	struct ABP_Char_Fragment_Seeker_C_LightDamage_Params
	{	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.Timeline_1__FinishedFunc
	 */
	struct ABP_Char_Fragment_Seeker_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.Timeline_1__UpdateFunc
	 */
	struct ABP_Char_Fragment_Seeker_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.Timeline_0__FinishedFunc
	 */
	struct ABP_Char_Fragment_Seeker_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.Timeline_0__UpdateFunc
	 */
	struct ABP_Char_Fragment_Seeker_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.Timeline_2__FinishedFunc
	 */
	struct ABP_Char_Fragment_Seeker_C_Timeline_2__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.Timeline_2__UpdateFunc
	 */
	struct ABP_Char_Fragment_Seeker_C_Timeline_2__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.LoadAdditionalSettings
	 */
	struct ABP_Char_Fragment_Seeker_C_LoadAdditionalSettings_Params
	{	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.SetEnableAdditionalThings
	 */
	struct ABP_Char_Fragment_Seeker_C_SetEnableAdditionalThings_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.OnDeath
	 */
	struct ABP_Char_Fragment_Seeker_C_OnDeath_Params
	{
	public:
		bool                                                       EnableRagdoll;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.ReceiveEndPlay
	 */
	struct ABP_Char_Fragment_Seeker_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.ReceivePointDamage
	 */
	struct ABP_Char_Fragment_Seeker_C_ReceivePointDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W7LY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ShotFromDirection;                                       // 0x0038(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A7SK[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AController*                                         InstigatedBy;                                            // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitInfo;                                                 // 0x0058(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.Spikes
	 */
	struct ABP_Char_Fragment_Seeker_C_Spikes_Params
	{	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.StopFootstepLoop
	 */
	struct ABP_Char_Fragment_Seeker_C_StopFootstepLoop_Params
	{	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.BndEvt__BP_Char_Fragment_Seeker_MeleeOnceAttackComponent_K2Node_ComponentBoundEvent_1_OnTargetHit__DelegateSignature
	 */
	struct ABP_Char_Fragment_Seeker_C_BndEvt__BP_Char_Fragment_Seeker_MeleeOnceAttackComponent_K2Node_ComponentBoundEvent_1_OnTargetHit__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.StartFootstepLoop
	 */
	struct ABP_Char_Fragment_Seeker_C_StartFootstepLoop_Params
	{	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.BndEvt__BP_Char_Fragment_Seeker_PerceptionComponent_K2Node_ComponentBoundEvent_2_OneParamActor__DelegateSignature
	 */
	struct ABP_Char_Fragment_Seeker_C_BndEvt__BP_Char_Fragment_Seeker_PerceptionComponent_K2Node_ComponentBoundEvent_2_OneParamActor__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.BndEvt__BP_Char_Fragment_Seeker_PerceptionComponent_K2Node_ComponentBoundEvent_4_PlayerLostDelegate__DelegateSignature
	 */
	struct ABP_Char_Fragment_Seeker_C_BndEvt__BP_Char_Fragment_Seeker_PerceptionComponent_K2Node_ComponentBoundEvent_4_PlayerLostDelegate__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             LocLastSeen;                                             // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.OnAttackCommandStarted
	 */
	struct ABP_Char_Fragment_Seeker_C_OnAttackCommandStarted_Params
	{	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.OnIdleCommandFinished
	 */
	struct ABP_Char_Fragment_Seeker_C_OnIdleCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.OnWalkCommandFinished
	 */
	struct ABP_Char_Fragment_Seeker_C_OnWalkCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.OnAttackCommandFinished
	 */
	struct ABP_Char_Fragment_Seeker_C_OnAttackCommandFinished_Params
	{	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.PlayFootstepSound
	 */
	struct ABP_Char_Fragment_Seeker_C_PlayFootstepSound_Params
	{	};

	/**
	 * Function BP_Char_Fragment_Seeker.BP_Char_Fragment_Seeker_C.ExecuteUbergraph_BP_Char_Fragment_Seeker
	 */
	struct ABP_Char_Fragment_Seeker_C_ExecuteUbergraph_BP_Char_Fragment_Seeker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
