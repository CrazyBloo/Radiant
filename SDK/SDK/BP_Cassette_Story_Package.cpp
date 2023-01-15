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
	 * 		Name   -> Function BP_Cassette_Story.BP_Cassette_Story_C.IsCassetteCollected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               collected                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Cassette_Story_C::IsCassetteCollected(bool* collected)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cassette_Story.BP_Cassette_Story_C.IsCassetteCollected");
		
		ABP_Cassette_Story_C_IsCassetteCollected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (collected != nullptr)
			*collected = params.collected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cassette_Story.BP_Cassette_Story_C.OnStart
	 * 		Flags  -> ()
	 */
	void ABP_Cassette_Story_C::OnStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cassette_Story.BP_Cassette_Story_C.OnStart");
		
		ABP_Cassette_Story_C_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cassette_Story.BP_Cassette_Story_C.ExecuteUbergraph_BP_Cassette_Story
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Cassette_Story_C::ExecuteUbergraph_BP_Cassette_Story(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cassette_Story.BP_Cassette_Story_C.ExecuteUbergraph_BP_Cassette_Story");
		
		ABP_Cassette_Story_C_ExecuteUbergraph_BP_Cassette_Story_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Cassette_Story_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Cassette_Story_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cassette_Story.BP_Cassette_Story_C");
		return ptr;
	}

}


