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
	 * Function WBP_FirstLaunch.WBP_FirstLaunch_C.Construct
	 */
	struct UWBP_FirstLaunch_C_Construct_Params
	{	};

	/**
	 * Function WBP_FirstLaunch.WBP_FirstLaunch_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature
	 */
	struct UWBP_FirstLaunch_C_BndEvt__Button_Continue_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_FirstLaunch.WBP_FirstLaunch_C.BndEvt__Block_DifficultySelection_K2Node_ComponentBoundEvent_1_OnDifficultySelected__DelegateSignature
	 */
	struct UWBP_FirstLaunch_C_BndEvt__Block_DifficultySelection_K2Node_ComponentBoundEvent_1_OnDifficultySelected__DelegateSignature_Params
	{
	public:
		struct FRadiusGameDifficulty                               Difficulty;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       Tutorial;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Ironman;                                                 // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_FirstLaunch.WBP_FirstLaunch_C.ExecuteUbergraph_WBP_FirstLaunch
	 */
	struct UWBP_FirstLaunch_C_ExecuteUbergraph_WBP_FirstLaunch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KD42[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
