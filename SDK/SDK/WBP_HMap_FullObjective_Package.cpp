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
	 * 		Name   -> Function WBP_HMap_FullObjective.WBP_HMap_FullObjective_C.Set Count
	 * 		Flags  -> ()
	 */
	void UWBP_HMap_FullObjective_C::Set_Count()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_FullObjective.WBP_HMap_FullObjective_C.Set Count");
		
		UWBP_HMap_FullObjective_C_Set_Count_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_FullObjective.WBP_HMap_FullObjective_C.Get Taken Pics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FGameplayTag>                        pictures                                                   (Parm, OutParm)
	 */
	void UWBP_HMap_FullObjective_C::Get_Taken_Pics(TArray<struct FGameplayTag>* pictures)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_FullObjective.WBP_HMap_FullObjective_C.Get Taken Pics");
		
		UWBP_HMap_FullObjective_C_Get_Taken_Pics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (pictures != nullptr)
			*pictures = params.pictures;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_FullObjective.WBP_HMap_FullObjective_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionAbstractObjectiveData*               objectiveData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HMap_FullObjective_C::Update(class UMissionAbstractObjectiveData* objectiveData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_FullObjective.WBP_HMap_FullObjective_C.Update");
		
		UWBP_HMap_FullObjective_C_Update_Params params {};
		params.objectiveData = objectiveData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_FullObjective.WBP_HMap_FullObjective_C.UpdateCountOnly
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionAbstractObjectiveData*               objectiveData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HMap_FullObjective_C::UpdateCountOnly(class UMissionAbstractObjectiveData* objectiveData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_FullObjective.WBP_HMap_FullObjective_C.UpdateCountOnly");
		
		UWBP_HMap_FullObjective_C_UpdateCountOnly_Params params {};
		params.objectiveData = objectiveData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_HMap_FullObjective.WBP_HMap_FullObjective_C.ExecuteUbergraph_WBP_HMap_FullObjective
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_HMap_FullObjective_C::ExecuteUbergraph_WBP_HMap_FullObjective(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HMap_FullObjective.WBP_HMap_FullObjective_C.ExecuteUbergraph_WBP_HMap_FullObjective");
		
		UWBP_HMap_FullObjective_C_ExecuteUbergraph_WBP_HMap_FullObjective_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_HMap_FullObjective_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_HMap_FullObjective_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HMap_FullObjective.WBP_HMap_FullObjective_C");
		return ptr;
	}

}


