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
	 * Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.PageTick
	 */
	struct UWBP_MCPage_Missions_C_PageTick_Params
	{	};

	/**
	 * Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.Construct
	 */
	struct UWBP_MCPage_Missions_C_Construct_Params
	{	};

	/**
	 * Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.ShowPage
	 */
	struct UWBP_MCPage_Missions_C_ShowPage_Params
	{	};

	/**
	 * Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.BndEvt__WBP_MCPage_Missions_Button_InProgress_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature
	 */
	struct UWBP_MCPage_Missions_C_BndEvt__WBP_MCPage_Missions_Button_InProgress_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.BndEvt__WBP_MCPage_Missions_Button_NotStarted_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature
	 */
	struct UWBP_MCPage_Missions_C_BndEvt__WBP_MCPage_Missions_Button_NotStarted_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.BndEvt__WBP_MCPage_Missions_Button_Back_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UWBP_MCPage_Missions_C_BndEvt__WBP_MCPage_Missions_Button_Back_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.OnExecutingMissionPress
	 */
	struct UWBP_MCPage_Missions_C_OnExecutingMissionPress_Params
	{
	public:
		class FString                                              MissionInstanceId;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.OnMissionPress
	 */
	struct UWBP_MCPage_Missions_C_OnMissionPress_Params
	{
	public:
		class FString                                              MissionInstanceId;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MCPage_Missions.WBP_MCPage_Missions_C.ExecuteUbergraph_WBP_MCPage_Missions
	 */
	struct UWBP_MCPage_Missions_C_ExecuteUbergraph_WBP_MCPage_Missions_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1H0X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
