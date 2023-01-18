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
	 * 		Name   -> Function BP_PlayerDeadBody.BP_PlayerDeadBody_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PlayerDeadBody_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerDeadBody.BP_PlayerDeadBody_C.ReceiveBeginPlay");
		
		ABP_PlayerDeadBody_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerDeadBody.BP_PlayerDeadBody_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void ABP_PlayerDeadBody_C::CustomEvent_1()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerDeadBody.BP_PlayerDeadBody_C.CustomEvent_1");
		
		ABP_PlayerDeadBody_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerDeadBody.BP_PlayerDeadBody_C.ExecuteUbergraph_BP_PlayerDeadBody
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerDeadBody_C::ExecuteUbergraph_BP_PlayerDeadBody(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerDeadBody.BP_PlayerDeadBody_C.ExecuteUbergraph_BP_PlayerDeadBody");
		
		ABP_PlayerDeadBody_C_ExecuteUbergraph_BP_PlayerDeadBody_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PlayerDeadBody_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PlayerDeadBody_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerDeadBody.BP_PlayerDeadBody_C");
		return ptr;
	}

}


