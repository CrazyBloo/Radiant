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
	 * Function WBP_Slider.WBP_Slider_C.SetupSlider
	 */
	struct UWBP_Slider_C_SetupSlider_Params
	{
	public:
		bool                                                       ranged;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YWYU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FMinMaxFloat                                        Range;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      step;                                                    // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FloatDigits;                                             // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Slider.WBP_Slider_C.SetRangedValue
	 */
	struct UWBP_Slider_C_SetRangedValue_Params
	{
	public:
		float                                                      rangedValue;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Slider.WBP_Slider_C.GetRangedValue
	 */
	struct UWBP_Slider_C_GetRangedValue_Params
	{
	public:
		float                                                      rangedValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Slider.WBP_Slider_C.SetValue
	 */
	struct UWBP_Slider_C_SetValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Slider.WBP_Slider_C.GetValue
	 */
	struct UWBP_Slider_C_GetValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Slider.WBP_Slider_C.UpdateSliderValue
	 */
	struct UWBP_Slider_C_UpdateSliderValue_Params
	{	};

	/**
	 * Function WBP_Slider.WBP_Slider_C.UpdateButtons
	 */
	struct UWBP_Slider_C_UpdateButtons_Params
	{	};

	/**
	 * Function WBP_Slider.WBP_Slider_C.SetEnabled
	 */
	struct UWBP_Slider_C_SetEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Slider.WBP_Slider_C.IsEnabled
	 */
	struct UWBP_Slider_C_IsEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Slider.WBP_Slider_C.Construct
	 */
	struct UWBP_Slider_C_Construct_Params
	{	};

	/**
	 * Function WBP_Slider.WBP_Slider_C.PreConstruct
	 */
	struct UWBP_Slider_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Slider.WBP_Slider_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_Slider_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Slider.WBP_Slider_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_Slider_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Slider.WBP_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UWBP_Slider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Slider.WBP_Slider_C.ExecuteUbergraph_WBP_Slider
	 */
	struct UWBP_Slider_C_ExecuteUbergraph_WBP_Slider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Slider.WBP_Slider_C.OnValueChanged__DelegateSignature
	 */
	struct UWBP_Slider_C_OnValueChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
