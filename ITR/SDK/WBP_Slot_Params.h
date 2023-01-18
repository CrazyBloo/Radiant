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
	 * Function WBP_Slot.WBP_Slot_C.UpdateTitle
	 */
	struct UWBP_Slot_C_UpdateTitle_Params
	{	};

	/**
	 * Function WBP_Slot.WBP_Slot_C.UpdateText
	 */
	struct UWBP_Slot_C_UpdateText_Params
	{	};

	/**
	 * Function WBP_Slot.WBP_Slot_C.UpdateStyles
	 */
	struct UWBP_Slot_C_UpdateStyles_Params
	{	};

	/**
	 * Function WBP_Slot.WBP_Slot_C.GetCurrentColor
	 */
	struct UWBP_Slot_C_GetCurrentColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Slot.WBP_Slot_C.SetSelected
	 */
	struct UWBP_Slot_C_SetSelected_Params
	{
	public:
		bool                                                       _selected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KI0Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Slot.WBP_Slot_C.SetEnabled
	 */
	struct UWBP_Slot_C_SetEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_75ZC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Slot.WBP_Slot_C.IsSelected
	 */
	struct UWBP_Slot_C_IsSelected_Params
	{
	public:
		bool                                                       selected;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Slot.WBP_Slot_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Slot_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Slot.WBP_Slot_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Slot_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Slot.WBP_Slot_C.BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_Slot_C_BndEvt__Button_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Slot.WBP_Slot_C.Construct
	 */
	struct UWBP_Slot_C_Construct_Params
	{	};

	/**
	 * Function WBP_Slot.WBP_Slot_C.PreConstruct
	 */
	struct UWBP_Slot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Slot.WBP_Slot_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UWBP_Slot_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Slot.WBP_Slot_C.Link
	 */
	struct UWBP_Slot_C_Link_Params
	{
	public:
		struct FSaveSlotInfo                                       SlotInfo;                                                // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_Slot.WBP_Slot_C.SetEmpty
	 */
	struct UWBP_Slot_C_SetEmpty_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Slot.WBP_Slot_C.ExecuteUbergraph_WBP_Slot
	 */
	struct UWBP_Slot_C_ExecuteUbergraph_WBP_Slot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Slot.WBP_Slot_C.OnSlotSelected__DelegateSignature
	 */
	struct UWBP_Slot_C_OnSlotSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    SlotNr;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
