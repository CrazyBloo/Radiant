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
	 * 		Name   -> Function ALS_AI_Controller.ALS_AI_Controller_C.ReceivePossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AALS_AI_Controller_C::ReceivePossess(class APawn* PossessedPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ALS_AI_Controller.ALS_AI_Controller_C.ReceivePossess");
		
		AALS_AI_Controller_C_ReceivePossess_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ALS_AI_Controller.ALS_AI_Controller_C.ExecuteUbergraph_ALS_AI_Controller
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AALS_AI_Controller_C::ExecuteUbergraph_ALS_AI_Controller(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ALS_AI_Controller.ALS_AI_Controller_C.ExecuteUbergraph_ALS_AI_Controller");
		
		AALS_AI_Controller_C_ExecuteUbergraph_ALS_AI_Controller_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AALS_AI_Controller_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AALS_AI_Controller_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ALS_AI_Controller.ALS_AI_Controller_C");
		return ptr;
	}

}


