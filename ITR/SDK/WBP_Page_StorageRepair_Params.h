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
	 * Function WBP_Page_StorageRepair.WBP_Page_StorageRepair_C.IsNeedRepair
	 */
	struct UWBP_Page_StorageRepair_C_IsNeedRepair_Params
	{	};

	/**
	 * Function WBP_Page_StorageRepair.WBP_Page_StorageRepair_C.ShowPage
	 */
	struct UWBP_Page_StorageRepair_C_ShowPage_Params
	{	};

	/**
	 * Function WBP_Page_StorageRepair.WBP_Page_StorageRepair_C.HidePage
	 */
	struct UWBP_Page_StorageRepair_C_HidePage_Params
	{	};

	/**
	 * Function WBP_Page_StorageRepair.WBP_Page_StorageRepair_C.UpdatePage
	 */
	struct UWBP_Page_StorageRepair_C_UpdatePage_Params
	{	};

	/**
	 * Function WBP_Page_StorageRepair.WBP_Page_StorageRepair_C.E1
	 */
	struct UWBP_Page_StorageRepair_C_E1_Params
	{	};

	/**
	 * Function WBP_Page_StorageRepair.WBP_Page_StorageRepair_C.PageTick
	 */
	struct UWBP_Page_StorageRepair_C_PageTick_Params
	{	};

	/**
	 * Function WBP_Page_StorageRepair.WBP_Page_StorageRepair_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Page_StorageRepair_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Page_StorageRepair.WBP_Page_StorageRepair_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Page_StorageRepair_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Page_StorageRepair.WBP_Page_StorageRepair_C.OnItemDroppedEvent
	 */
	struct UWBP_Page_StorageRepair_C_OnItemDroppedEvent_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Page_StorageRepair.WBP_Page_StorageRepair_C.Setup
	 */
	struct UWBP_Page_StorageRepair_C_Setup_Params
	{
	public:
		class ABP_TrainStorage_C*                                  storageRef;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Page_StorageRepair.WBP_Page_StorageRepair_C.OnButtonApply
	 */
	struct UWBP_Page_StorageRepair_C_OnButtonApply_Params
	{	};

	/**
	 * Function WBP_Page_StorageRepair.WBP_Page_StorageRepair_C.ExecuteUbergraph_WBP_Page_StorageRepair
	 */
	struct UWBP_Page_StorageRepair_C_ExecuteUbergraph_WBP_Page_StorageRepair_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3CV1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
