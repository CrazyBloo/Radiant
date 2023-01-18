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
	 * Function BP_Map_Level.BP_Map_Level_C.HideMarkers
	 */
	struct ABP_Map_Level_C_HideMarkers_Params
	{	};

	/**
	 * Function BP_Map_Level.BP_Map_Level_C.ShowPlayerPositionMarker
	 */
	struct ABP_Map_Level_C_ShowPlayerPositionMarker_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Map_Level.BP_Map_Level_C.CreateMarker
	 */
	struct ABP_Map_Level_C_CreateMarker_Params
	{
	public:
		EMapMarker                                                 Marker;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NTAL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidgetComponent*                                    WidgetComponent;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Map_Level.BP_Map_Level_C.UpdateMarker
	 */
	struct ABP_Map_Level_C_UpdateMarker_Params
	{
	public:
		class UWidgetComponent*                                    markerWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMapMarker                                                 MarkerType;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0K2T[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaleMultiplier;                                         // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4SXT[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Map_Level.BP_Map_Level_C.Remap Location
	 */
	struct ABP_Map_Level_C_RemapLocation_Params
	{
	public:
		struct FVector                                             relativeRealLocation;                                    // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             relativeMapLocation;                                     // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Map_Level.BP_Map_Level_C.GetMaterialInterface
	 */
	struct ABP_Map_Level_C_GetMaterialInterface_Params
	{
	public:
		bool                                                       Empty;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A6GB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInterface*                                  MaterialInterface;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Map_Level.BP_Map_Level_C.UpdateLevelTag
	 */
	struct ABP_Map_Level_C_UpdateLevelTag_Params
	{	};

	/**
	 * Function BP_Map_Level.BP_Map_Level_C.UpdateMapPicture
	 */
	struct ABP_Map_Level_C_UpdateMapPicture_Params
	{	};

	/**
	 * Function BP_Map_Level.BP_Map_Level_C.UpdatePlayerPosition
	 */
	struct ABP_Map_Level_C_UpdatePlayerPosition_Params
	{	};

	/**
	 * Function BP_Map_Level.BP_Map_Level_C.SetupMarkers
	 */
	struct ABP_Map_Level_C_SetupMarkers_Params
	{
	public:
		TArray<class UMissionData*>                                MissionsData;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Map_Level.BP_Map_Level_C.UpdateMap
	 */
	struct ABP_Map_Level_C_UpdateMap_Params
	{	};

	/**
	 * Function BP_Map_Level.BP_Map_Level_C.UserConstructionScript
	 */
	struct ABP_Map_Level_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Map_Level.BP_Map_Level_C.OnGameStarted
	 */
	struct ABP_Map_Level_C_OnGameStarted_Params
	{	};

	/**
	 * Function BP_Map_Level.BP_Map_Level_C.OnMissionEvent
	 */
	struct ABP_Map_Level_C_OnMissionEvent_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Map_Level.BP_Map_Level_C.OnLevelStartedEvent
	 */
	struct ABP_Map_Level_C_OnLevelStartedEvent_Params
	{
	public:
		struct FGameplayTag                                        Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Map_Level.BP_Map_Level_C.OnCustomMapMarkPassed
	 */
	struct ABP_Map_Level_C_OnCustomMapMarkPassed_Params
	{
	public:
		struct FGameplayTag                                        Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Map_Level.BP_Map_Level_C.OnPreview
	 */
	struct ABP_Map_Level_C_OnPreview_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Map_Level.BP_Map_Level_C.ExecuteUbergraph_BP_Map_Level
	 */
	struct ABP_Map_Level_C_ExecuteUbergraph_BP_Map_Level_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6HC9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
