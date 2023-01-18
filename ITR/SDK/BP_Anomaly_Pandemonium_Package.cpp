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
	 * 		Name   -> Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.CheckNPCTags
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Pandemonium_C::CheckNPCTags()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.CheckNPCTags");
		
		ABP_Anomaly_Pandemonium_C_CheckNPCTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Pandemonium_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.UserConstructionScript");
		
		ABP_Anomaly_Pandemonium_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Pandemonium_C::ReceiveDestroyed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.ReceiveDestroyed");
		
		ABP_Anomaly_Pandemonium_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.OnGameStarted
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Pandemonium_C::OnGameStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.OnGameStarted");
		
		ABP_Anomaly_Pandemonium_C_OnGameStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Pandemonium_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.ReceiveTick");
		
		ABP_Anomaly_Pandemonium_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.SpawnChar
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Pandemonium_C::SpawnChar()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.SpawnChar");
		
		ABP_Anomaly_Pandemonium_C_SpawnChar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.OnLevelStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Pandemonium_C::OnLevelStarted(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.OnLevelStarted");
		
		ABP_Anomaly_Pandemonium_C_OnLevelStarted_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.OnTransitionStart
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Pandemonium_C::OnTransitionStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.OnTransitionStart");
		
		ABP_Anomaly_Pandemonium_C_OnTransitionStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.OnGameShutdownEvent
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Pandemonium_C::OnGameShutdownEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.OnGameShutdownEvent");
		
		ABP_Anomaly_Pandemonium_C_OnGameShutdownEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.OnOverlapTimer
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Pandemonium_C::OnOverlapTimer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.OnOverlapTimer");
		
		ABP_Anomaly_Pandemonium_C_OnOverlapTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.OnSetupEvent
	 * 		Flags  -> ()
	 */
	void ABP_Anomaly_Pandemonium_C::OnSetupEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.OnSetupEvent");
		
		ABP_Anomaly_Pandemonium_C_OnSetupEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.OnCharEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Pandemonium_C::OnCharEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.OnCharEndPlay");
		
		ABP_Anomaly_Pandemonium_C_OnCharEndPlay_Params params {};
		params.Actor = Actor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.ExecuteUbergraph_BP_Anomaly_Pandemonium
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Anomaly_Pandemonium_C::ExecuteUbergraph_BP_Anomaly_Pandemonium(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C.ExecuteUbergraph_BP_Anomaly_Pandemonium");
		
		ABP_Anomaly_Pandemonium_C_ExecuteUbergraph_BP_Anomaly_Pandemonium_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Anomaly_Pandemonium_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Anomaly_Pandemonium_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Anomaly_Pandemonium.BP_Anomaly_Pandemonium_C");
		return ptr;
	}

}


