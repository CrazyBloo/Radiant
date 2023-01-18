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
	 * Function WBP_HMap_Journal.WBP_HMap_Journal_C.GetCurrentNoteData
	 */
	struct UWBP_HMap_Journal_C_GetCurrentNoteData_Params
	{
	public:
		struct FNoteData                                           NoteData;                                                // 0x0000(0x0048)  (Parm, OutParm)
	};

	/**
	 * Function WBP_HMap_Journal.WBP_HMap_Journal_C.UpdateNote
	 */
	struct UWBP_HMap_Journal_C_UpdateNote_Params
	{	};

	/**
	 * Function WBP_HMap_Journal.WBP_HMap_Journal_C.UpdateGroups
	 */
	struct UWBP_HMap_Journal_C_UpdateGroups_Params
	{	};

	/**
	 * Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_HMap_Journal_C_BndEvt__WBP_HMap_Journal_Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_HMap_Journal_C_BndEvt__WBP_HMap_Journal_Button_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_HMap_Journal.WBP_HMap_Journal_C.SwitchPage
	 */
	struct UWBP_HMap_Journal_C_SwitchPage_Params
	{
	public:
		int32_t                                                    Shift;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Letters_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_HMap_Journal_C_BndEvt__WBP_HMap_Journal_Button_Letters_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Pechorsk_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_HMap_Journal_C_BndEvt__WBP_HMap_Journal_Button_Pechorsk_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Tapes_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_HMap_Journal_C_BndEvt__WBP_HMap_Journal_Button_Tapes_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Radius_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_HMap_Journal_C_BndEvt__WBP_HMap_Journal_Button_Radius_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Enemies_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_HMap_Journal_C_BndEvt__WBP_HMap_Journal_Button_Enemies_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Anomalies_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_HMap_Journal_C_BndEvt__WBP_HMap_Journal_Button_Anomalies_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Tips_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_HMap_Journal_C_BndEvt__WBP_HMap_Journal_Button_Tips_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_HMap_Journal.WBP_HMap_Journal_C.SwitchGroup
	 */
	struct UWBP_HMap_Journal_C_SwitchGroup_Params
	{
	public:
		EJournalGroup                                              Group;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HMap_Journal.WBP_HMap_Journal_C.RefreshJournal
	 */
	struct UWBP_HMap_Journal_C_RefreshJournal_Params
	{
	public:
		class UAudioComponent*                                     Audio;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Force;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_HMap_Journal.WBP_HMap_Journal_C.UpdateJournal
	 */
	struct UWBP_HMap_Journal_C_UpdateJournal_Params
	{
	public:
		EJournalGroup                                              noteGroup;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V6CV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    noteIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_HMap_Journal.WBP_HMap_Journal_C.ExecuteUbergraph_WBP_HMap_Journal
	 */
	struct UWBP_HMap_Journal_C_ExecuteUbergraph_WBP_HMap_Journal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AZII[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
