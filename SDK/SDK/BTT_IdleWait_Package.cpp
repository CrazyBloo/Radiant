﻿/**
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
	 * 		Name   -> Function BTT_IdleWait.BTT_IdleWait_C.ReceiveExecute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_IdleWait_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_IdleWait.BTT_IdleWait_C.ReceiveExecute");
		
		UBTT_IdleWait_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_IdleWait.BTT_IdleWait_C.ExecuteUbergraph_BTT_IdleWait
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_IdleWait_C::ExecuteUbergraph_BTT_IdleWait(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_IdleWait.BTT_IdleWait_C.ExecuteUbergraph_BTT_IdleWait");
		
		UBTT_IdleWait_C_ExecuteUbergraph_BTT_IdleWait_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_IdleWait_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_IdleWait_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTT_IdleWait.BTT_IdleWait_C");
		return ptr;
	}

}


