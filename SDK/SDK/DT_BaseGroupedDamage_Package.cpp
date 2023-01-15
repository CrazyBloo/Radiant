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
	 * 		Name   -> Function DT_BaseGroupedDamage.DT_BaseGroupedDamage_C.GetDamageCategory
	 * 		Flags  -> ()
	 */
	EDamageCategory UDT_BaseGroupedDamage_C::GetDamageCategory()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function DT_BaseGroupedDamage.DT_BaseGroupedDamage_C.GetDamageCategory");
		
		UDT_BaseGroupedDamage_C_GetDamageCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDT_BaseGroupedDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDT_BaseGroupedDamage_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DT_BaseGroupedDamage.DT_BaseGroupedDamage_C");
		return ptr;
	}

}


