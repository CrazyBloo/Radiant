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
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.GetDamageDealerName
	 * 		Flags  -> ()
	 */
	class FText ABP_PRPlayerController_C::GetDamageDealerName()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.GetDamageDealerName");
		
		ABP_PRPlayerController_C_GetDamageDealerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.GetDamageDealerTag
	 * 		Flags  -> ()
	 */
	struct FGameplayTag ABP_PRPlayerController_C::GetDamageDealerTag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.GetDamageDealerTag");
		
		ABP_PRPlayerController_C_GetDamageDealerTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.GetActionButtonName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControlAction                                     Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ButtonName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  HelpImage                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHand_EHand                                        DefaultHand                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerController_C::GetActionButtonName(EControlAction Action, class FString* ButtonName, class UTexture2D** HelpImage, EHand_EHand* DefaultHand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.GetActionButtonName");
		
		ABP_PRPlayerController_C_GetActionButtonName_Params params {};
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
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.GetTurning_Y
	 * 		Flags  -> ()
	 */
	float ABP_PRPlayerController_C::GetTurning_Y()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.GetTurning_Y");
		
		ABP_PRPlayerController_C_GetTurning_Y_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.GetTurning_X
	 * 		Flags  -> ()
	 */
	float ABP_PRPlayerController_C::GetTurning_X()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.GetTurning_X");
		
		ABP_PRPlayerController_C_GetTurning_X_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.GetControllerType
	 * 		Flags  -> ()
	 */
	EPRControllerType ABP_PRPlayerController_C::GetControllerType()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.GetControllerType");
		
		ABP_PRPlayerController_C_GetControllerType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.AsString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EControlAction>                             Actions                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerController_C::AsString(TArray<EControlAction>* Actions, class FString* String)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.AsString");
		
		ABP_PRPlayerController_C_AsString_Params params {};
		
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
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.HandHaptic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHapticsCurve                                      HapticType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EControllerHand                                    hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerController_C::HandHaptic(EHapticsCurve HapticType, EControllerHand hand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.HandHaptic");
		
		ABP_PRPlayerController_C_HandHaptic_Params params {};
		params.HapticType = HapticType;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.bLockMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerController_C::bLockMovement(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.bLockMovement");
		
		ABP_PRPlayerController_C_bLockMovement_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.BindLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerController_C::BindLeft(bool Pressed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.BindLeft");
		
		ABP_PRPlayerController_C_BindLeft_Params params {};
		params.Pressed = Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.BindRight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerController_C::BindRight(bool Pressed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.BindRight");
		
		ABP_PRPlayerController_C_BindRight_Params params {};
		params.Pressed = Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.RunToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerController_C::RunToggle(bool Pressed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.RunToggle");
		
		ABP_PRPlayerController_C_RunToggle_Params params {};
		params.Pressed = Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.FireMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerController_C::FireMode(bool Right)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.FireMode");
		
		ABP_PRPlayerController_C_FireMode_Params params {};
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.InteractLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerController_C::InteractLeft(bool Pressed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.InteractLeft");
		
		ABP_PRPlayerController_C_InteractLeft_Params params {};
		params.Pressed = Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.InteractRight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerController_C::InteractRight(bool Pressed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.InteractRight");
		
		ABP_PRPlayerController_C_InteractRight_Params params {};
		params.Pressed = Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.EjectMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerController_C::EjectMag(bool Right)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.EjectMag");
		
		ABP_PRPlayerController_C_EjectMag_Params params {};
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.Arm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerController_C::Arm(bool Right)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.Arm");
		
		ABP_PRPlayerController_C_Arm_Params params {};
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.Backward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerController_C::Backward(float Axis)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.Backward");
		
		ABP_PRPlayerController_C_Backward_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.Left
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerController_C::Left(float Axis)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.Left");
		
		ABP_PRPlayerController_C_Left_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.Sprint
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerController_C::Sprint()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.Sprint");
		
		ABP_PRPlayerController_C_Sprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.TurnPlayerToFaceActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerController_C::TurnPlayerToFaceActor(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.TurnPlayerToFaceActor");
		
		ABP_PRPlayerController_C_TurnPlayerToFaceActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.ShowCapTouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOculusButton                                      Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerController_C::ShowCapTouch(EOculusButton Button, bool Show)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.ShowCapTouch");
		
		ABP_PRPlayerController_C_ShowCapTouch_Params params {};
		params.Button = Button;
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.TurnPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Degrees                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerController_C::TurnPlayer(float Degrees)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.TurnPlayer");
		
		ABP_PRPlayerController_C_TurnPlayer_Params params {};
		params.Degrees = Degrees;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.EjectMagDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerController_C::EjectMagDrop(bool Right)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.EjectMagDrop");
		
		ABP_PRPlayerController_C_EjectMagDrop_Params params {};
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.UpdateControllerShifts
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerController_C::UpdateControllerShifts()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.UpdateControllerShifts");
		
		ABP_PRPlayerController_C_UpdateControllerShifts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.TriggerLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisAngle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerController_C::TriggerLeft(float AxisAngle)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.TriggerLeft");
		
		ABP_PRPlayerController_C_TriggerLeft_Params params {};
		params.AxisAngle = AxisAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.TriggerRight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AngleAxis                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerController_C::TriggerRight(float AngleAxis)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.TriggerRight");
		
		ABP_PRPlayerController_C_TriggerRight_Params params {};
		params.AngleAxis = AngleAxis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.ToggleAimSmoothing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsLeft                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerController_C::ToggleAimSmoothing(bool bIsLeft)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.ToggleAimSmoothing");
		
		ABP_PRPlayerController_C_ToggleAimSmoothing_Params params {};
		params.bIsLeft = bIsLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerController_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.ReceiveBeginPlay");
		
		ABP_PRPlayerController_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.StartPossesCheck
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerController_C::StartPossesCheck()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.StartPossesCheck");
		
		ABP_PRPlayerController_C_StartPossesCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.BlockInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EControlAction>                             Actions                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               AllowInput                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PRPlayerController_C::BlockInput(TArray<EControlAction> Actions, bool AllowInput)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.BlockInput");
		
		ABP_PRPlayerController_C_BlockInput_Params params {};
		params.Actions = Actions;
		params.AllowInput = AllowInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.HandHaptics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHapticsCurve                                      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EControllerHand                                    hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerController_C::HandHaptics(EHapticsCurve Type, EControllerHand hand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.HandHaptics");
		
		ABP_PRPlayerController_C_HandHaptics_Params params {};
		params.Type = Type;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.ShowButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<EControlAction>                             Actions                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_PRPlayerController_C::ShowButtons(bool Show, TArray<EControlAction> Actions)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.ShowButtons");
		
		ABP_PRPlayerController_C_ShowButtons_Params params {};
		params.Show = Show;
		params.Actions = Actions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.StopHaptics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControllerHand                                    hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerController_C::StopHaptics(EControllerHand hand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.StopHaptics");
		
		ABP_PRPlayerController_C_StopHaptics_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.BlockAll
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerController_C::BlockAll()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.BlockAll");
		
		ABP_PRPlayerController_C_BlockAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.AllowAll
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerController_C::AllowAll()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.AllowAll");
		
		ABP_PRPlayerController_C_AllowAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.AllowOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EControlAction>                             Actions                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_PRPlayerController_C::AllowOnly(TArray<EControlAction> Actions)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.AllowOnly");
		
		ABP_PRPlayerController_C_AllowOnly_Params params {};
		params.Actions = Actions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.InitControlScheme
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerController_C::InitControlScheme()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.InitControlScheme");
		
		ABP_PRPlayerController_C_InitControlScheme_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.WaitForVRFocus
	 * 		Flags  -> ()
	 */
	void ABP_PRPlayerController_C::WaitForVRFocus()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.WaitForVRFocus");
		
		ABP_PRPlayerController_C_WaitForVRFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PRPlayerController.BP_PRPlayerController_C.ExecuteUbergraph_BP_PRPlayerController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PRPlayerController_C::ExecuteUbergraph_BP_PRPlayerController(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PRPlayerController.BP_PRPlayerController_C.ExecuteUbergraph_BP_PRPlayerController");
		
		ABP_PRPlayerController_C_ExecuteUbergraph_BP_PRPlayerController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PRPlayerController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PRPlayerController_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PRPlayerController.BP_PRPlayerController_C");
		return ptr;
	}

}


