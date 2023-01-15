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
	 * Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.UpdateObjectives
	 */
	struct UWBP_MCPage_Delivering_C_UpdateObjectives_Params
	{	};

	/**
	 * Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.SetDeliveryMessagePut
	 */
	struct UWBP_MCPage_Delivering_C_SetDeliveryMessagePut_Params
	{	};

	/**
	 * Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.SetDeliveryMessageClose
	 */
	struct UWBP_MCPage_Delivering_C_SetDeliveryMessageClose_Params
	{	};

	/**
	 * Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.SetDeliveryMessageRemove
	 */
	struct UWBP_MCPage_Delivering_C_SetDeliveryMessageRemove_Params
	{	};

	/**
	 * Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.ToggleDeliveryMessageWrongItem
	 */
	struct UWBP_MCPage_Delivering_C_ToggleDeliveryMessageWrongItem_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.Update
	 */
	struct UWBP_MCPage_Delivering_C_Update_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.PageTick
	 */
	struct UWBP_MCPage_Delivering_C_PageTick_Params
	{	};

	/**
	 * Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.SetDeliveryMessageKill
	 */
	struct UWBP_MCPage_Delivering_C_SetDeliveryMessageKill_Params
	{	};

	/**
	 * Function WBP_MCPage_Delivering.WBP_MCPage_Delivering_C.ExecuteUbergraph_WBP_MCPage_Delivering
	 */
	struct UWBP_MCPage_Delivering_C_ExecuteUbergraph_WBP_MCPage_Delivering_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
