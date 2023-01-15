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
	 * Function WBP_Element_MissionList.WBP_Element_MissionList_C.Construct
	 */
	struct UWBP_Element_MissionList_C_Construct_Params
	{	};

	/**
	 * Function WBP_Element_MissionList.WBP_Element_MissionList_C.OnMissionPress
	 */
	struct UWBP_Element_MissionList_C_OnMissionPress_Params
	{
	public:
		class FString                                              MissionInstanceId;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Element_MissionList.WBP_Element_MissionList_C.Update
	 */
	struct UWBP_Element_MissionList_C_Update_Params
	{	};

	/**
	 * Function WBP_Element_MissionList.WBP_Element_MissionList_C.Setup
	 */
	struct UWBP_Element_MissionList_C_Setup_Params
	{
	public:
		TArray<class UMissionData*>                                MissionData;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_Element_MissionList.WBP_Element_MissionList_C.ExecuteUbergraph_WBP_Element_MissionList
	 */
	struct UWBP_Element_MissionList_C_ExecuteUbergraph_WBP_Element_MissionList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Element_MissionList.WBP_Element_MissionList_C.OnMissionSelected__DelegateSignature
	 */
	struct UWBP_Element_MissionList_C_OnMissionSelected__DelegateSignature_Params
	{
	public:
		class FString                                              MissionInstanceId;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
