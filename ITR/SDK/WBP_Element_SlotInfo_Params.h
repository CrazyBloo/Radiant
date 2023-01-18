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
	 * Function WBP_Element_SlotInfo.WBP_Element_SlotInfo_C.IsInstalled
	 */
	struct UWBP_Element_SlotInfo_C_IsInstalled_Params
	{
	public:
		bool                                                       Installed;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Element_SlotInfo.WBP_Element_SlotInfo_C.GetLinked
	 */
	struct UWBP_Element_SlotInfo_C_GetLinked_Params
	{
	public:
		struct FUpgradeInfo                                        UpgradeInfo;                                             // 0x0000(0x0230)  (Parm, OutParm)
		bool                                                       selected;                                                // 0x0230(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Element_SlotInfo.WBP_Element_SlotInfo_C.Link
	 */
	struct UWBP_Element_SlotInfo_C_Link_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        SlotId;                                                  // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Element_SlotInfo.WBP_Element_SlotInfo_C.ExecuteUbergraph_WBP_Element_SlotInfo
	 */
	struct UWBP_Element_SlotInfo_C_ExecuteUbergraph_WBP_Element_SlotInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IWRE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
