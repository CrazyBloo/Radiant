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
	 * Function BP_Bomb.BP_Bomb_C.Explode
	 */
	struct ABP_Bomb_C_Explode_Params
	{	};

	/**
	 * Function BP_Bomb.BP_Bomb_C.GameplayTrigger
	 */
	struct ABP_Bomb_C_GameplayTrigger_Params
	{	};

	/**
	 * Function BP_Bomb.BP_Bomb_C.ExecuteUbergraph_BP_Bomb
	 */
	struct ABP_Bomb_C_ExecuteUbergraph_BP_Bomb_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VRF8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
