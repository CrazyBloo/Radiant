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
	 * Function WBP_Element_TapeRecord.WBP_Element_TapeRecord_C.Update
	 */
	struct UWBP_Element_TapeRecord_C_Update_Params
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FDialogue                                           Dialogue;                                                // 0x0008(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_Element_TapeRecord.WBP_Element_TapeRecord_C.BndEvt__Button_Mission_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_Element_TapeRecord_C_BndEvt__Button_Mission_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Element_TapeRecord.WBP_Element_TapeRecord_C.BndEvt__Button_Mission_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Element_TapeRecord_C_BndEvt__Button_Mission_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Element_TapeRecord.WBP_Element_TapeRecord_C.BndEvt__Button_Mission_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Element_TapeRecord_C_BndEvt__Button_Mission_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Element_TapeRecord.WBP_Element_TapeRecord_C.ExecuteUbergraph_WBP_Element_TapeRecord
	 */
	struct UWBP_Element_TapeRecord_C_ExecuteUbergraph_WBP_Element_TapeRecord_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RLEA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Element_TapeRecord.WBP_Element_TapeRecord_C.OnTapeRecordButtonPressed__DelegateSignature
	 */
	struct UWBP_Element_TapeRecord_C_OnTapeRecordButtonPressed__DelegateSignature_Params
	{
	public:
		struct FGameplayTag                                        recordTag;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
