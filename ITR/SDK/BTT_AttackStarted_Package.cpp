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
	 * 		Name   -> Function BTT_AttackStarted.BTT_AttackStarted_C.ReceiveExecute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_AttackStarted_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_AttackStarted.BTT_AttackStarted_C.ReceiveExecute");
		
		UBTT_AttackStarted_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_AttackStarted.BTT_AttackStarted_C.ExecuteUbergraph_BTT_AttackStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_AttackStarted_C::ExecuteUbergraph_BTT_AttackStarted(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_AttackStarted.BTT_AttackStarted_C.ExecuteUbergraph_BTT_AttackStarted");
		
		UBTT_AttackStarted_C_ExecuteUbergraph_BTT_AttackStarted_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_AttackStarted_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_AttackStarted_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTT_AttackStarted.BTT_AttackStarted_C");
		return ptr;
	}

}


