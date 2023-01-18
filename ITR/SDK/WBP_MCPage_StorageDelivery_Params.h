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
	 * Function WBP_MCPage_StorageDelivery.WBP_MCPage_StorageDelivery_C.PageTick
	 */
	struct UWBP_MCPage_StorageDelivery_C_PageTick_Params
	{	};

	/**
	 * Function WBP_MCPage_StorageDelivery.WBP_MCPage_StorageDelivery_C.UpdatePages
	 */
	struct UWBP_MCPage_StorageDelivery_C_UpdatePages_Params
	{	};

	/**
	 * Function WBP_MCPage_StorageDelivery.WBP_MCPage_StorageDelivery_C.Update
	 */
	struct UWBP_MCPage_StorageDelivery_C_Update_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MCPage_StorageDelivery.WBP_MCPage_StorageDelivery_C.Construct
	 */
	struct UWBP_MCPage_StorageDelivery_C_Construct_Params
	{	};

	/**
	 * Function WBP_MCPage_StorageDelivery.WBP_MCPage_StorageDelivery_C.EM
	 */
	struct UWBP_MCPage_StorageDelivery_C_EM_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MCPage_StorageDelivery.WBP_MCPage_StorageDelivery_C.EO
	 */
	struct UWBP_MCPage_StorageDelivery_C_EO_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMissionAbstractObjectiveData*                       objectiveData;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MCPage_StorageDelivery.WBP_MCPage_StorageDelivery_C.ExecuteUbergraph_WBP_MCPage_StorageDelivery
	 */
	struct UWBP_MCPage_StorageDelivery_C_ExecuteUbergraph_WBP_MCPage_StorageDelivery_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_74NT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
