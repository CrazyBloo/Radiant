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
	 * 		Name   -> Function WBP_Element_ObjectiveDetails.WBP_Element_ObjectiveDetails_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionAbstractObjectiveData*               objectiveData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShortName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Element_ObjectiveDetails_C::Update(class UMissionAbstractObjectiveData* objectiveData, bool ShortName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_ObjectiveDetails.WBP_Element_ObjectiveDetails_C.Update");
		
		UWBP_Element_ObjectiveDetails_C_Update_Params params {};
		params.objectiveData = objectiveData;
		params.ShortName = ShortName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_ObjectiveDetails.WBP_Element_ObjectiveDetails_C.ShowReward
	 * 		Flags  -> ()
	 */
	void UWBP_Element_ObjectiveDetails_C::ShowReward()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_ObjectiveDetails.WBP_Element_ObjectiveDetails_C.ShowReward");
		
		UWBP_Element_ObjectiveDetails_C_ShowReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_ObjectiveDetails.WBP_Element_ObjectiveDetails_C.ShowCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDelivery                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_Element_ObjectiveDetails_C::ShowCount(bool IsDelivery)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_ObjectiveDetails.WBP_Element_ObjectiveDetails_C.ShowCount");
		
		UWBP_Element_ObjectiveDetails_C_ShowCount_Params params {};
		params.IsDelivery = IsDelivery;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_Element_ObjectiveDetails.WBP_Element_ObjectiveDetails_C.ExecuteUbergraph_WBP_Element_ObjectiveDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_Element_ObjectiveDetails_C::ExecuteUbergraph_WBP_Element_ObjectiveDetails(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Element_ObjectiveDetails.WBP_Element_ObjectiveDetails_C.ExecuteUbergraph_WBP_Element_ObjectiveDetails");
		
		UWBP_Element_ObjectiveDetails_C_ExecuteUbergraph_WBP_Element_ObjectiveDetails_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_Element_ObjectiveDetails_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_Element_ObjectiveDetails_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Element_ObjectiveDetails.WBP_Element_ObjectiveDetails_C");
		return ptr;
	}

}


