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
	 * 		Name   -> Function BP_ObjectiveExecutor_FindStash.BP_ObjectiveExecutor_FindStash_C.GetPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             Points                                                     (Parm, OutParm)
	 */
	void ABP_ObjectiveExecutor_FindStash_C::GetPoints(TArray<struct FVector>* Points)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ObjectiveExecutor_FindStash.BP_ObjectiveExecutor_FindStash_C.GetPoints");
		
		ABP_ObjectiveExecutor_FindStash_C_GetPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Points != nullptr)
			*Points = params.Points;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectiveExecutor_FindStash.BP_ObjectiveExecutor_FindStash_C.Execute
	 * 		Flags  -> ()
	 */
	void ABP_ObjectiveExecutor_FindStash_C::Execute()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ObjectiveExecutor_FindStash.BP_ObjectiveExecutor_FindStash_C.Execute");
		
		ABP_ObjectiveExecutor_FindStash_C_Execute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectiveExecutor_FindStash.BP_ObjectiveExecutor_FindStash_C.ExecuteUbergraph_BP_ObjectiveExecutor_FindStash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ObjectiveExecutor_FindStash_C::ExecuteUbergraph_BP_ObjectiveExecutor_FindStash(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ObjectiveExecutor_FindStash.BP_ObjectiveExecutor_FindStash_C.ExecuteUbergraph_BP_ObjectiveExecutor_FindStash");
		
		ABP_ObjectiveExecutor_FindStash_C_ExecuteUbergraph_BP_ObjectiveExecutor_FindStash_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ObjectiveExecutor_FindStash_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ObjectiveExecutor_FindStash_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ObjectiveExecutor_FindStash.BP_ObjectiveExecutor_FindStash_C");
		return ptr;
	}

}


