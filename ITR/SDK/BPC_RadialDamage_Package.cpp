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
	 * 		Name   -> Function BPC_RadialDamage.BPC_RadialDamage_C.ApplyRadialDamgFalloff
	 * 		Flags  -> ()
	 */
	void UBPC_RadialDamage_C::ApplyRadialDamgFalloff()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_RadialDamage.BPC_RadialDamage_C.ApplyRadialDamgFalloff");
		
		UBPC_RadialDamage_C_ApplyRadialDamgFalloff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_RadialDamage.BPC_RadialDamage_C.ExecuteUbergraph_BPC_RadialDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_RadialDamage_C::ExecuteUbergraph_BPC_RadialDamage(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_RadialDamage.BPC_RadialDamage_C.ExecuteUbergraph_BPC_RadialDamage");
		
		UBPC_RadialDamage_C_ExecuteUbergraph_BPC_RadialDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_RadialDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_RadialDamage_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPC_RadialDamage.BPC_RadialDamage_C");
		return ptr;
	}

}


