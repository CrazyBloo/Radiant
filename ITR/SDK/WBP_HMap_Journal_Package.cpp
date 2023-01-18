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
	 * 		Name   -> Function WBP_HMap_Journal.WBP_HMap_Journal_C.GetCurrentNoteData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNoteData                                   NoteData                                                   (Parm, OutParm)
	 */
	void UWBP_HMap_Journal_C::GetCurrentNoteData(struct FNoteData* NoteData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Journal.WBP_HMap_Journal_C.GetCurrentNoteData");
		
		UWBP_HMap_Journal_C_GetCurrentNoteData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NoteData != nullptr)
			*NoteData = params.NoteData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Journal.WBP_HMap_Journal_C.UpdateNote
	 * 		Flags  -> ()
	 */
	void UWBP_HMap_Journal_C::UpdateNote()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Journal.WBP_HMap_Journal_C.UpdateNote");
		
		UWBP_HMap_Journal_C_UpdateNote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Journal.WBP_HMap_Journal_C.UpdateGroups
	 * 		Flags  -> ()
	 */
	void UWBP_HMap_Journal_C::UpdateGroups()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Journal.WBP_HMap_Journal_C.UpdateGroups");
		
		UWBP_HMap_Journal_C_UpdateGroups_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_HMap_Journal_C::BndEvt__WBP_HMap_Journal_Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_HMap_Journal_C_BndEvt__WBP_HMap_Journal_Button_Left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_HMap_Journal_C::BndEvt__WBP_HMap_Journal_Button_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_HMap_Journal_C_BndEvt__WBP_HMap_Journal_Button_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Journal.WBP_HMap_Journal_C.SwitchPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Shift                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HMap_Journal_C::SwitchPage(int32_t Shift)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Journal.WBP_HMap_Journal_C.SwitchPage");
		
		UWBP_HMap_Journal_C_SwitchPage_Params params {};
		params.Shift = Shift;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Letters_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_HMap_Journal_C::BndEvt__WBP_HMap_Journal_Button_Letters_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Letters_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_HMap_Journal_C_BndEvt__WBP_HMap_Journal_Button_Letters_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Pechorsk_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_HMap_Journal_C::BndEvt__WBP_HMap_Journal_Button_Pechorsk_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Pechorsk_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_HMap_Journal_C_BndEvt__WBP_HMap_Journal_Button_Pechorsk_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Tapes_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_HMap_Journal_C::BndEvt__WBP_HMap_Journal_Button_Tapes_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Tapes_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_HMap_Journal_C_BndEvt__WBP_HMap_Journal_Button_Tapes_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Radius_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_HMap_Journal_C::BndEvt__WBP_HMap_Journal_Button_Radius_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Radius_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_HMap_Journal_C_BndEvt__WBP_HMap_Journal_Button_Radius_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Enemies_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_HMap_Journal_C::BndEvt__WBP_HMap_Journal_Button_Enemies_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Enemies_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_HMap_Journal_C_BndEvt__WBP_HMap_Journal_Button_Enemies_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Anomalies_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_HMap_Journal_C::BndEvt__WBP_HMap_Journal_Button_Anomalies_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Anomalies_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_HMap_Journal_C_BndEvt__WBP_HMap_Journal_Button_Anomalies_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Tips_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_HMap_Journal_C::BndEvt__WBP_HMap_Journal_Button_Tips_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Journal.WBP_HMap_Journal_C.BndEvt__WBP_HMap_Journal_Button_Tips_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature");
		
		UWBP_HMap_Journal_C_BndEvt__WBP_HMap_Journal_Button_Tips_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Journal.WBP_HMap_Journal_C.SwitchGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EJournalGroup                                      Group                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HMap_Journal_C::SwitchGroup(EJournalGroup Group)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Journal.WBP_HMap_Journal_C.SwitchGroup");
		
		UWBP_HMap_Journal_C_SwitchGroup_Params params {};
		params.Group = Group;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Journal.WBP_HMap_Journal_C.RefreshJournal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAudioComponent*                             Audio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_HMap_Journal_C::RefreshJournal(class UAudioComponent* Audio, bool Force)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Journal.WBP_HMap_Journal_C.RefreshJournal");
		
		UWBP_HMap_Journal_C_RefreshJournal_Params params {};
		params.Audio = Audio;
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Journal.WBP_HMap_Journal_C.UpdateJournal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EJournalGroup                                      noteGroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            noteIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HMap_Journal_C::UpdateJournal(EJournalGroup noteGroup, int32_t noteIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Journal.WBP_HMap_Journal_C.UpdateJournal");
		
		UWBP_HMap_Journal_C_UpdateJournal_Params params {};
		params.noteGroup = noteGroup;
		params.noteIndex = noteIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_Journal.WBP_HMap_Journal_C.ExecuteUbergraph_WBP_HMap_Journal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HMap_Journal_C::ExecuteUbergraph_WBP_HMap_Journal(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_Journal.WBP_HMap_Journal_C.ExecuteUbergraph_WBP_HMap_Journal");
		
		UWBP_HMap_Journal_C_ExecuteUbergraph_WBP_HMap_Journal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_HMap_Journal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_HMap_Journal_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HMap_Journal.WBP_HMap_Journal_C");
		return ptr;
	}

}


