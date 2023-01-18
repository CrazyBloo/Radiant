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
	 * Function WBP_MCPage_StorageDeliveryMissions.WBP_MCPage_StorageDeliveryMissions_C.Construct
	 */
	struct UWBP_MCPage_StorageDeliveryMissions_C_Construct_Params
	{	};

	/**
	 * Function WBP_MCPage_StorageDeliveryMissions.WBP_MCPage_StorageDeliveryMissions_C.PageTick
	 */
	struct UWBP_MCPage_StorageDeliveryMissions_C_PageTick_Params
	{	};

	/**
	 * Function WBP_MCPage_StorageDeliveryMissions.WBP_MCPage_StorageDeliveryMissions_C.ShowPage
	 */
	struct UWBP_MCPage_StorageDeliveryMissions_C_ShowPage_Params
	{	};

	/**
	 * Function WBP_MCPage_StorageDeliveryMissions.WBP_MCPage_StorageDeliveryMissions_C.OnSelected
	 */
	struct UWBP_MCPage_StorageDeliveryMissions_C_OnSelected_Params
	{
	public:
		class FString                                              MissionInstanceId;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MCPage_StorageDeliveryMissions.WBP_MCPage_StorageDeliveryMissions_C.ExecuteUbergraph_WBP_MCPage_StorageDeliveryMissions
	 */
	struct UWBP_MCPage_StorageDeliveryMissions_C_ExecuteUbergraph_WBP_MCPage_StorageDeliveryMissions_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MCPage_StorageDeliveryMissions.WBP_MCPage_StorageDeliveryMissions_C.OnMissionSelected__DelegateSignature
	 */
	struct UWBP_MCPage_StorageDeliveryMissions_C_OnMissionSelected__DelegateSignature_Params
	{
	public:
		class FString                                              InstanceId;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
