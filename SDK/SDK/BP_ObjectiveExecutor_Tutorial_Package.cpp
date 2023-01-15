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
	 * 		Name   -> Function BP_ObjectiveExecutor_Tutorial.BP_ObjectiveExecutor_Tutorial_C.OnTutorialSequenceFinishedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ObjectiveExecutor_Tutorial_C::OnTutorialSequenceFinishedEvent(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ObjectiveExecutor_Tutorial.BP_ObjectiveExecutor_Tutorial_C.OnTutorialSequenceFinishedEvent");
		
		ABP_ObjectiveExecutor_Tutorial_C_OnTutorialSequenceFinishedEvent_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectiveExecutor_Tutorial.BP_ObjectiveExecutor_Tutorial_C.Execute
	 * 		Flags  -> ()
	 */
	void ABP_ObjectiveExecutor_Tutorial_C::Execute()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ObjectiveExecutor_Tutorial.BP_ObjectiveExecutor_Tutorial_C.Execute");
		
		ABP_ObjectiveExecutor_Tutorial_C_Execute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectiveExecutor_Tutorial.BP_ObjectiveExecutor_Tutorial_C.ExecuteUbergraph_BP_ObjectiveExecutor_Tutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ObjectiveExecutor_Tutorial_C::ExecuteUbergraph_BP_ObjectiveExecutor_Tutorial(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ObjectiveExecutor_Tutorial.BP_ObjectiveExecutor_Tutorial_C.ExecuteUbergraph_BP_ObjectiveExecutor_Tutorial");
		
		ABP_ObjectiveExecutor_Tutorial_C_ExecuteUbergraph_BP_ObjectiveExecutor_Tutorial_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ObjectiveExecutor_Tutorial_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ObjectiveExecutor_Tutorial_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ObjectiveExecutor_Tutorial.BP_ObjectiveExecutor_Tutorial_C");
		return ptr;
	}

}


