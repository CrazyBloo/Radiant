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
	 * Function BP_ObjectiveExecutor_FetchItems.BP_ObjectiveExecutor_FetchItems_C.GetPoints
	 */
	struct ABP_ObjectiveExecutor_FetchItems_C_GetPoints_Params
	{
	public:
		TArray<struct FVector>                                     Points;                                                  // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_ObjectiveExecutor_FetchItems.BP_ObjectiveExecutor_FetchItems_C.Execute
	 */
	struct ABP_ObjectiveExecutor_FetchItems_C_Execute_Params
	{	};

	/**
	 * Function BP_ObjectiveExecutor_FetchItems.BP_ObjectiveExecutor_FetchItems_C.ExecuteUbergraph_BP_ObjectiveExecutor_FetchItems
	 */
	struct ABP_ObjectiveExecutor_FetchItems_C_ExecuteUbergraph_BP_ObjectiveExecutor_FetchItems_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
