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
	 * Function BP_ItemDropLocation.BP_ItemDropLocation_C.CheckItems
	 */
	struct ABP_ItemDropLocation_C_CheckItems_Params
	{	};

	/**
	 * Function BP_ItemDropLocation.BP_ItemDropLocation_C.OnItemTaken
	 */
	struct ABP_ItemDropLocation_C_OnItemTaken_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ItemDropLocation.BP_ItemDropLocation_C.ReceiveBeginPlay
	 */
	struct ABP_ItemDropLocation_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ItemDropLocation.BP_ItemDropLocation_C.ReceiveEndPlay
	 */
	struct ABP_ItemDropLocation_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ItemDropLocation.BP_ItemDropLocation_C.ExecuteUbergraph_BP_ItemDropLocation
	 */
	struct ABP_ItemDropLocation_C_ExecuteUbergraph_BP_ItemDropLocation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
