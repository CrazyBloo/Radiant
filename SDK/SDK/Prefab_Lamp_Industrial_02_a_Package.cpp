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
	 * 		Name   -> Function Prefab_Lamp_Industrial_02_a.Prefab_Lamp_Industrial_02_a_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void APrefab_Lamp_Industrial_02_a_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function Prefab_Lamp_Industrial_02_a.Prefab_Lamp_Industrial_02_a_C.UserConstructionScript");
		
		APrefab_Lamp_Industrial_02_a_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APrefab_Lamp_Industrial_02_a_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrefab_Lamp_Industrial_02_a_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Prefab_Lamp_Industrial_02_a.Prefab_Lamp_Industrial_02_a_C");
		return ptr;
	}

}


