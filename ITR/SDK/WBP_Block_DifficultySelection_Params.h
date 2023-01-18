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
	 * Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.GetStartWithTutorial
	 */
	struct UWBP_Block_DifficultySelection_C_GetStartWithTutorial_Params
	{
	public:
		bool                                                       bWithTutorial;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0A1U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.SelectPreset
	 */
	struct UWBP_Block_DifficultySelection_C_SelectPreset_Params
	{
	public:
		EPRGameDifficultyPreset                                    Preset;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.Construct
	 */
	struct UWBP_Block_DifficultySelection_C_Construct_Params
	{	};

	/**
	 * Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.BndEvt__Button_Start_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature
	 */
	struct UWBP_Block_DifficultySelection_C_BndEvt__Button_Start_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.PreConstruct
	 */
	struct UWBP_Block_DifficultySelection_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Custom_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature
	 */
	struct UWBP_Block_DifficultySelection_C_BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Custom_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Easy_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature
	 */
	struct UWBP_Block_DifficultySelection_C_BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Easy_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Normal_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature
	 */
	struct UWBP_Block_DifficultySelection_C_BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Normal_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Realistic_K2Node_ComponentBoundEvent_4_ButtonPressed__DelegateSignature
	 */
	struct UWBP_Block_DifficultySelection_C_BndEvt__WBP_Block_DifficultySelection_Btn_Preset_Realistic_K2Node_ComponentBoundEvent_4_ButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.BndEvt__WBP_Block_DifficultySelection_Button_Back_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature
	 */
	struct UWBP_Block_DifficultySelection_C_BndEvt__WBP_Block_DifficultySelection_Button_Back_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.ExecuteUbergraph_WBP_Block_DifficultySelection
	 */
	struct UWBP_Block_DifficultySelection_C_ExecuteUbergraph_WBP_Block_DifficultySelection_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Block_DifficultySelection.WBP_Block_DifficultySelection_C.OnDifficultySelected__DelegateSignature
	 */
	struct UWBP_Block_DifficultySelection_C_OnDifficultySelected__DelegateSignature_Params
	{
	public:
		struct FRadiusGameDifficulty                               Difficulty;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       Tutorial;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Ironman;                                                 // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
