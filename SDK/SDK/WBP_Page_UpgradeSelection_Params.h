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
	 * Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.ToggleFreeMode
	 */
	struct UWBP_Page_UpgradeSelection_C_ToggleFreeMode_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K85P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.FindChainUpgrades
	 */
	struct UWBP_Page_UpgradeSelection_C_FindChainUpgrades_Params
	{
	public:
		TArray<struct FGameplayTag>                                Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FGameplayTag>                                updates;                                                 // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.FindIndependentUpgrades
	 */
	struct UWBP_Page_UpgradeSelection_C_FindIndependentUpgrades_Params
	{
	public:
		TArray<struct FGameplayTag>                                Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FGameplayTag>                                Standalone;                                              // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.FindSwitchableUpgrades
	 */
	struct UWBP_Page_UpgradeSelection_C_FindSwitchableUpgrades_Params
	{
	public:
		TArray<struct FGameplayTag>                                Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FGameplayTag>                                updates;                                                 // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.GetSelectedUpgrades
	 */
	struct UWBP_Page_UpgradeSelection_C_GetSelectedUpgrades_Params
	{
	public:
		TArray<struct FUpgradeInfo>                                Install;                                                 // 0x0000(0x0010)  (Parm, OutParm)
		TArray<struct FUpgradeInfo>                                Remove;                                                  // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.GetLinkedItem
	 */
	struct UWBP_Page_UpgradeSelection_C_GetLinkedItem_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.Link
	 */
	struct UWBP_Page_UpgradeSelection_C_Link_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.Construct
	 */
	struct UWBP_Page_UpgradeSelection_C_Construct_Params
	{	};

	/**
	 * Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.OnClicked
	 */
	struct UWBP_Page_UpgradeSelection_C_OnClicked_Params
	{
	public:
		class UWBP_Element_Upgrade_C*                              Element;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.PlayElementUpgradeAnimation
	 */
	struct UWBP_Page_UpgradeSelection_C_PlayElementUpgradeAnimation_Params
	{
	public:
		struct FGameplayTag                                        UpgradeID;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.PlayUpgradeAnimation
	 */
	struct UWBP_Page_UpgradeSelection_C_PlayUpgradeAnimation_Params
	{	};

	/**
	 * Function WBP_Page_UpgradeSelection.WBP_Page_UpgradeSelection_C.ExecuteUbergraph_WBP_Page_UpgradeSelection
	 */
	struct UWBP_Page_UpgradeSelection_C_ExecuteUbergraph_WBP_Page_UpgradeSelection_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
