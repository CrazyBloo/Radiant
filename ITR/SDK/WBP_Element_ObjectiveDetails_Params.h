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
	 * Function WBP_Element_ObjectiveDetails.WBP_Element_ObjectiveDetails_C.Update
	 */
	struct UWBP_Element_ObjectiveDetails_C_Update_Params
	{
	public:
		class UMissionAbstractObjectiveData*                       objectiveData;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShortName;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Element_ObjectiveDetails.WBP_Element_ObjectiveDetails_C.ShowReward
	 */
	struct UWBP_Element_ObjectiveDetails_C_ShowReward_Params
	{	};

	/**
	 * Function WBP_Element_ObjectiveDetails.WBP_Element_ObjectiveDetails_C.ShowCount
	 */
	struct UWBP_Element_ObjectiveDetails_C_ShowCount_Params
	{
	public:
		bool                                                       IsDelivery;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_Element_ObjectiveDetails.WBP_Element_ObjectiveDetails_C.ExecuteUbergraph_WBP_Element_ObjectiveDetails
	 */
	struct UWBP_Element_ObjectiveDetails_C_ExecuteUbergraph_WBP_Element_ObjectiveDetails_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SJPR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
