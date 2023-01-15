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
	 * Function WBP_PointMarker_Hint.WBP_PointMarker_Hint_C.Construct
	 */
	struct UWBP_PointMarker_Hint_C_Construct_Params
	{	};

	/**
	 * Function WBP_PointMarker_Hint.WBP_PointMarker_Hint_C.SetText
	 */
	struct UWBP_PointMarker_Hint_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_PointMarker_Hint.WBP_PointMarker_Hint_C.SetCompleted
	 */
	struct UWBP_PointMarker_Hint_C_SetCompleted_Params
	{
	public:
		bool                                                       Completed;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_PointMarker_Hint.WBP_PointMarker_Hint_C.ExecuteUbergraph_WBP_PointMarker_Hint
	 */
	struct UWBP_PointMarker_Hint_C_ExecuteUbergraph_WBP_PointMarker_Hint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K6SR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
