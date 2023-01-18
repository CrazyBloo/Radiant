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
	 * 		Name   -> Function WBP_Block_Saves.WBP_Block_Saves_C.SetTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Save                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Block_Saves_C::SetTitle(bool Save)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Saves.WBP_Block_Saves_C.SetTitle");
		
		UWBP_Block_Saves_C_SetTitle_Params params {};
		params.Save = Save;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Saves.WBP_Block_Saves_C.UpdateTitle
	 * 		Flags  -> ()
	 */
	void UWBP_Block_Saves_C::UpdateTitle()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Saves.WBP_Block_Saves_C.UpdateTitle");
		
		UWBP_Block_Saves_C_UpdateTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Saves.WBP_Block_Saves_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_Block_Saves_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Saves.WBP_Block_Saves_C.Construct");
		
		UWBP_Block_Saves_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Saves.WBP_Block_Saves_C.RefreshList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNr                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Save                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Block_Saves_C::RefreshList(int32_t SlotNr, bool Save)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Saves.WBP_Block_Saves_C.RefreshList");
		
		UWBP_Block_Saves_C_RefreshList_Params params {};
		params.SlotNr = SlotNr;
		params.Save = Save;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Saves.WBP_Block_Saves_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Block_Saves_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Saves.WBP_Block_Saves_C.PreConstruct");
		
		UWBP_Block_Saves_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Saves.WBP_Block_Saves_C.Update
	 * 		Flags  -> ()
	 */
	void UWBP_Block_Saves_C::Update()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Saves.WBP_Block_Saves_C.Update");
		
		UWBP_Block_Saves_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Saves.WBP_Block_Saves_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Block_Saves_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Saves.WBP_Block_Saves_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature");
		
		UWBP_Block_Saves_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Saves.WBP_Block_Saves_C.BndEvt__SaveSlot_Autosave_2_K2Node_ComponentBoundEvent_6_OnSlotSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Block_Saves_C::BndEvt__SaveSlot_Autosave_2_K2Node_ComponentBoundEvent_6_OnSlotSelected__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Saves.WBP_Block_Saves_C.BndEvt__SaveSlot_Autosave_2_K2Node_ComponentBoundEvent_6_OnSlotSelected__DelegateSignature");
		
		UWBP_Block_Saves_C_BndEvt__SaveSlot_Autosave_2_K2Node_ComponentBoundEvent_6_OnSlotSelected__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Saves.WBP_Block_Saves_C.BndEvt__SaveSlot_Autosave_3_K2Node_ComponentBoundEvent_7_OnSlotSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Block_Saves_C::BndEvt__SaveSlot_Autosave_3_K2Node_ComponentBoundEvent_7_OnSlotSelected__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Saves.WBP_Block_Saves_C.BndEvt__SaveSlot_Autosave_3_K2Node_ComponentBoundEvent_7_OnSlotSelected__DelegateSignature");
		
		UWBP_Block_Saves_C_BndEvt__SaveSlot_Autosave_3_K2Node_ComponentBoundEvent_7_OnSlotSelected__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Saves.WBP_Block_Saves_C.BndEvt__SaveSlot_1_K2Node_ComponentBoundEvent_8_OnSlotSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Block_Saves_C::BndEvt__SaveSlot_1_K2Node_ComponentBoundEvent_8_OnSlotSelected__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Saves.WBP_Block_Saves_C.BndEvt__SaveSlot_1_K2Node_ComponentBoundEvent_8_OnSlotSelected__DelegateSignature");
		
		UWBP_Block_Saves_C_BndEvt__SaveSlot_1_K2Node_ComponentBoundEvent_8_OnSlotSelected__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Saves.WBP_Block_Saves_C.BndEvt__SaveSlot_2_K2Node_ComponentBoundEvent_9_OnSlotSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Block_Saves_C::BndEvt__SaveSlot_2_K2Node_ComponentBoundEvent_9_OnSlotSelected__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Saves.WBP_Block_Saves_C.BndEvt__SaveSlot_2_K2Node_ComponentBoundEvent_9_OnSlotSelected__DelegateSignature");
		
		UWBP_Block_Saves_C_BndEvt__SaveSlot_2_K2Node_ComponentBoundEvent_9_OnSlotSelected__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Saves.WBP_Block_Saves_C.BndEvt__SaveSlot_3_K2Node_ComponentBoundEvent_10_OnSlotSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Block_Saves_C::BndEvt__SaveSlot_3_K2Node_ComponentBoundEvent_10_OnSlotSelected__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Saves.WBP_Block_Saves_C.BndEvt__SaveSlot_3_K2Node_ComponentBoundEvent_10_OnSlotSelected__DelegateSignature");
		
		UWBP_Block_Saves_C_BndEvt__SaveSlot_3_K2Node_ComponentBoundEvent_10_OnSlotSelected__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Saves.WBP_Block_Saves_C.BndEvt__SaveSlot_4_K2Node_ComponentBoundEvent_11_OnSlotSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Block_Saves_C::BndEvt__SaveSlot_4_K2Node_ComponentBoundEvent_11_OnSlotSelected__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Saves.WBP_Block_Saves_C.BndEvt__SaveSlot_4_K2Node_ComponentBoundEvent_11_OnSlotSelected__DelegateSignature");
		
		UWBP_Block_Saves_C_BndEvt__SaveSlot_4_K2Node_ComponentBoundEvent_11_OnSlotSelected__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Saves.WBP_Block_Saves_C.BndEvt__SaveSlot_Autosave_1_K2Node_ComponentBoundEvent_12_OnSlotSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Block_Saves_C::BndEvt__SaveSlot_Autosave_1_K2Node_ComponentBoundEvent_12_OnSlotSelected__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Saves.WBP_Block_Saves_C.BndEvt__SaveSlot_Autosave_1_K2Node_ComponentBoundEvent_12_OnSlotSelected__DelegateSignature");
		
		UWBP_Block_Saves_C_BndEvt__SaveSlot_Autosave_1_K2Node_ComponentBoundEvent_12_OnSlotSelected__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Saves.WBP_Block_Saves_C.BndEvt__Button_Slots_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Block_Saves_C::BndEvt__Button_Slots_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Saves.WBP_Block_Saves_C.BndEvt__Button_Slots_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
		UWBP_Block_Saves_C_BndEvt__Button_Slots_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Saves.WBP_Block_Saves_C.ExecuteUbergraph_WBP_Block_Saves
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Block_Saves_C::ExecuteUbergraph_WBP_Block_Saves(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Saves.WBP_Block_Saves_C.ExecuteUbergraph_WBP_Block_Saves");
		
		UWBP_Block_Saves_C_ExecuteUbergraph_WBP_Block_Saves_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Saves.WBP_Block_Saves_C.OnSlots__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Block_Saves_C::OnSlots__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Saves.WBP_Block_Saves_C.OnSlots__DelegateSignature");
		
		UWBP_Block_Saves_C_OnSlots__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Saves.WBP_Block_Saves_C.OnBack__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_Block_Saves_C::OnBack__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Saves.WBP_Block_Saves_C.OnBack__DelegateSignature");
		
		UWBP_Block_Saves_C_OnBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Block_Saves.WBP_Block_Saves_C.OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNr                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SaveNr                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Block_Saves_C::OnSelected__DelegateSignature(int32_t SlotNr, int32_t SaveNr)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Block_Saves.WBP_Block_Saves_C.OnSelected__DelegateSignature");
		
		UWBP_Block_Saves_C_OnSelected__DelegateSignature_Params params {};
		params.SlotNr = SlotNr;
		params.SaveNr = SaveNr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Block_Saves_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Block_Saves_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Block_Saves.WBP_Block_Saves_C");
		return ptr;
	}

}


