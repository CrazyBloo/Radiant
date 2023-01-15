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
	 * Function WBP_HMap_MapMissionButton.WBP_HMap_MapMissionButton_C.BndEvt__WBP_HMap_MapMissionButton_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_HMap_MapMissionButton_C_BndEvt__WBP_HMap_MapMissionButton_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_HMap_MapMissionButton.WBP_HMap_MapMissionButton_C.Update
	 */
	struct UWBP_HMap_MapMissionButton_C_Update_Params
	{	};

	/**
	 * Function WBP_HMap_MapMissionButton.WBP_HMap_MapMissionButton_C.Construct
	 */
	struct UWBP_HMap_MapMissionButton_C_Construct_Params
	{	};

	/**
	 * Function WBP_HMap_MapMissionButton.WBP_HMap_MapMissionButton_C.SetSelected
	 */
	struct UWBP_HMap_MapMissionButton_C_SetSelected_Params
	{
	public:
		bool                                                       select;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_HMap_MapMissionButton.WBP_HMap_MapMissionButton_C.UpdateStyle
	 */
	struct UWBP_HMap_MapMissionButton_C_UpdateStyle_Params
	{	};

	/**
	 * Function WBP_HMap_MapMissionButton.WBP_HMap_MapMissionButton_C.ExecuteUbergraph_WBP_HMap_MapMissionButton
	 */
	struct UWBP_HMap_MapMissionButton_C_ExecuteUbergraph_WBP_HMap_MapMissionButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HMap_MapMissionButton.WBP_HMap_MapMissionButton_C.OnClicked__DelegateSignature
	 */
	struct UWBP_HMap_MapMissionButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
