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
	 * 		Name   -> Function BPC_PlayerCheats.BPC_PlayerCheats_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_PlayerCheats_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerCheats.BPC_PlayerCheats_C.ReceiveBeginPlay");
		
		UBPC_PlayerCheats_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerCheats.BPC_PlayerCheats_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_PlayerCheats_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerCheats.BPC_PlayerCheats_C.ReceiveTick");
		
		UBPC_PlayerCheats_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerCheats.BPC_PlayerCheats_C.TriggerPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_PlayerCheats_C::TriggerPressed(bool Left)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerCheats.BPC_PlayerCheats_C.TriggerPressed");
		
		UBPC_PlayerCheats_C_TriggerPressed_Params params {};
		params.Left = Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerCheats.BPC_PlayerCheats_C.ExecuteUbergraph_BPC_PlayerCheats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_PlayerCheats_C::ExecuteUbergraph_BPC_PlayerCheats(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerCheats.BPC_PlayerCheats_C.ExecuteUbergraph_BPC_PlayerCheats");
		
		UBPC_PlayerCheats_C_ExecuteUbergraph_BPC_PlayerCheats_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_PlayerCheats_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_PlayerCheats_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPC_PlayerCheats.BPC_PlayerCheats_C");
		return ptr;
	}

}


