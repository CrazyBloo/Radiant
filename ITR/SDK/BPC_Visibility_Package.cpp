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
	 * 		Name   -> Function BPC_Visibility.BPC_Visibility_C.OnGameStarted
	 * 		Flags  -> ()
	 */
	void UBPC_Visibility_C::OnGameStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Visibility.BPC_Visibility_C.OnGameStarted");
		
		UBPC_Visibility_C_OnGameStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Visibility.BPC_Visibility_C.ExecuteUbergraph_BPC_Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Visibility_C::ExecuteUbergraph_BPC_Visibility(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Visibility.BPC_Visibility_C.ExecuteUbergraph_BPC_Visibility");
		
		UBPC_Visibility_C_ExecuteUbergraph_BPC_Visibility_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_Visibility_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Visibility_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Visibility.BPC_Visibility_C");
		return ptr;
	}

}


