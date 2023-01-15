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
	 * 		Name   -> Function FL_Project.FL_Project_C.IsShowTips
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Project_C::IsShowTips(class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.IsShowTips");
		
		UFL_Project_C_IsShowTips_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.PlayHapticsFeedbackWithRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHapticsType                                       Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotationOption                             RotationOption                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::PlayHapticsFeedbackWithRotation(EHapticsType Type, const struct FRotationOption& RotationOption, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.PlayHapticsFeedbackWithRotation");
		
		UFL_Project_C_PlayHapticsFeedbackWithRotation_Params params {};
		params.Type = Type;
		params.RotationOption = RotationOption;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.ToImperial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Centimeters                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UFL_Project_C::ToImperial(float Centimeters, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.ToImperial");
		
		UFL_Project_C_ToImperial_Params params {};
		params.Centimeters = Centimeters;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.PlayRecoilFeedback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Power                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsLeft                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::PlayRecoilFeedback(int32_t Power, bool IsLeft, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.PlayRecoilFeedback");
		
		UFL_Project_C_PlayRecoilFeedback_Params params {};
		params.Power = Power;
		params.IsLeft = IsLeft;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.GetHapticsFeedback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHapticsType                                       Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFeedbackFile*                               Vest                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFeedbackFile*                               Head                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UFeedbackFile*                               Arm                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::GetHapticsFeedback(EHapticsType Type, class UObject* __WorldContext, class UFeedbackFile** Vest, class UFeedbackFile** Head, class UFeedbackFile** Arm)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.GetHapticsFeedback");
		
		UFL_Project_C_GetHapticsFeedback_Params params {};
		params.Type = Type;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Vest != nullptr)
			*Vest = params.Vest;
		if (Head != nullptr)
			*Head = params.Head;
		if (Arm != nullptr)
			*Arm = params.Arm;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.PlayHapticsFeedback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHapticsType                                       Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::PlayHapticsFeedback(EHapticsType Type, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.PlayHapticsFeedback");
		
		UFL_Project_C_PlayHapticsFeedback_Params params {};
		params.Type = Type;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.ExitToMainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::ExitToMainMenu(class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.ExitToMainMenu");
		
		UFL_Project_C_ExitToMainMenu_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.IsInputEnabledAndNotSimulation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Project_C::IsInputEnabledAndNotSimulation(class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.IsInputEnabledAndNotSimulation");
		
		UFL_Project_C_IsInputEnabledAndNotSimulation_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.IsLeftHanded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Project_C::IsLeftHanded(class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.IsLeftHanded");
		
		UFL_Project_C_IsLeftHanded_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.GetSpawnPointNotNearPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     nearby                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               reachable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Point                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::GetSpawnPointNotNearPlayer(const struct FVector& nearby, float InRadius, bool reachable, class UObject* __WorldContext, bool* success, struct FVector* Point)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.GetSpawnPointNotNearPlayer");
		
		UFL_Project_C_GetSpawnPointNotNearPlayer_Params params {};
		params.nearby = nearby;
		params.InRadius = InRadius;
		params.reachable = reachable;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		if (Point != nullptr)
			*Point = params.Point;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.GetCurrentLevelTide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_TideBase_C*                              tideRef                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::GetCurrentLevelTide(class UObject* __WorldContext, class ABP_TideBase_C** tideRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.GetCurrentLevelTide");
		
		UFL_Project_C_GetCurrentLevelTide_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (tideRef != nullptr)
			*tideRef = params.tideRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.GetTurnSpeedCoefficient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::GetTurnSpeedCoefficient(class UObject* __WorldContext, float* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.GetTurnSpeedCoefficient");
		
		UFL_Project_C_GetTurnSpeedCoefficient_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.IsHybridTurn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Project_C::IsHybridTurn(class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.IsHybridTurn");
		
		UFL_Project_C_IsHybridTurn_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.IsSnapTurn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Project_C::IsSnapTurn(class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.IsSnapTurn");
		
		UFL_Project_C_IsSnapTurn_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.IsSmoothTurn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Project_C::IsSmoothTurn(class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.IsSmoothTurn");
		
		UFL_Project_C_IsSmoothTurn_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.Negative
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::Negative(float In, class UObject* __WorldContext, float* Out)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.Negative");
		
		UFL_Project_C_Negative_Params params {};
		params.In = In;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.TrimFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Digits                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Out                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::TrimFloat(float In, int32_t Digits, class UObject* __WorldContext, class FString* Out)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.TrimFloat");
		
		UFL_Project_C_TrimFloat_Params params {};
		params.In = In;
		params.Digits = Digits;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.RoundFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Digits                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::RoundFloat(float In, int32_t Digits, class UObject* __WorldContext, float* Out)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.RoundFloat");
		
		UFL_Project_C_RoundFloat_Params params {};
		params.In = In;
		params.Digits = Digits;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.RoundTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Out                                                        (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void UFL_Project_C::RoundTransform(const struct FTransform& In, class UObject* __WorldContext, struct FTransform* Out)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.RoundTransform");
		
		UFL_Project_C_RoundTransform_Params params {};
		params.In = In;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.CurrentLevelToWorldTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  World                                                      (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void UFL_Project_C::CurrentLevelToWorldTransform(const struct FTransform& Level, class UObject* __WorldContext, struct FTransform* World)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.CurrentLevelToWorldTransform");
		
		UFL_Project_C_CurrentLevelToWorldTransform_Params params {};
		params.Level = Level;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (World != nullptr)
			*World = params.World;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.IsHMDOrControllersUndetected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               undetected                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Project_C::IsHMDOrControllersUndetected(class UObject* __WorldContext, bool* undetected)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.IsHMDOrControllersUndetected");
		
		UFL_Project_C_IsHMDOrControllersUndetected_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (undetected != nullptr)
			*undetected = params.undetected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.IsSaveAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Project_C::IsSaveAllowed(class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.IsSaveAllowed");
		
		UFL_Project_C_IsSaveAllowed_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.IsShowPlayerPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Project_C::IsShowPlayerPosition(class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.IsShowPlayerPosition");
		
		UFL_Project_C_IsShowPlayerPosition_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.IsHealOnSleep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Project_C::IsHealOnSleep(class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.IsHealOnSleep");
		
		UFL_Project_C_IsHealOnSleep_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.IsDropAllItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Project_C::IsDropAllItems(class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.IsDropAllItems");
		
		UFL_Project_C_IsDropAllItems_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.AttachItemActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      attachActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ParentActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Project_C::AttachItemActors(class AActor* attachActor, class AActor* ParentActor, class UObject* __WorldContext, bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.AttachItemActors");
		
		UFL_Project_C_AttachItemActors_Params params {};
		params.attachActor = attachActor;
		params.ParentActor = ParentActor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.FixBR
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        textIn                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        textOut                                                    (Parm, OutParm)
	 */
	void UFL_Project_C::FixBR(const class FText& textIn, class UObject* __WorldContext, class FText* textOut)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.FixBR");
		
		UFL_Project_C_FixBR_Params params {};
		params.textIn = textIn;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (textOut != nullptr)
			*textOut = params.textOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.UpdateItemGripTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     GripObject                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGripMotionControllerComponent*              handController                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::UpdateItemGripTransform(class UObject* GripObject, class UGripMotionControllerComponent* handController, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.UpdateItemGripTransform");
		
		UFL_Project_C_UpdateItemGripTransform_Params params {};
		params.GripObject = GripObject;
		params.handController = handController;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.GetActorTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayTag                                Tag                                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::GetActorTag(class AActor* Actor, class UObject* __WorldContext, bool* success, struct FGameplayTag* Tag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.GetActorTag");
		
		UFL_Project_C_GetActorTag_Params params {};
		params.Actor = Actor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		if (Tag != nullptr)
			*Tag = params.Tag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.ReplaceButtonNames
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutText                                                    (Parm, OutParm)
	 */
	void UFL_Project_C::ReplaceButtonNames(const class FText& InText, class UObject* __WorldContext, class FText* OutText)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.ReplaceButtonNames");
		
		UFL_Project_C_ReplaceButtonNames_Params params {};
		params.InText = InText;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.FindCluster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APRClusterSpawner*                           cluster                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::FindCluster(const struct FGameplayTag& Tag, class UObject* __WorldContext, bool* found, class APRClusterSpawner** cluster)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.FindCluster");
		
		UFL_Project_C_FindCluster_Params params {};
		params.Tag = Tag;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (found != nullptr)
			*found = params.found;
		if (cluster != nullptr)
			*cluster = params.cluster;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.IsArtifactVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      artifactActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Visible                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Project_C::IsArtifactVisible(class AActor* artifactActor, class UObject* __WorldContext, bool* Visible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.IsArtifactVisible");
		
		UFL_Project_C_IsArtifactVisible_Params params {};
		params.artifactActor = artifactActor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visible != nullptr)
			*Visible = params.Visible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.GetTagsArrayAssetString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FGameplayTag>                        Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::GetTagsArrayAssetString(TArray<struct FGameplayTag>* Tag, class UObject* __WorldContext, class FString* String)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.GetTagsArrayAssetString");
		
		UFL_Project_C_GetTagsArrayAssetString_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Tag != nullptr)
			*Tag = params.Tag;
		if (String != nullptr)
			*String = params.String;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.GetTagAssetString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::GetTagAssetString(const struct FGameplayTag& Tag, class UObject* __WorldContext, class FString* String)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.GetTagAssetString");
		
		UFL_Project_C_GetTagAssetString_Params params {};
		params.Tag = Tag;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (String != nullptr)
			*String = params.String;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.ForceDropItemActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      itemActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               simulateActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               KillActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               dropItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               destroyItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Project_C::ForceDropItemActor(class AActor* itemActor, bool simulateActor, bool KillActor, bool dropItem, bool destroyItem, class UObject* __WorldContext, bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.ForceDropItemActor");
		
		UFL_Project_C_ForceDropItemActor_Params params {};
		params.itemActor = itemActor;
		params.simulateActor = simulateActor;
		params.KillActor = KillActor;
		params.dropItem = dropItem;
		params.destroyItem = destroyItem;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.TryAttachActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Parent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               snap                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Project_C::TryAttachActor(class AActor* Actor, class UObject* Parent, bool snap, class UObject* __WorldContext, bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.TryAttachActor");
		
		UFL_Project_C_TryAttachActor_Params params {};
		params.Actor = Actor;
		params.Parent = Parent;
		params.snap = snap;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.GetObjectLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::GetObjectLocation(class UObject* Object, class UObject* __WorldContext, struct FVector* Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.GetObjectLocation");
		
		UFL_Project_C_GetObjectLocation_Params params {};
		params.Object = Object;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.SortObjectsByDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             InArr                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class AActor*                                      DistanceFromActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UObject*>                             SortedArr                                                  (Parm, OutParm)
	 */
	void UFL_Project_C::SortObjectsByDistance(TArray<class UObject*>* InArr, class AActor* DistanceFromActor, class UObject* __WorldContext, TArray<class UObject*>* SortedArr)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.SortObjectsByDistance");
		
		UFL_Project_C_SortObjectsByDistance_Params params {};
		params.DistanceFromActor = DistanceFromActor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InArr != nullptr)
			*InArr = params.InArr;
		if (SortedArr != nullptr)
			*SortedArr = params.SortedArr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.SpawnNPC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                NPCTag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     nearby                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      NPCActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::SpawnNPC(const struct FGameplayTag& NPCTag, const struct FVector& nearby, float Radius, class UObject* __WorldContext, class AActor** NPCActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.SpawnNPC");
		
		UFL_Project_C_SpawnNPC_Params params {};
		params.NPCTag = NPCTag;
		params.nearby = nearby;
		params.Radius = Radius;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NPCActor != nullptr)
			*NPCActor = params.NPCActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.IsActorsArraysMatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              arrayOne                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class AActor*>                              arrayTwo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Match                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Project_C::IsActorsArraysMatch(TArray<class AActor*>* arrayOne, TArray<class AActor*>* arrayTwo, class UObject* __WorldContext, bool* Match)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.IsActorsArraysMatch");
		
		UFL_Project_C_IsActorsArraysMatch_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (arrayOne != nullptr)
			*arrayOne = params.arrayOne;
		if (arrayTwo != nullptr)
			*arrayTwo = params.arrayTwo;
		if (Match != nullptr)
			*Match = params.Match;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.MatchesTagsArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                tagOne                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGameplayTag>                        otherTags                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               exactMatch                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Match                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Array_Index                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::MatchesTagsArray(const struct FGameplayTag& tagOne, TArray<struct FGameplayTag>* otherTags, bool exactMatch, class UObject* __WorldContext, bool* Match, int32_t* Array_Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.MatchesTagsArray");
		
		UFL_Project_C_MatchesTagsArray_Params params {};
		params.tagOne = tagOne;
		params.exactMatch = exactMatch;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (otherTags != nullptr)
			*otherTags = params.otherTags;
		if (Match != nullptr)
			*Match = params.Match;
		if (Array_Index != nullptr)
			*Array_Index = params.Array_Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.GetCurrentLevelConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLevelConfig                                currentLevelConfig                                         (Parm, OutParm)
	 */
	void UFL_Project_C::GetCurrentLevelConfig(class UObject* __WorldContext, struct FLevelConfig* currentLevelConfig)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.GetCurrentLevelConfig");
		
		UFL_Project_C_GetCurrentLevelConfig_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (currentLevelConfig != nullptr)
			*currentLevelConfig = params.currentLevelConfig;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.DrawDebugBone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMesh                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Thickness                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::DrawDebugBone(class USkeletalMeshComponent* SkeletalMesh, const class FName& BoneName, const struct FLinearColor& Color, float Duration, float Thickness, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.DrawDebugBone");
		
		UFL_Project_C_DrawDebugBone_Params params {};
		params.SkeletalMesh = SkeletalMesh;
		params.BoneName = BoneName;
		params.Color = Color;
		params.Duration = Duration;
		params.Thickness = Thickness;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.GetGripForObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGripMotionControllerComponent*              Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     Grip                                                       (Parm, OutParm, NoDestructor, ContainsInstancedReference)
	 */
	void UFL_Project_C::GetGripForObject(class UObject* Object, class UGripMotionControllerComponent* Controller, class UObject* __WorldContext, struct FBPActorGripInformation* Grip)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.GetGripForObject");
		
		UFL_Project_C_GetGripForObject_Params params {};
		params.Object = Object;
		params.Controller = Controller;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Grip != nullptr)
			*Grip = params.Grip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.GetGripRelativeTransformByGeometryTypeAndPoseNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     GripObject                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGripMotionControllerComponent*              handController                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPRHandPoseType                                    poseType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPRHandPoseGeometryType                            GeometryType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPRHandPoseNumber                                  PoseNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  GripRelativeTransform                                      (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void UFL_Project_C::GetGripRelativeTransformByGeometryTypeAndPoseNumber(class UObject* GripObject, class UGripMotionControllerComponent* handController, EPRHandPoseType poseType, EPRHandPoseGeometryType GeometryType, EPRHandPoseNumber PoseNumber, class UObject* __WorldContext, bool* success, struct FTransform* GripRelativeTransform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.GetGripRelativeTransformByGeometryTypeAndPoseNumber");
		
		UFL_Project_C_GetGripRelativeTransformByGeometryTypeAndPoseNumber_Params params {};
		params.GripObject = GripObject;
		params.handController = handController;
		params.poseType = poseType;
		params.GeometryType = GeometryType;
		params.PoseNumber = PoseNumber;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		if (GripRelativeTransform != nullptr)
			*GripRelativeTransform = params.GripRelativeTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.DrawDebugTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Thickness                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Forward                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Up                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::DrawDebugTransform(const struct FTransform& Transform, const struct FLinearColor& Color, float Duration, float Thickness, bool Forward, bool Right, bool Up, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.DrawDebugTransform");
		
		UFL_Project_C_DrawDebugTransform_Params params {};
		params.Transform = Transform;
		params.Color = Color;
		params.Duration = Duration;
		params.Thickness = Thickness;
		params.Forward = Forward;
		params.Right = Right;
		params.Up = Up;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.CompareStrings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      First                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Second                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               firstLower                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Project_C::CompareStrings(const class FString& First, const class FString& Second, class UObject* __WorldContext, bool* firstLower)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.CompareStrings");
		
		UFL_Project_C_CompareStrings_Params params {};
		params.First = First;
		params.Second = Second;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (firstLower != nullptr)
			*firstLower = params.firstLower;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.AsTimeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTimespan                                   Timespan                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      String                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::AsTimeString(const struct FTimespan& Timespan, class UObject* __WorldContext, class FString* String)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.AsTimeString");
		
		UFL_Project_C_AsTimeString_Params params {};
		params.Timespan = Timespan;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (String != nullptr)
			*String = params.String;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.GetMeanFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Float1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Float2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MeanFloat                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::GetMeanFloat(float Float1, float Float2, class UObject* __WorldContext, float* MeanFloat)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.GetMeanFloat");
		
		UFL_Project_C_GetMeanFloat_Params params {};
		params.Float1 = Float1;
		params.Float2 = Float2;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeanFloat != nullptr)
			*MeanFloat = params.MeanFloat;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.GetActorInGameName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Name                                                       (Parm, OutParm)
	 */
	void UFL_Project_C::GetActorInGameName(class AActor* Actor, class UObject* __WorldContext, bool* success, class FText* Name)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.GetActorInGameName");
		
		UFL_Project_C_GetActorInGameName_Params params {};
		params.Actor = Actor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.GetAM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnalyticsManager*                           AM                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::GetAM(class UObject* __WorldContext, class UAnalyticsManager** AM)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.GetAM");
		
		UFL_Project_C_GetAM_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AM != nullptr)
			*AM = params.AM;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.SortActorsByDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              ActorsArr                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class AActor*                                      DistanceFromActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              SortedActors                                               (Parm, OutParm)
	 */
	void UFL_Project_C::SortActorsByDistance(TArray<class AActor*>* ActorsArr, class AActor* DistanceFromActor, class UObject* __WorldContext, TArray<class AActor*>* SortedActors)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.SortActorsByDistance");
		
		UFL_Project_C_SortActorsByDistance_Params params {};
		params.DistanceFromActor = DistanceFromActor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorsArr != nullptr)
			*ActorsArr = params.ActorsArr;
		if (SortedActors != nullptr)
			*SortedActors = params.SortedActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.Unlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Deny_Gripping                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::Unlock(class AActor* Target, bool Deny_Gripping, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.Unlock");
		
		UFL_Project_C_Unlock_Params params {};
		params.Target = Target;
		params.Deny_Gripping = Deny_Gripping;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.GetRelativeTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void UFL_Project_C::GetRelativeTransform(class AActor* Actor, class UObject* __WorldContext, struct FTransform* Transform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.GetRelativeTransform");
		
		UFL_Project_C_GetRelativeTransform_Params params {};
		params.Actor = Actor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Transform != nullptr)
			*Transform = params.Transform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.GetBPGI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_PRGameInstance_C*                        GI                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::GetBPGI(class UObject* __WorldContext, class UBP_PRGameInstance_C** GI)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.GetBPGI");
		
		UFL_Project_C_GetBPGI_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GI != nullptr)
			*GI = params.GI;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.AttachToComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      actorToAttach                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             ParentSceneComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::AttachToComponent(class AActor* actorToAttach, class USceneComponent* ParentSceneComponent, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.AttachToComponent");
		
		UFL_Project_C_AttachToComponent_Params params {};
		params.actorToAttach = actorToAttach;
		params.ParentSceneComponent = ParentSceneComponent;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.UpdateWidgetCounter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetComponent*                            WidgetRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              NumberToShow                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Project_C::UpdateWidgetCounter(class UWidgetComponent* WidgetRef, const class FText& Text, float NumberToShow, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.UpdateWidgetCounter");
		
		UFL_Project_C_UpdateWidgetCounter_Params params {};
		params.WidgetRef = WidgetRef;
		params.Text = Text;
		params.NumberToShow = NumberToShow;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Project.FL_Project_C.WeightedChance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SingleChancePercent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Project_C::WeightedChance(float SingleChancePercent, class UObject* __WorldContext, bool* Output)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Project.FL_Project_C.WeightedChance");
		
		UFL_Project_C_WeightedChance_Params params {};
		params.SingleChancePercent = SingleChancePercent;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFL_Project_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFL_Project_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FL_Project.FL_Project_C");
		return ptr;
	}

}


