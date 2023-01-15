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
	 * 		Name   -> Function BPA_Consumable.BPA_Consumable_C.Use
	 * 		Flags  -> ()
	 */
	void ABPA_Consumable_C::Use()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Consumable.BPA_Consumable_C.Use");
		
		ABPA_Consumable_C_Use_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Consumable.BPA_Consumable_C.OnUseCountEnd
	 * 		Flags  -> ()
	 */
	void ABPA_Consumable_C::OnUseCountEnd()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Consumable.BPA_Consumable_C.OnUseCountEnd");
		
		ABPA_Consumable_C_OnUseCountEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Consumable.BPA_Consumable_C.ExecuteUbergraph_BPA_Consumable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Consumable_C::ExecuteUbergraph_BPA_Consumable(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Consumable.BPA_Consumable_C.ExecuteUbergraph_BPA_Consumable");
		
		ABPA_Consumable_C_ExecuteUbergraph_BPA_Consumable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_Consumable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_Consumable_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_Consumable.BPA_Consumable_C");
		return ptr;
	}

}


