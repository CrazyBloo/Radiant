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
	 * 		Name   -> Function BP_TideClock.BP_TideClock_C.GetPhysicsRootComponent
	 * 		Flags  -> ()
	 */
	class UPrimitiveComponent* ABP_TideClock_C::GetPhysicsRootComponent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TideClock.BP_TideClock_C.GetPhysicsRootComponent");
		
		ABP_TideClock_C_GetPhysicsRootComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TideClock.BP_TideClock_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TideClock_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TideClock.BP_TideClock_C.ReceiveTick");
		
		ABP_TideClock_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TideClock.BP_TideClock_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_TideClock_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TideClock.BP_TideClock_C.ReceiveBeginPlay");
		
		ABP_TideClock_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TideClock.BP_TideClock_C.OnSleep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isBlackout                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TideClock_C::OnSleep(float Seconds, bool isBlackout)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TideClock.BP_TideClock_C.OnSleep");
		
		ABP_TideClock_C_OnSleep_Params params {};
		params.Seconds = Seconds;
		params.isBlackout = isBlackout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TideClock.BP_TideClock_C.TurnOffSignal
	 * 		Flags  -> ()
	 */
	void ABP_TideClock_C::TurnOffSignal()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TideClock.BP_TideClock_C.TurnOffSignal");
		
		ABP_TideClock_C_TurnOffSignal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TideClock.BP_TideClock_C.ExecuteUbergraph_BP_TideClock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TideClock_C::ExecuteUbergraph_BP_TideClock(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TideClock.BP_TideClock_C.ExecuteUbergraph_BP_TideClock");
		
		ABP_TideClock_C_ExecuteUbergraph_BP_TideClock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TideClock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TideClock_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_TideClock.BP_TideClock_C");
		return ptr;
	}

}


