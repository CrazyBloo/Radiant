﻿/**
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
	 * 		Name   -> Function BP_CannedFood_Pineapple.BP_CannedFood_Pineapple_C.SetFoodLvl
	 * 		Flags  -> ()
	 */
	void ABP_CannedFood_Pineapple_C::SetFoodLvl()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CannedFood_Pineapple.BP_CannedFood_Pineapple_C.SetFoodLvl");
		
		ABP_CannedFood_Pineapple_C_SetFoodLvl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CannedFood_Pineapple.BP_CannedFood_Pineapple_C.ExecuteUbergraph_BP_CannedFood_Pineapple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CannedFood_Pineapple_C::ExecuteUbergraph_BP_CannedFood_Pineapple(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CannedFood_Pineapple.BP_CannedFood_Pineapple_C.ExecuteUbergraph_BP_CannedFood_Pineapple");
		
		ABP_CannedFood_Pineapple_C_ExecuteUbergraph_BP_CannedFood_Pineapple_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CannedFood_Pineapple_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CannedFood_Pineapple_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_CannedFood_Pineapple.BP_CannedFood_Pineapple_C");
		return ptr;
	}

}


