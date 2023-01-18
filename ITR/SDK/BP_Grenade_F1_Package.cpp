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
	 * 		Name   -> Function BP_Grenade_F1.BP_Grenade_F1_C.Explode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSuccess                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Grenade_F1_C::Explode(bool* bIsSuccess)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Grenade_F1.BP_Grenade_F1_C.Explode");
		
		ABP_Grenade_F1_C_Explode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsSuccess != nullptr)
			*bIsSuccess = params.bIsSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Grenade_F1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Grenade_F1_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Grenade_F1.BP_Grenade_F1_C");
		return ptr;
	}

}


