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
	 * Function BP_IngameMenu.BP_IngameMenu_C.OnGameStarted
	 */
	struct ABP_IngameMenu_C_OnGameStarted_Params
	{	};

	/**
	 * Function BP_IngameMenu.BP_IngameMenu_C.ReceiveEndPlay
	 */
	struct ABP_IngameMenu_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_IngameMenu.BP_IngameMenu_C.ExecuteUbergraph_BP_IngameMenu
	 */
	struct ABP_IngameMenu_C_ExecuteUbergraph_BP_IngameMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
