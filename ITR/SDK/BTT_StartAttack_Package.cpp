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
	 * 		Name   -> Function BTT_StartAttack.BTT_StartAttack_C.ReceiveExecute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_StartAttack_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_StartAttack.BTT_StartAttack_C.ReceiveExecute");
		
		UBTT_StartAttack_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_StartAttack.BTT_StartAttack_C.CheckFinish
	 * 		Flags  -> ()
	 */
	void UBTT_StartAttack_C::CheckFinish()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_StartAttack.BTT_StartAttack_C.CheckFinish");
		
		UBTT_StartAttack_C_CheckFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_StartAttack.BTT_StartAttack_C.ExecuteUbergraph_BTT_StartAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_StartAttack_C::ExecuteUbergraph_BTT_StartAttack(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_StartAttack.BTT_StartAttack_C.ExecuteUbergraph_BTT_StartAttack");
		
		UBTT_StartAttack_C_ExecuteUbergraph_BTT_StartAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_StartAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_StartAttack_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTT_StartAttack.BTT_StartAttack_C");
		return ptr;
	}

}


