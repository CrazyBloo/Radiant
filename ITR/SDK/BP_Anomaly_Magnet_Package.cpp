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
	 * 		Name   -> Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.VerifyAndEnd
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Magnet_C::VerifyAndEnd()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.VerifyAndEnd");
		
		ABP_Anomaly_Magnet_C_VerifyAndEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.AffectPlayerItems
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Magnet_C::AffectPlayerItems()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.AffectPlayerItems");
		
		ABP_Anomaly_Magnet_C_AffectPlayerItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.AddRadialImpulse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Magnet_C::AddRadialImpulse(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.AddRadialImpulse");
		
		ABP_Anomaly_Magnet_C_AddRadialImpulse_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.CheckDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldFly                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABP_Anomaly_Magnet_C::CheckDistance(class AActor* OtherActor, bool* ShouldFly)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.CheckDistance");
		
		ABP_Anomaly_Magnet_C_CheckDistance_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldFly != nullptr)
			*ShouldFly = params.ShouldFly;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.GetPlayerAffectedItems
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Magnet_C::GetPlayerAffectedItems()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.GetPlayerAffectedItems");
		
		ABP_Anomaly_Magnet_C_GetPlayerAffectedItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Magnet_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.ReceiveBeginPlay");
		
		ABP_Anomaly_Magnet_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.ExplodeItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Magnet_C::ExplodeItems(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.ExplodeItems");
		
		ABP_Anomaly_Magnet_C_ExplodeItems_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Magnet_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.ReceiveTick");
		
		ABP_Anomaly_Magnet_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.OnOverlapTimer
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Magnet_C::OnOverlapTimer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.OnOverlapTimer");
		
		ABP_Anomaly_Magnet_C_OnOverlapTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.OverlapLeavingTriggered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Magnet_C::OverlapLeavingTriggered(class AActor* OtherActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.OverlapLeavingTriggered");
		
		ABP_Anomaly_Magnet_C_OverlapLeavingTriggered_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.ExecuteUbergraph_BP_Anomaly_Magnet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Magnet_C::ExecuteUbergraph_BP_Anomaly_Magnet(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Magnet.BP_Anomaly_Magnet_C.ExecuteUbergraph_BP_Anomaly_Magnet");
		
		ABP_Anomaly_Magnet_C_ExecuteUbergraph_BP_Anomaly_Magnet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Anomaly_Magnet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Anomaly_Magnet_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Anomaly_Magnet.BP_Anomaly_Magnet_C");
		return ptr;
	}

}


