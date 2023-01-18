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
	 * Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.GetMagItemType
	 */
	struct UWBP_ItemInfo_Weapon_C_GetMagItemType_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.UpdateAttachmentSlots
	 */
	struct UWBP_ItemInfo_Weapon_C_UpdateAttachmentSlots_Params
	{	};

	/**
	 * Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.UpdateUpgrades
	 */
	struct UWBP_ItemInfo_Weapon_C_UpdateUpgrades_Params
	{	};

	/**
	 * Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.GetAcceptedAmmo
	 */
	struct UWBP_ItemInfo_Weapon_C_GetAcceptedAmmo_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        ammoID;                                                  // 0x0004(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.IsHelpShown
	 */
	struct UWBP_ItemInfo_Weapon_C_IsHelpShown_Params
	{
	public:
		bool                                                       helpShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HSGD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.ChangeTextColor
	 */
	struct UWBP_ItemInfo_Weapon_C_ChangeTextColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.BndEvt__Btn_Lock_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_ItemInfo_Weapon_C_BndEvt__Btn_Lock_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.BndEvt__Btn_Unlock_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_ItemInfo_Weapon_C_BndEvt__Btn_Unlock_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.BndEvt__Btn_Help_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_ItemInfo_Weapon_C_BndEvt__Btn_Help_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.ShowHelp
	 */
	struct UWBP_ItemInfo_Weapon_C_ShowHelp_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.BndEvt__Btn_Back_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_ItemInfo_Weapon_C_BndEvt__Btn_Back_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.Fill
	 */
	struct UWBP_ItemInfo_Weapon_C_Fill_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.UpdateLockState
	 */
	struct UWBP_ItemInfo_Weapon_C_UpdateLockState_Params
	{	};

	/**
	 * Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.LockAttachments
	 */
	struct UWBP_ItemInfo_Weapon_C_LockAttachments_Params
	{
	public:
		bool                                                       lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.UpdateDurability
	 */
	struct UWBP_ItemInfo_Weapon_C_UpdateDurability_Params
	{	};

	/**
	 * Function WBP_ItemInfo_Weapon.WBP_ItemInfo_Weapon_C.ExecuteUbergraph_WBP_ItemInfo_Weapon
	 */
	struct UWBP_ItemInfo_Weapon_C_ExecuteUbergraph_WBP_ItemInfo_Weapon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QPYH[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
