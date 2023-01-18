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
	 * Function WBP_Element_ObjectiveResult.WBP_Element_ObjectiveResult_C.Update
	 */
	struct UWBP_Element_ObjectiveResult_C_Update_Params
	{
	public:
		class UMissionAbstractObjectiveData*                       objectiveData;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Element_ObjectiveResult.WBP_Element_ObjectiveResult_C.UpdateWounds
	 */
	struct UWBP_Element_ObjectiveResult_C_UpdateWounds_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Element_ObjectiveResult.WBP_Element_ObjectiveResult_C.ExecuteUbergraph_WBP_Element_ObjectiveResult
	 */
	struct UWBP_Element_ObjectiveResult_C_ExecuteUbergraph_WBP_Element_ObjectiveResult_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RE8K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
