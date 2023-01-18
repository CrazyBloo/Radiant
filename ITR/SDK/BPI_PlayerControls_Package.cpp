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
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.ToggleAimSmoothing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsLeft                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PlayerControls_C::ToggleAimSmoothing(bool bIsLeft)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.ToggleAimSmoothing");
		
		UBPI_PlayerControls_C_ToggleAimSmoothing_Params params {};
		params.bIsLeft = bIsLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.TriggerRight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AngleAxis                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PlayerControls_C::TriggerRight(float AngleAxis)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.TriggerRight");
		
		UBPI_PlayerControls_C_TriggerRight_Params params {};
		params.AngleAxis = AngleAxis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.TriggerLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisAngle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PlayerControls_C::TriggerLeft(float AxisAngle)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.TriggerLeft");
		
		UBPI_PlayerControls_C_TriggerLeft_Params params {};
		params.AxisAngle = AxisAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.UpdateControllerShifts
	 * 		Flags  -> ()
	 */
	void UBPI_PlayerControls_C::UpdateControllerShifts()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.UpdateControllerShifts");
		
		UBPI_PlayerControls_C_UpdateControllerShifts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.AllowOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EControlAction>                             Actions                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPI_PlayerControls_C::AllowOnly(TArray<EControlAction> Actions)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.AllowOnly");
		
		UBPI_PlayerControls_C_AllowOnly_Params params {};
		params.Actions = Actions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.AllowAll
	 * 		Flags  -> ()
	 */
	void UBPI_PlayerControls_C::AllowAll()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.AllowAll");
		
		UBPI_PlayerControls_C_AllowAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.BlockAll
	 * 		Flags  -> ()
	 */
	void UBPI_PlayerControls_C::BlockAll()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.BlockAll");
		
		UBPI_PlayerControls_C_BlockAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.EjectMagDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PlayerControls_C::EjectMagDrop(bool Right)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.EjectMagDrop");
		
		UBPI_PlayerControls_C_EjectMagDrop_Params params {};
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.GetActionButtonName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControlAction                                     Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ButtonName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  HelpImage                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHand_EHand                                        DefaultHand                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PlayerControls_C::GetActionButtonName(EControlAction Action, class FString* ButtonName, class UTexture2D** HelpImage, EHand_EHand* DefaultHand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.GetActionButtonName");
		
		UBPI_PlayerControls_C_GetActionButtonName_Params params {};
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
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.HandHaptics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHapticsCurve                                      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EControllerHand                                    hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PlayerControls_C::HandHaptics(EHapticsCurve Type, EControllerHand hand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.HandHaptics");
		
		UBPI_PlayerControls_C_HandHaptics_Params params {};
		params.Type = Type;
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.StopHaptics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EControllerHand                                    hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PlayerControls_C::StopHaptics(EControllerHand hand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.StopHaptics");
		
		UBPI_PlayerControls_C_StopHaptics_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.TurnPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Degrees                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PlayerControls_C::TurnPlayer(float Degrees)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.TurnPlayer");
		
		UBPI_PlayerControls_C_TurnPlayer_Params params {};
		params.Degrees = Degrees;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.ShowCapTouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOculusButton                                      Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PlayerControls_C::ShowCapTouch(EOculusButton Button, bool Show)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.ShowCapTouch");
		
		UBPI_PlayerControls_C_ShowCapTouch_Params params {};
		params.Button = Button;
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.BlockInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EControlAction>                             Actions                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               AllowInput                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PlayerControls_C::BlockInput(TArray<EControlAction> Actions, bool AllowInput)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.BlockInput");
		
		UBPI_PlayerControls_C_BlockInput_Params params {};
		params.Actions = Actions;
		params.AllowInput = AllowInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.TurnPlayerToFaceActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PlayerControls_C::TurnPlayerToFaceActor(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.TurnPlayerToFaceActor");
		
		UBPI_PlayerControls_C_TurnPlayerToFaceActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.ShowButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<EControlAction>                             Actions                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPI_PlayerControls_C::ShowButtons(bool Show, TArray<EControlAction> Actions)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.ShowButtons");
		
		UBPI_PlayerControls_C_ShowButtons_Params params {};
		params.Show = Show;
		params.Actions = Actions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.Sprint
	 * 		Flags  -> ()
	 */
	void UBPI_PlayerControls_C::Sprint()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.Sprint");
		
		UBPI_PlayerControls_C_Sprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.Left
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PlayerControls_C::Left(float Axis)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.Left");
		
		UBPI_PlayerControls_C_Left_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.Backward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PlayerControls_C::Backward(float Axis)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.Backward");
		
		UBPI_PlayerControls_C_Backward_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.Arm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PlayerControls_C::Arm(bool Right)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.Arm");
		
		UBPI_PlayerControls_C_Arm_Params params {};
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.EjectMag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PlayerControls_C::EjectMag(bool Right)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.EjectMag");
		
		UBPI_PlayerControls_C_EjectMag_Params params {};
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.InteractRight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PlayerControls_C::InteractRight(bool Pressed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.InteractRight");
		
		UBPI_PlayerControls_C_InteractRight_Params params {};
		params.Pressed = Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.InteractLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PlayerControls_C::InteractLeft(bool Pressed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.InteractLeft");
		
		UBPI_PlayerControls_C_InteractLeft_Params params {};
		params.Pressed = Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.FireMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PlayerControls_C::FireMode(bool Right)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.FireMode");
		
		UBPI_PlayerControls_C_FireMode_Params params {};
		params.Right = Right;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.RunToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PlayerControls_C::RunToggle(bool Pressed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.RunToggle");
		
		UBPI_PlayerControls_C_RunToggle_Params params {};
		params.Pressed = Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.BindRight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PlayerControls_C::BindRight(bool Pressed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.BindRight");
		
		UBPI_PlayerControls_C_BindRight_Params params {};
		params.Pressed = Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PlayerControls.BPI_PlayerControls_C.BindLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PlayerControls_C::BindLeft(bool Pressed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerControls.BPI_PlayerControls_C.BindLeft");
		
		UBPI_PlayerControls_C_BindLeft_Params params {};
		params.Pressed = Pressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_PlayerControls_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_PlayerControls_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PlayerControls.BPI_PlayerControls_C");
		return ptr;
	}

}


