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
	 * Function WBP_ListSelector.WBP_ListSelector_C.GetMaxIndex
	 */
	struct UWBP_ListSelector_C_GetMaxIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ListSelector.WBP_ListSelector_C.GetMinIndex
	 */
	struct UWBP_ListSelector_C_GetMinIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ListSelector.WBP_ListSelector_C.SetupSelector
	 */
	struct UWBP_ListSelector_C_SetupSelector_Params
	{
	public:
		TArray<class FText>                                        Variants;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            IndexesOverride;                                         // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    Index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ListSelector.WBP_ListSelector_C.SetSelectorIndex
	 */
	struct UWBP_ListSelector_C_SetSelectorIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ListSelector.WBP_ListSelector_C.GetSelectorIndex
	 */
	struct UWBP_ListSelector_C_GetSelectorIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ListSelector.WBP_ListSelector_C.UpdateButtons
	 */
	struct UWBP_ListSelector_C_UpdateButtons_Params
	{	};

	/**
	 * Function WBP_ListSelector.WBP_ListSelector_C.UpdateText
	 */
	struct UWBP_ListSelector_C_UpdateText_Params
	{	};

	/**
	 * Function WBP_ListSelector.WBP_ListSelector_C.SetSelectorEnabled
	 */
	struct UWBP_ListSelector_C_SetSelectorEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ListSelector.WBP_ListSelector_C.IsSelectorEnabled
	 */
	struct UWBP_ListSelector_C_IsSelectorEnabled_Params
	{
	public:
		bool                                                       returnvalue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ListSelector.WBP_ListSelector_C.Construct
	 */
	struct UWBP_ListSelector_C_Construct_Params
	{	};

	/**
	 * Function WBP_ListSelector.WBP_ListSelector_C.PreConstruct
	 */
	struct UWBP_ListSelector_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ListSelector.WBP_ListSelector_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_ListSelector_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ListSelector.WBP_ListSelector_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_ListSelector_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_ListSelector.WBP_ListSelector_C.ExecuteUbergraph_WBP_ListSelector
	 */
	struct UWBP_ListSelector_C_ExecuteUbergraph_WBP_ListSelector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ListSelector.WBP_ListSelector_C.OnChanged__DelegateSignature
	 */
	struct UWBP_ListSelector_C_OnChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
