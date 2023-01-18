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
	 * 		Name   -> Function BPA_Tutorial.BPA_Tutorial_C.GetStepIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            stepIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Tutorial_C::GetStepIndex(int32_t* stepIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Tutorial.BPA_Tutorial_C.GetStepIndex");
		
		ABPA_Tutorial_C_GetStepIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (stepIndex != nullptr)
			*stepIndex = params.stepIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Tutorial.BPA_Tutorial_C.IsEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Tutorial_C::IsEnabled(bool* Enabled)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Tutorial.BPA_Tutorial_C.IsEnabled");
		
		ABPA_Tutorial_C_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Enabled != nullptr)
			*Enabled = params.Enabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Tutorial.BPA_Tutorial_C.IsFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Finished                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Tutorial_C::IsFinished(bool* Finished)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Tutorial.BPA_Tutorial_C.IsFinished");
		
		ABPA_Tutorial_C_IsFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Finished != nullptr)
			*Finished = params.Finished;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Tutorial.BPA_Tutorial_C.SetStepIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Tutorial_C::SetStepIndex(int32_t Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Tutorial.BPA_Tutorial_C.SetStepIndex");
		
		ABPA_Tutorial_C_SetStepIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Tutorial.BPA_Tutorial_C.IncStepIndex
	 * 		Flags  -> ()
	 */
	void ABPA_Tutorial_C::IncStepIndex()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Tutorial.BPA_Tutorial_C.IncStepIndex");
		
		ABPA_Tutorial_C_IncStepIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Tutorial.BPA_Tutorial_C.GetNextStep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABPA_TutorStep_C*                            step                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Tutorial_C::GetNextStep(class ABPA_TutorStep_C** step)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Tutorial.BPA_Tutorial_C.GetNextStep");
		
		ABPA_Tutorial_C_GetNextStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (step != nullptr)
			*step = params.step;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Tutorial.BPA_Tutorial_C.ResetMessageWidget
	 * 		Flags  -> ()
	 */
	void ABPA_Tutorial_C::ResetMessageWidget()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Tutorial.BPA_Tutorial_C.ResetMessageWidget");
		
		ABPA_Tutorial_C_ResetMessageWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Tutorial.BPA_Tutorial_C.GetMessageWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetComponent*                            Component                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWBP_TutorialText_C*                         Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Tutorial_C::GetMessageWidget(class UWidgetComponent** Component, class UWBP_TutorialText_C** Widget)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Tutorial.BPA_Tutorial_C.GetMessageWidget");
		
		ABPA_Tutorial_C_GetMessageWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Component != nullptr)
			*Component = params.Component;
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Tutorial.BPA_Tutorial_C.StopTutorial
	 * 		Flags  -> ()
	 */
	void ABPA_Tutorial_C::StopTutorial()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Tutorial.BPA_Tutorial_C.StopTutorial");
		
		ABPA_Tutorial_C_StopTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Tutorial.BPA_Tutorial_C.RunTutorial
	 * 		Flags  -> ()
	 */
	void ABPA_Tutorial_C::RunTutorial()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Tutorial.BPA_Tutorial_C.RunTutorial");
		
		ABPA_Tutorial_C_RunTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Tutorial.BPA_Tutorial_C.SetTutorialRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               running                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Tutorial_C::SetTutorialRunning(bool running)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Tutorial.BPA_Tutorial_C.SetTutorialRunning");
		
		ABPA_Tutorial_C_SetTutorialRunning_Params params {};
		params.running = running;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Tutorial.BPA_Tutorial_C.IsTutorialRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               running                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Tutorial_C::IsTutorialRunning(bool* running)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Tutorial.BPA_Tutorial_C.IsTutorialRunning");
		
		ABPA_Tutorial_C_IsTutorialRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (running != nullptr)
			*running = params.running;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Tutorial.BPA_Tutorial_C.InitTutorialSteps
	 * 		Flags  -> ()
	 */
	void ABPA_Tutorial_C::InitTutorialSteps()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Tutorial.BPA_Tutorial_C.InitTutorialSteps");
		
		ABPA_Tutorial_C_InitTutorialSteps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Tutorial.BPA_Tutorial_C.OnTransitionEnd
	 * 		Flags  -> ()
	 */
	void ABPA_Tutorial_C::OnTransitionEnd()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Tutorial.BPA_Tutorial_C.OnTransitionEnd");
		
		ABPA_Tutorial_C_OnTransitionEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Tutorial.BPA_Tutorial_C.DoRunTutorial
	 * 		Flags  -> ()
	 */
	void ABPA_Tutorial_C::DoRunTutorial()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Tutorial.BPA_Tutorial_C.DoRunTutorial");
		
		ABPA_Tutorial_C_DoRunTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Tutorial.BPA_Tutorial_C.DoStopTutorial
	 * 		Flags  -> ()
	 */
	void ABPA_Tutorial_C::DoStopTutorial()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Tutorial.BPA_Tutorial_C.DoStopTutorial");
		
		ABPA_Tutorial_C_DoStopTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Tutorial.BPA_Tutorial_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABPA_Tutorial_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Tutorial.BPA_Tutorial_C.ReceiveBeginPlay");
		
		ABPA_Tutorial_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Tutorial.BPA_Tutorial_C.OnTransitionStart
	 * 		Flags  -> ()
	 */
	void ABPA_Tutorial_C::OnTransitionStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Tutorial.BPA_Tutorial_C.OnTransitionStart");
		
		ABPA_Tutorial_C_OnTransitionStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Tutorial.BPA_Tutorial_C.SetDisabled
	 * 		Flags  -> ()
	 */
	void ABPA_Tutorial_C::SetDisabled()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Tutorial.BPA_Tutorial_C.SetDisabled");
		
		ABPA_Tutorial_C_SetDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Tutorial.BPA_Tutorial_C.ExecuteUbergraph_BPA_Tutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Tutorial_C::ExecuteUbergraph_BPA_Tutorial(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Tutorial.BPA_Tutorial_C.ExecuteUbergraph_BPA_Tutorial");
		
		ABPA_Tutorial_C_ExecuteUbergraph_BPA_Tutorial_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_Tutorial_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_Tutorial_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_Tutorial.BPA_Tutorial_C");
		return ptr;
	}

}


