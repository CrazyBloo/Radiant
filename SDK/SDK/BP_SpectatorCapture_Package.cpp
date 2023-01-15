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
	 * 		Name   -> Function BP_SpectatorCapture.BP_SpectatorCapture_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_SpectatorCapture_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpectatorCapture.BP_SpectatorCapture_C.UserConstructionScript");
		
		ABP_SpectatorCapture_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpectatorCapture.BP_SpectatorCapture_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SpectatorCapture_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpectatorCapture.BP_SpectatorCapture_C.ReceiveBeginPlay");
		
		ABP_SpectatorCapture_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpectatorCapture.BP_SpectatorCapture_C.RenderFrame
	 * 		Flags  -> ()
	 */
	void ABP_SpectatorCapture_C::RenderFrame()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpectatorCapture.BP_SpectatorCapture_C.RenderFrame");
		
		ABP_SpectatorCapture_C_RenderFrame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpectatorCapture.BP_SpectatorCapture_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpectatorCapture_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpectatorCapture.BP_SpectatorCapture_C.ReceiveTick");
		
		ABP_SpectatorCapture_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpectatorCapture.BP_SpectatorCapture_C.Reset
	 * 		Flags  -> ()
	 */
	void ABP_SpectatorCapture_C::Reset()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpectatorCapture.BP_SpectatorCapture_C.Reset");
		
		ABP_SpectatorCapture_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpectatorCapture.BP_SpectatorCapture_C.ExecuteUbergraph_BP_SpectatorCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpectatorCapture_C::ExecuteUbergraph_BP_SpectatorCapture(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpectatorCapture.BP_SpectatorCapture_C.ExecuteUbergraph_BP_SpectatorCapture");
		
		ABP_SpectatorCapture_C_ExecuteUbergraph_BP_SpectatorCapture_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SpectatorCapture_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SpectatorCapture_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpectatorCapture.BP_SpectatorCapture_C");
		return ptr;
	}

}


