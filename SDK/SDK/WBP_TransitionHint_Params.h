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
	 * Function WBP_TransitionHint.WBP_TransitionHint_C.Show PSOPercent
	 */
	struct UWBP_TransitionHint_C_Show_PSOPercent_Params
	{	};

	/**
	 * Function WBP_TransitionHint.WBP_TransitionHint_C.ChangeText
	 */
	struct UWBP_TransitionHint_C_ChangeText_Params
	{	};

	/**
	 * Function WBP_TransitionHint.WBP_TransitionHint_C.OnGameStartedEventDelegate
	 */
	struct UWBP_TransitionHint_C_OnGameStartedEventDelegate_Params
	{	};

	/**
	 * Function WBP_TransitionHint.WBP_TransitionHint_C.Construct
	 */
	struct UWBP_TransitionHint_C_Construct_Params
	{	};

	/**
	 * Function WBP_TransitionHint.WBP_TransitionHint_C.Destruct
	 */
	struct UWBP_TransitionHint_C_Destruct_Params
	{	};

	/**
	 * Function WBP_TransitionHint.WBP_TransitionHint_C.Tick
	 */
	struct UWBP_TransitionHint_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_TransitionHint.WBP_TransitionHint_C.ExecuteUbergraph_WBP_TransitionHint
	 */
	struct UWBP_TransitionHint_C_ExecuteUbergraph_WBP_TransitionHint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
