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
	 * Function WBP_HMap_FullObjective.WBP_HMap_FullObjective_C.Set Count
	 */
	struct UWBP_HMap_FullObjective_C_SetCount_Params
	{	};

	/**
	 * Function WBP_HMap_FullObjective.WBP_HMap_FullObjective_C.Get Taken Pics
	 */
	struct UWBP_HMap_FullObjective_C_GetTakenPics_Params
	{
	public:
		TArray<struct FGameplayTag>                                pictures;                                                // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function WBP_HMap_FullObjective.WBP_HMap_FullObjective_C.Update
	 */
	struct UWBP_HMap_FullObjective_C_Update_Params
	{
	public:
		class UMissionAbstractObjectiveData*                       objectiveData;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HMap_FullObjective.WBP_HMap_FullObjective_C.UpdateCountOnly
	 */
	struct UWBP_HMap_FullObjective_C_UpdateCountOnly_Params
	{
	public:
		class UMissionAbstractObjectiveData*                       objectiveData;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HMap_FullObjective.WBP_HMap_FullObjective_C.ExecuteUbergraph_WBP_HMap_FullObjective
	 */
	struct UWBP_HMap_FullObjective_C_ExecuteUbergraph_WBP_HMap_FullObjective_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
