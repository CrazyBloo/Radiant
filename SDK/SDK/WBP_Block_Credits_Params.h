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
	 * Function WBP_Block_Credits.WBP_Block_Credits_C.SequenceEvent__ENTRYPOINTWBP_Block_Credits_1
	 */
	struct UWBP_Block_Credits_C_SequenceEvent__ENTRYPOINTWBP_Block_Credits_1_Params
	{	};

	/**
	 * Function WBP_Block_Credits.WBP_Block_Credits_C.SequenceEvent_Scroll
	 */
	struct UWBP_Block_Credits_C_SequenceEvent_Scroll_Params
	{	};

	/**
	 * Function WBP_Block_Credits.WBP_Block_Credits_C.Construct
	 */
	struct UWBP_Block_Credits_C_Construct_Params
	{	};

	/**
	 * Function WBP_Block_Credits.WBP_Block_Credits_C.Tick
	 */
	struct UWBP_Block_Credits_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Block_Credits.WBP_Block_Credits_C.BndEvt__WBP_Block_Credits_ScrollBox_1_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
	 */
	struct UWBP_Block_Credits_C_BndEvt__WBP_Block_Credits_ScrollBox_1_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params
	{
	public:
		float                                                      CurrentOffset;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Block_Credits.WBP_Block_Credits_C.EventOnVisibilityChanged
	 */
	struct UWBP_Block_Credits_C_EventOnVisibilityChanged_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Block_Credits.WBP_Block_Credits_C.ExecuteUbergraph_WBP_Block_Credits
	 */
	struct UWBP_Block_Credits_C_ExecuteUbergraph_WBP_Block_Credits_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
