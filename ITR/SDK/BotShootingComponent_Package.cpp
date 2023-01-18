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
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.GetAttackDistance
	 * 		Flags  -> ()
	 */
	float UBotShootingComponent_C::GetAttackDistance()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.GetAttackDistance");
		
		UBotShootingComponent_C_GetAttackDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.GetFirePointComponent
	 * 		Flags  -> ()
	 */
	class USceneComponent* UBotShootingComponent_C::GetFirePointComponent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.GetFirePointComponent");
		
		UBotShootingComponent_C_GetFirePointComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.GetWeaponActor
	 * 		Flags  -> ()
	 */
	class AActor* UBotShootingComponent_C::GetWeaponActor()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.GetWeaponActor");
		
		UBotShootingComponent_C_GetWeaponActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.IsAttacking
	 * 		Flags  -> ()
	 */
	bool UBotShootingComponent_C::IsAttacking()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.IsAttacking");
		
		UBotShootingComponent_C_IsAttacking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.IsAttackValid
	 * 		Flags  -> ()
	 */
	bool UBotShootingComponent_C::IsAttackValid()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.IsAttackValid");
		
		UBotShootingComponent_C_IsAttackValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.IsReadyToAttack
	 * 		Flags  -> ()
	 */
	bool UBotShootingComponent_C::IsReadyToAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.IsReadyToAttack");
		
		UBotShootingComponent_C_IsReadyToAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.IsReloading
	 * 		Flags  -> ()
	 */
	bool UBotShootingComponent_C::IsReloading()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.IsReloading");
		
		UBotShootingComponent_C_IsReloading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.NeedWaitForFinish
	 * 		Flags  -> ()
	 */
	bool UBotShootingComponent_C::NeedWaitForFinish()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.NeedWaitForFinish");
		
		UBotShootingComponent_C_NeedWaitForFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.GetWeaponLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBotShootingComponent_C::GetWeaponLocation(struct FVector* Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.GetWeaponLocation");
		
		UBotShootingComponent_C_GetWeaponLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.UpdateLowAmmo
	 * 		Flags  -> ()
	 */
	void UBotShootingComponent_C::UpdateLowAmmo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.UpdateLowAmmo");
		
		UBotShootingComponent_C_UpdateLowAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.Update BBHasAmmo
	 * 		Flags  -> ()
	 */
	void UBotShootingComponent_C::UpdateBBHasAmmo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.Update BBHasAmmo");
		
		UBotShootingComponent_C_UpdateBBHasAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.GetFirearmRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_FirearmItem_C*                           FirearmRef                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBotShootingComponent_C::GetFirearmRef(class ABP_FirearmItem_C** FirearmRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.GetFirearmRef");
		
		UBotShootingComponent_C_GetFirearmRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FirearmRef != nullptr)
			*FirearmRef = params.FirearmRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.CheckFriendlyFire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ClearToFire                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBotShootingComponent_C::CheckFriendlyFire(bool* ClearToFire)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.CheckFriendlyFire");
		
		UBotShootingComponent_C_CheckFriendlyFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClearToFire != nullptr)
			*ClearToFire = params.ClearToFire;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.GetFireLocation
	 * 		Flags  -> ()
	 */
	struct FVector UBotShootingComponent_C::GetFireLocation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.GetFireLocation");
		
		UBotShootingComponent_C_GetFireLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.SpawnWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBotShootingComponent_C::SpawnWeapon(bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.SpawnWeapon");
		
		UBotShootingComponent_C_SpawnWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBotShootingComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.ReceiveBeginPlay");
		
		UBotShootingComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.OwnerInitialised
	 * 		Flags  -> ()
	 */
	void UBotShootingComponent_C::OwnerInitialised()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.OwnerInitialised");
		
		UBotShootingComponent_C_OwnerInitialised_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.OnMeleeAttackHit
	 * 		Flags  -> ()
	 */
	void UBotShootingComponent_C::OnMeleeAttackHit()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.OnMeleeAttackHit");
		
		UBotShootingComponent_C_OnMeleeAttackHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.BurstFinished
	 * 		Flags  -> ()
	 */
	void UBotShootingComponent_C::BurstFinished()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.BurstFinished");
		
		UBotShootingComponent_C_BurstFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.OnOutOfAmmo
	 * 		Flags  -> ()
	 */
	void UBotShootingComponent_C::OnOutOfAmmo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.OnOutOfAmmo");
		
		UBotShootingComponent_C_OnOutOfAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.StopAttack
	 * 		Flags  -> ()
	 */
	void UBotShootingComponent_C::StopAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.StopAttack");
		
		UBotShootingComponent_C_StopAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.StartAttack
	 * 		Flags  -> ()
	 */
	void UBotShootingComponent_C::StartAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.StartAttack");
		
		UBotShootingComponent_C_StartAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.Reload
	 * 		Flags  -> ()
	 */
	void UBotShootingComponent_C::Reload()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.Reload");
		
		UBotShootingComponent_C_Reload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.OwnerInitialized
	 * 		Flags  -> ()
	 */
	void UBotShootingComponent_C::OwnerInitialized()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.OwnerInitialized");
		
		UBotShootingComponent_C_OwnerInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.DestroyWeapon
	 * 		Flags  -> ()
	 */
	void UBotShootingComponent_C::DestroyWeapon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.DestroyWeapon");
		
		UBotShootingComponent_C_DestroyWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.SetWeaponVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBotShootingComponent_C::SetWeaponVisible(bool bVisible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.SetWeaponVisible");
		
		UBotShootingComponent_C_SetWeaponVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.OnBotFired
	 * 		Flags  -> ()
	 */
	void UBotShootingComponent_C::OnBotFired()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.OnBotFired");
		
		UBotShootingComponent_C_OnBotFired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.ExecuteUbergraph_BotShootingComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBotShootingComponent_C::ExecuteUbergraph_BotShootingComponent(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.ExecuteUbergraph_BotShootingComponent");
		
		UBotShootingComponent_C_ExecuteUbergraph_BotShootingComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.PreFire__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBotShootingComponent_C::PreFire__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.PreFire__DelegateSignature");
		
		UBotShootingComponent_C_PreFire__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BotShootingComponent.BotShootingComponent_C.OnShotsLimitEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBotShootingComponent_C::OnShotsLimitEvent__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BotShootingComponent.BotShootingComponent_C.OnShotsLimitEvent__DelegateSignature");
		
		UBotShootingComponent_C_OnShotsLimitEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBotShootingComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBotShootingComponent_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BotShootingComponent.BotShootingComponent_C");
		return ptr;
	}

}


