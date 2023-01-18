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
	 * 		Name   -> Function CubitUniProjectile.CubitUniProjectile_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ACubitUniProjectile_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CubitUniProjectile.CubitUniProjectile_C.UserConstructionScript");
		
		ACubitUniProjectile_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CubitUniProjectile.CubitUniProjectile_C.RicochetON
	 * 		Flags  -> ()
	 */
	void ACubitUniProjectile_C::RicochetON()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CubitUniProjectile.CubitUniProjectile_C.RicochetON");
		
		ACubitUniProjectile_C_RicochetON_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CubitUniProjectile.CubitUniProjectile_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACubitUniProjectile_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CubitUniProjectile.CubitUniProjectile_C.ReceiveTick");
		
		ACubitUniProjectile_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CubitUniProjectile.CubitUniProjectile_C.SpawnFX
	 * 		Flags  -> ()
	 */
	void ACubitUniProjectile_C::SpawnFX()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CubitUniProjectile.CubitUniProjectile_C.SpawnFX");
		
		ACubitUniProjectile_C_SpawnFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CubitUniProjectile.CubitUniProjectile_C.BndEvt__Projectile_K2Node_ComponentBoundEvent_9_OnProjectileStopDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ACubitUniProjectile_C::BndEvt__Projectile_K2Node_ComponentBoundEvent_9_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CubitUniProjectile.CubitUniProjectile_C.BndEvt__Projectile_K2Node_ComponentBoundEvent_9_OnProjectileStopDelegate__DelegateSignature");
		
		ACubitUniProjectile_C_BndEvt__Projectile_K2Node_ComponentBoundEvent_9_OnProjectileStopDelegate__DelegateSignature_Params params {};
		params.ImpactResult = ImpactResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CubitUniProjectile.CubitUniProjectile_C.Kill Projectile NO FX
	 * 		Flags  -> ()
	 */
	void ACubitUniProjectile_C::KillProjectileNOFX()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CubitUniProjectile.CubitUniProjectile_C.Kill Projectile NO FX");
		
		ACubitUniProjectile_C_KillProjectileNOFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CubitUniProjectile.CubitUniProjectile_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ACubitUniProjectile_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CubitUniProjectile.CubitUniProjectile_C.ReceiveBeginPlay");
		
		ACubitUniProjectile_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CubitUniProjectile.CubitUniProjectile_C.BndEvt__Projectile_K2Node_ComponentBoundEvent_132_OnProjectileBounceDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  ImpactResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     ImpactVelocity                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACubitUniProjectile_C::BndEvt__Projectile_K2Node_ComponentBoundEvent_132_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CubitUniProjectile.CubitUniProjectile_C.BndEvt__Projectile_K2Node_ComponentBoundEvent_132_OnProjectileBounceDelegate__DelegateSignature");
		
		ACubitUniProjectile_C_BndEvt__Projectile_K2Node_ComponentBoundEvent_132_OnProjectileBounceDelegate__DelegateSignature_Params params {};
		params.ImpactResult = ImpactResult;
		params.ImpactVelocity = ImpactVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CubitUniProjectile.CubitUniProjectile_C.ExecuteUbergraph_CubitUniProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACubitUniProjectile_C::ExecuteUbergraph_CubitUniProjectile(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function CubitUniProjectile.CubitUniProjectile_C.ExecuteUbergraph_CubitUniProjectile");
		
		ACubitUniProjectile_C_ExecuteUbergraph_CubitUniProjectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACubitUniProjectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACubitUniProjectile_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CubitUniProjectile.CubitUniProjectile_C");
		return ptr;
	}

}


