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
	 * 		Name   -> Function BP_MissionExecutor.BP_MissionExecutor_C.SpawnAdditionalMonsters
	 * 		Flags  -> ()
	 */
	void ABP_MissionExecutor_C::SpawnAdditionalMonsters()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MissionExecutor.BP_MissionExecutor_C.SpawnAdditionalMonsters");
		
		ABP_MissionExecutor_C_SpawnAdditionalMonsters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MissionExecutor.BP_MissionExecutor_C.SpawnAdditionalCorpses
	 * 		Flags  -> ()
	 */
	void ABP_MissionExecutor_C::SpawnAdditionalCorpses()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MissionExecutor.BP_MissionExecutor_C.SpawnAdditionalCorpses");
		
		ABP_MissionExecutor_C_SpawnAdditionalCorpses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MissionExecutor.BP_MissionExecutor_C.OnTransitionStart
	 * 		Flags  -> ()
	 */
	void ABP_MissionExecutor_C::OnTransitionStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MissionExecutor.BP_MissionExecutor_C.OnTransitionStart");
		
		ABP_MissionExecutor_C_OnTransitionStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MissionExecutor.BP_MissionExecutor_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MissionExecutor_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MissionExecutor.BP_MissionExecutor_C.ReceiveEndPlay");
		
		ABP_MissionExecutor_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MissionExecutor.BP_MissionExecutor_C.OnTransitionEnd
	 * 		Flags  -> ()
	 */
	void ABP_MissionExecutor_C::OnTransitionEnd()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MissionExecutor.BP_MissionExecutor_C.OnTransitionEnd");
		
		ABP_MissionExecutor_C_OnTransitionEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MissionExecutor.BP_MissionExecutor_C.ExecuteUbergraph_BP_MissionExecutor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MissionExecutor_C::ExecuteUbergraph_BP_MissionExecutor(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MissionExecutor.BP_MissionExecutor_C.ExecuteUbergraph_BP_MissionExecutor");
		
		ABP_MissionExecutor_C_ExecuteUbergraph_BP_MissionExecutor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MissionExecutor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MissionExecutor_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MissionExecutor.BP_MissionExecutor_C");
		return ptr;
	}

}


