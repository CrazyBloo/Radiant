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
	 * Function BP_Consumable_CakeWithCandle.BP_Consumable_CakeWithCandle_C.IgniteCandle
	 */
	struct ABP_Consumable_CakeWithCandle_C_IgniteCandle_Params
	{	};

	/**
	 * Function BP_Consumable_CakeWithCandle.BP_Consumable_CakeWithCandle_C.ReceiveAnyDamage
	 */
	struct ABP_Consumable_CakeWithCandle_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ASLQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Consumable_CakeWithCandle.BP_Consumable_CakeWithCandle_C.Use
	 */
	struct ABP_Consumable_CakeWithCandle_C_Use_Params
	{	};

	/**
	 * Function BP_Consumable_CakeWithCandle.BP_Consumable_CakeWithCandle_C.ReceiveEndPlay
	 */
	struct ABP_Consumable_CakeWithCandle_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Consumable_CakeWithCandle.BP_Consumable_CakeWithCandle_C.ExecuteUbergraph_BP_Consumable_CakeWithCandle
	 */
	struct ABP_Consumable_CakeWithCandle_C_ExecuteUbergraph_BP_Consumable_CakeWithCandle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
