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
	 * Function WBP_Button_Center.WBP_Button_Center_C.UpdateImages
	 */
	struct UWBP_Button_Center_C_UpdateImages_Params
	{	};

	/**
	 * Function WBP_Button_Center.WBP_Button_Center_C.UpdateText
	 */
	struct UWBP_Button_Center_C_UpdateText_Params
	{	};

	/**
	 * Function WBP_Button_Center.WBP_Button_Center_C.UpdateStyles
	 */
	struct UWBP_Button_Center_C_UpdateStyles_Params
	{	};

	/**
	 * Function WBP_Button_Center.WBP_Button_Center_C.GetCurrentColor
	 */
	struct UWBP_Button_Center_C_GetCurrentColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Center.WBP_Button_Center_C.ChangeText
	 */
	struct UWBP_Button_Center_C_ChangeText_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Button_Center.WBP_Button_Center_C.SetSelected
	 */
	struct UWBP_Button_Center_C_SetSelected_Params
	{
	public:
		bool                                                       _selected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Button_Center.WBP_Button_Center_C.SetEnabled
	 */
	struct UWBP_Button_Center_C_SetEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Button_Center.WBP_Button_Center_C.IsSelected
	 */
	struct UWBP_Button_Center_C_IsSelected_Params
	{
	public:
		bool                                                       selected;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Button_Center.WBP_Button_Center_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Button_Center_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Button_Center.WBP_Button_Center_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Button_Center_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Button_Center.WBP_Button_Center_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_Button_Center_C_BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Button_Center.WBP_Button_Center_C.Construct
	 */
	struct UWBP_Button_Center_C_Construct_Params
	{	};

	/**
	 * Function WBP_Button_Center.WBP_Button_Center_C.PreConstruct
	 */
	struct UWBP_Button_Center_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Button_Center.WBP_Button_Center_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UWBP_Button_Center_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Button_Center.WBP_Button_Center_C.BndEvt__Button_Disabled_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_Button_Center_C_BndEvt__Button_Disabled_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Button_Center.WBP_Button_Center_C.ExecuteUbergraph_WBP_Button_Center
	 */
	struct UWBP_Button_Center_C_ExecuteUbergraph_WBP_Button_Center_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Button_Center.WBP_Button_Center_C.OnPressedDisabled__DelegateSignature
	 */
	struct UWBP_Button_Center_C_OnPressedDisabled__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Button_Center.WBP_Button_Center_C.OnPressed__DelegateSignature
	 */
	struct UWBP_Button_Center_C_OnPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
