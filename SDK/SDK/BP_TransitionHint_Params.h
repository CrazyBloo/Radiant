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
	 * Function BP_TransitionHint.BP_TransitionHint_C.UserConstructionScript
	 */
	struct ABP_TransitionHint_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_TransitionHint.BP_TransitionHint_C.ReceiveTick
	 */
	struct ABP_TransitionHint_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TransitionHint.BP_TransitionHint_C.ExecuteUbergraph_BP_TransitionHint
	 */
	struct ABP_TransitionHint_C_ExecuteUbergraph_BP_TransitionHint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
