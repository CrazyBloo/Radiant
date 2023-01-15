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
	 * 		Name   -> Function BP_ObjectiveExecutor_Info.BP_ObjectiveExecutor_Info_C.Execute
	 * 		Flags  -> ()
	 */
	void ABP_ObjectiveExecutor_Info_C::Execute()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ObjectiveExecutor_Info.BP_ObjectiveExecutor_Info_C.Execute");
		
		ABP_ObjectiveExecutor_Info_C_Execute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectiveExecutor_Info.BP_ObjectiveExecutor_Info_C.ExecuteUbergraph_BP_ObjectiveExecutor_Info
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ObjectiveExecutor_Info_C::ExecuteUbergraph_BP_ObjectiveExecutor_Info(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ObjectiveExecutor_Info.BP_ObjectiveExecutor_Info_C.ExecuteUbergraph_BP_ObjectiveExecutor_Info");
		
		ABP_ObjectiveExecutor_Info_C_ExecuteUbergraph_BP_ObjectiveExecutor_Info_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ObjectiveExecutor_Info_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ObjectiveExecutor_Info_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ObjectiveExecutor_Info.BP_ObjectiveExecutor_Info_C");
		return ptr;
	}

}


