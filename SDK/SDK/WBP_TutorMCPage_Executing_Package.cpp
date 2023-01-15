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
	 * 		Name   -> Function WBP_TutorMCPage_Executing.WBP_TutorMCPage_Executing_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                MissionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_TutorMCPage_Executing_C::Update(class UMissionData* MissionData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TutorMCPage_Executing.WBP_TutorMCPage_Executing_C.Update");
		
		UWBP_TutorMCPage_Executing_C_Update_Params params {};
		params.MissionData = MissionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_TutorMCPage_Executing.WBP_TutorMCPage_Executing_C.ExecuteUbergraph_WBP_TutorMCPage_Executing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_TutorMCPage_Executing_C::ExecuteUbergraph_WBP_TutorMCPage_Executing(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TutorMCPage_Executing.WBP_TutorMCPage_Executing_C.ExecuteUbergraph_WBP_TutorMCPage_Executing");
		
		UWBP_TutorMCPage_Executing_C_ExecuteUbergraph_WBP_TutorMCPage_Executing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_TutorMCPage_Executing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_TutorMCPage_Executing_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TutorMCPage_Executing.WBP_TutorMCPage_Executing_C");
		return ptr;
	}

}


