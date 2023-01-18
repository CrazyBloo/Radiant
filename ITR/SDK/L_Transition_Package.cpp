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
	 * 		Name   -> Function L_Transition.L_Transition_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AL_Transition_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function L_Transition.L_Transition_C.ReceiveBeginPlay");
		
		AL_Transition_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function L_Transition.L_Transition_C.ExecuteUbergraph_L_Transition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AL_Transition_C::ExecuteUbergraph_L_Transition(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function L_Transition.L_Transition_C.ExecuteUbergraph_L_Transition");
		
		AL_Transition_C_ExecuteUbergraph_L_Transition_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AL_Transition_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AL_Transition_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass L_Transition.L_Transition_C");
		return ptr;
	}

}


