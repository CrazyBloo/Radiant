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
	 * 		Name   -> Function BP_Char_ArmoredMimic_AKM.BP_Char_ArmoredMimic_AKM_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Char_ArmoredMimic_AKM_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_ArmoredMimic_AKM.BP_Char_ArmoredMimic_AKM_C.ReceiveBeginPlay");
		
		ABP_Char_ArmoredMimic_AKM_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_ArmoredMimic_AKM.BP_Char_ArmoredMimic_AKM_C.ExecuteUbergraph_BP_Char_ArmoredMimic_AKM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Char_ArmoredMimic_AKM_C::ExecuteUbergraph_BP_Char_ArmoredMimic_AKM(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_ArmoredMimic_AKM.BP_Char_ArmoredMimic_AKM_C.ExecuteUbergraph_BP_Char_ArmoredMimic_AKM");
		
		ABP_Char_ArmoredMimic_AKM_C_ExecuteUbergraph_BP_Char_ArmoredMimic_AKM_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Char_ArmoredMimic_AKM_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Char_ArmoredMimic_AKM_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Char_ArmoredMimic_AKM.BP_Char_ArmoredMimic_AKM_C");
		return ptr;
	}

}


