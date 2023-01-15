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
	 * 		Name   -> Function BP_PPSH_full.BP_PPSH_full_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PPSH_full_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PPSH_full.BP_PPSH_full_C.ReceiveBeginPlay");
		
		ABP_PPSH_full_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PPSH_full.BP_PPSH_full_C.SafetyVisual
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponFireMode                                    FireMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PPSH_full_C::SafetyVisual(EWeaponFireMode FireMode)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PPSH_full.BP_PPSH_full_C.SafetyVisual");
		
		ABP_PPSH_full_C_SafetyVisual_Params params {};
		params.FireMode = FireMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PPSH_full.BP_PPSH_full_C.ExecuteUbergraph_BP_PPSH_full
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PPSH_full_C::ExecuteUbergraph_BP_PPSH_full(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PPSH_full.BP_PPSH_full_C.ExecuteUbergraph_BP_PPSH_full");
		
		ABP_PPSH_full_C_ExecuteUbergraph_BP_PPSH_full_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PPSH_full_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PPSH_full_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PPSH_full.BP_PPSH_full_C");
		return ptr;
	}

}


