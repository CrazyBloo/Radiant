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
	 * 		Name   -> Function BP_Controls_WMR.BP_Controls_WMR_C.CheckCanTurn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TurnAllowed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Controls_WMR_C::CheckCanTurn(float AxisValue, bool* TurnAllowed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_WMR.BP_Controls_WMR_C.CheckCanTurn");
		
		ABP_Controls_WMR_C_CheckCanTurn_Params params {};
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
	 * 		Name   -> Function BP_Controls_WMR.BP_Controls_WMR_C.ConvertActionToButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControlAction                                     Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ButtonName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  HelpImage                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHand_EHand                                        DefaultHand                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controls_WMR_C::ConvertActionToButton(EControlAction Action, class FString* ButtonName, class UTexture2D** HelpImage, EHand_EHand* DefaultHand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_WMR.BP_Controls_WMR_C.ConvertActionToButton");
		
		ABP_Controls_WMR_C_ConvertActionToButton_Params params {};
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
	 * 		Name   -> Function BP_Controls_WMR.BP_Controls_WMR_C.InpActEvt_Grip_Left_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_WMR_C::InpActEvt_Grip_Left_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_WMR.BP_Controls_WMR_C.InpActEvt_Grip_Left_K2Node_InputActionEvent_4");
		
		ABP_Controls_WMR_C_InpActEvt_Grip_Left_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_WMR.BP_Controls_WMR_C.InpActEvt_Grip_Left_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_WMR_C::InpActEvt_Grip_Left_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_WMR.BP_Controls_WMR_C.InpActEvt_Grip_Left_K2Node_InputActionEvent_3");
		
		ABP_Controls_WMR_C_InpActEvt_Grip_Left_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_WMR.BP_Controls_WMR_C.InpActEvt_Grip_Right_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_WMR_C::InpActEvt_Grip_Right_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_WMR.BP_Controls_WMR_C.InpActEvt_Grip_Right_K2Node_InputActionEvent_2");
		
		ABP_Controls_WMR_C_InpActEvt_Grip_Right_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_WMR.BP_Controls_WMR_C.InpActEvt_Grip_Right_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_WMR_C::InpActEvt_Grip_Right_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_WMR.BP_Controls_WMR_C.InpActEvt_Grip_Right_K2Node_InputActionEvent_1");
		
		ABP_Controls_WMR_C_InpActEvt_Grip_Right_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_WMR.BP_Controls_WMR_C.HightlightButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Activate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<EControlAction>                             Actions                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_Controls_WMR_C::HightlightButtons(bool Activate, TArray<EControlAction> Actions)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_WMR.BP_Controls_WMR_C.HightlightButtons");
		
		ABP_Controls_WMR_C_HightlightButtons_Params params {};
		params.Activate = Activate;
		params.Actions = Actions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_WMR.BP_Controls_WMR_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Controls_WMR_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_WMR.BP_Controls_WMR_C.ReceiveBeginPlay");
		
		ABP_Controls_WMR_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_WMR.BP_Controls_WMR_C.OnTurning_Y
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controls_WMR_C::OnTurning_Y(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_WMR.BP_Controls_WMR_C.OnTurning_Y");
		
		ABP_Controls_WMR_C_OnTurning_Y_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_WMR.BP_Controls_WMR_C.OnMovement_X
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controls_WMR_C::OnMovement_X(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_WMR.BP_Controls_WMR_C.OnMovement_X");
		
		ABP_Controls_WMR_C_OnMovement_X_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_WMR.BP_Controls_WMR_C.OnMovement_Y
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controls_WMR_C::OnMovement_Y(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_WMR.BP_Controls_WMR_C.OnMovement_Y");
		
		ABP_Controls_WMR_C_OnMovement_Y_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_WMR.BP_Controls_WMR_C.ExecuteUbergraph_BP_Controls_WMR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controls_WMR_C::ExecuteUbergraph_BP_Controls_WMR(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_WMR.BP_Controls_WMR_C.ExecuteUbergraph_BP_Controls_WMR");
		
		ABP_Controls_WMR_C_ExecuteUbergraph_BP_Controls_WMR_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Controls_WMR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Controls_WMR_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Controls_WMR.BP_Controls_WMR_C");
		return ptr;
	}

}


