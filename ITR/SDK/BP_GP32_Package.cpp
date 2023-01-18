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
	 * 		Name   -> Function BP_GP32.BP_GP32_C.Fire
	 * 		Flags  -> ()
	 */
	void ABP_GP32_C::Fire()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GP32.BP_GP32_C.Fire");
		
		ABP_GP32_C_Fire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GP32.BP_GP32_C.ExecuteUbergraph_BP_GP32
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GP32_C::ExecuteUbergraph_BP_GP32(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GP32.BP_GP32_C.ExecuteUbergraph_BP_GP32");
		
		ABP_GP32_C_ExecuteUbergraph_BP_GP32_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GP32_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GP32_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_GP32.BP_GP32_C");
		return ptr;
	}

}


