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
	 * Function BP_ItemInfo.BP_ItemInfo_C.IsHelpShown
	 */
	struct ABP_ItemInfo_C_IsHelpShown_Params
	{
	public:
		bool                                                       shown;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ItemInfo.BP_ItemInfo_C.IsItemOfType
	 */
	struct ABP_ItemInfo_C_IsItemOfType_Params
	{
	public:
		struct FGameplayTag                                        ItemTypeID;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		bool                                                       Match;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ItemInfo.BP_ItemInfo_C.IsAttachmentsLocked
	 */
	struct ABP_ItemInfo_C_IsAttachmentsLocked_Params
	{
	public:
		bool                                                       Locked;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ItemInfo.BP_ItemInfo_C.SetVisibility
	 */
	struct ABP_ItemInfo_C_SetVisibility_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ItemInfo.BP_ItemInfo_C.GetLockButtonLocation
	 */
	struct ABP_ItemInfo_C_GetLockButtonLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ItemInfo.BP_ItemInfo_C.GetUnlockButtonLocation
	 */
	struct ABP_ItemInfo_C_GetUnlockButtonLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ItemInfo.BP_ItemInfo_C.GetHelpButtonLocation
	 */
	struct ABP_ItemInfo_C_GetHelpButtonLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ItemInfo.BP_ItemInfo_C.updateTransform
	 */
	struct ABP_ItemInfo_C_updateTransform_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ItemInfo.BP_ItemInfo_C.ReceiveBeginPlay
	 */
	struct ABP_ItemInfo_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ItemInfo.BP_ItemInfo_C.HideInfo
	 */
	struct ABP_ItemInfo_C_HideInfo_Params
	{	};

	/**
	 * Function BP_ItemInfo.BP_ItemInfo_C.ShowInfo
	 */
	struct ABP_ItemInfo_C_ShowInfo_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       unlock;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ItemInfo.BP_ItemInfo_C.ReceiveEndPlay
	 */
	struct ABP_ItemInfo_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ItemInfo.BP_ItemInfo_C.ToggleInfo
	 */
	struct ABP_ItemInfo_C_ToggleInfo_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       unlock;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ItemInfo.BP_ItemInfo_C.UpdateInfoWidget
	 */
	struct ABP_ItemInfo_C_UpdateInfoWidget_Params
	{
	public:
		bool                                                       unlock;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ItemInfo.BP_ItemInfo_C.UpdateDurability
	 */
	struct ABP_ItemInfo_C_UpdateDurability_Params
	{	};

	/**
	 * Function BP_ItemInfo.BP_ItemInfo_C.KillCheats
	 */
	struct ABP_ItemInfo_C_KillCheats_Params
	{	};

	/**
	 * Function BP_ItemInfo.BP_ItemInfo_C.OnApplyCheatyUpgrades
	 */
	struct ABP_ItemInfo_C_OnApplyCheatyUpgrades_Params
	{	};

	/**
	 * Function BP_ItemInfo.BP_ItemInfo_C.ExecuteUbergraph_BP_ItemInfo
	 */
	struct ABP_ItemInfo_C_ExecuteUbergraph_BP_ItemInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
