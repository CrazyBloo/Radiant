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
	 * 		Name   -> Function BP_Environment.BP_Environment_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Environment_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Environment.BP_Environment_C.UserConstructionScript");
		
		ABP_Environment_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Environment.BP_Environment_C.OnGameStarted
	 * 		Flags  -> ()
	 */
	void ABP_Environment_C::OnGameStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Environment.BP_Environment_C.OnGameStarted");
		
		ABP_Environment_C_OnGameStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Environment.BP_Environment_C.ApplySettings
	 * 		Flags  -> ()
	 */
	void ABP_Environment_C::ApplySettings()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Environment.BP_Environment_C.ApplySettings");
		
		ABP_Environment_C_ApplySettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Environment.BP_Environment_C.ExecuteUbergraph_BP_Environment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Environment_C::ExecuteUbergraph_BP_Environment(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Environment.BP_Environment_C.ExecuteUbergraph_BP_Environment");
		
		ABP_Environment_C_ExecuteUbergraph_BP_Environment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Environment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Environment_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Environment.BP_Environment_C");
		return ptr;
	}

}


