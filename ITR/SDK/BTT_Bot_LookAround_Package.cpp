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
	 * 		Name   -> Function BTT_Bot_LookAround.BTT_Bot_LookAround_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_Bot_LookAround_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_Bot_LookAround.BTT_Bot_LookAround_C.ReceiveExecuteAI");
		
		UBTT_Bot_LookAround_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_Bot_LookAround.BTT_Bot_LookAround_C.ExecuteUbergraph_BTT_Bot_LookAround
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_Bot_LookAround_C::ExecuteUbergraph_BTT_Bot_LookAround(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_Bot_LookAround.BTT_Bot_LookAround_C.ExecuteUbergraph_BTT_Bot_LookAround");
		
		UBTT_Bot_LookAround_C_ExecuteUbergraph_BTT_Bot_LookAround_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_Bot_LookAround_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_Bot_LookAround_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTT_Bot_LookAround.BTT_Bot_LookAround_C");
		return ptr;
	}

}


