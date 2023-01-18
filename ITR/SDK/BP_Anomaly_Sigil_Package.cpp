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
	 * 		Name   -> Function BP_Anomaly_Sigil.BP_Anomaly_Sigil_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Sigil_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Sigil.BP_Anomaly_Sigil_C.UserConstructionScript");
		
		ABP_Anomaly_Sigil_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Sigil.BP_Anomaly_Sigil_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Sigil_C::ReceiveDestroyed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Sigil.BP_Anomaly_Sigil_C.ReceiveDestroyed");
		
		ABP_Anomaly_Sigil_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Sigil.BP_Anomaly_Sigil_C.OnGameStarted
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Sigil_C::OnGameStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Sigil.BP_Anomaly_Sigil_C.OnGameStarted");
		
		ABP_Anomaly_Sigil_C_OnGameStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Sigil.BP_Anomaly_Sigil_C.OnOverlapTimer
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Sigil_C::OnOverlapTimer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Sigil.BP_Anomaly_Sigil_C.OnOverlapTimer");
		
		ABP_Anomaly_Sigil_C_OnOverlapTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Sigil.BP_Anomaly_Sigil_C.OverlapLeavingTriggered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Sigil_C::OverlapLeavingTriggered(class AActor* OtherActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Sigil.BP_Anomaly_Sigil_C.OverlapLeavingTriggered");
		
		ABP_Anomaly_Sigil_C_OverlapLeavingTriggered_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Sigil.BP_Anomaly_Sigil_C.ExecuteUbergraph_BP_Anomaly_Sigil
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Sigil_C::ExecuteUbergraph_BP_Anomaly_Sigil(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Sigil.BP_Anomaly_Sigil_C.ExecuteUbergraph_BP_Anomaly_Sigil");
		
		ABP_Anomaly_Sigil_C_ExecuteUbergraph_BP_Anomaly_Sigil_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Anomaly_Sigil_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Anomaly_Sigil_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Anomaly_Sigil.BP_Anomaly_Sigil_C");
		return ptr;
	}

}


