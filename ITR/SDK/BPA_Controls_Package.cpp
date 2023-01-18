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
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.IsControlAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControlAction                                     ControlAction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsAllowed                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Controls_C::IsControlAllowed(EControlAction ControlAction, bool* bIsAllowed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.IsControlAllowed");
		
		ABPA_Controls_C_IsControlAllowed_Params params {};
		params.ControlAction = ControlAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsAllowed != nullptr)
			*bIsAllowed = params.bIsAllowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.AsString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EControlAction>                             Actions                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::AsString(TArray<EControlAction>* Actions, class FString* String)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.AsString");
		
		ABPA_Controls_C_AsString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actions != nullptr)
			*Actions = params.Actions;
		if (String != nullptr)
			*String = params.String;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.BlockInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EControlAction>                             Actions                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bAllow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Controls_C::BlockInput(TArray<EControlAction>* Actions, bool bAllow)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.BlockInput");
		
		ABPA_Controls_C_BlockInput_Params params {};
		params.bAllow = bAllow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actions != nullptr)
			*Actions = params.Actions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.CheckCanTurn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TurnAllowed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Controls_C::CheckCanTurn(float AxisValue, bool* TurnAllowed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.CheckCanTurn");
		
		ABPA_Controls_C_CheckCanTurn_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TurnAllowed != nullptr)
			*TurnAllowed = params.TurnAllowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.Get Default Hand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControlAction                                     Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHand_EHand                                        DefaultHand                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHand_EHand                                        hand                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::GetDefaultHand(EControlAction Action, EHand_EHand DefaultHand, EHand_EHand* hand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.Get Default Hand");
		
		ABPA_Controls_C_GetDefaultHand_Params params {};
		params.Action = Action;
		params.DefaultHand = DefaultHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (hand != nullptr)
			*hand = params.hand;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.Get Formatted Button Name
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDataTable*                                  DataTable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EControlAction                                     Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		EHand_EHand                                        hand                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  HelpImage                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::GetFormattedButtonName(class UDataTable* DataTable, EControlAction Action, class FString* Name, EHand_EHand* hand, class UTexture2D** HelpImage)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.Get Formatted Button Name");
		
		ABPA_Controls_C_GetFormattedButtonName_Params params {};
		params.DataTable = DataTable;
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
		if (hand != nullptr)
			*hand = params.hand;
		if (HelpImage != nullptr)
			*HelpImage = params.HelpImage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.SwapAxis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Axis_A                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Axis_B                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::SwapAxis(const class FName& Axis_A, const class FName& Axis_B)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.SwapAxis");
		
		ABPA_Controls_C_SwapAxis_Params params {};
		params.Axis_A = Axis_A;
		params.Axis_B = Axis_B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.SwapActions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Action_A                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Action_B                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::SwapActions(const class FName& Action_A, const class FName& Action_B)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.SwapActions");
		
		ABPA_Controls_C_SwapActions_Params params {};
		params.Action_A = Action_A;
		params.Action_B = Action_B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.DebugLog
	 * 		Flags  -> ()
	 */
	void ABPA_Controls_C::DebugLog()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.DebugLog");
		
		ABPA_Controls_C_DebugLog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.RebindAction
	 * 		Flags  -> ()
	 */
	void ABPA_Controls_C::RebindAction()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.RebindAction");
		
		ABPA_Controls_C_RebindAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.Rebind Axis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AxisName                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        NewKey                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::RebindAxis(const class FName& AxisName, const struct FKey& NewKey)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.Rebind Axis");
		
		ABPA_Controls_C_RebindAxis_Params params {};
		params.AxisName = AxisName;
		params.NewKey = NewKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.DehighlightAllButtons
	 * 		Flags  -> ()
	 */
	void ABPA_Controls_C::DehighlightAllButtons()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.DehighlightAllButtons");
		
		ABPA_Controls_C_DehighlightAllButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.HighlightButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Highlight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EHand_EHand                                        hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EControlMaterialName                               Control                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::HighlightButton(bool Highlight, EHand_EHand hand, EControlMaterialName Control)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.HighlightButton");
		
		ABPA_Controls_C_HighlightButton_Params params {};
		params.Highlight = Highlight;
		params.hand = hand;
		params.Control = Control;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.ConvertActionToButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControlAction                                     Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ButtonName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  HelpImage                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHand_EHand                                        DefaultHand                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::ConvertActionToButton(EControlAction Action, class FString* ButtonName, class UTexture2D** HelpImage, EHand_EHand* DefaultHand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.ConvertActionToButton");
		
		ABPA_Controls_C_ConvertActionToButton_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ButtonName != nullptr)
			*ButtonName = params.ButtonName;
		if (HelpImage != nullptr)
			*HelpImage = params.HelpImage;
		if (DefaultHand != nullptr)
			*DefaultHand = params.DefaultHand;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.Vignetter__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABPA_Controls_C::Vignetter__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.Vignetter__FinishedFunc");
		
		ABPA_Controls_C_Vignetter__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.Vignetter__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABPA_Controls_C::Vignetter__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.Vignetter__UpdateFunc");
		
		ABPA_Controls_C_Vignetter__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpActEvt_Inspect_Left_K2Node_InputActionEvent_19
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpActEvt_Inspect_Left_K2Node_InputActionEvent_19(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpActEvt_Inspect_Left_K2Node_InputActionEvent_19");
		
		ABPA_Controls_C_InpActEvt_Inspect_Left_K2Node_InputActionEvent_19_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpActEvt_Inspect_Right_K2Node_InputActionEvent_18
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpActEvt_Inspect_Right_K2Node_InputActionEvent_18(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpActEvt_Inspect_Right_K2Node_InputActionEvent_18");
		
		ABPA_Controls_C_InpActEvt_Inspect_Right_K2Node_InputActionEvent_18_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpActEvt_MagEject_Right_K2Node_InputActionEvent_17
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpActEvt_MagEject_Right_K2Node_InputActionEvent_17(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpActEvt_MagEject_Right_K2Node_InputActionEvent_17");
		
		ABPA_Controls_C_InpActEvt_MagEject_Right_K2Node_InputActionEvent_17_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpActEvt_MagEject_Right_K2Node_InputActionEvent_16
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpActEvt_MagEject_Right_K2Node_InputActionEvent_16(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpActEvt_MagEject_Right_K2Node_InputActionEvent_16");
		
		ABPA_Controls_C_InpActEvt_MagEject_Right_K2Node_InputActionEvent_16_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpActEvt_Firemode_Right_K2Node_InputActionEvent_15
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpActEvt_Firemode_Right_K2Node_InputActionEvent_15(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpActEvt_Firemode_Right_K2Node_InputActionEvent_15");
		
		ABPA_Controls_C_InpActEvt_Firemode_Right_K2Node_InputActionEvent_15_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpActEvt_Firemode_Right_K2Node_InputActionEvent_14
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpActEvt_Firemode_Right_K2Node_InputActionEvent_14(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpActEvt_Firemode_Right_K2Node_InputActionEvent_14");
		
		ABPA_Controls_C_InpActEvt_Firemode_Right_K2Node_InputActionEvent_14_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpActEvt_Firemode_Left_K2Node_InputActionEvent_13
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpActEvt_Firemode_Left_K2Node_InputActionEvent_13(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpActEvt_Firemode_Left_K2Node_InputActionEvent_13");
		
		ABPA_Controls_C_InpActEvt_Firemode_Left_K2Node_InputActionEvent_13_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpActEvt_Firemode_Left_K2Node_InputActionEvent_12
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpActEvt_Firemode_Left_K2Node_InputActionEvent_12(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpActEvt_Firemode_Left_K2Node_InputActionEvent_12");
		
		ABPA_Controls_C_InpActEvt_Firemode_Left_K2Node_InputActionEvent_12_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpActEvt_Menu_K2Node_InputActionEvent_11
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpActEvt_Menu_K2Node_InputActionEvent_11(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpActEvt_Menu_K2Node_InputActionEvent_11");
		
		ABPA_Controls_C_InpActEvt_Menu_K2Node_InputActionEvent_11_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpActEvt_MagEject_Left_K2Node_InputActionEvent_10
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpActEvt_MagEject_Left_K2Node_InputActionEvent_10(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpActEvt_MagEject_Left_K2Node_InputActionEvent_10");
		
		ABPA_Controls_C_InpActEvt_MagEject_Left_K2Node_InputActionEvent_10_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpActEvt_MagEject_Left_K2Node_InputActionEvent_9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpActEvt_MagEject_Left_K2Node_InputActionEvent_9(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpActEvt_MagEject_Left_K2Node_InputActionEvent_9");
		
		ABPA_Controls_C_InpActEvt_MagEject_Left_K2Node_InputActionEvent_9_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpActEvt_Vive_Sprint_Left_K2Node_InputActionEvent_8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpActEvt_Vive_Sprint_Left_K2Node_InputActionEvent_8(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpActEvt_Vive_Sprint_Left_K2Node_InputActionEvent_8");
		
		ABPA_Controls_C_InpActEvt_Vive_Sprint_Left_K2Node_InputActionEvent_8_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpActEvt_Vive_Sprint_Right_K2Node_InputActionEvent_7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpActEvt_Vive_Sprint_Right_K2Node_InputActionEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpActEvt_Vive_Sprint_Right_K2Node_InputActionEvent_7");
		
		ABPA_Controls_C_InpActEvt_Vive_Sprint_Right_K2Node_InputActionEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpActEvt_Thumbstick_Left_K2Node_InputActionEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpActEvt_Thumbstick_Left_K2Node_InputActionEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpActEvt_Thumbstick_Left_K2Node_InputActionEvent_6");
		
		ABPA_Controls_C_InpActEvt_Thumbstick_Left_K2Node_InputActionEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpActEvt_Thumbstick_Right_K2Node_InputActionEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpActEvt_Thumbstick_Right_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpActEvt_Thumbstick_Right_K2Node_InputActionEvent_5");
		
		ABPA_Controls_C_InpActEvt_Thumbstick_Right_K2Node_InputActionEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpActEvt_Trigger_Left_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpActEvt_Trigger_Left_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpActEvt_Trigger_Left_K2Node_InputActionEvent_4");
		
		ABPA_Controls_C_InpActEvt_Trigger_Left_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpActEvt_Trigger_Left_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpActEvt_Trigger_Left_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpActEvt_Trigger_Left_K2Node_InputActionEvent_3");
		
		ABPA_Controls_C_InpActEvt_Trigger_Left_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpActEvt_Trigger_Right_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpActEvt_Trigger_Right_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpActEvt_Trigger_Right_K2Node_InputActionEvent_2");
		
		ABPA_Controls_C_InpActEvt_Trigger_Right_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpActEvt_Trigger_Right_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpActEvt_Trigger_Right_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpActEvt_Trigger_Right_K2Node_InputActionEvent_1");
		
		ABPA_Controls_C_InpActEvt_Trigger_Right_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.HightlightButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Activate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<EControlAction>                             Actions                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABPA_Controls_C::HightlightButtons(bool Activate, TArray<EControlAction> Actions)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.HightlightButtons");
		
		ABPA_Controls_C_HightlightButtons_Params params {};
		params.Activate = Activate;
		params.Actions = Actions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.OnGameStarted
	 * 		Flags  -> ()
	 */
	void ABPA_Controls_C::OnGameStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.OnGameStarted");
		
		ABPA_Controls_C_OnGameStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpAxisEvt_Movement_X_K2Node_InputAxisEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpAxisEvt_Movement_X_K2Node_InputAxisEvent_1(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpAxisEvt_Movement_X_K2Node_InputAxisEvent_1");
		
		ABPA_Controls_C_InpAxisEvt_Movement_X_K2Node_InputAxisEvent_1_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpAxisEvt_Movement_Y_K2Node_InputAxisEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpAxisEvt_Movement_Y_K2Node_InputAxisEvent_2(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpAxisEvt_Movement_Y_K2Node_InputAxisEvent_2");
		
		ABPA_Controls_C_InpAxisEvt_Movement_Y_K2Node_InputAxisEvent_2_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpAxisEvt_Turning_X_K2Node_InputAxisEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpAxisEvt_Turning_X_K2Node_InputAxisEvent_3(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpAxisEvt_Turning_X_K2Node_InputAxisEvent_3");
		
		ABPA_Controls_C_InpAxisEvt_Turning_X_K2Node_InputAxisEvent_3_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpAxisEvt_Turning_Y_K2Node_InputAxisEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpAxisEvt_Turning_Y_K2Node_InputAxisEvent_4(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpAxisEvt_Turning_Y_K2Node_InputAxisEvent_4");
		
		ABPA_Controls_C_InpAxisEvt_Turning_Y_K2Node_InputAxisEvent_4_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.OnMovement_X
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::OnMovement_X(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.OnMovement_X");
		
		ABPA_Controls_C_OnMovement_X_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.OnMovement_Y
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::OnMovement_Y(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.OnMovement_Y");
		
		ABPA_Controls_C_OnMovement_Y_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.OnTurning_X
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::OnTurning_X(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.OnTurning_X");
		
		ABPA_Controls_C_OnTurning_X_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.OnTurning_Y
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::OnTurning_Y(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.OnTurning_Y");
		
		ABPA_Controls_C_OnTurning_Y_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.OneTimeShowVignette
	 * 		Flags  -> ()
	 */
	void ABPA_Controls_C::OneTimeShowVignette()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.OneTimeShowVignette");
		
		ABPA_Controls_C_OneTimeShowVignette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.EventInspect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLeft                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Controls_C::EventInspect(bool IsLeft)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.EventInspect");
		
		ABPA_Controls_C_EventInspect_Params params {};
		params.IsLeft = IsLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpAxisEvt_TriggerAxis_Left_K2Node_InputAxisEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpAxisEvt_TriggerAxis_Left_K2Node_InputAxisEvent_5(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpAxisEvt_TriggerAxis_Left_K2Node_InputAxisEvent_5");
		
		ABPA_Controls_C_InpAxisEvt_TriggerAxis_Left_K2Node_InputAxisEvent_5_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.InpAxisEvt_TriggerAxis_Right_K2Node_InputAxisEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::InpAxisEvt_TriggerAxis_Right_K2Node_InputAxisEvent_6(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.InpAxisEvt_TriggerAxis_Right_K2Node_InputAxisEvent_6");
		
		ABPA_Controls_C_InpAxisEvt_TriggerAxis_Right_K2Node_InputAxisEvent_6_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.Crouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::Crouch(float Axis)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.Crouch");
		
		ABPA_Controls_C_Crouch_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.DoShowVignette
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Controls_C::DoShowVignette(bool bShow)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.DoShowVignette");
		
		ABPA_Controls_C_DoShowVignette_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.ProcessVignetteOnTurn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::ProcessVignetteOnTurn(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.ProcessVignetteOnTurn");
		
		ABPA_Controls_C_ProcessVignetteOnTurn_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.ProcessVignetteMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::ProcessVignetteMove(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.ProcessVignetteMove");
		
		ABPA_Controls_C_ProcessVignetteMove_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.ImmediatelyHideVignette
	 * 		Flags  -> ()
	 */
	void ABPA_Controls_C::ImmediatelyHideVignette()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.ImmediatelyHideVignette");
		
		ABPA_Controls_C_ImmediatelyHideVignette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.SetVignetteValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Transparancy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::SetVignetteValue(float Transparancy)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.SetVignetteValue");
		
		ABPA_Controls_C_SetVignetteValue_Params params {};
		params.Transparancy = Transparancy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.ResetRotation
	 * 		Flags  -> ()
	 */
	void ABPA_Controls_C::ResetRotation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.ResetRotation");
		
		ABPA_Controls_C_ResetRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.ExecuteUbergraph_BPA_Controls
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Controls_C::ExecuteUbergraph_BPA_Controls(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.ExecuteUbergraph_BPA_Controls");
		
		ABPA_Controls_C_ExecuteUbergraph_BPA_Controls_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Controls.BPA_Controls_C.TriggerPressedDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Controls_C::TriggerPressedDispatcher__DelegateSignature(bool Left)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Controls.BPA_Controls_C.TriggerPressedDispatcher__DelegateSignature");
		
		ABPA_Controls_C_TriggerPressedDispatcher__DelegateSignature_Params params {};
		params.Left = Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_Controls_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_Controls_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_Controls.BPA_Controls_C");
		return ptr;
	}

}


