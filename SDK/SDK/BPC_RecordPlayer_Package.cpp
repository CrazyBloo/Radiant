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
	 * 		Name   -> Function BPC_RecordPlayer.BPC_RecordPlayer_C.PlayRecord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDialogue                                   Record                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	 * 		class UAudioComponent*                             audioRef                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_RecordPlayer_C::PlayRecord(const struct FDialogue& Record, class UAudioComponent* audioRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_RecordPlayer.BPC_RecordPlayer_C.PlayRecord");
		
		UBPC_RecordPlayer_C_PlayRecord_Params params {};
		params.Record = Record;
		params.audioRef = audioRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_RecordPlayer.BPC_RecordPlayer_C.StopRecord
	 * 		Flags  -> ()
	 */
	void UBPC_RecordPlayer_C::StopRecord()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_RecordPlayer.BPC_RecordPlayer_C.StopRecord");
		
		UBPC_RecordPlayer_C_StopRecord_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_RecordPlayer.BPC_RecordPlayer_C.OnGamePaused_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_RecordPlayer_C::OnGamePaused_Event_1(bool Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_RecordPlayer.BPC_RecordPlayer_C.OnGamePaused_Event_1");
		
		UBPC_RecordPlayer_C_OnGamePaused_Event_1_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_RecordPlayer.BPC_RecordPlayer_C.PlayRecordLine
	 * 		Flags  -> ()
	 */
	void UBPC_RecordPlayer_C::PlayRecordLine()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_RecordPlayer.BPC_RecordPlayer_C.PlayRecordLine");
		
		UBPC_RecordPlayer_C_PlayRecordLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_RecordPlayer.BPC_RecordPlayer_C.ExecuteUbergraph_BPC_RecordPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_RecordPlayer_C::ExecuteUbergraph_BPC_RecordPlayer(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_RecordPlayer.BPC_RecordPlayer_C.ExecuteUbergraph_BPC_RecordPlayer");
		
		UBPC_RecordPlayer_C_ExecuteUbergraph_BPC_RecordPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_RecordPlayer.BPC_RecordPlayer_C.OnRecordFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBPC_RecordPlayer_C::OnRecordFinished__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_RecordPlayer.BPC_RecordPlayer_C.OnRecordFinished__DelegateSignature");
		
		UBPC_RecordPlayer_C_OnRecordFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_RecordPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_RecordPlayer_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPC_RecordPlayer.BPC_RecordPlayer_C");
		return ptr;
	}

}


