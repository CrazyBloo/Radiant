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
	 * 		Name   -> Function WBP_Element_ObjectiveResult.WBP_Element_ObjectiveResult_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionAbstractObjectiveData*               objectiveData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Element_ObjectiveResult_C::Update(class UMissionAbstractObjectiveData* objectiveData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_ObjectiveResult.WBP_Element_ObjectiveResult_C.Update");
		
		UWBP_Element_ObjectiveResult_C_Update_Params params {};
		params.objectiveData = objectiveData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_ObjectiveResult.WBP_Element_ObjectiveResult_C.UpdateWounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Element_ObjectiveResult_C::UpdateWounds(int32_t Amount)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_ObjectiveResult.WBP_Element_ObjectiveResult_C.UpdateWounds");
		
		UWBP_Element_ObjectiveResult_C_UpdateWounds_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_ObjectiveResult.WBP_Element_ObjectiveResult_C.ExecuteUbergraph_WBP_Element_ObjectiveResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Element_ObjectiveResult_C::ExecuteUbergraph_WBP_Element_ObjectiveResult(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_ObjectiveResult.WBP_Element_ObjectiveResult_C.ExecuteUbergraph_WBP_Element_ObjectiveResult");
		
		UWBP_Element_ObjectiveResult_C_ExecuteUbergraph_WBP_Element_ObjectiveResult_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Element_ObjectiveResult_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Element_ObjectiveResult_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Element_ObjectiveResult.WBP_Element_ObjectiveResult_C");
		return ptr;
	}

}


