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
	 * Function WBP_PointMarker_Mission.WBP_PointMarker_Mission_C.Construct
	 */
	struct UWBP_PointMarker_Mission_C_Construct_Params
	{	};

	/**
	 * Function WBP_PointMarker_Mission.WBP_PointMarker_Mission_C.SetText
	 */
	struct UWBP_PointMarker_Mission_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_PointMarker_Mission.WBP_PointMarker_Mission_C.SetCompleted
	 */
	struct UWBP_PointMarker_Mission_C_SetCompleted_Params
	{
	public:
		bool                                                       Completed;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_PointMarker_Mission.WBP_PointMarker_Mission_C.ExecuteUbergraph_WBP_PointMarker_Mission
	 */
	struct UWBP_PointMarker_Mission_C_ExecuteUbergraph_WBP_PointMarker_Mission_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
