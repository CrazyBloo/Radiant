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
	 * 		Name   -> Function BP_Skip.BP_Skip_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Skip_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Skip.BP_Skip_C.ReceiveBeginPlay");
		
		ABP_Skip_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Skip.BP_Skip_C.OnSkipPressedEvent
	 * 		Flags  -> ()
	 */
	void ABP_Skip_C::OnSkipPressedEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Skip.BP_Skip_C.OnSkipPressedEvent");
		
		ABP_Skip_C_OnSkipPressedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Skip.BP_Skip_C.ExecuteUbergraph_BP_Skip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Skip_C::ExecuteUbergraph_BP_Skip(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Skip.BP_Skip_C.ExecuteUbergraph_BP_Skip");
		
		ABP_Skip_C_ExecuteUbergraph_BP_Skip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Skip.BP_Skip_C.OnSkip__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_Skip_C::OnSkip__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Skip.BP_Skip_C.OnSkip__DelegateSignature");
		
		ABP_Skip_C_OnSkip__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Skip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Skip_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Skip.BP_Skip_C");
		return ptr;
	}

}


