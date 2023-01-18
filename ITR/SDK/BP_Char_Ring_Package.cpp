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
	 * 		Name   -> Function BP_Char_Ring.BP_Char_Ring_C.CheckTrace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     End                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      targetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Char_Ring_C::CheckTrace(const struct FVector& Start, const struct FVector& End, class AActor* targetActor, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Ring.BP_Char_Ring_C.CheckTrace");
		
		ABP_Char_Ring_C_CheckTrace_Params params {};
		params.Start = Start;
		params.End = End;
		params.targetActor = targetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Ring.BP_Char_Ring_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Char_Ring_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Ring.BP_Char_Ring_C.UserConstructionScript");
		
		ABP_Char_Ring_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Ring.BP_Char_Ring_C.SetEnableAdditionalThings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Char_Ring_C::SetEnableAdditionalThings(bool enable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Ring.BP_Char_Ring_C.SetEnableAdditionalThings");
		
		ABP_Char_Ring_C_SetEnableAdditionalThings_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Ring.BP_Char_Ring_C.BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_0_OnAttackLaunched__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_Char_Ring_C::BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_0_OnAttackLaunched__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Ring.BP_Char_Ring_C.BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_0_OnAttackLaunched__DelegateSignature");
		
		ABP_Char_Ring_C_BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_0_OnAttackLaunched__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Ring.BP_Char_Ring_C.BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_0_OnDamageInstigated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Char_Ring_C::BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_0_OnDamageInstigated__DelegateSignature(class AActor* To, const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Ring.BP_Char_Ring_C.BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_0_OnDamageInstigated__DelegateSignature");
		
		ABP_Char_Ring_C_BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_0_OnDamageInstigated__DelegateSignature_Params params {};
		params.To = To;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Ring.BP_Char_Ring_C.BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_1_OnStuck__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Char_Ring_C::BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_1_OnStuck__DelegateSignature(const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Ring.BP_Char_Ring_C.BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_1_OnStuck__DelegateSignature");
		
		ABP_Char_Ring_C_BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_1_OnStuck__DelegateSignature_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Ring.BP_Char_Ring_C.BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_2_OnBounce__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Char_Ring_C::BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_2_OnBounce__DelegateSignature(const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Ring.BP_Char_Ring_C.BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_2_OnBounce__DelegateSignature");
		
		ABP_Char_Ring_C_BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_2_OnBounce__DelegateSignature_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Ring.BP_Char_Ring_C.CharEnabled
	 * 		Flags  -> ()
	 */
	void ABP_Char_Ring_C::CharEnabled()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Ring.BP_Char_Ring_C.CharEnabled");
		
		ABP_Char_Ring_C_CharEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Ring.BP_Char_Ring_C.OnStart
	 * 		Flags  -> ()
	 */
	void ABP_Char_Ring_C::OnStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Ring.BP_Char_Ring_C.OnStart");
		
		ABP_Char_Ring_C_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Ring.BP_Char_Ring_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Char_Ring_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Ring.BP_Char_Ring_C.ReceiveEndPlay");
		
		ABP_Char_Ring_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Ring.BP_Char_Ring_C.OnDeath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               EnableRagdoll                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Char_Ring_C::OnDeath(bool EnableRagdoll)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Ring.BP_Char_Ring_C.OnDeath");
		
		ABP_Char_Ring_C_OnDeath_Params params {};
		params.EnableRagdoll = EnableRagdoll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Ring.BP_Char_Ring_C.ReceivePointDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitNormal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ShotFromDirection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitInfo                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Char_Ring_C::ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const class FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Ring.BP_Char_Ring_C.ReceivePointDamage");
		
		ABP_Char_Ring_C_ReceivePointDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.HitLocation = HitLocation;
		params.HitNormal = HitNormal;
		params.HitComponent = HitComponent;
		params.BoneName = BoneName;
		params.ShotFromDirection = ShotFromDirection;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		params.HitInfo = HitInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Ring.BP_Char_Ring_C.DisablePhysics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Char_Ring_C::DisablePhysics(bool Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Ring.BP_Char_Ring_C.DisablePhysics");
		
		ABP_Char_Ring_C_DisablePhysics_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Ring.BP_Char_Ring_C.BndEvt__BP_Char_Ring_PerceptionComponent_K2Node_ComponentBoundEvent_3_OneParamActor__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Char_Ring_C::BndEvt__BP_Char_Ring_PerceptionComponent_K2Node_ComponentBoundEvent_3_OneParamActor__DelegateSignature(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Ring.BP_Char_Ring_C.BndEvt__BP_Char_Ring_PerceptionComponent_K2Node_ComponentBoundEvent_3_OneParamActor__DelegateSignature");
		
		ABP_Char_Ring_C_BndEvt__BP_Char_Ring_PerceptionComponent_K2Node_ComponentBoundEvent_3_OneParamActor__DelegateSignature_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Ring.BP_Char_Ring_C.BndEvt__BP_Char_Ring_PerceptionComponent_K2Node_ComponentBoundEvent_5_PlayerLostDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LocLastSeen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Char_Ring_C::BndEvt__BP_Char_Ring_PerceptionComponent_K2Node_ComponentBoundEvent_5_PlayerLostDelegate__DelegateSignature(class AActor* Actor, const struct FVector& LocLastSeen)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Ring.BP_Char_Ring_C.BndEvt__BP_Char_Ring_PerceptionComponent_K2Node_ComponentBoundEvent_5_PlayerLostDelegate__DelegateSignature");
		
		ABP_Char_Ring_C_BndEvt__BP_Char_Ring_PerceptionComponent_K2Node_ComponentBoundEvent_5_PlayerLostDelegate__DelegateSignature_Params params {};
		params.Actor = Actor;
		params.LocLastSeen = LocLastSeen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Ring.BP_Char_Ring_C.OnAttackCommandStarted
	 * 		Flags  -> ()
	 */
	void ABP_Char_Ring_C::OnAttackCommandStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Ring.BP_Char_Ring_C.OnAttackCommandStarted");
		
		ABP_Char_Ring_C_OnAttackCommandStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Ring.BP_Char_Ring_C.OnAttackCommandFinished
	 * 		Flags  -> ()
	 */
	void ABP_Char_Ring_C::OnAttackCommandFinished()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Ring.BP_Char_Ring_C.OnAttackCommandFinished");
		
		ABP_Char_Ring_C_OnAttackCommandFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Ring.BP_Char_Ring_C.OnIdleCommandFinished
	 * 		Flags  -> ()
	 */
	void ABP_Char_Ring_C::OnIdleCommandFinished()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Ring.BP_Char_Ring_C.OnIdleCommandFinished");
		
		ABP_Char_Ring_C_OnIdleCommandFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Ring.BP_Char_Ring_C.OnWalkCommandFinished
	 * 		Flags  -> ()
	 */
	void ABP_Char_Ring_C::OnWalkCommandFinished()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Ring.BP_Char_Ring_C.OnWalkCommandFinished");
		
		ABP_Char_Ring_C_OnWalkCommandFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Ring.BP_Char_Ring_C.PlayFootstepSound
	 * 		Flags  -> ()
	 */
	void ABP_Char_Ring_C::PlayFootstepSound()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Ring.BP_Char_Ring_C.PlayFootstepSound");
		
		ABP_Char_Ring_C_PlayFootstepSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Ring.BP_Char_Ring_C.StartFootstepLoop
	 * 		Flags  -> ()
	 */
	void ABP_Char_Ring_C::StartFootstepLoop()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Ring.BP_Char_Ring_C.StartFootstepLoop");
		
		ABP_Char_Ring_C_StartFootstepLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Ring.BP_Char_Ring_C.StopFootstepLoop
	 * 		Flags  -> ()
	 */
	void ABP_Char_Ring_C::StopFootstepLoop()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Ring.BP_Char_Ring_C.StopFootstepLoop");
		
		ABP_Char_Ring_C_StopFootstepLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Ring.BP_Char_Ring_C.ExecuteUbergraph_BP_Char_Ring
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Char_Ring_C::ExecuteUbergraph_BP_Char_Ring(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Ring.BP_Char_Ring_C.ExecuteUbergraph_BP_Char_Ring");
		
		ABP_Char_Ring_C_ExecuteUbergraph_BP_Char_Ring_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Char_Ring_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Char_Ring_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Char_Ring.BP_Char_Ring_C");
		return ptr;
	}

}


