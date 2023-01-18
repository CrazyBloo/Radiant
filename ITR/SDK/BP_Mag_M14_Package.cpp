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
	 * 		Name   -> Function BP_Mag_M14.BP_Mag_M14_C.RefillBulletPoints
	 * 		Flags  -> ()
	 */
	void ABP_Mag_M14_C::RefillBulletPoints()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mag_M14.BP_Mag_M14_C.RefillBulletPoints");
		
		ABP_Mag_M14_C_RefillBulletPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Mag_M14_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Mag_M14_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mag_M14.BP_Mag_M14_C");
		return ptr;
	}

}


