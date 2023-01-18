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
	 * 		Name   -> Function BP_EnvironmentSkyBox_Radius.BP_EnvironmentSkyBox_Radius_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_EnvironmentSkyBox_Radius_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EnvironmentSkyBox_Radius.BP_EnvironmentSkyBox_Radius_C.UserConstructionScript");
		
		ABP_EnvironmentSkyBox_Radius_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_EnvironmentSkyBox_Radius_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_EnvironmentSkyBox_Radius_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_EnvironmentSkyBox_Radius.BP_EnvironmentSkyBox_Radius_C");
		return ptr;
	}

}


