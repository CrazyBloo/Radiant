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
	 * 		Name   -> Function BP_RadiusBulletProjectile.BP_RadiusBulletProjectile_C.OnSpawnImpact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		float                                              Scale                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RadiusBulletProjectile_C::OnSpawnImpact(const struct FHitResult& Hit, float Scale)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RadiusBulletProjectile.BP_RadiusBulletProjectile_C.OnSpawnImpact");
		
		ABP_RadiusBulletProjectile_C_OnSpawnImpact_Params params {};
		params.Hit = Hit;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RadiusBulletProjectile.BP_RadiusBulletProjectile_C.BndEvt__BP_RadiusBulletProjectile_BulletComponent_K2Node_ComponentBoundEvent_2_BulletComponentRicochet__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Force                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsPenetration                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RadiusBulletProjectile_C::BndEvt__BP_RadiusBulletProjectile_BulletComponent_K2Node_ComponentBoundEvent_2_BulletComponentRicochet__DelegateSignature(const struct FVector& Location, const struct FVector& Force, bool IsPenetration)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RadiusBulletProjectile.BP_RadiusBulletProjectile_C.BndEvt__BP_RadiusBulletProjectile_BulletComponent_K2Node_ComponentBoundEvent_2_BulletComponentRicochet__DelegateSignature");
		
		ABP_RadiusBulletProjectile_C_BndEvt__BP_RadiusBulletProjectile_BulletComponent_K2Node_ComponentBoundEvent_2_BulletComponentRicochet__DelegateSignature_Params params {};
		params.Location = Location;
		params.Force = Force;
		params.IsPenetration = IsPenetration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RadiusBulletProjectile.BP_RadiusBulletProjectile_C.BndEvt__BP_RadiusBulletProjectile_BulletImpulseComponent_K2Node_ComponentBoundEvent_0_BulletImpulseWhistle__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_RadiusBulletProjectile_C::BndEvt__BP_RadiusBulletProjectile_BulletImpulseComponent_K2Node_ComponentBoundEvent_0_BulletImpulseWhistle__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RadiusBulletProjectile.BP_RadiusBulletProjectile_C.BndEvt__BP_RadiusBulletProjectile_BulletImpulseComponent_K2Node_ComponentBoundEvent_0_BulletImpulseWhistle__DelegateSignature");
		
		ABP_RadiusBulletProjectile_C_BndEvt__BP_RadiusBulletProjectile_BulletImpulseComponent_K2Node_ComponentBoundEvent_0_BulletImpulseWhistle__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RadiusBulletProjectile.BP_RadiusBulletProjectile_C.K2_OnReset
	 * 		Flags  -> ()
	 */
	void ABP_RadiusBulletProjectile_C::K2_OnReset()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RadiusBulletProjectile.BP_RadiusBulletProjectile_C.K2_OnReset");
		
		ABP_RadiusBulletProjectile_C_K2_OnReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RadiusBulletProjectile.BP_RadiusBulletProjectile_C.ExecuteUbergraph_BP_RadiusBulletProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RadiusBulletProjectile_C::ExecuteUbergraph_BP_RadiusBulletProjectile(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RadiusBulletProjectile.BP_RadiusBulletProjectile_C.ExecuteUbergraph_BP_RadiusBulletProjectile");
		
		ABP_RadiusBulletProjectile_C_ExecuteUbergraph_BP_RadiusBulletProjectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RadiusBulletProjectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RadiusBulletProjectile_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_RadiusBulletProjectile.BP_RadiusBulletProjectile_C");
		return ptr;
	}

}


