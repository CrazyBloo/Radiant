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
	 * 		Name   -> Function BP_Detonator.BP_Detonator_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Detonator_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Detonator.BP_Detonator_C.ReceiveBeginPlay");
		
		ABP_Detonator_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detonator.BP_Detonator_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABP_Detonator_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Detonator.BP_Detonator_C.OnUsed");
		
		ABP_Detonator_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Detonator.BP_Detonator_C.ExecuteUbergraph_BP_Detonator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Detonator_C::ExecuteUbergraph_BP_Detonator(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Detonator.BP_Detonator_C.ExecuteUbergraph_BP_Detonator");
		
		ABP_Detonator_C_ExecuteUbergraph_BP_Detonator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Detonator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Detonator_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Detonator.BP_Detonator_C");
		return ptr;
	}

}


