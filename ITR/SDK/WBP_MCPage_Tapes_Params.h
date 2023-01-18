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
	 * Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.SetButtonsEnable
	 */
	struct UWBP_MCPage_Tapes_C_SetButtonsEnable_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4EX9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.Construct
	 */
	struct UWBP_MCPage_Tapes_C_Construct_Params
	{	};

	/**
	 * Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.ShowPage
	 */
	struct UWBP_MCPage_Tapes_C_ShowPage_Params
	{	};

	/**
	 * Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_MCPage_Tapes_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_MCPage_Tapes_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_MCPage_Tapes_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.PlayRecord
	 */
	struct UWBP_MCPage_Tapes_C_PlayRecord_Params
	{
	public:
		struct FDialogue                                           Record;                                                  // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	};

	/**
	 * Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.OnRecordFinished
	 */
	struct UWBP_MCPage_Tapes_C_OnRecordFinished_Params
	{	};

	/**
	 * Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.BeginProfileOnLevel
	 */
	struct UWBP_MCPage_Tapes_C_BeginProfileOnLevel_Params
	{	};

	/**
	 * Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.OnRecordPressed
	 */
	struct UWBP_MCPage_Tapes_C_OnRecordPressed_Params
	{
	public:
		struct FGameplayTag                                        recordTag;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MCPage_Tapes.WBP_MCPage_Tapes_C.ExecuteUbergraph_WBP_MCPage_Tapes
	 */
	struct UWBP_MCPage_Tapes_C_ExecuteUbergraph_WBP_MCPage_Tapes_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HV1T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
