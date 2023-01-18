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
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.GetAttackDistance
	 * 		Flags  -> ()
	 */
	float UMeleeOnceAttackComponent_C::GetAttackDistance()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.GetAttackDistance");
		
		UMeleeOnceAttackComponent_C_GetAttackDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.GetFirePointComponent
	 * 		Flags  -> ()
	 */
	class USceneComponent* UMeleeOnceAttackComponent_C::GetFirePointComponent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.GetFirePointComponent");
		
		UMeleeOnceAttackComponent_C_GetFirePointComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.GetWeaponActor
	 * 		Flags  -> ()
	 */
	class AActor* UMeleeOnceAttackComponent_C::GetWeaponActor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.GetWeaponActor");
		
		UMeleeOnceAttackComponent_C_GetWeaponActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.IsAttacking
	 * 		Flags  -> ()
	 */
	bool UMeleeOnceAttackComponent_C::IsAttacking()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.IsAttacking");
		
		UMeleeOnceAttackComponent_C_IsAttacking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.IsAttackValid
	 * 		Flags  -> ()
	 */
	bool UMeleeOnceAttackComponent_C::IsAttackValid()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.IsAttackValid");
		
		UMeleeOnceAttackComponent_C_IsAttackValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.IsReadyToAttack
	 * 		Flags  -> ()
	 */
	bool UMeleeOnceAttackComponent_C::IsReadyToAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.IsReadyToAttack");
		
		UMeleeOnceAttackComponent_C_IsReadyToAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.IsReloading
	 * 		Flags  -> ()
	 */
	bool UMeleeOnceAttackComponent_C::IsReloading()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.IsReloading");
		
		UMeleeOnceAttackComponent_C_IsReloading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.NeedWaitForFinish
	 * 		Flags  -> ()
	 */
	bool UMeleeOnceAttackComponent_C::NeedWaitForFinish()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.NeedWaitForFinish");
		
		UMeleeOnceAttackComponent_C_NeedWaitForFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.IsInRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InRange                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMeleeOnceAttackComponent_C::IsInRange(bool* InRange)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.IsInRange");
		
		UMeleeOnceAttackComponent_C_IsInRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InRange != nullptr)
			*InRange = params.InRange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.HitTest
	 * 		Flags  -> ()
	 */
	void UMeleeOnceAttackComponent_C::HitTest()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.HitTest");
		
		UMeleeOnceAttackComponent_C_HitTest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.StartAttack
	 * 		Flags  -> ()
	 */
	void UMeleeOnceAttackComponent_C::StartAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.StartAttack");
		
		UMeleeOnceAttackComponent_C_StartAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.StopAttack
	 * 		Flags  -> ()
	 */
	void UMeleeOnceAttackComponent_C::StopAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.StopAttack");
		
		UMeleeOnceAttackComponent_C_StopAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.OnMeleeAttackHit
	 * 		Flags  -> ()
	 */
	void UMeleeOnceAttackComponent_C::OnMeleeAttackHit()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.OnMeleeAttackHit");
		
		UMeleeOnceAttackComponent_C_OnMeleeAttackHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UMeleeOnceAttackComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.ReceiveBeginPlay");
		
		UMeleeOnceAttackComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.SetWeaponVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMeleeOnceAttackComponent_C::SetWeaponVisible(bool bVisible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.SetWeaponVisible");
		
		UMeleeOnceAttackComponent_C_SetWeaponVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.Reload
	 * 		Flags  -> ()
	 */
	void UMeleeOnceAttackComponent_C::Reload()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.Reload");
		
		UMeleeOnceAttackComponent_C_Reload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.OwnerInitialised
	 * 		Flags  -> ()
	 */
	void UMeleeOnceAttackComponent_C::OwnerInitialised()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.OwnerInitialised");
		
		UMeleeOnceAttackComponent_C_OwnerInitialised_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.OnOutOfAmmo
	 * 		Flags  -> ()
	 */
	void UMeleeOnceAttackComponent_C::OnOutOfAmmo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.OnOutOfAmmo");
		
		UMeleeOnceAttackComponent_C_OnOutOfAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.DestroyWeapon
	 * 		Flags  -> ()
	 */
	void UMeleeOnceAttackComponent_C::DestroyWeapon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.DestroyWeapon");
		
		UMeleeOnceAttackComponent_C_DestroyWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.TestAttack
	 * 		Flags  -> ()
	 */
	void UMeleeOnceAttackComponent_C::TestAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.TestAttack");
		
		UMeleeOnceAttackComponent_C_TestAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMeleeOnceAttackComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.ReceiveTick");
		
		UMeleeOnceAttackComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.ExecuteUbergraph_MeleeOnceAttackComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMeleeOnceAttackComponent_C::ExecuteUbergraph_MeleeOnceAttackComponent(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.ExecuteUbergraph_MeleeOnceAttackComponent");
		
		UMeleeOnceAttackComponent_C_ExecuteUbergraph_MeleeOnceAttackComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.AttackStarted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMeleeOnceAttackComponent_C::AttackStarted__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.AttackStarted__DelegateSignature");
		
		UMeleeOnceAttackComponent_C_AttackStarted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.OnTargetHit__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMeleeOnceAttackComponent_C::OnTargetHit__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeOnceAttackComponent.MeleeOnceAttackComponent_C.OnTargetHit__DelegateSignature");
		
		UMeleeOnceAttackComponent_C_OnTargetHit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeleeOnceAttackComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeleeOnceAttackComponent_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MeleeOnceAttackComponent.MeleeOnceAttackComponent_C");
		return ptr;
	}

}


