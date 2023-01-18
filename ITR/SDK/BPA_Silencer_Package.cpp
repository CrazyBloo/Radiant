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
	 * 		Name   -> Function BPA_Silencer.BPA_Silencer_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABPA_Silencer_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Silencer.BPA_Silencer_C.UserConstructionScript");
		
		ABPA_Silencer_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Silencer.BPA_Silencer_C.BndEvt__BPA_Silencer_BPC_ItemDurability_K2Node_ComponentBoundEvent_1_OnDurabilityChange__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABPA_Silencer_C::BndEvt__BPA_Silencer_BPC_ItemDurability_K2Node_ComponentBoundEvent_1_OnDurabilityChange__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Silencer.BPA_Silencer_C.BndEvt__BPA_Silencer_BPC_ItemDurability_K2Node_ComponentBoundEvent_1_OnDurabilityChange__DelegateSignature");
		
		ABPA_Silencer_C_BndEvt__BPA_Silencer_BPC_ItemDurability_K2Node_ComponentBoundEvent_1_OnDurabilityChange__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Silencer.BPA_Silencer_C.OnBulletFired
	 * 		Flags  -> ()
	 */
	void ABPA_Silencer_C::OnBulletFired()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Silencer.BPA_Silencer_C.OnBulletFired");
		
		ABPA_Silencer_C_OnBulletFired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Silencer.BPA_Silencer_C.ExecuteUbergraph_BPA_Silencer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Silencer_C::ExecuteUbergraph_BPA_Silencer(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Silencer.BPA_Silencer_C.ExecuteUbergraph_BPA_Silencer");
		
		ABPA_Silencer_C_ExecuteUbergraph_BPA_Silencer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_Silencer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_Silencer_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_Silencer.BPA_Silencer_C");
		return ptr;
	}

}


