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
	 * Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.IsHelpShown
	 */
	struct UWBP_ItemInfo_Simple_C_IsHelpShown_Params
	{
	public:
		bool                                                       helpShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EXCU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.ChangeTextColor
	 */
	struct UWBP_ItemInfo_Simple_C_ChangeTextColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.BndEvt__Btn_Lock_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_ItemInfo_Simple_C_BndEvt__Btn_Lock_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.BndEvt__Btn_Unlock_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_ItemInfo_Simple_C_BndEvt__Btn_Unlock_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.BndEvt__Btn_Help_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_ItemInfo_Simple_C_BndEvt__Btn_Help_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.ShowHelp
	 */
	struct UWBP_ItemInfo_Simple_C_ShowHelp_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.BndEvt__Btn_Back_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_ItemInfo_Simple_C_BndEvt__Btn_Back_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.Fill
	 */
	struct UWBP_ItemInfo_Simple_C_Fill_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.UpdateDurability
	 */
	struct UWBP_ItemInfo_Simple_C_UpdateDurability_Params
	{	};

	/**
	 * Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.ExecuteUbergraph_WBP_ItemInfo_Simple
	 */
	struct UWBP_ItemInfo_Simple_C_ExecuteUbergraph_WBP_ItemInfo_Simple_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.OnHelp__DelegateSignature
	 */
	struct UWBP_ItemInfo_Simple_C_OnHelp__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.OnUnlock__DelegateSignature
	 */
	struct UWBP_ItemInfo_Simple_C_OnUnlock__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ItemInfo_Simple.WBP_ItemInfo_Simple_C.OnLock__DelegateSignature
	 */
	struct UWBP_ItemInfo_Simple_C_OnLock__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
