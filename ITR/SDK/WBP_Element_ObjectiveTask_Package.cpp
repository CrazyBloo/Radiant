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
	 * 		Name   -> Function WBP_Element_ObjectiveTask.WBP_Element_ObjectiveTask_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionAbstractObjectiveData*               objectiveData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsDelivery                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Element_ObjectiveTask_C::Update(class UMissionAbstractObjectiveData* objectiveData, bool IsDelivery)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_ObjectiveTask.WBP_Element_ObjectiveTask_C.Update");
		
		UWBP_Element_ObjectiveTask_C_Update_Params params {};
		params.objectiveData = objectiveData;
		params.IsDelivery = IsDelivery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_ObjectiveTask.WBP_Element_ObjectiveTask_C.ExecuteUbergraph_WBP_Element_ObjectiveTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Element_ObjectiveTask_C::ExecuteUbergraph_WBP_Element_ObjectiveTask(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_ObjectiveTask.WBP_Element_ObjectiveTask_C.ExecuteUbergraph_WBP_Element_ObjectiveTask");
		
		UWBP_Element_ObjectiveTask_C_ExecuteUbergraph_WBP_Element_ObjectiveTask_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Element_ObjectiveTask_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Element_ObjectiveTask_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Element_ObjectiveTask.WBP_Element_ObjectiveTask_C");
		return ptr;
	}

}


