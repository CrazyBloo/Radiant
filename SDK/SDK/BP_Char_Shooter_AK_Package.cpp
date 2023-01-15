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
	 * 		Name   -> Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Char_Shooter_AK_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.UserConstructionScript");
		
		ABP_Char_Shooter_AK_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.StartFootstepLoop
	 * 		Flags  -> ()
	 */
	void ABP_Char_Shooter_AK_C::StartFootstepLoop()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.StartFootstepLoop");
		
		ABP_Char_Shooter_AK_C_StartFootstepLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.StopFootstepLoop
	 * 		Flags  -> ()
	 */
	void ABP_Char_Shooter_AK_C::StopFootstepLoop()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.StopFootstepLoop");
		
		ABP_Char_Shooter_AK_C_StopFootstepLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.LoadAdditionalSettings
	 * 		Flags  -> ()
	 */
	void ABP_Char_Shooter_AK_C::LoadAdditionalSettings()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.LoadAdditionalSettings");
		
		ABP_Char_Shooter_AK_C_LoadAdditionalSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.SetEnableAdditionalThings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Char_Shooter_AK_C::SetEnableAdditionalThings(bool enable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.SetEnableAdditionalThings");
		
		ABP_Char_Shooter_AK_C_SetEnableAdditionalThings_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.BndEvt__FireArmedComponent_K2Node_ComponentBoundEvent_2_OnShotsLimitEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_Char_Shooter_AK_C::BndEvt__FireArmedComponent_K2Node_ComponentBoundEvent_2_OnShotsLimitEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.BndEvt__FireArmedComponent_K2Node_ComponentBoundEvent_2_OnShotsLimitEvent__DelegateSignature");
		
		ABP_Char_Shooter_AK_C_BndEvt__FireArmedComponent_K2Node_ComponentBoundEvent_2_OnShotsLimitEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.SetCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharCommand                                       NewCommand                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Force                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Char_Shooter_AK_C::SetCommand(ECharCommand NewCommand, bool Force)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.SetCommand");
		
		ABP_Char_Shooter_AK_C_SetCommand_Params params {};
		params.NewCommand = NewCommand;
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.ProcessDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      causer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Char_Shooter_AK_C::ProcessDamage(class AActor* causer, float Damage)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.ProcessDamage");
		
		ABP_Char_Shooter_AK_C_ProcessDamage_Params params {};
		params.causer = causer;
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Char_Shooter_AK_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.ReceiveEndPlay");
		
		ABP_Char_Shooter_AK_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.OnDeath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EnableRagdoll                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Char_Shooter_AK_C::OnDeath(bool EnableRagdoll)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.OnDeath");
		
		ABP_Char_Shooter_AK_C_OnDeath_Params params {};
		params.EnableRagdoll = EnableRagdoll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.CoverResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           QueryInstance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEnvQueryStatus                                    QueryStatus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Char_Shooter_AK_C::CoverResult(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.CoverResult");
		
		ABP_Char_Shooter_AK_C_CoverResult_Params params {};
		params.QueryInstance = QueryInstance;
		params.QueryStatus = QueryStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.FindCover
	 * 		Flags  -> ()
	 */
	void ABP_Char_Shooter_AK_C::FindCover()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.FindCover");
		
		ABP_Char_Shooter_AK_C_FindCover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.Wait
	 * 		Flags  -> ()
	 */
	void ABP_Char_Shooter_AK_C::Wait()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.Wait");
		
		ABP_Char_Shooter_AK_C_Wait_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.BndEvt__BP_Char_Shooter_AK_PerceptionComponent_K2Node_ComponentBoundEvent_0_OneParamActor__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Char_Shooter_AK_C::BndEvt__BP_Char_Shooter_AK_PerceptionComponent_K2Node_ComponentBoundEvent_0_OneParamActor__DelegateSignature(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.BndEvt__BP_Char_Shooter_AK_PerceptionComponent_K2Node_ComponentBoundEvent_0_OneParamActor__DelegateSignature");
		
		ABP_Char_Shooter_AK_C_BndEvt__BP_Char_Shooter_AK_PerceptionComponent_K2Node_ComponentBoundEvent_0_OneParamActor__DelegateSignature_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.BndEvt__BP_Char_Shooter_AK_PerceptionComponent_K2Node_ComponentBoundEvent_1_PlayerLostDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LocLastSeen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Char_Shooter_AK_C::BndEvt__BP_Char_Shooter_AK_PerceptionComponent_K2Node_ComponentBoundEvent_1_PlayerLostDelegate__DelegateSignature(class AActor* Actor, const struct FVector& LocLastSeen)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.BndEvt__BP_Char_Shooter_AK_PerceptionComponent_K2Node_ComponentBoundEvent_1_PlayerLostDelegate__DelegateSignature");
		
		ABP_Char_Shooter_AK_C_BndEvt__BP_Char_Shooter_AK_PerceptionComponent_K2Node_ComponentBoundEvent_1_PlayerLostDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		params.LocLastSeen = LocLastSeen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.OnWalkCommandStarted
	 * 		Flags  -> ()
	 */
	void ABP_Char_Shooter_AK_C::OnWalkCommandStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.OnWalkCommandStarted");
		
		ABP_Char_Shooter_AK_C_OnWalkCommandStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.OnIdleCommandStarted
	 * 		Flags  -> ()
	 */
	void ABP_Char_Shooter_AK_C::OnIdleCommandStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.OnIdleCommandStarted");
		
		ABP_Char_Shooter_AK_C_OnIdleCommandStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.OnIdleCommandFinished
	 * 		Flags  -> ()
	 */
	void ABP_Char_Shooter_AK_C::OnIdleCommandFinished()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.OnIdleCommandFinished");
		
		ABP_Char_Shooter_AK_C_OnIdleCommandFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.OnAttackCommandStarted
	 * 		Flags  -> ()
	 */
	void ABP_Char_Shooter_AK_C::OnAttackCommandStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.OnAttackCommandStarted");
		
		ABP_Char_Shooter_AK_C_OnAttackCommandStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.OnAttackCommandFinished
	 * 		Flags  -> ()
	 */
	void ABP_Char_Shooter_AK_C::OnAttackCommandFinished()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.OnAttackCommandFinished");
		
		ABP_Char_Shooter_AK_C_OnAttackCommandFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.OnWalkCommandFinished
	 * 		Flags  -> ()
	 */
	void ABP_Char_Shooter_AK_C::OnWalkCommandFinished()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.OnWalkCommandFinished");
		
		ABP_Char_Shooter_AK_C_OnWalkCommandFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.PlayFootstepSound
	 * 		Flags  -> ()
	 */
	void ABP_Char_Shooter_AK_C::PlayFootstepSound()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.PlayFootstepSound");
		
		ABP_Char_Shooter_AK_C_PlayFootstepSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.ExecuteUbergraph_BP_Char_Shooter_AK
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Char_Shooter_AK_C::ExecuteUbergraph_BP_Char_Shooter_AK(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Shooter_AK.BP_Char_Shooter_AK_C.ExecuteUbergraph_BP_Char_Shooter_AK");
		
		ABP_Char_Shooter_AK_C_ExecuteUbergraph_BP_Char_Shooter_AK_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Char_Shooter_AK_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Char_Shooter_AK_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Char_Shooter_AK.BP_Char_Shooter_AK_C");
		return ptr;
	}

}


