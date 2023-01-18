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
	 * 		Name   -> Function BPa_MUSIC.BPa_MUSIC_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPa_MUSIC_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPa_MUSIC.BPa_MUSIC_C.ReceiveEndPlay");
		
		ABPa_MUSIC_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPa_MUSIC.BPa_MUSIC_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABPa_MUSIC_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPa_MUSIC.BPa_MUSIC_C.ReceiveBeginPlay");
		
		ABPa_MUSIC_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPa_MUSIC.BPa_MUSIC_C.CustomEvent_2
	 * 		Flags  -> ()
	 */
	void ABPa_MUSIC_C::CustomEvent_2()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPa_MUSIC.BPa_MUSIC_C.CustomEvent_2");
		
		ABPa_MUSIC_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPa_MUSIC.BPa_MUSIC_C.ExecuteUbergraph_BPa_MUSIC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPa_MUSIC_C::ExecuteUbergraph_BPa_MUSIC(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPa_MUSIC.BPa_MUSIC_C.ExecuteUbergraph_BPa_MUSIC");
		
		ABPa_MUSIC_C_ExecuteUbergraph_BPa_MUSIC_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPa_MUSIC_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPa_MUSIC_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPa_MUSIC.BPa_MUSIC_C");
		return ptr;
	}

}


