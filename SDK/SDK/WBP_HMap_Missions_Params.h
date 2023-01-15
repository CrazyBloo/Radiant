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
	 * Function WBP_HMap_Missions.WBP_HMap_Missions_C.UpdateMissionDescription
	 */
	struct UWBP_HMap_Missions_C_UpdateMissionDescription_Params
	{	};

	/**
	 * Function WBP_HMap_Missions.WBP_HMap_Missions_C.UpdateMissions
	 */
	struct UWBP_HMap_Missions_C_UpdateMissions_Params
	{	};

	/**
	 * Function WBP_HMap_Missions.WBP_HMap_Missions_C.OnMissionClicked
	 */
	struct UWBP_HMap_Missions_C_OnMissionClicked_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HMap_Missions.WBP_HMap_Missions_C.Construct
	 */
	struct UWBP_HMap_Missions_C_Construct_Params
	{	};

	/**
	 * Function WBP_HMap_Missions.WBP_HMap_Missions_C.E2
	 */
	struct UWBP_HMap_Missions_C_E2_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMissionAbstractObjectiveData*                       objectiveData;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HMap_Missions.WBP_HMap_Missions_C.E1
	 */
	struct UWBP_HMap_Missions_C_E1_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HMap_Missions.WBP_HMap_Missions_C.OnItemsChangesEvent
	 */
	struct UWBP_HMap_Missions_C_OnItemsChangesEvent_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HMap_Missions.WBP_HMap_Missions_C.OnItemActosChangesEvent
	 */
	struct UWBP_HMap_Missions_C_OnItemActosChangesEvent_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HMap_Missions.WBP_HMap_Missions_C.Set Page Is Open
	 */
	struct UWBP_HMap_Missions_C_Set_Page_Is_Open_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_HMap_Missions.WBP_HMap_Missions_C.OnTriggerOrStoryNote
	 */
	struct UWBP_HMap_Missions_C_OnTriggerOrStoryNote_Params
	{
	public:
		struct FGameplayTag                                        Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HMap_Missions.WBP_HMap_Missions_C.ExecuteUbergraph_WBP_HMap_Missions
	 */
	struct UWBP_HMap_Missions_C_ExecuteUbergraph_WBP_HMap_Missions_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9RX2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
