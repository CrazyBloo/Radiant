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
	 * Function BP_LootSpawnPoint.BP_LootSpawnPoint_C.SpawnLoot
	 */
	struct ABP_LootSpawnPoint_C_SpawnLoot_Params
	{	};

	/**
	 * Function BP_LootSpawnPoint.BP_LootSpawnPoint_C.GenerateLoot
	 */
	struct ABP_LootSpawnPoint_C_GenerateLoot_Params
	{	};

	/**
	 * Function BP_LootSpawnPoint.BP_LootSpawnPoint_C.ExecuteUbergraph_BP_LootSpawnPoint
	 */
	struct ABP_LootSpawnPoint_C_ExecuteUbergraph_BP_LootSpawnPoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZXG9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
