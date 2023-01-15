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
	 * 		Name   -> Function BP_DeathNotice.BP_DeathNotice_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_DeathNotice_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DeathNotice.BP_DeathNotice_C.ReceiveBeginPlay");
		
		ABP_DeathNotice_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DeathNotice.BP_DeathNotice_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void ABP_DeathNotice_C::CustomEvent_1()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DeathNotice.BP_DeathNotice_C.CustomEvent_1");
		
		ABP_DeathNotice_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DeathNotice.BP_DeathNotice_C.ExecuteUbergraph_BP_DeathNotice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DeathNotice_C::ExecuteUbergraph_BP_DeathNotice(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DeathNotice.BP_DeathNotice_C.ExecuteUbergraph_BP_DeathNotice");
		
		ABP_DeathNotice_C_ExecuteUbergraph_BP_DeathNotice_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DeathNotice_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DeathNotice_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeathNotice.BP_DeathNotice_C");
		return ptr;
	}

}


