/**
 * Name: Into_The_Radius_VR
 * Version: 2.5.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.UpdateSaveLocationText
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::UpdateSaveLocationText()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.UpdateSaveLocationText");
		
		UWBP_Cheats_C_UpdateSaveLocationText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.HaveGameplayElements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Cheats_C::HaveGameplayElements(bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.HaveGameplayElements");
		
		UWBP_Cheats_C_HaveGameplayElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.HaveRunningTutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Cheats_C::HaveRunningTutorial(bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.HaveRunningTutorial");
		
		UWBP_Cheats_C_HaveRunningTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.CheckCheatButtons
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::CheckCheatButtons()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.CheckCheatButtons");
		
		UWBP_Cheats_C_CheckCheatButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatStartMission_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__btn_CheatStartMission_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatStartMission_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__btn_CheatStartMission_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_CB_Selection_MissionCategory_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_CB_Selection_MissionCategory_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_CB_Selection_MissionCategory_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_CB_Selection_MissionCategory_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_CB_Selection_MissionId_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_CB_Selection_MissionId_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_CB_Selection_MissionId_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_CB_Selection_MissionId_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.OnMissionSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MissionInstanceId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_Cheats_C::OnMissionSelected(const class FString& MissionInstanceId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.OnMissionSelected");
		
		UWBP_Cheats_C_OnMissionSelected_Params params {};
		params.MissionInstanceId = MissionInstanceId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.SetupMissions
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::SetupMissions()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.SetupMissions");
		
		UWBP_Cheats_C_SetupMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.UpdateMissionButton
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::UpdateMissionButton()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.UpdateMissionButton");
		
		UWBP_Cheats_C_UpdateMissionButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.UpdateMissionList
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::UpdateMissionList()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.UpdateMissionList");
		
		UWBP_Cheats_C_UpdateMissionList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.Construct");
		
		UWBP_Cheats_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatMoney_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__btn_CheatMoney_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatMoney_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__btn_CheatMoney_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatNextQuest_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__btn_CheatNextQuest_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatNextQuest_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__btn_CheatNextQuest_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.UpdateDebugValues
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::UpdateDebugValues()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.UpdateDebugValues");
		
		UWBP_Cheats_C_UpdateDebugValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatShowAnoms_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__btn_CheatShowAnoms_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatShowAnoms_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__btn_CheatShowAnoms_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_cheatSpeed_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__btn_cheatSpeed_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_cheatSpeed_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__btn_cheatSpeed_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_GodMode_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__btn_GodMode_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_GodMode_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__btn_GodMode_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatInvis_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__btn_CheatInvis_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatInvis_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__btn_CheatInvis_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatAddBeginerStuff_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__btn_CheatAddBeginerStuff_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatAddBeginerStuff_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__btn_CheatAddBeginerStuff_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatDeleteNPCs_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__btn_CheatDeleteNPCs_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatDeleteNPCs_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__btn_CheatDeleteNPCs_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.UpdateDateTime
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::UpdateDateTime()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.UpdateDateTime");
		
		UWBP_Cheats_C_UpdateDateTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.UpdateValuesEvent
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::UpdateValuesEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.UpdateValuesEvent");
		
		UWBP_Cheats_C_UpdateValuesEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatSkipTutorialStep_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__btn_CheatSkipTutorialStep_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatSkipTutorialStep_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__btn_CheatSkipTutorialStep_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatFinishSequencer_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__btn_CheatFinishSequencer_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatFinishSequencer_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__btn_CheatFinishSequencer_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatAddTime8_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__btn_CheatAddTime8_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatAddTime8_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__btn_CheatAddTime8_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatNightvision_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__btn_CheatNightvision_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatNightvision_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__btn_CheatNightvision_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::Destruct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.Destruct");
		
		UWBP_Cheats_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_StopTime_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__btn_StopTime_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_StopTime_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__btn_StopTime_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__BtnCheatMoney100_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__BtnCheatMoney100_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__BtnCheatMoney100_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__BtnCheatMoney100_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__BtnCheatMoney10000_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__BtnCheatMoney10000_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__BtnCheatMoney10000_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__BtnCheatMoney10000_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatAddTime2_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__btn_CheatAddTime2_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatAddTime2_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__btn_CheatAddTime2_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_SwitchTutorialBoxes_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__btn_SwitchTutorialBoxes_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_SwitchTutorialBoxes_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__btn_SwitchTutorialBoxes_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__Slider_Stamina_K2Node_ComponentBoundEvent_15_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Cheats_C::BndEvt__Slider_Stamina_K2Node_ComponentBoundEvent_15_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__Slider_Stamina_K2Node_ComponentBoundEvent_15_OnFloatValueChangedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__Slider_Stamina_K2Node_ComponentBoundEvent_15_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__Slider_Rest_K2Node_ComponentBoundEvent_16_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Cheats_C::BndEvt__Slider_Rest_K2Node_ComponentBoundEvent_16_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__Slider_Rest_K2Node_ComponentBoundEvent_16_OnFloatValueChangedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__Slider_Rest_K2Node_ComponentBoundEvent_16_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__Slider_Health_K2Node_ComponentBoundEvent_17_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Cheats_C::BndEvt__Slider_Health_K2Node_ComponentBoundEvent_17_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__Slider_Health_K2Node_ComponentBoundEvent_17_OnFloatValueChangedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__Slider_Health_K2Node_ComponentBoundEvent_17_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__Slider_Nutrition_K2Node_ComponentBoundEvent_18_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Cheats_C::BndEvt__Slider_Nutrition_K2Node_ComponentBoundEvent_18_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__Slider_Nutrition_K2Node_ComponentBoundEvent_18_OnFloatValueChangedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__Slider_Nutrition_K2Node_ComponentBoundEvent_18_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatNoClip_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__btn_CheatNoClip_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__btn_CheatNoClip_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__btn_CheatNoClip_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__CB_Spawn_Selection_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Cheats_C::BndEvt__CB_Spawn_Selection_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__CB_Spawn_Selection_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__CB_Spawn_Selection_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__CB_Selection_Secondary_K2Node_ComponentBoundEvent_23_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Cheats_C::BndEvt__CB_Selection_Secondary_K2Node_ComponentBoundEvent_23_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__CB_Selection_Secondary_K2Node_ComponentBoundEvent_23_OnSelectionChangedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__CB_Selection_Secondary_K2Node_ComponentBoundEvent_23_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__CB_Selection_Misc_K2Node_ComponentBoundEvent_24_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Cheats_C::BndEvt__CB_Selection_Misc_K2Node_ComponentBoundEvent_24_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__CB_Selection_Misc_K2Node_ComponentBoundEvent_24_OnSelectionChangedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__CB_Selection_Misc_K2Node_ComponentBoundEvent_24_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__CB_Selection_Ammo_K2Node_ComponentBoundEvent_25_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Cheats_C::BndEvt__CB_Selection_Ammo_K2Node_ComponentBoundEvent_25_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__CB_Selection_Ammo_K2Node_ComponentBoundEvent_25_OnSelectionChangedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__CB_Selection_Ammo_K2Node_ComponentBoundEvent_25_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__CB_Selection_Attach_K2Node_ComponentBoundEvent_22_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Cheats_C::BndEvt__CB_Selection_Attach_K2Node_ComponentBoundEvent_22_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__CB_Selection_Attach_K2Node_ComponentBoundEvent_22_OnSelectionChangedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__CB_Selection_Attach_K2Node_ComponentBoundEvent_22_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_CB_Selection_Mags_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_CB_Selection_Mags_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_CB_Selection_Mags_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_CB_Selection_Mags_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_Cheat_PlayerLevel_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_btn_Cheat_PlayerLevel_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_Cheat_PlayerLevel_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_Cheat_PlayerLevel_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatOpenAllLevels_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_btn_CheatOpenAllLevels_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatOpenAllLevels_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_CheatOpenAllLevels_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatTide_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_btn_CheatTide_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatTide_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_CheatTide_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_cb_TeleportToLevel_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_cb_TeleportToLevel_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_cb_TeleportToLevel_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_cb_TeleportToLevel_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.UpdateStatsValues
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::UpdateStatsValues()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.UpdateStatsValues");
		
		UWBP_Cheats_C_UpdateStatsValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_ShowControllers_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_btn_ShowControllers_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_ShowControllers_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_ShowControllers_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_CB_Selection_Cassette_Story_K2Node_ComponentBoundEvent_19_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_CB_Selection_Cassette_Story_K2Node_ComponentBoundEvent_19_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_CB_Selection_Cassette_Story_K2Node_ComponentBoundEvent_19_OnSelectionChangedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_CB_Selection_Cassette_Story_K2Node_ComponentBoundEvent_19_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatCrashTest_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_btn_CheatCrashTest_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatCrashTest_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_CheatCrashTest_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatReset_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_btn_CheatReset_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatReset_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_CheatReset_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_CB_Selection_Achievement_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_CB_Selection_Achievement_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_CB_Selection_Achievement_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_CB_Selection_Achievement_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatAchievementsLog_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_btn_CheatAchievementsLog_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatAchievementsLog_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_CheatAchievementsLog_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_CB_Reload_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_CB_Reload_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_CB_Reload_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_CB_Reload_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_Tab_Missions_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_Tab_Missions_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_Tab_Missions_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_Tab_Missions_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_Tab_Cheats_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_Tab_Cheats_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_Tab_Cheats_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_Tab_Cheats_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.ShowCheats
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::ShowCheats()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.ShowCheats");
		
		UWBP_Cheats_C_ShowCheats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatDeleteLoot_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_btn_CheatDeleteLoot_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatDeleteLoot_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_CheatDeleteLoot_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_SaveLocationToggle_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_btn_SaveLocationToggle_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_SaveLocationToggle_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_SaveLocationToggle_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_SaveCopyScopedToAlt_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_btn_SaveCopyScopedToAlt_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_SaveCopyScopedToAlt_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_SaveCopyScopedToAlt_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_SaveCopyAltToScoped_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_btn_SaveCopyAltToScoped_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_SaveCopyAltToScoped_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_SaveCopyAltToScoped_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_StartProfile_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_btn_StartProfile_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_StartProfile_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_StartProfile_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_StopProfile_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_btn_StopProfile_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_StopProfile_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_StopProfile_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_Tab_Stats_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_Tab_Stats_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_Tab_Stats_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_Tab_Stats_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_CB_NoRandom_K2Node_ComponentBoundEvent_42_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_CB_NoRandom_K2Node_ComponentBoundEvent_42_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_CB_NoRandom_K2Node_ComponentBoundEvent_42_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_CB_NoRandom_K2Node_ComponentBoundEvent_42_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatSkipTutorial_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_btn_CheatSkipTutorial_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatSkipTutorial_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_CheatSkipTutorial_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatDeleteSelect_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_btn_CheatDeleteSelect_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatDeleteSelect_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_CheatDeleteSelect_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_Tab_Profiling_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_Tab_Profiling_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_Tab_Profiling_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_Tab_Profiling_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_StartPCProfile_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_btn_StartPCProfile_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_StartPCProfile_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_StartPCProfile_K2Node_ComponentBoundEvent_47_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatPrintShopBin_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Cheats_C::BndEvt__WBP_Cheats_btn_CheatPrintShopBin_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.BndEvt__WBP_Cheats_btn_CheatPrintShopBin_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_Cheats_C_BndEvt__WBP_Cheats_btn_CheatPrintShopBin_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Cheats.WBP_Cheats_C.ExecuteUbergraph_WBP_Cheats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Cheats_C::ExecuteUbergraph_WBP_Cheats(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Cheats.WBP_Cheats_C.ExecuteUbergraph_WBP_Cheats");
		
		UWBP_Cheats_C_ExecuteUbergraph_WBP_Cheats_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Cheats_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Cheats_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Cheats.WBP_Cheats_C");
		return ptr;
	}

}


