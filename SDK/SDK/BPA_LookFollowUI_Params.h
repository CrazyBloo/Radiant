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
	 * Function BPA_LookFollowUI.BPA_LookFollowUI_C.ReceiveTick
	 */
	struct ABPA_LookFollowUI_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_LookFollowUI.BPA_LookFollowUI_C.ClearRefs
	 */
	struct ABPA_LookFollowUI_C_ClearRefs_Params
	{	};

	/**
	 * Function BPA_LookFollowUI.BPA_LookFollowUI_C.ReceiveEndPlay
	 */
	struct ABPA_LookFollowUI_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_LookFollowUI.BPA_LookFollowUI_C.OnGameStarted
	 */
	struct ABPA_LookFollowUI_C_OnGameStarted_Params
	{	};

	/**
	 * Function BPA_LookFollowUI.BPA_LookFollowUI_C.ExecuteUbergraph_BPA_LookFollowUI
	 */
	struct ABPA_LookFollowUI_C_ExecuteUbergraph_BPA_LookFollowUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0H1K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
