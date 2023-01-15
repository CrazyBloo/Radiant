/**
 * Name: Into_The_Radius_VR
 * Version: 2.4
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
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.OpenGameSaveSelection
	 * 		Flags  -> ()
	 */
	void UWBP_MainMenu_C::OpenGameSaveSelection()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OpenGameSaveSelection");
		
		UWBP_MainMenu_C_OpenGameSaveSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.OpenExitGame
	 * 		Flags  -> ()
	 */
	void UWBP_MainMenu_C::OpenExitGame()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OpenExitGame");
		
		UWBP_MainMenu_C_OpenExitGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.OpenSettings
	 * 		Flags  -> ()
	 */
	void UWBP_MainMenu_C::OpenSettings()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OpenSettings");
		
		UWBP_MainMenu_C_OpenSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.OpenGameSlotSelection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               newGame                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MainMenu_C::OpenGameSlotSelection(bool newGame)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OpenGameSlotSelection");
		
		UWBP_MainMenu_C_OpenGameSlotSelection_Params params {};
		params.newGame = newGame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.ResetMenu
	 * 		Flags  -> ()
	 */
	void UWBP_MainMenu_C::ResetMenu()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.ResetMenu");
		
		UWBP_MainMenu_C_ResetMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_MainMenu_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Construct");
		
		UWBP_MainMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Element_DifficultySelection_K2Node_ComponentBoundEvent_7_OnDifficultySelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRadiusGameDifficulty                       Difficulty                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               Tutorial                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Ironman                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MainMenu_C::BndEvt__Element_DifficultySelection_K2Node_ComponentBoundEvent_7_OnDifficultySelected__DelegateSignature(const struct FRadiusGameDifficulty& Difficulty, bool Tutorial, bool Ironman)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Element_DifficultySelection_K2Node_ComponentBoundEvent_7_OnDifficultySelected__DelegateSignature");
		
		UWBP_MainMenu_C_BndEvt__Element_DifficultySelection_K2Node_ComponentBoundEvent_7_OnDifficultySelected__DelegateSignature_Params params {};
		params.Difficulty = Difficulty;
		params.Tutorial = Tutorial;
		params.Ironman = Ironman;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.OnContinueGame
	 * 		Flags  -> ()
	 */
	void UWBP_MainMenu_C::OnContinueGame()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OnContinueGame");
		
		UWBP_MainMenu_C_OnContinueGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_Confirm_K2Node_ComponentBoundEvent_9_OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               confirm                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MainMenu_C::BndEvt__WBP_Confirm_K2Node_ComponentBoundEvent_9_OnSelected__DelegateSignature(bool confirm)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_Confirm_K2Node_ComponentBoundEvent_9_OnSelected__DelegateSignature");
		
		UWBP_MainMenu_C_BndEvt__WBP_Confirm_K2Node_ComponentBoundEvent_9_OnSelected__DelegateSignature_Params params {};
		params.confirm = confirm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MainMenu_C::BndEvt__Button_Continue_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Button_Continue_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature");
		
		UWBP_MainMenu_C_BndEvt__Button_Continue_K2Node_ComponentBoundEvent_6_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Button_NewGame_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MainMenu_C::BndEvt__Button_NewGame_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Button_NewGame_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature");
		
		UWBP_MainMenu_C_BndEvt__Button_NewGame_K2Node_ComponentBoundEvent_10_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Menu_Button_Load_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MainMenu_C::BndEvt__Menu_Button_Load_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Menu_Button_Load_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature");
		
		UWBP_MainMenu_C_BndEvt__Menu_Button_Load_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Menu_Button_Settings_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MainMenu_C::BndEvt__Menu_Button_Settings_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Menu_Button_Settings_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature");
		
		UWBP_MainMenu_C_BndEvt__Menu_Button_Settings_K2Node_ComponentBoundEvent_11_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Menu_Button_Exit_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MainMenu_C::BndEvt__Menu_Button_Exit_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Menu_Button_Exit_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature");
		
		UWBP_MainMenu_C_BndEvt__Menu_Button_Exit_K2Node_ComponentBoundEvent_12_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Menu_Button_Controls_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MainMenu_C::BndEvt__Menu_Button_Controls_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Menu_Button_Controls_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature");
		
		UWBP_MainMenu_C_BndEvt__Menu_Button_Controls_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Block_Settings_K2Node_ComponentBoundEvent_4_OnGraphicsConfig__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MainMenu_C::BndEvt__Block_Settings_K2Node_ComponentBoundEvent_4_OnGraphicsConfig__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Block_Settings_K2Node_ComponentBoundEvent_4_OnGraphicsConfig__DelegateSignature");
		
		UWBP_MainMenu_C_BndEvt__Block_Settings_K2Node_ComponentBoundEvent_4_OnGraphicsConfig__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Block_SettingsGraphics_K2Node_ComponentBoundEvent_5_OnBack__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MainMenu_C::BndEvt__Block_SettingsGraphics_K2Node_ComponentBoundEvent_5_OnBack__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__Block_SettingsGraphics_K2Node_ComponentBoundEvent_5_OnBack__DelegateSignature");
		
		UWBP_MainMenu_C_BndEvt__Block_SettingsGraphics_K2Node_ComponentBoundEvent_5_OnBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_MainMenu_Block_Slots_K2Node_ComponentBoundEvent_13_OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNr                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MainMenu_C::BndEvt__WBP_MainMenu_Block_Slots_K2Node_ComponentBoundEvent_13_OnSelected__DelegateSignature(int32_t SlotNr)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_MainMenu_Block_Slots_K2Node_ComponentBoundEvent_13_OnSelected__DelegateSignature");
		
		UWBP_MainMenu_C_BndEvt__WBP_MainMenu_Block_Slots_K2Node_ComponentBoundEvent_13_OnSelected__DelegateSignature_Params params {};
		params.SlotNr = SlotNr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_MainMenu_Block_Saves_K2Node_ComponentBoundEvent_14_OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNr                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SaveNr                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MainMenu_C::BndEvt__WBP_MainMenu_Block_Saves_K2Node_ComponentBoundEvent_14_OnSelected__DelegateSignature(int32_t SlotNr, int32_t SaveNr)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_MainMenu_Block_Saves_K2Node_ComponentBoundEvent_14_OnSelected__DelegateSignature");
		
		UWBP_MainMenu_C_BndEvt__WBP_MainMenu_Block_Saves_K2Node_ComponentBoundEvent_14_OnSelected__DelegateSignature_Params params {};
		params.SlotNr = SlotNr;
		params.SaveNr = SaveNr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_MainMenu_Block_Saves_K2Node_ComponentBoundEvent_15_OnBack__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MainMenu_C::BndEvt__WBP_MainMenu_Block_Saves_K2Node_ComponentBoundEvent_15_OnBack__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_MainMenu_Block_Saves_K2Node_ComponentBoundEvent_15_OnBack__DelegateSignature");
		
		UWBP_MainMenu_C_BndEvt__WBP_MainMenu_Block_Saves_K2Node_ComponentBoundEvent_15_OnBack__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_MainMenu_Block_ConfirmNewGame_K2Node_ComponentBoundEvent_8_OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               confirm                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_MainMenu_C::BndEvt__WBP_MainMenu_Block_ConfirmNewGame_K2Node_ComponentBoundEvent_8_OnSelected__DelegateSignature(bool confirm)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_MainMenu_Block_ConfirmNewGame_K2Node_ComponentBoundEvent_8_OnSelected__DelegateSignature");
		
		UWBP_MainMenu_C_BndEvt__WBP_MainMenu_Block_ConfirmNewGame_K2Node_ComponentBoundEvent_8_OnSelected__DelegateSignature_Params params {};
		params.confirm = confirm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.DoStartNewGame
	 * 		Flags  -> ()
	 */
	void UWBP_MainMenu_C::DoStartNewGame()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.DoStartNewGame");
		
		UWBP_MainMenu_C_DoStartNewGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_MainMenu_Menu_Button_Credits_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_MainMenu_C::BndEvt__WBP_MainMenu_Menu_Button_Credits_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.BndEvt__WBP_MainMenu_Menu_Button_Credits_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");
		
		UWBP_MainMenu_C_BndEvt__WBP_MainMenu_Menu_Button_Credits_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.ExecuteUbergraph_WBP_MainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_MainMenu_C::ExecuteUbergraph_WBP_MainMenu(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.ExecuteUbergraph_WBP_MainMenu");
		
		UWBP_MainMenu_C_ExecuteUbergraph_WBP_MainMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_MainMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_MainMenu_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MainMenu.WBP_MainMenu_C");
		return ptr;
	}

}


