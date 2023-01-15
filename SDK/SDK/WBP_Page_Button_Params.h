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
	 * Function WBP_Page_Button.WBP_Page_Button_C.SetText
	 */
	struct UWBP_Page_Button_C_SetText_Params
	{
	public:
		class FText                                                ButtonText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Page_Button.WBP_Page_Button_C.UpdateButtonText
	 */
	struct UWBP_Page_Button_C_UpdateButtonText_Params
	{	};

	/**
	 * Function WBP_Page_Button.WBP_Page_Button_C.UpdateButtonStyle
	 */
	struct UWBP_Page_Button_C_UpdateButtonStyle_Params
	{	};

	/**
	 * Function WBP_Page_Button.WBP_Page_Button_C.SetSelected
	 */
	struct UWBP_Page_Button_C_SetSelected_Params
	{
	public:
		bool                                                       _selected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Page_Button.WBP_Page_Button_C.IsSelected
	 */
	struct UWBP_Page_Button_C_IsSelected_Params
	{
	public:
		bool                                                       selected;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Page_Button.WBP_Page_Button_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Page_Button_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Page_Button.WBP_Page_Button_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Page_Button_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Page_Button.WBP_Page_Button_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_Page_Button_C_BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Page_Button.WBP_Page_Button_C.Construct
	 */
	struct UWBP_Page_Button_C_Construct_Params
	{	};

	/**
	 * Function WBP_Page_Button.WBP_Page_Button_C.PreConstruct
	 */
	struct UWBP_Page_Button_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Page_Button.WBP_Page_Button_C.ExecuteUbergraph_WBP_Page_Button
	 */
	struct UWBP_Page_Button_C_ExecuteUbergraph_WBP_Page_Button_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7NSP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Page_Button.WBP_Page_Button_C.OnPressed__DelegateSignature
	 */
	struct UWBP_Page_Button_C_OnPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
