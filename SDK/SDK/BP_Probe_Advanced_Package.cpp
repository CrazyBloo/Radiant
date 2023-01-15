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
	 * 		Name   -> Function BP_Probe_Advanced.BP_Probe_Advanced_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Probe_Advanced_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Probe_Advanced.BP_Probe_Advanced_C.ReceiveBeginPlay");
		
		ABP_Probe_Advanced_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Probe_Advanced.BP_Probe_Advanced_C.ExecuteUbergraph_BP_Probe_Advanced
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Probe_Advanced_C::ExecuteUbergraph_BP_Probe_Advanced(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Probe_Advanced.BP_Probe_Advanced_C.ExecuteUbergraph_BP_Probe_Advanced");
		
		ABP_Probe_Advanced_C_ExecuteUbergraph_BP_Probe_Advanced_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Probe_Advanced_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Probe_Advanced_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Probe_Advanced.BP_Probe_Advanced_C");
		return ptr;
	}

}


