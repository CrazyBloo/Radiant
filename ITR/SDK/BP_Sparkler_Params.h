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
	 * Function BP_Sparkler.BP_Sparkler_C.FX_UpdateMaterialDamage
	 */
	struct ABP_Sparkler_C_FX_UpdateMaterialDamage_Params
	{
	public:
		float                                                      DurabilityPercent;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sparkler.BP_Sparkler_C.UpdateMaterialDamage
	 */
	struct ABP_Sparkler_C_UpdateMaterialDamage_Params
	{	};

	/**
	 * Function BP_Sparkler.BP_Sparkler_C.Extinguish
	 */
	struct ABP_Sparkler_C_Extinguish_Params
	{	};

	/**
	 * Function BP_Sparkler.BP_Sparkler_C.ReceiveBeginPlay
	 */
	struct ABP_Sparkler_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Sparkler.BP_Sparkler_C.SparkLit
	 */
	struct ABP_Sparkler_C_SparkLit_Params
	{	};

	/**
	 * Function BP_Sparkler.BP_Sparkler_C.OnEndUsed
	 */
	struct ABP_Sparkler_C_OnEndUsed_Params
	{	};

	/**
	 * Function BP_Sparkler.BP_Sparkler_C.OnGrip
	 */
	struct ABP_Sparkler_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_22BB[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Sparkler.BP_Sparkler_C.Hide
	 */
	struct ABP_Sparkler_C_Hide_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Sparkler.BP_Sparkler_C.HealthEndedOverride
	 */
	struct ABP_Sparkler_C_HealthEndedOverride_Params
	{	};

	/**
	 * Function BP_Sparkler.BP_Sparkler_C.ReceiveAnyDamage
	 */
	struct ABP_Sparkler_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FSGX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sparkler.BP_Sparkler_C.OnReconfigure
	 */
	struct ABP_Sparkler_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_Sparkler.BP_Sparkler_C.RequestPhysicsCollision
	 */
	struct ABP_Sparkler_C_RequestPhysicsCollision_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K7JW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Requestor;                                               // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Sparkler.BP_Sparkler_C.MoveSparkEffect
	 */
	struct ABP_Sparkler_C_MoveSparkEffect_Params
	{	};

	/**
	 * Function BP_Sparkler.BP_Sparkler_C.ExecuteUbergraph_BP_Sparkler
	 */
	struct ABP_Sparkler_C_ExecuteUbergraph_BP_Sparkler_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
