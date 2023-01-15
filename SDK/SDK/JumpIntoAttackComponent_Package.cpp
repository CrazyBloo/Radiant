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
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.GetAttackDistance
	 * 		Flags  -> ()
	 */
	float UJumpIntoAttackComponent_C::GetAttackDistance()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.GetAttackDistance");
		
		UJumpIntoAttackComponent_C_GetAttackDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.GetFirePointComponent
	 * 		Flags  -> ()
	 */
	class USceneComponent* UJumpIntoAttackComponent_C::GetFirePointComponent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.GetFirePointComponent");
		
		UJumpIntoAttackComponent_C_GetFirePointComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.GetWeaponActor
	 * 		Flags  -> ()
	 */
	class AActor* UJumpIntoAttackComponent_C::GetWeaponActor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.GetWeaponActor");
		
		UJumpIntoAttackComponent_C_GetWeaponActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.IsAttacking
	 * 		Flags  -> ()
	 */
	bool UJumpIntoAttackComponent_C::IsAttacking()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.IsAttacking");
		
		UJumpIntoAttackComponent_C_IsAttacking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.IsAttackValid
	 * 		Flags  -> ()
	 */
	bool UJumpIntoAttackComponent_C::IsAttackValid()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.IsAttackValid");
		
		UJumpIntoAttackComponent_C_IsAttackValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.IsReadyToAttack
	 * 		Flags  -> ()
	 */
	bool UJumpIntoAttackComponent_C::IsReadyToAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.IsReadyToAttack");
		
		UJumpIntoAttackComponent_C_IsReadyToAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.IsReloading
	 * 		Flags  -> ()
	 */
	bool UJumpIntoAttackComponent_C::IsReloading()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.IsReloading");
		
		UJumpIntoAttackComponent_C_IsReloading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.NeedWaitForFinish
	 * 		Flags  -> ()
	 */
	bool UJumpIntoAttackComponent_C::NeedWaitForFinish()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.NeedWaitForFinish");
		
		UJumpIntoAttackComponent_C_NeedWaitForFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.DoUnstuck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UJumpIntoAttackComponent_C::DoUnstuck(const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.DoUnstuck");
		
		UJumpIntoAttackComponent_C_DoUnstuck_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.DoStuck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UJumpIntoAttackComponent_C::DoStuck(const struct FVector& Point, const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.DoStuck");
		
		UJumpIntoAttackComponent_C_DoStuck_Params params {};
		params.Point = Point;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.InstigateDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UJumpIntoAttackComponent_C::InstigateDamage(class AActor* Actor, const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.InstigateDamage");
		
		UJumpIntoAttackComponent_C_InstigateDamage_Params params {};
		params.Actor = Actor;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.JumpFX
	 * 		Flags  -> ()
	 */
	void UJumpIntoAttackComponent_C::JumpFX()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.JumpFX");
		
		UJumpIntoAttackComponent_C_JumpFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.CheckJumpUp
	 * 		Flags  -> ()
	 */
	void UJumpIntoAttackComponent_C::CheckJumpUp()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.CheckJumpUp");
		
		UJumpIntoAttackComponent_C_CheckJumpUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.DestroyWeapon
	 * 		Flags  -> ()
	 */
	void UJumpIntoAttackComponent_C::DestroyWeapon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.DestroyWeapon");
		
		UJumpIntoAttackComponent_C_DestroyWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UJumpIntoAttackComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.ReceiveBeginPlay");
		
		UJumpIntoAttackComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.CheckFinish
	 * 		Flags  -> ()
	 */
	void UJumpIntoAttackComponent_C::CheckFinish()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.CheckFinish");
		
		UJumpIntoAttackComponent_C_CheckFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.SetWeaponVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UJumpIntoAttackComponent_C::SetWeaponVisible(bool bVisible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.SetWeaponVisible");
		
		UJumpIntoAttackComponent_C_SetWeaponVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.ResolveStuck
	 * 		Flags  -> ()
	 */
	void UJumpIntoAttackComponent_C::ResolveStuck()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.ResolveStuck");
		
		UJumpIntoAttackComponent_C_ResolveStuck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.Reload
	 * 		Flags  -> ()
	 */
	void UJumpIntoAttackComponent_C::Reload()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.Reload");
		
		UJumpIntoAttackComponent_C_Reload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OwnerInitialised
	 * 		Flags  -> ()
	 */
	void UJumpIntoAttackComponent_C::OwnerInitialised()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OwnerInitialised");
		
		UJumpIntoAttackComponent_C_OwnerInitialised_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnOutOfAmmo
	 * 		Flags  -> ()
	 */
	void UJumpIntoAttackComponent_C::OnOutOfAmmo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnOutOfAmmo");
		
		UJumpIntoAttackComponent_C_OnOutOfAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnMeleeAttackHit
	 * 		Flags  -> ()
	 */
	void UJumpIntoAttackComponent_C::OnMeleeAttackHit()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnMeleeAttackHit");
		
		UJumpIntoAttackComponent_C_OnMeleeAttackHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UJumpIntoAttackComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.ReceiveTick");
		
		UJumpIntoAttackComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.StartAttack
	 * 		Flags  -> ()
	 */
	void UJumpIntoAttackComponent_C::StartAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.StartAttack");
		
		UJumpIntoAttackComponent_C_StartAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.StopAttack
	 * 		Flags  -> ()
	 */
	void UJumpIntoAttackComponent_C::StopAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.StopAttack");
		
		UJumpIntoAttackComponent_C_StopAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnCapsuleHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UJumpIntoAttackComponent_C::OnCapsuleHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnCapsuleHit");
		
		UJumpIntoAttackComponent_C_OnCapsuleHit_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.ExecuteUbergraph_JumpIntoAttackComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UJumpIntoAttackComponent_C::ExecuteUbergraph_JumpIntoAttackComponent(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.ExecuteUbergraph_JumpIntoAttackComponent");
		
		UJumpIntoAttackComponent_C_ExecuteUbergraph_JumpIntoAttackComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnBounce__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UJumpIntoAttackComponent_C::OnBounce__DelegateSignature(const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnBounce__DelegateSignature");
		
		UJumpIntoAttackComponent_C_OnBounce__DelegateSignature_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnJumpUp__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UJumpIntoAttackComponent_C::OnJumpUp__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnJumpUp__DelegateSignature");
		
		UJumpIntoAttackComponent_C_OnJumpUp__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnUnstuck__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UJumpIntoAttackComponent_C::OnUnstuck__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnUnstuck__DelegateSignature");
		
		UJumpIntoAttackComponent_C_OnUnstuck__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnStuck__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UJumpIntoAttackComponent_C::OnStuck__DelegateSignature(const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnStuck__DelegateSignature");
		
		UJumpIntoAttackComponent_C_OnStuck__DelegateSignature_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnAttackLaunched__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UJumpIntoAttackComponent_C::OnAttackLaunched__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnAttackLaunched__DelegateSignature");
		
		UJumpIntoAttackComponent_C_OnAttackLaunched__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnDamageInstigated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UJumpIntoAttackComponent_C::OnDamageInstigated__DelegateSignature(class AActor* To, const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function JumpIntoAttackComponent.JumpIntoAttackComponent_C.OnDamageInstigated__DelegateSignature");
		
		UJumpIntoAttackComponent_C_OnDamageInstigated__DelegateSignature_Params params {};
		params.To = To;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJumpIntoAttackComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJumpIntoAttackComponent_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass JumpIntoAttackComponent.JumpIntoAttackComponent_C");
		return ptr;
	}

}


