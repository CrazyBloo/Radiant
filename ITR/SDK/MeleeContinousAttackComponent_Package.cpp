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
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.GetAttackDistance
	 * 		Flags  -> ()
	 */
	float UMeleeContinousAttackComponent_C::GetAttackDistance()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.GetAttackDistance");
		
		UMeleeContinousAttackComponent_C_GetAttackDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.GetFirePointComponent
	 * 		Flags  -> ()
	 */
	class USceneComponent* UMeleeContinousAttackComponent_C::GetFirePointComponent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.GetFirePointComponent");
		
		UMeleeContinousAttackComponent_C_GetFirePointComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.GetWeaponActor
	 * 		Flags  -> ()
	 */
	class AActor* UMeleeContinousAttackComponent_C::GetWeaponActor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.GetWeaponActor");
		
		UMeleeContinousAttackComponent_C_GetWeaponActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.IsAttacking
	 * 		Flags  -> ()
	 */
	bool UMeleeContinousAttackComponent_C::IsAttacking()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.IsAttacking");
		
		UMeleeContinousAttackComponent_C_IsAttacking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.IsAttackValid
	 * 		Flags  -> ()
	 */
	bool UMeleeContinousAttackComponent_C::IsAttackValid()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.IsAttackValid");
		
		UMeleeContinousAttackComponent_C_IsAttackValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.IsReadyToAttack
	 * 		Flags  -> ()
	 */
	bool UMeleeContinousAttackComponent_C::IsReadyToAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.IsReadyToAttack");
		
		UMeleeContinousAttackComponent_C_IsReadyToAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.IsReloading
	 * 		Flags  -> ()
	 */
	bool UMeleeContinousAttackComponent_C::IsReloading()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.IsReloading");
		
		UMeleeContinousAttackComponent_C_IsReloading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.NeedWaitForFinish
	 * 		Flags  -> ()
	 */
	bool UMeleeContinousAttackComponent_C::NeedWaitForFinish()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.NeedWaitForFinish");
		
		UMeleeContinousAttackComponent_C_NeedWaitForFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.ToggleState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMeleeContinousAttackComponent_C::ToggleState(bool State)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.ToggleState");
		
		UMeleeContinousAttackComponent_C_ToggleState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.IsInRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InRange                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMeleeContinousAttackComponent_C::IsInRange(bool* InRange)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.IsInRange");
		
		UMeleeContinousAttackComponent_C_IsInRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InRange != nullptr)
			*InRange = params.InRange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.Reload
	 * 		Flags  -> ()
	 */
	void UMeleeContinousAttackComponent_C::Reload()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.Reload");
		
		UMeleeContinousAttackComponent_C_Reload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UMeleeContinousAttackComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.ReceiveBeginPlay");
		
		UMeleeContinousAttackComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.SetWeaponVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMeleeContinousAttackComponent_C::SetWeaponVisible(bool bVisible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.SetWeaponVisible");
		
		UMeleeContinousAttackComponent_C_SetWeaponVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.OwnerInitialised
	 * 		Flags  -> ()
	 */
	void UMeleeContinousAttackComponent_C::OwnerInitialised()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.OwnerInitialised");
		
		UMeleeContinousAttackComponent_C_OwnerInitialised_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.OnOutOfAmmo
	 * 		Flags  -> ()
	 */
	void UMeleeContinousAttackComponent_C::OnOutOfAmmo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.OnOutOfAmmo");
		
		UMeleeContinousAttackComponent_C_OnOutOfAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.DestroyWeapon
	 * 		Flags  -> ()
	 */
	void UMeleeContinousAttackComponent_C::DestroyWeapon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.DestroyWeapon");
		
		UMeleeContinousAttackComponent_C_DestroyWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.TestAttack
	 * 		Flags  -> ()
	 */
	void UMeleeContinousAttackComponent_C::TestAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.TestAttack");
		
		UMeleeContinousAttackComponent_C_TestAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.HitTest
	 * 		Flags  -> ()
	 */
	void UMeleeContinousAttackComponent_C::HitTest()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.HitTest");
		
		UMeleeContinousAttackComponent_C_HitTest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.StartAttack
	 * 		Flags  -> ()
	 */
	void UMeleeContinousAttackComponent_C::StartAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.StartAttack");
		
		UMeleeContinousAttackComponent_C_StartAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.StopAttack
	 * 		Flags  -> ()
	 */
	void UMeleeContinousAttackComponent_C::StopAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.StopAttack");
		
		UMeleeContinousAttackComponent_C_StopAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.OnMeleeAttackHit
	 * 		Flags  -> ()
	 */
	void UMeleeContinousAttackComponent_C::OnMeleeAttackHit()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.OnMeleeAttackHit");
		
		UMeleeContinousAttackComponent_C_OnMeleeAttackHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.ExecuteUbergraph_MeleeContinousAttackComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMeleeContinousAttackComponent_C::ExecuteUbergraph_MeleeContinousAttackComponent(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.ExecuteUbergraph_MeleeContinousAttackComponent");
		
		UMeleeContinousAttackComponent_C_ExecuteUbergraph_MeleeContinousAttackComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.OnMeleeSwing__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMeleeContinousAttackComponent_C::OnMeleeSwing__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.OnMeleeSwing__DelegateSignature");
		
		UMeleeContinousAttackComponent_C_OnMeleeSwing__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.OnTargetHit__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMeleeContinousAttackComponent_C::OnTargetHit__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function MeleeContinousAttackComponent.MeleeContinousAttackComponent_C.OnTargetHit__DelegateSignature");
		
		UMeleeContinousAttackComponent_C_OnTargetHit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeleeContinousAttackComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeleeContinousAttackComponent_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MeleeContinousAttackComponent.MeleeContinousAttackComponent_C");
		return ptr;
	}

}


