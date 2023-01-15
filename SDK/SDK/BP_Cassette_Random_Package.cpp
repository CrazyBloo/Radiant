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
	 * 		Name   -> Function BP_Cassette_Random.BP_Cassette_Random_C.OnStart
	 * 		Flags  -> ()
	 */
	void ABP_Cassette_Random_C::OnStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cassette_Random.BP_Cassette_Random_C.OnStart");
		
		ABP_Cassette_Random_C_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cassette_Random.BP_Cassette_Random_C.ExecuteUbergraph_BP_Cassette_Random
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Cassette_Random_C::ExecuteUbergraph_BP_Cassette_Random(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cassette_Random.BP_Cassette_Random_C.ExecuteUbergraph_BP_Cassette_Random");
		
		ABP_Cassette_Random_C_ExecuteUbergraph_BP_Cassette_Random_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Cassette_Random_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Cassette_Random_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cassette_Random.BP_Cassette_Random_C");
		return ptr;
	}

}


