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
	 * Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.ToggleFreeMode
	 */
	struct UWBP_Page_StorageUpgrade_C_ToggleFreeMode_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.IsUpgradeSelection
	 */
	struct UWBP_Page_StorageUpgrade_C_IsUpgradeSelection_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.HidePage
	 */
	struct UWBP_Page_StorageUpgrade_C_HidePage_Params
	{	};

	/**
	 * Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.UpdatePage
	 */
	struct UWBP_Page_StorageUpgrade_C_UpdatePage_Params
	{	};

	/**
	 * Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.OnCellContentChanged
	 */
	struct UWBP_Page_StorageUpgrade_C_OnCellContentChanged_Params
	{	};

	/**
	 * Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Page_StorageUpgrade_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Page_StorageUpgrade_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.OnItemDroppedEvent
	 */
	struct UWBP_Page_StorageUpgrade_C_OnItemDroppedEvent_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.Setup
	 */
	struct UWBP_Page_StorageUpgrade_C_Setup_Params
	{
	public:
		class ABP_TrainStorage_C*                                  storageRef;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.ShowPage
	 */
	struct UWBP_Page_StorageUpgrade_C_ShowPage_Params
	{	};

	/**
	 * Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.OnButtonApply
	 */
	struct UWBP_Page_StorageUpgrade_C_OnButtonApply_Params
	{	};

	/**
	 * Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.PlayElementUpgradeAnimation
	 */
	struct UWBP_Page_StorageUpgrade_C_PlayElementUpgradeAnimation_Params
	{
	public:
		struct FGameplayTag                                        UpgradeID;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.PlayUpgradeAnimation
	 */
	struct UWBP_Page_StorageUpgrade_C_PlayUpgradeAnimation_Params
	{	};

	/**
	 * Function WBP_Page_StorageUpgrade.WBP_Page_StorageUpgrade_C.ExecuteUbergraph_WBP_Page_StorageUpgrade
	 */
	struct UWBP_Page_StorageUpgrade_C_ExecuteUbergraph_WBP_Page_StorageUpgrade_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
