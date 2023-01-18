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
	 * 		Name   -> Function BP_Lamp_Prefab.BP_Lamp_Prefab_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Lamp_Prefab_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Lamp_Prefab.BP_Lamp_Prefab_C.UserConstructionScript");
		
		ABP_Lamp_Prefab_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lamp_Prefab.BP_Lamp_Prefab_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Lamp_Prefab_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Lamp_Prefab.BP_Lamp_Prefab_C.ReceiveBeginPlay");
		
		ABP_Lamp_Prefab_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Lamp_Prefab.BP_Lamp_Prefab_C.ExecuteUbergraph_BP_Lamp_Prefab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Lamp_Prefab_C::ExecuteUbergraph_BP_Lamp_Prefab(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Lamp_Prefab.BP_Lamp_Prefab_C.ExecuteUbergraph_BP_Lamp_Prefab");
		
		ABP_Lamp_Prefab_C_ExecuteUbergraph_BP_Lamp_Prefab_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Lamp_Prefab_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Lamp_Prefab_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lamp_Prefab.BP_Lamp_Prefab_C");
		return ptr;
	}

}


