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
	 * Function BPC_DamageOverTime.BPC_DamageOverTime_C.DoTTick
	 */
	struct UBPC_DamageOverTime_C_DoTTick_Params
	{	};

	/**
	 * Function BPC_DamageOverTime.BPC_DamageOverTime_C.DotFinished
	 */
	struct UBPC_DamageOverTime_C_DotFinished_Params
	{	};

	/**
	 * Function BPC_DamageOverTime.BPC_DamageOverTime_C.ContiniousDamage
	 */
	struct UBPC_DamageOverTime_C_ContiniousDamage_Params
	{
	public:
		TArray<class AActor*>                                      ActorsToAffect;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPC_DamageOverTime.BPC_DamageOverTime_C.ApplyDoT
	 */
	struct UBPC_DamageOverTime_C_ApplyDoT_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_DamageOverTime.BPC_DamageOverTime_C.Damage
	 */
	struct UBPC_DamageOverTime_C_Damage_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_DamageOverTime.BPC_DamageOverTime_C.ExecuteUbergraph_BPC_DamageOverTime
	 */
	struct UBPC_DamageOverTime_C_ExecuteUbergraph_BPC_DamageOverTime_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B6WJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
