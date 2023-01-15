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
	 * 		Name   -> Function BP_UpdateNotice.BP_UpdateNotice_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_UpdateNotice_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_UpdateNotice.BP_UpdateNotice_C.ReceiveBeginPlay");
		
		ABP_UpdateNotice_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UpdateNotice.BP_UpdateNotice_C.ButtonClickedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               doNotShowAgain                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_UpdateNotice_C::ButtonClickedEvent(bool doNotShowAgain)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_UpdateNotice.BP_UpdateNotice_C.ButtonClickedEvent");
		
		ABP_UpdateNotice_C_ButtonClickedEvent_Params params {};
		params.doNotShowAgain = doNotShowAgain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UpdateNotice.BP_UpdateNotice_C.ExecuteUbergraph_BP_UpdateNotice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_UpdateNotice_C::ExecuteUbergraph_BP_UpdateNotice(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_UpdateNotice.BP_UpdateNotice_C.ExecuteUbergraph_BP_UpdateNotice");
		
		ABP_UpdateNotice_C_ExecuteUbergraph_BP_UpdateNotice_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UpdateNotice.BP_UpdateNotice_C.OnContinue__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               doNotShowAgain                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_UpdateNotice_C::OnContinue__DelegateSignature(bool doNotShowAgain)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_UpdateNotice.BP_UpdateNotice_C.OnContinue__DelegateSignature");
		
		ABP_UpdateNotice_C_OnContinue__DelegateSignature_Params params {};
		params.doNotShowAgain = doNotShowAgain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_UpdateNotice_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_UpdateNotice_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_UpdateNotice.BP_UpdateNotice_C");
		return ptr;
	}

}


