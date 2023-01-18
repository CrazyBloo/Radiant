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
	 * Function WBP_CheckBox.WBP_CheckBox_C.UpdateText
	 */
	struct UWBP_CheckBox_C_UpdateText_Params
	{
	public:
		bool                                                       Hovered;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CheckBox.WBP_CheckBox_C.UpdateIcon
	 */
	struct UWBP_CheckBox_C_UpdateIcon_Params
	{
	public:
		bool                                                       Hovered;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CheckBox.WBP_CheckBox_C.ChangeText
	 */
	struct UWBP_CheckBox_C_ChangeText_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_CheckBox.WBP_CheckBox_C.SetSelected
	 */
	struct UWBP_CheckBox_C_SetSelected_Params
	{
	public:
		bool                                                       _selected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CheckBox.WBP_CheckBox_C.SetEnabled
	 */
	struct UWBP_CheckBox_C_SetEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CheckBox.WBP_CheckBox_C.IsSelected
	 */
	struct UWBP_CheckBox_C_IsSelected_Params
	{
	public:
		bool                                                       selected;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CheckBox.WBP_CheckBox_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_CheckBox_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CheckBox.WBP_CheckBox_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_CheckBox_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CheckBox.WBP_CheckBox_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_CheckBox_C_BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CheckBox.WBP_CheckBox_C.Construct
	 */
	struct UWBP_CheckBox_C_Construct_Params
	{	};

	/**
	 * Function WBP_CheckBox.WBP_CheckBox_C.PreConstruct
	 */
	struct UWBP_CheckBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CheckBox.WBP_CheckBox_C.ExecuteUbergraph_WBP_CheckBox
	 */
	struct UWBP_CheckBox_C_ExecuteUbergraph_WBP_CheckBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CheckBox.WBP_CheckBox_C.CheckBoxPressed__DelegateSignature
	 */
	struct UWBP_CheckBox_C_CheckBoxPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
