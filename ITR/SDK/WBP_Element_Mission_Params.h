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
	 * Function WBP_Element_Mission.WBP_Element_Mission_C.Update
	 */
	struct UWBP_Element_Mission_C_Update_Params
	{	};

	/**
	 * Function WBP_Element_Mission.WBP_Element_Mission_C.BndEvt__Button_Mission_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_Element_Mission_C_BndEvt__Button_Mission_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Element_Mission.WBP_Element_Mission_C.BndEvt__Button_Mission_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Element_Mission_C_BndEvt__Button_Mission_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Element_Mission.WBP_Element_Mission_C.BndEvt__Button_Mission_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_Element_Mission_C_BndEvt__Button_Mission_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_Element_Mission.WBP_Element_Mission_C.Setup
	 */
	struct UWBP_Element_Mission_C_Setup_Params
	{
	public:
		class UMissionData*                                        MissionData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_Element_Mission.WBP_Element_Mission_C.ExecuteUbergraph_WBP_Element_Mission
	 */
	struct UWBP_Element_Mission_C_ExecuteUbergraph_WBP_Element_Mission_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_63EK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_Element_Mission.WBP_Element_Mission_C.OnMissionPressed__DelegateSignature
	 */
	struct UWBP_Element_Mission_C_OnMissionPressed__DelegateSignature_Params
	{
	public:
		class FString                                              MissionInstanceId;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
