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
	 * 		Name   -> Function BPA_LookFollowUI.BPA_LookFollowUI_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_LookFollowUI_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_LookFollowUI.BPA_LookFollowUI_C.ReceiveTick");
		
		ABPA_LookFollowUI_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_LookFollowUI.BPA_LookFollowUI_C.ClearRefs
	 * 		Flags  -> ()
	 */
	void ABPA_LookFollowUI_C::ClearRefs()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_LookFollowUI.BPA_LookFollowUI_C.ClearRefs");
		
		ABPA_LookFollowUI_C_ClearRefs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_LookFollowUI.BPA_LookFollowUI_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_LookFollowUI_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_LookFollowUI.BPA_LookFollowUI_C.ReceiveEndPlay");
		
		ABPA_LookFollowUI_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_LookFollowUI.BPA_LookFollowUI_C.OnGameStarted
	 * 		Flags  -> ()
	 */
	void ABPA_LookFollowUI_C::OnGameStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_LookFollowUI.BPA_LookFollowUI_C.OnGameStarted");
		
		ABPA_LookFollowUI_C_OnGameStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_LookFollowUI.BPA_LookFollowUI_C.ExecuteUbergraph_BPA_LookFollowUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_LookFollowUI_C::ExecuteUbergraph_BPA_LookFollowUI(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_LookFollowUI.BPA_LookFollowUI_C.ExecuteUbergraph_BPA_LookFollowUI");
		
		ABPA_LookFollowUI_C_ExecuteUbergraph_BPA_LookFollowUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_LookFollowUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_LookFollowUI_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_LookFollowUI.BPA_LookFollowUI_C");
		return ptr;
	}

}


