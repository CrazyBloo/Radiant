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
	 * Function WBP_ItemInfo.WBP_ItemInfo_C.UpdateInfoWeapon
	 */
	struct UWBP_ItemInfo_C_UpdateInfoWeapon_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ItemInfo.WBP_ItemInfo_C.UpdateInfoSimple
	 */
	struct UWBP_ItemInfo_C_UpdateInfoSimple_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ItemInfo.WBP_ItemInfo_C.GetAnimLength
	 */
	struct UWBP_ItemInfo_C_GetAnimLength_Params
	{
	public:
		float                                                      Seconds;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemInfo.WBP_ItemInfo_C.Animate
	 */
	struct UWBP_ItemInfo_C_Animate_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ItemInfo.WBP_ItemInfo_C.ClearInfos
	 */
	struct UWBP_ItemInfo_C_ClearInfos_Params
	{	};

	/**
	 * Function WBP_ItemInfo.WBP_ItemInfo_C.SetupInfo
	 */
	struct UWBP_ItemInfo_C_SetupInfo_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemInfo.WBP_ItemInfo_C.UpdateDurability
	 */
	struct UWBP_ItemInfo_C_UpdateDurability_Params
	{	};

	/**
	 * Function WBP_ItemInfo.WBP_ItemInfo_C.ExecuteUbergraph_WBP_ItemInfo
	 */
	struct UWBP_ItemInfo_C_ExecuteUbergraph_WBP_ItemInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
