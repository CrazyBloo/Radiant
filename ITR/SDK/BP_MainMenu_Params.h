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
	 * Function BP_MainMenu.BP_MainMenu_C.ReceiveEndPlay
	 */
	struct ABP_MainMenu_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.OnGameStarted
	 */
	struct ABP_MainMenu_C_OnGameStarted_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.ReceiveTick
	 */
	struct ABP_MainMenu_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.OnTransitionEnd
	 */
	struct ABP_MainMenu_C_OnTransitionEnd_Params
	{	};

	/**
	 * Function BP_MainMenu.BP_MainMenu_C.ExecuteUbergraph_BP_MainMenu
	 */
	struct ABP_MainMenu_C_ExecuteUbergraph_BP_MainMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BARD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
