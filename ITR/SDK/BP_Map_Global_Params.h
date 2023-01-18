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
	 * Function BP_Map_Global.BP_Map_Global_C.Update Player Positions on Child Maps
	 */
	struct ABP_Map_Global_C_UpdatePlayerPositionsonChildMaps_Params
	{	};

	/**
	 * Function BP_Map_Global.BP_Map_Global_C.UpdateMaps
	 */
	struct ABP_Map_Global_C_UpdateMaps_Params
	{	};

	/**
	 * Function BP_Map_Global.BP_Map_Global_C.UpdateMapsVisibility
	 */
	struct ABP_Map_Global_C_UpdateMapsVisibility_Params
	{	};

	/**
	 * Function BP_Map_Global.BP_Map_Global_C.UserConstructionScript
	 */
	struct ABP_Map_Global_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Map_Global.BP_Map_Global_C.ReceiveBeginPlay
	 */
	struct ABP_Map_Global_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Map_Global.BP_Map_Global_C.OnLevelStartedEvent
	 */
	struct ABP_Map_Global_C_OnLevelStartedEvent_Params
	{
	public:
		struct FGameplayTag                                        Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Map_Global.BP_Map_Global_C.ReceiveTick
	 */
	struct ABP_Map_Global_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Map_Global.BP_Map_Global_C.ExecuteUbergraph_BP_Map_Global
	 */
	struct ABP_Map_Global_C_ExecuteUbergraph_BP_Map_Global_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
