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
	 * 		Name   -> Function ExplosionShake.ExplosionShake_C.NewFunction_1
	 * 		Flags  -> ()
	 */
	void UExplosionShake_C::NewFunction_1()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ExplosionShake.ExplosionShake_C.NewFunction_1");
		
		UExplosionShake_C_NewFunction_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExplosionShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExplosionShake_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ExplosionShake.ExplosionShake_C");
		return ptr;
	}

}


