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
	 * 		Name   -> Function BPC_SpectatorCam.BPC_SpectatorCam_C.Init
	 * 		Flags  -> ()
	 */
	void UBPC_SpectatorCam_C::Init()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_SpectatorCam.BPC_SpectatorCam_C.Init");
		
		UBPC_SpectatorCam_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_SpectatorCam.BPC_SpectatorCam_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_SpectatorCam_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_SpectatorCam.BPC_SpectatorCam_C.ReceiveBeginPlay");
		
		UBPC_SpectatorCam_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_SpectatorCam.BPC_SpectatorCam_C.ExecuteUbergraph_BPC_SpectatorCam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_SpectatorCam_C::ExecuteUbergraph_BPC_SpectatorCam(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_SpectatorCam.BPC_SpectatorCam_C.ExecuteUbergraph_BPC_SpectatorCam");
		
		UBPC_SpectatorCam_C_ExecuteUbergraph_BPC_SpectatorCam_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_SpectatorCam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_SpectatorCam_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPC_SpectatorCam.BPC_SpectatorCam_C");
		return ptr;
	}

}


