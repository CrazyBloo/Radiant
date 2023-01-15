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
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.ConvertActionToButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControlAction                                     Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ButtonName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  HelpImage                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHand_EHand                                        DefaultHand                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::ConvertActionToButton(EControlAction Action, class FString* ButtonName, class UTexture2D** HelpImage, EHand_EHand* DefaultHand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.ConvertActionToButton");
		
		ABP_Controls_Vive_C_ConvertActionToButton_Params params {};
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
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Grip_Left_K2Node_InputActionEvent_22
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::InpActEvt_Grip_Left_K2Node_InputActionEvent_22(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Grip_Left_K2Node_InputActionEvent_22");
		
		ABP_Controls_Vive_C_InpActEvt_Grip_Left_K2Node_InputActionEvent_22_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Grip_Left_K2Node_InputActionEvent_21
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::InpActEvt_Grip_Left_K2Node_InputActionEvent_21(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Grip_Left_K2Node_InputActionEvent_21");
		
		ABP_Controls_Vive_C_InpActEvt_Grip_Left_K2Node_InputActionEvent_21_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Grip_Right_K2Node_InputActionEvent_20
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::InpActEvt_Grip_Right_K2Node_InputActionEvent_20(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Grip_Right_K2Node_InputActionEvent_20");
		
		ABP_Controls_Vive_C_InpActEvt_Grip_Right_K2Node_InputActionEvent_20_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Grip_Right_K2Node_InputActionEvent_19
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::InpActEvt_Grip_Right_K2Node_InputActionEvent_19(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Grip_Right_K2Node_InputActionEvent_19");
		
		ABP_Controls_Vive_C_InpActEvt_Grip_Right_K2Node_InputActionEvent_19_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Vive_center_Left_K2Node_InputActionEvent_18
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::InpActEvt_Vive_center_Left_K2Node_InputActionEvent_18(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Vive_center_Left_K2Node_InputActionEvent_18");
		
		ABP_Controls_Vive_C_InpActEvt_Vive_center_Left_K2Node_InputActionEvent_18_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Vive_center_Left_K2Node_InputActionEvent_17
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::InpActEvt_Vive_center_Left_K2Node_InputActionEvent_17(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Vive_center_Left_K2Node_InputActionEvent_17");
		
		ABP_Controls_Vive_C_InpActEvt_Vive_center_Left_K2Node_InputActionEvent_17_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Vive_center_Right_K2Node_InputActionEvent_16
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::InpActEvt_Vive_center_Right_K2Node_InputActionEvent_16(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Vive_center_Right_K2Node_InputActionEvent_16");
		
		ABP_Controls_Vive_C_InpActEvt_Vive_center_Right_K2Node_InputActionEvent_16_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Vive_center_Right_K2Node_InputActionEvent_15
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::InpActEvt_Vive_center_Right_K2Node_InputActionEvent_15(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Vive_center_Right_K2Node_InputActionEvent_15");
		
		ABP_Controls_Vive_C_InpActEvt_Vive_center_Right_K2Node_InputActionEvent_15_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_MagEject_Left_K2Node_InputActionEvent_14
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::InpActEvt_MagEject_Left_K2Node_InputActionEvent_14(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_MagEject_Left_K2Node_InputActionEvent_14");
		
		ABP_Controls_Vive_C_InpActEvt_MagEject_Left_K2Node_InputActionEvent_14_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_MagEject_Left_K2Node_InputActionEvent_13
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::InpActEvt_MagEject_Left_K2Node_InputActionEvent_13(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_MagEject_Left_K2Node_InputActionEvent_13");
		
		ABP_Controls_Vive_C_InpActEvt_MagEject_Left_K2Node_InputActionEvent_13_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_MagEject_Right_K2Node_InputActionEvent_12
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::InpActEvt_MagEject_Right_K2Node_InputActionEvent_12(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_MagEject_Right_K2Node_InputActionEvent_12");
		
		ABP_Controls_Vive_C_InpActEvt_MagEject_Right_K2Node_InputActionEvent_12_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_MagEject_Right_K2Node_InputActionEvent_11
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::InpActEvt_MagEject_Right_K2Node_InputActionEvent_11(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_MagEject_Right_K2Node_InputActionEvent_11");
		
		ABP_Controls_Vive_C_InpActEvt_MagEject_Right_K2Node_InputActionEvent_11_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_TurnLeft_Left_K2Node_InputActionEvent_10
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::InpActEvt_TurnLeft_Left_K2Node_InputActionEvent_10(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_TurnLeft_Left_K2Node_InputActionEvent_10");
		
		ABP_Controls_Vive_C_InpActEvt_TurnLeft_Left_K2Node_InputActionEvent_10_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_TurnLeft_Right_K2Node_InputActionEvent_9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::InpActEvt_TurnLeft_Right_K2Node_InputActionEvent_9(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_TurnLeft_Right_K2Node_InputActionEvent_9");
		
		ABP_Controls_Vive_C_InpActEvt_TurnLeft_Right_K2Node_InputActionEvent_9_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_TurnRight_Left_K2Node_InputActionEvent_8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::InpActEvt_TurnRight_Left_K2Node_InputActionEvent_8(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_TurnRight_Left_K2Node_InputActionEvent_8");
		
		ABP_Controls_Vive_C_InpActEvt_TurnRight_Left_K2Node_InputActionEvent_8_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_TurnRight_Right_K2Node_InputActionEvent_7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::InpActEvt_TurnRight_Right_K2Node_InputActionEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_TurnRight_Right_K2Node_InputActionEvent_7");
		
		ABP_Controls_Vive_C_InpActEvt_TurnRight_Right_K2Node_InputActionEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Menu_K2Node_InputActionEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::InpActEvt_Menu_K2Node_InputActionEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Menu_K2Node_InputActionEvent_6");
		
		ABP_Controls_Vive_C_InpActEvt_Menu_K2Node_InputActionEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Firemode_Right_K2Node_InputActionEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::InpActEvt_Firemode_Right_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Firemode_Right_K2Node_InputActionEvent_5");
		
		ABP_Controls_Vive_C_InpActEvt_Firemode_Right_K2Node_InputActionEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Firemode_Right_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::InpActEvt_Firemode_Right_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Firemode_Right_K2Node_InputActionEvent_4");
		
		ABP_Controls_Vive_C_InpActEvt_Firemode_Right_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Firemode_Left_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::InpActEvt_Firemode_Left_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Firemode_Left_K2Node_InputActionEvent_3");
		
		ABP_Controls_Vive_C_InpActEvt_Firemode_Left_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Firemode_Left_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::InpActEvt_Firemode_Left_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Firemode_Left_K2Node_InputActionEvent_2");
		
		ABP_Controls_Vive_C_InpActEvt_Firemode_Left_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Crouch_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::InpActEvt_Crouch_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Crouch_K2Node_InputActionEvent_1");
		
		ABP_Controls_Vive_C_InpActEvt_Crouch_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.HightlightButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Activate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<EControlAction>                             Actions                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_Controls_Vive_C::HightlightButtons(bool Activate, TArray<EControlAction> Actions)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.HightlightButtons");
		
		ABP_Controls_Vive_C_HightlightButtons_Params params {};
		params.Activate = Activate;
		params.Actions = Actions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Controls_Vive_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.ReceiveBeginPlay");
		
		ABP_Controls_Vive_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.OnTurning_X
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::OnTurning_X(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.OnTurning_X");
		
		ABP_Controls_Vive_C_OnTurning_X_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.OnMovement_X
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::OnMovement_X(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.OnMovement_X");
		
		ABP_Controls_Vive_C_OnMovement_X_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.OnMovement_Y
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::OnMovement_Y(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.OnMovement_Y");
		
		ABP_Controls_Vive_C_OnMovement_Y_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Controls_Vive.BP_Controls_Vive_C.ExecuteUbergraph_BP_Controls_Vive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Controls_Vive_C::ExecuteUbergraph_BP_Controls_Vive(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Controls_Vive.BP_Controls_Vive_C.ExecuteUbergraph_BP_Controls_Vive");
		
		ABP_Controls_Vive_C_ExecuteUbergraph_BP_Controls_Vive_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Controls_Vive_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Controls_Vive_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Controls_Vive.BP_Controls_Vive_C");
		return ptr;
	}

}


