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
	 * 		Name   -> Function BP_Cassette_Conditional.BP_Cassette_Conditional_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_Cassette_Conditional_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cassette_Conditional.BP_Cassette_Conditional_C.OnReconfigure");
		
		ABP_Cassette_Conditional_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cassette_Conditional.BP_Cassette_Conditional_C.ExecuteUbergraph_BP_Cassette_Conditional
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Cassette_Conditional_C::ExecuteUbergraph_BP_Cassette_Conditional(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cassette_Conditional.BP_Cassette_Conditional_C.ExecuteUbergraph_BP_Cassette_Conditional");
		
		ABP_Cassette_Conditional_C_ExecuteUbergraph_BP_Cassette_Conditional_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Cassette_Conditional_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Cassette_Conditional_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cassette_Conditional.BP_Cassette_Conditional_C");
		return ptr;
	}

}


