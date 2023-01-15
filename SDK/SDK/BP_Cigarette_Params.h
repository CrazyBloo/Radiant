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
	 * Function BP_Cigarette.BP_Cigarette_C.FX_UpdateMaterialDamage
	 */
	struct ABP_Cigarette_C_FX_UpdateMaterialDamage_Params
	{
	public:
		float                                                      DurabilityPercent;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FA48[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Cigarette.BP_Cigarette_C.HideExtinguishedAshes
	 */
	struct ABP_Cigarette_C_HideExtinguishedAshes_Params
	{
	public:
		TArray<class UStaticMeshComponent*>                        Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_Cigarette.BP_Cigarette_C.FX
	 */
	struct ABP_Cigarette_C_FX_Params
	{
	public:
		float                                                      DurabilityPercent;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Cigarette.BP_Cigarette_C.UpdateMaterialDamage
	 */
	struct ABP_Cigarette_C_UpdateMaterialDamage_Params
	{	};

	/**
	 * Function BP_Cigarette.BP_Cigarette_C.CigLight__FinishedFunc
	 */
	struct ABP_Cigarette_C_CigLight__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Cigarette.BP_Cigarette_C.CigLight__UpdateFunc
	 */
	struct ABP_Cigarette_C_CigLight__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Cigarette.BP_Cigarette_C.ReceiveAnyDamage
	 */
	struct ABP_Cigarette_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L483[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Cigarette.BP_Cigarette_C.CigLit
	 */
	struct ABP_Cigarette_C_CigLit_Params
	{	};

	/**
	 * Function BP_Cigarette.BP_Cigarette_C.ReceiveBeginPlay
	 */
	struct ABP_Cigarette_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Cigarette.BP_Cigarette_C.LitTimer
	 */
	struct ABP_Cigarette_C_LitTimer_Params
	{	};

	/**
	 * Function BP_Cigarette.BP_Cigarette_C.CigExtinguish
	 */
	struct ABP_Cigarette_C_CigExtinguish_Params
	{	};

	/**
	 * Function BP_Cigarette.BP_Cigarette_C.CigInhale
	 */
	struct ABP_Cigarette_C_CigInhale_Params
	{	};

	/**
	 * Function BP_Cigarette.BP_Cigarette_C.cigInhaleFX
	 */
	struct ABP_Cigarette_C_cigInhaleFX_Params
	{	};

	/**
	 * Function BP_Cigarette.BP_Cigarette_C.ApplyCigEfectToPlayer
	 */
	struct ABP_Cigarette_C_ApplyCigEfectToPlayer_Params
	{	};

	/**
	 * Function BP_Cigarette.BP_Cigarette_C.OnEndUsed
	 */
	struct ABP_Cigarette_C_OnEndUsed_Params
	{	};

	/**
	 * Function BP_Cigarette.BP_Cigarette_C.OnGrip
	 */
	struct ABP_Cigarette_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N5Q0[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Cigarette.BP_Cigarette_C.OnRootHit
	 */
	struct ABP_Cigarette_C_OnRootHit_Params
	{
	public:
		struct FVector                                             Impulse;                                                 // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Cigarette.BP_Cigarette_C.Hide
	 */
	struct ABP_Cigarette_C_Hide_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Cigarette.BP_Cigarette_C.HealthEndedOverride
	 */
	struct ABP_Cigarette_C_HealthEndedOverride_Params
	{	};

	/**
	 * Function BP_Cigarette.BP_Cigarette_C.OnReconfigure
	 */
	struct ABP_Cigarette_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_Cigarette.BP_Cigarette_C.RequestPhysicsCollision
	 */
	struct ABP_Cigarette_C_RequestPhysicsCollision_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZK6N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Requestor;                                               // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Cigarette.BP_Cigarette_C.OnAddedToHolster
	 */
	struct ABP_Cigarette_C_OnAddedToHolster_Params
	{
	public:
		class UHolsterComponent*                                   Holster;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Cigarette.BP_Cigarette_C.OnRemovedFromHolster
	 */
	struct ABP_Cigarette_C_OnRemovedFromHolster_Params
	{
	public:
		class UHolsterComponent*                                   Holster;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Cigarette.BP_Cigarette_C.ExecuteUbergraph_BP_Cigarette
	 */
	struct ABP_Cigarette_C_ExecuteUbergraph_BP_Cigarette_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KKAN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
