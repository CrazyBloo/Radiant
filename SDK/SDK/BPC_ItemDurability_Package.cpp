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
	 * 		Name   -> Function BPC_ItemDurability.BPC_ItemDurability_C.CheckInventoryItem
	 * 		Flags  -> ()
	 */
	void UBPC_ItemDurability_C::CheckInventoryItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemDurability.BPC_ItemDurability_C.CheckInventoryItem");
		
		UBPC_ItemDurability_C_CheckInventoryItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemDurability.BPC_ItemDurability_C.IsBroken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Broken                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_ItemDurability_C::IsBroken(bool* Broken)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemDurability.BPC_ItemDurability_C.IsBroken");
		
		UBPC_ItemDurability_C_IsBroken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Broken != nullptr)
			*Broken = params.Broken;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemDurability.BPC_ItemDurability_C.GetDurabilityRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DurabilityRatio                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ItemDurability_C::GetDurabilityRatio(float* DurabilityRatio)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemDurability.BPC_ItemDurability_C.GetDurabilityRatio");
		
		UBPC_ItemDurability_C_GetDurabilityRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DurabilityRatio != nullptr)
			*DurabilityRatio = params.DurabilityRatio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemDurability.BPC_ItemDurability_C.GetDurability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Durability                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ItemDurability_C::GetDurability(float* Durability)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemDurability.BPC_ItemDurability_C.GetDurability");
		
		UBPC_ItemDurability_C_GetDurability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Durability != nullptr)
			*Durability = params.Durability;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemDurability.BPC_ItemDurability_C.ChangeDurabilityRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Ratio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      causer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_ItemDurability_C::ChangeDurabilityRatio(float Ratio, class AActor* causer, const struct FGameplayTag& Weapon, class UDamageType* DamageType, bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemDurability.BPC_ItemDurability_C.ChangeDurabilityRatio");
		
		UBPC_ItemDurability_C_ChangeDurabilityRatio_Params params {};
		params.Ratio = Ratio;
		params.causer = causer;
		params.Weapon = Weapon;
		params.DamageType = DamageType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemDurability.BPC_ItemDurability_C.OnPointDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         FHitComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ItemDurability_C::OnPointDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class UPrimitiveComponent* FHitComponent, const class FName& BoneName, class UDamageType* DamageType, class AActor* DamageCauser)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemDurability.BPC_ItemDurability_C.OnPointDamage");
		
		UBPC_ItemDurability_C_OnPointDamage_Params params {};
		params.DamagedActor = DamagedActor;
		params.Damage = Damage;
		params.InstigatedBy = InstigatedBy;
		params.FHitComponent = FHitComponent;
		params.BoneName = BoneName;
		params.DamageType = DamageType;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemDurability.BPC_ItemDurability_C.ChangeDurability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      causer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DmgType                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_ItemDurability_C::ChangeDurability(float Value, class AActor* causer, const struct FGameplayTag& Weapon, class UDamageType* DmgType, bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemDurability.BPC_ItemDurability_C.ChangeDurability");
		
		UBPC_ItemDurability_C_ChangeDurability_Params params {};
		params.Value = Value;
		params.causer = causer;
		params.Weapon = Weapon;
		params.DmgType = DmgType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemDurability.BPC_ItemDurability_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_ItemDurability_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemDurability.BPC_ItemDurability_C.ReceiveBeginPlay");
		
		UBPC_ItemDurability_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemDurability.BPC_ItemDurability_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ItemDurability_C::Initialize(class UInventoryItem* Item)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemDurability.BPC_ItemDurability_C.Initialize");
		
		UBPC_ItemDurability_C_Initialize_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemDurability.BPC_ItemDurability_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ItemDurability_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemDurability.BPC_ItemDurability_C.ReceiveEndPlay");
		
		UBPC_ItemDurability_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemDurability.BPC_ItemDurability_C.OnItemChangeDurabilityEvent
	 * 		Flags  -> ()
	 */
	void UBPC_ItemDurability_C::OnItemChangeDurabilityEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemDurability.BPC_ItemDurability_C.OnItemChangeDurabilityEvent");
		
		UBPC_ItemDurability_C_OnItemChangeDurabilityEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemDurability.BPC_ItemDurability_C.EventPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         FHitComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ShotFromDirection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ItemDurability_C::EventPoint(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const class FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemDurability.BPC_ItemDurability_C.EventPoint");
		
		UBPC_ItemDurability_C_EventPoint_Params params {};
		params.DamagedActor = DamagedActor;
		params.Damage = Damage;
		params.InstigatedBy = InstigatedBy;
		params.HitLocation = HitLocation;
		params.FHitComponent = FHitComponent;
		params.BoneName = BoneName;
		params.ShotFromDirection = ShotFromDirection;
		params.DamageType = DamageType;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemDurability.BPC_ItemDurability_C.OnAnyDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ItemDurability_C::OnAnyDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemDurability.BPC_ItemDurability_C.OnAnyDamage");
		
		UBPC_ItemDurability_C_OnAnyDamage_Params params {};
		params.DamagedActor = DamagedActor;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemDurability.BPC_ItemDurability_C.ExecuteUbergraph_BPC_ItemDurability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ItemDurability_C::ExecuteUbergraph_BPC_ItemDurability(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemDurability.BPC_ItemDurability_C.ExecuteUbergraph_BPC_ItemDurability");
		
		UBPC_ItemDurability_C_ExecuteUbergraph_BPC_ItemDurability_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemDurability.BPC_ItemDurability_C.OnDurabilityChange__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBPC_ItemDurability_C::OnDurabilityChange__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemDurability.BPC_ItemDurability_C.OnDurabilityChange__DelegateSignature");
		
		UBPC_ItemDurability_C_OnDurabilityChange__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemDurability.BPC_ItemDurability_C.OnDamaged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      causer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                weaponTag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DmgType                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ItemDurability_C::OnDamaged__DelegateSignature(class AActor* causer, float Damage, const struct FGameplayTag& weaponTag, class UDamageType* DmgType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemDurability.BPC_ItemDurability_C.OnDamaged__DelegateSignature");
		
		UBPC_ItemDurability_C_OnDamaged__DelegateSignature_Params params {};
		params.causer = causer;
		params.Damage = Damage;
		params.weaponTag = weaponTag;
		params.DmgType = DmgType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ItemDurability.BPC_ItemDurability_C.OnDestroyed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBPC_ItemDurability_C::OnDestroyed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ItemDurability.BPC_ItemDurability_C.OnDestroyed__DelegateSignature");
		
		UBPC_ItemDurability_C_OnDestroyed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_ItemDurability_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_ItemDurability_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPC_ItemDurability.BPC_ItemDurability_C");
		return ptr;
	}

}


