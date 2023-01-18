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
	 * 		Name   -> Function WBP_DressingMode.WBP_DressingMode_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_DressingMode_C::Construct()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DressingMode.WBP_DressingMode_C.Construct");
		
		UWBP_DressingMode_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DressingMode.WBP_DressingMode_C.ExecuteUbergraph_WBP_DressingMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DressingMode_C::ExecuteUbergraph_WBP_DressingMode(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DressingMode.WBP_DressingMode_C.ExecuteUbergraph_WBP_DressingMode");
		
		UWBP_DressingMode_C_ExecuteUbergraph_WBP_DressingMode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DressingMode.WBP_DressingMode_C.OnHelp__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_DressingMode_C::OnHelp__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DressingMode.WBP_DressingMode_C.OnHelp__DelegateSignature");
		
		UWBP_DressingMode_C_OnHelp__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DressingMode.WBP_DressingMode_C.OnUnlock__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_DressingMode_C::OnUnlock__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DressingMode.WBP_DressingMode_C.OnUnlock__DelegateSignature");
		
		UWBP_DressingMode_C_OnUnlock__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DressingMode.WBP_DressingMode_C.OnLock__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_DressingMode_C::OnLock__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DressingMode.WBP_DressingMode_C.OnLock__DelegateSignature");
		
		UWBP_DressingMode_C_OnLock__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_DressingMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_DressingMode_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DressingMode.WBP_DressingMode_C");
		return ptr;
	}

}


