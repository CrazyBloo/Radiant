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
	 * 		Name   -> Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.GetPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             Points                                                     (Parm, OutParm)
	 */
	void ABPA_ObjectiveExecutor_C::GetPoints(TArray<struct FVector>* Points)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.GetPoints");
		
		ABPA_ObjectiveExecutor_C_GetPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Points != nullptr)
			*Points = params.Points;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.CheckSSVs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ready                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_ObjectiveExecutor_C::CheckSSVs(bool* ready)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.CheckSSVs");
		
		ABPA_ObjectiveExecutor_C_CheckSSVs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ready != nullptr)
			*ready = params.ready;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                Mission                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMissionAbstractObjectiveData*               Objective                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_ObjectiveExecutor_C::Initialize(class UMissionData* Mission, class UMissionAbstractObjectiveData* Objective)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.Initialize");
		
		ABPA_ObjectiveExecutor_C_Initialize_Params params {};
		params.Mission = Mission;
		params.Objective = Objective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.OnTransitionEnd
	 * 		Flags  -> ()
	 */
	void ABPA_ObjectiveExecutor_C::OnTransitionEnd()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.OnTransitionEnd");
		
		ABPA_ObjectiveExecutor_C_OnTransitionEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.Execute
	 * 		Flags  -> ()
	 */
	void ABPA_ObjectiveExecutor_C::Execute()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.Execute");
		
		ABPA_ObjectiveExecutor_C_Execute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.OnTransitionStart
	 * 		Flags  -> ()
	 */
	void ABPA_ObjectiveExecutor_C::OnTransitionStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.OnTransitionStart");
		
		ABPA_ObjectiveExecutor_C_OnTransitionStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_ObjectiveExecutor_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.ReceiveTick");
		
		ABPA_ObjectiveExecutor_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.ExecuteUbergraph_BPA_ObjectiveExecutor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_ObjectiveExecutor_C::ExecuteUbergraph_BPA_ObjectiveExecutor(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C.ExecuteUbergraph_BPA_ObjectiveExecutor");
		
		ABPA_ObjectiveExecutor_C_ExecuteUbergraph_BPA_ObjectiveExecutor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_ObjectiveExecutor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_ObjectiveExecutor_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_ObjectiveExecutor.BPA_ObjectiveExecutor_C");
		return ptr;
	}

}


