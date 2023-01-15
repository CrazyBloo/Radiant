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
	 * 		Name   -> Function BPC_AliveStats.BPC_AliveStats_C.GetHealthPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AliveStats_C::GetHealthPercent(float* Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AliveStats.BPC_AliveStats_C.GetHealthPercent");
		
		UBPC_AliveStats_C_GetHealthPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AliveStats.BPC_AliveStats_C.IsCriticalHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Bone_Name                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBPC_AliveStats_C::IsCriticalHit(class UObject* HitComponent, const class FName& Bone_Name)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AliveStats.BPC_AliveStats_C.IsCriticalHit");
		
		UBPC_AliveStats_C_IsCriticalHit_Params params {};
		params.HitComponent = HitComponent;
		params.Bone_Name = Bone_Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AliveStats.BPC_AliveStats_C.OnPointDamage
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
	void UBPC_AliveStats_C::OnPointDamage(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class UPrimitiveComponent* FHitComponent, const class FName& BoneName, class UDamageType* DamageType, class AActor* DamageCauser)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AliveStats.BPC_AliveStats_C.OnPointDamage");
		
		UBPC_AliveStats_C_OnPointDamage_Params params {};
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
	 * 		Name   -> Function BPC_AliveStats.BPC_AliveStats_C.Kill
	 * 		Flags  -> ()
	 */
	void UBPC_AliveStats_C::Kill()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AliveStats.BPC_AliveStats_C.Kill");
		
		UBPC_AliveStats_C_Kill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AliveStats.BPC_AliveStats_C.Apply Damage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InputDamage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      causer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              appliedDamage                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AliveStats_C::Apply_Damage(float InputDamage, class AActor* causer, class AActor* Weapon, float* appliedDamage)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AliveStats.BPC_AliveStats_C.Apply Damage");
		
		UBPC_AliveStats_C_Apply_Damage_Params params {};
		params.InputDamage = InputDamage;
		params.causer = causer;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (appliedDamage != nullptr)
			*appliedDamage = params.appliedDamage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AliveStats.BPC_AliveStats_C.IsAlive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               alive                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_AliveStats_C::IsAlive(bool* alive)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AliveStats.BPC_AliveStats_C.IsAlive");
		
		UBPC_AliveStats_C_IsAlive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (alive != nullptr)
			*alive = params.alive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AliveStats.BPC_AliveStats_C.UseStamina
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Use                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              UseSpeed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AliveStats_C::UseStamina(bool Use, float UseSpeed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AliveStats.BPC_AliveStats_C.UseStamina");
		
		UBPC_AliveStats_C_UseStamina_Params params {};
		params.Use = Use;
		params.UseSpeed = UseSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AliveStats.BPC_AliveStats_C.CalculateStamina
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Use                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_AliveStats_C::CalculateStamina(bool Use)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AliveStats.BPC_AliveStats_C.CalculateStamina");
		
		UBPC_AliveStats_C_CalculateStamina_Params params {};
		params.Use = Use;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AliveStats.BPC_AliveStats_C.HealthRegeneration
	 * 		Flags  -> ()
	 */
	void UBPC_AliveStats_C::HealthRegeneration()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AliveStats.BPC_AliveStats_C.HealthRegeneration");
		
		UBPC_AliveStats_C_HealthRegeneration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AliveStats.BPC_AliveStats_C.DisplayStats
	 * 		Flags  -> ()
	 */
	void UBPC_AliveStats_C::DisplayStats()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AliveStats.BPC_AliveStats_C.DisplayStats");
		
		UBPC_AliveStats_C_DisplayStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AliveStats.BPC_AliveStats_C.ChangeHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AliveStats_C::ChangeHealth(float Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AliveStats.BPC_AliveStats_C.ChangeHealth");
		
		UBPC_AliveStats_C_ChangeHealth_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AliveStats.BPC_AliveStats_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_AliveStats_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AliveStats.BPC_AliveStats_C.ReceiveBeginPlay");
		
		UBPC_AliveStats_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AliveStats.BPC_AliveStats_C.CustomTick
	 * 		Flags  -> ()
	 */
	void UBPC_AliveStats_C::CustomTick()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AliveStats.BPC_AliveStats_C.CustomTick");
		
		UBPC_AliveStats_C_CustomTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AliveStats.BPC_AliveStats_C.EventPoint
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
	void UBPC_AliveStats_C::EventPoint(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const class FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AliveStats.BPC_AliveStats_C.EventPoint");
		
		UBPC_AliveStats_C_EventPoint_Params params {};
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
	 * 		Name   -> Function BPC_AliveStats.BPC_AliveStats_C.OnAnyDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AliveStats_C::OnAnyDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AliveStats.BPC_AliveStats_C.OnAnyDamage");
		
		UBPC_AliveStats_C_OnAnyDamage_Params params {};
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
	 * 		Name   -> Function BPC_AliveStats.BPC_AliveStats_C.ExecuteUbergraph_BPC_AliveStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AliveStats_C::ExecuteUbergraph_BPC_AliveStats(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AliveStats.BPC_AliveStats_C.ExecuteUbergraph_BPC_AliveStats");
		
		UBPC_AliveStats_C_ExecuteUbergraph_BPC_AliveStats_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AliveStats.BPC_AliveStats_C.OnDamaged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      causer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_AliveStats_C::OnDamaged__DelegateSignature(class AActor* causer, float Damage)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AliveStats.BPC_AliveStats_C.OnDamaged__DelegateSignature");
		
		UBPC_AliveStats_C_OnDamaged__DelegateSignature_Params params {};
		params.causer = causer;
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AliveStats.BPC_AliveStats_C.StaminaLow__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBPC_AliveStats_C::StaminaLow__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AliveStats.BPC_AliveStats_C.StaminaLow__DelegateSignature");
		
		UBPC_AliveStats_C_StaminaLow__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AliveStats.BPC_AliveStats_C.StaminaEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBPC_AliveStats_C::StaminaEnd__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AliveStats.BPC_AliveStats_C.StaminaEnd__DelegateSignature");
		
		UBPC_AliveStats_C_StaminaEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AliveStats.BPC_AliveStats_C.HealthEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBPC_AliveStats_C::HealthEnd__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AliveStats.BPC_AliveStats_C.HealthEnd__DelegateSignature");
		
		UBPC_AliveStats_C_HealthEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_AliveStats.BPC_AliveStats_C.HungerEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBPC_AliveStats_C::HungerEnd__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_AliveStats.BPC_AliveStats_C.HungerEnd__DelegateSignature");
		
		UBPC_AliveStats_C_HungerEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_AliveStats_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_AliveStats_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPC_AliveStats.BPC_AliveStats_C");
		return ptr;
	}

}


