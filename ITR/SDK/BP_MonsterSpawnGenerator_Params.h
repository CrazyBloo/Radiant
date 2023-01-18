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
	 * Function BP_MonsterSpawnGenerator.BP_MonsterSpawnGenerator_C.AddAlternativePlace
	 */
	struct ABP_MonsterSpawnGenerator_C_AddAlternativePlace_Params
	{	};

	/**
	 * Function BP_MonsterSpawnGenerator.BP_MonsterSpawnGenerator_C.ReceiveAnyDamage
	 */
	struct ABP_MonsterSpawnGenerator_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PDOD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MonsterSpawnGenerator.BP_MonsterSpawnGenerator_C.OnSpawnerReadyToCall
	 */
	struct ABP_MonsterSpawnGenerator_C_OnSpawnerReadyToCall_Params
	{
	public:
		class AMonsterSpawner*                                     Spawner;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MonsterSpawnGenerator.BP_MonsterSpawnGenerator_C.ReceiveBeginPlay
	 */
	struct ABP_MonsterSpawnGenerator_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_MonsterSpawnGenerator.BP_MonsterSpawnGenerator_C.ExecuteUbergraph_BP_MonsterSpawnGenerator
	 */
	struct ABP_MonsterSpawnGenerator_C_ExecuteUbergraph_BP_MonsterSpawnGenerator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
