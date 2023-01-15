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
	 * 		Name   -> Function BP_PP2000.BP_PP2000_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PP2000_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PP2000.BP_PP2000_C.ReceiveBeginPlay");
		
		ABP_PP2000_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PP2000.BP_PP2000_C.ExecuteUbergraph_BP_PP2000
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PP2000_C::ExecuteUbergraph_BP_PP2000(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PP2000.BP_PP2000_C.ExecuteUbergraph_BP_PP2000");
		
		ABP_PP2000_C_ExecuteUbergraph_BP_PP2000_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PP2000_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PP2000_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PP2000.BP_PP2000_C");
		return ptr;
	}

}


