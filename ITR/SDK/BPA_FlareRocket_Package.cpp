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
	 * 		Name   -> Function BPA_FlareRocket.BPA_FlareRocket_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABPA_FlareRocket_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_FlareRocket.BPA_FlareRocket_C.Timeline_0__FinishedFunc");
		
		ABPA_FlareRocket_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_FlareRocket.BPA_FlareRocket_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABPA_FlareRocket_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_FlareRocket.BPA_FlareRocket_C.Timeline_0__UpdateFunc");
		
		ABPA_FlareRocket_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_FlareRocket.BPA_FlareRocket_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABPA_FlareRocket_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_FlareRocket.BPA_FlareRocket_C.ReceiveBeginPlay");
		
		ABPA_FlareRocket_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_FlareRocket.BPA_FlareRocket_C.LightUP
	 * 		Flags  -> ()
	 */
	void ABPA_FlareRocket_C::LightUP()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_FlareRocket.BPA_FlareRocket_C.LightUP");
		
		ABPA_FlareRocket_C_LightUP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_FlareRocket.BPA_FlareRocket_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_FlareRocket_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_FlareRocket.BPA_FlareRocket_C.ReceiveTick");
		
		ABPA_FlareRocket_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_FlareRocket.BPA_FlareRocket_C.ExecuteUbergraph_BPA_FlareRocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_FlareRocket_C::ExecuteUbergraph_BPA_FlareRocket(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_FlareRocket.BPA_FlareRocket_C.ExecuteUbergraph_BPA_FlareRocket");
		
		ABPA_FlareRocket_C_ExecuteUbergraph_BPA_FlareRocket_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_FlareRocket_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_FlareRocket_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_FlareRocket.BPA_FlareRocket_C");
		return ptr;
	}

}


