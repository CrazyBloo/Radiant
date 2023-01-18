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
	 * 		Name   -> Function FireArmedComponent.FireArmedComponent_C.GetAttackDistance
	 * 		Flags  -> ()
	 */
	float UFireArmedComponent_C::GetAttackDistance()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FireArmedComponent.FireArmedComponent_C.GetAttackDistance");
		
		UFireArmedComponent_C_GetAttackDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FireArmedComponent.FireArmedComponent_C.GetFirePointComponent
	 * 		Flags  -> ()
	 */
	class USceneComponent* UFireArmedComponent_C::GetFirePointComponent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FireArmedComponent.FireArmedComponent_C.GetFirePointComponent");
		
		UFireArmedComponent_C_GetFirePointComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FireArmedComponent.FireArmedComponent_C.GetWeaponActor
	 * 		Flags  -> ()
	 */
	class AActor* UFireArmedComponent_C::GetWeaponActor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FireArmedComponent.FireArmedComponent_C.GetWeaponActor");
		
		UFireArmedComponent_C_GetWeaponActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FireArmedComponent.FireArmedComponent_C.IsAttacking
	 * 		Flags  -> ()
	 */
	bool UFireArmedComponent_C::IsAttacking()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FireArmedComponent.FireArmedComponent_C.IsAttacking");
		
		UFireArmedComponent_C_IsAttacking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FireArmedComponent.FireArmedComponent_C.IsAttackValid
	 * 		Flags  -> ()
	 */
	bool UFireArmedComponent_C::IsAttackValid()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FireArmedComponent.FireArmedComponent_C.IsAttackValid");
		
		UFireArmedComponent_C_IsAttackValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FireArmedComponent.FireArmedComponent_C.IsReadyToAttack
	 * 		Flags  -> ()
	 */
	bool UFireArmedComponent_C::IsReadyToAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FireArmedComponent.FireArmedComponent_C.IsReadyToAttack");
		
		UFireArmedComponent_C_IsReadyToAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FireArmedComponent.FireArmedComponent_C.IsReloading
	 * 		Flags  -> ()
	 */
	bool UFireArmedComponent_C::IsReloading()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FireArmedComponent.FireArmedComponent_C.IsReloading");
		
		UFireArmedComponent_C_IsReloading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FireArmedComponent.FireArmedComponent_C.NeedWaitForFinish
	 * 		Flags  -> ()
	 */
	bool UFireArmedComponent_C::NeedWaitForFinish()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FireArmedComponent.FireArmedComponent_C.NeedWaitForFinish");
		
		UFireArmedComponent_C_NeedWaitForFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FireArmedComponent.FireArmedComponent_C.CheckFriendlyFire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ClearToFire                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFireArmedComponent_C::CheckFriendlyFire(bool* ClearToFire)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FireArmedComponent.FireArmedComponent_C.CheckFriendlyFire");
		
		UFireArmedComponent_C_CheckFriendlyFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClearToFire != nullptr)
			*ClearToFire = params.ClearToFire;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FireArmedComponent.FireArmedComponent_C.GetFireLocation
	 * 		Flags  -> ()
	 */
	struct FVector UFireArmedComponent_C::GetFireLocation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FireArmedComponent.FireArmedComponent_C.GetFireLocation");
		
		UFireArmedComponent_C_GetFireLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FireArmedComponent.FireArmedComponent_C.SpawnWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFireArmedComponent_C::SpawnWeapon(bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FireArmedComponent.FireArmedComponent_C.SpawnWeapon");
		
		UFireArmedComponent_C_SpawnWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FireArmedComponent.FireArmedComponent_C.OwnerInitialised
	 * 		Flags  -> ()
	 */
	void UFireArmedComponent_C::OwnerInitialised()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FireArmedComponent.FireArmedComponent_C.OwnerInitialised");
		
		UFireArmedComponent_C_OwnerInitialised_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FireArmedComponent.FireArmedComponent_C.OnMeleeAttackHit
	 * 		Flags  -> ()
	 */
	void UFireArmedComponent_C::OnMeleeAttackHit()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FireArmedComponent.FireArmedComponent_C.OnMeleeAttackHit");
		
		UFireArmedComponent_C_OnMeleeAttackHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FireArmedComponent.FireArmedComponent_C.OnBotFired
	 * 		Flags  -> ()
	 */
	void UFireArmedComponent_C::OnBotFired()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FireArmedComponent.FireArmedComponent_C.OnBotFired");
		
		UFireArmedComponent_C_OnBotFired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FireArmedComponent.FireArmedComponent_C.OnOutOfAmmo
	 * 		Flags  -> ()
	 */
	void UFireArmedComponent_C::OnOutOfAmmo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FireArmedComponent.FireArmedComponent_C.OnOutOfAmmo");
		
		UFireArmedComponent_C_OnOutOfAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FireArmedComponent.FireArmedComponent_C.StopAttack
	 * 		Flags  -> ()
	 */
	void UFireArmedComponent_C::StopAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FireArmedComponent.FireArmedComponent_C.StopAttack");
		
		UFireArmedComponent_C_StopAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FireArmedComponent.FireArmedComponent_C.StartAttack
	 * 		Flags  -> ()
	 */
	void UFireArmedComponent_C::StartAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FireArmedComponent.FireArmedComponent_C.StartAttack");
		
		UFireArmedComponent_C_StartAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FireArmedComponent.FireArmedComponent_C.DestroyWeapon
	 * 		Flags  -> ()
	 */
	void UFireArmedComponent_C::DestroyWeapon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FireArmedComponent.FireArmedComponent_C.DestroyWeapon");
		
		UFireArmedComponent_C_DestroyWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FireArmedComponent.FireArmedComponent_C.SetWeaponVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFireArmedComponent_C::SetWeaponVisible(bool bVisible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FireArmedComponent.FireArmedComponent_C.SetWeaponVisible");
		
		UFireArmedComponent_C_SetWeaponVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FireArmedComponent.FireArmedComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UFireArmedComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FireArmedComponent.FireArmedComponent_C.ReceiveBeginPlay");
		
		UFireArmedComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FireArmedComponent.FireArmedComponent_C.Reload
	 * 		Flags  -> ()
	 */
	void UFireArmedComponent_C::Reload()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FireArmedComponent.FireArmedComponent_C.Reload");
		
		UFireArmedComponent_C_Reload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FireArmedComponent.FireArmedComponent_C.ExecuteUbergraph_FireArmedComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFireArmedComponent_C::ExecuteUbergraph_FireArmedComponent(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FireArmedComponent.FireArmedComponent_C.ExecuteUbergraph_FireArmedComponent");
		
		UFireArmedComponent_C_ExecuteUbergraph_FireArmedComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FireArmedComponent.FireArmedComponent_C.OnShotsLimitEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFireArmedComponent_C::OnShotsLimitEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FireArmedComponent.FireArmedComponent_C.OnShotsLimitEvent__DelegateSignature");
		
		UFireArmedComponent_C_OnShotsLimitEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFireArmedComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireArmedComponent_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FireArmedComponent.FireArmedComponent_C");
		return ptr;
	}

}


