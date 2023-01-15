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
	 * 		Name   -> Function BP_Controls_Vive_Cosmos.BP_Controls_Vive_Cosmos_C.ConvertActionToButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControlAction                                     Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ButtonName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  HelpImage                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHand_EHand                                        DefaultHand                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_Cosmos_C::ConvertActionToButton(EControlAction Action, class FString* ButtonName, class UTexture2D** HelpImage, EHand_EHand* DefaultHand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive_Cosmos.BP_Controls_Vive_Cosmos_C.ConvertActionToButton");
		
		ABP_Controls_Vive_Cosmos_C_ConvertActionToButton_Params params {};
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
	 * 		Name   -> Function BP_Controls_Vive_Cosmos.BP_Controls_Vive_Cosmos_C.InpActEvt_Grip_Left_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_Cosmos_C::InpActEvt_Grip_Left_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive_Cosmos.BP_Controls_Vive_Cosmos_C.InpActEvt_Grip_Left_K2Node_InputActionEvent_4");
		
		ABP_Controls_Vive_Cosmos_C_InpActEvt_Grip_Left_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive_Cosmos.BP_Controls_Vive_Cosmos_C.InpActEvt_Grip_Left_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_Cosmos_C::InpActEvt_Grip_Left_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive_Cosmos.BP_Controls_Vive_Cosmos_C.InpActEvt_Grip_Left_K2Node_InputActionEvent_3");
		
		ABP_Controls_Vive_Cosmos_C_InpActEvt_Grip_Left_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive_Cosmos.BP_Controls_Vive_Cosmos_C.InpActEvt_Grip_Right_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_Cosmos_C::InpActEvt_Grip_Right_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive_Cosmos.BP_Controls_Vive_Cosmos_C.InpActEvt_Grip_Right_K2Node_InputActionEvent_2");
		
		ABP_Controls_Vive_Cosmos_C_InpActEvt_Grip_Right_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive_Cosmos.BP_Controls_Vive_Cosmos_C.InpActEvt_Grip_Right_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_Cosmos_C::InpActEvt_Grip_Right_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive_Cosmos.BP_Controls_Vive_Cosmos_C.InpActEvt_Grip_Right_K2Node_InputActionEvent_1");
		
		ABP_Controls_Vive_Cosmos_C_InpActEvt_Grip_Right_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive_Cosmos.BP_Controls_Vive_Cosmos_C.HightlightButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Activate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<EControlAction>                             Actions                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_Controls_Vive_Cosmos_C::HightlightButtons(bool Activate, TArray<EControlAction> Actions)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive_Cosmos.BP_Controls_Vive_Cosmos_C.HightlightButtons");
		
		ABP_Controls_Vive_Cosmos_C_HightlightButtons_Params params {};
		params.Activate = Activate;
		params.Actions = Actions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive_Cosmos.BP_Controls_Vive_Cosmos_C.OnMovement_X
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_Cosmos_C::OnMovement_X(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive_Cosmos.BP_Controls_Vive_Cosmos_C.OnMovement_X");
		
		ABP_Controls_Vive_Cosmos_C_OnMovement_X_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive_Cosmos.BP_Controls_Vive_Cosmos_C.OnMovement_Y
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_Cosmos_C::OnMovement_Y(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive_Cosmos.BP_Controls_Vive_Cosmos_C.OnMovement_Y");
		
		ABP_Controls_Vive_Cosmos_C_OnMovement_Y_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive_Cosmos.BP_Controls_Vive_Cosmos_C.OnTurning_Y
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_Cosmos_C::OnTurning_Y(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive_Cosmos.BP_Controls_Vive_Cosmos_C.OnTurning_Y");
		
		ABP_Controls_Vive_Cosmos_C_OnTurning_Y_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive_Cosmos.BP_Controls_Vive_Cosmos_C.ExecuteUbergraph_BP_Controls_Vive_Cosmos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_Cosmos_C::ExecuteUbergraph_BP_Controls_Vive_Cosmos(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive_Cosmos.BP_Controls_Vive_Cosmos_C.ExecuteUbergraph_BP_Controls_Vive_Cosmos");
		
		ABP_Controls_Vive_Cosmos_C_ExecuteUbergraph_BP_Controls_Vive_Cosmos_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Controls_Vive_Cosmos_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Controls_Vive_Cosmos_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Controls_Vive_Cosmos.BP_Controls_Vive_Cosmos_C");
		return ptr;
	}

}


