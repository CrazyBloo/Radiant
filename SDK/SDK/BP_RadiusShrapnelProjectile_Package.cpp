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
	 * 		Name   -> Function BP_RadiusShrapnelProjectile.BP_RadiusShrapnelProjectile_C.BndEvt__BP_RadiusShrapnelProjectile_ShrapnelComponent_K2Node_ComponentBoundEvent_0_ShrapnelComponentImpact__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		float                                              Scale                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RadiusShrapnelProjectile_C::BndEvt__BP_RadiusShrapnelProjectile_ShrapnelComponent_K2Node_ComponentBoundEvent_0_ShrapnelComponentImpact__DelegateSignature(const struct FHitResult& Hit, float Scale)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RadiusShrapnelProjectile.BP_RadiusShrapnelProjectile_C.BndEvt__BP_RadiusShrapnelProjectile_ShrapnelComponent_K2Node_ComponentBoundEvent_0_ShrapnelComponentImpact__DelegateSignature");
		
		ABP_RadiusShrapnelProjectile_C_BndEvt__BP_RadiusShrapnelProjectile_ShrapnelComponent_K2Node_ComponentBoundEvent_0_ShrapnelComponentImpact__DelegateSignature_Params params {};
		params.Hit = Hit;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RadiusShrapnelProjectile.BP_RadiusShrapnelProjectile_C.BndEvt__BP_RadiusShrapnelProjectile_ShrapnelComponent_K2Node_ComponentBoundEvent_1_ShrapnelComponentApplyDamage__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsPearce                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RadiusShrapnelProjectile_C::BndEvt__BP_RadiusShrapnelProjectile_ShrapnelComponent_K2Node_ComponentBoundEvent_1_ShrapnelComponentApplyDamage__DelegateSignature(const struct FVector& Location, bool IsPearce)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RadiusShrapnelProjectile.BP_RadiusShrapnelProjectile_C.BndEvt__BP_RadiusShrapnelProjectile_ShrapnelComponent_K2Node_ComponentBoundEvent_1_ShrapnelComponentApplyDamage__DelegateSignature");
		
		ABP_RadiusShrapnelProjectile_C_BndEvt__BP_RadiusShrapnelProjectile_ShrapnelComponent_K2Node_ComponentBoundEvent_1_ShrapnelComponentApplyDamage__DelegateSignature_Params params {};
		params.Location = Location;
		params.IsPearce = IsPearce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RadiusShrapnelProjectile.BP_RadiusShrapnelProjectile_C.ExecuteUbergraph_BP_RadiusShrapnelProjectile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RadiusShrapnelProjectile_C::ExecuteUbergraph_BP_RadiusShrapnelProjectile(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RadiusShrapnelProjectile.BP_RadiusShrapnelProjectile_C.ExecuteUbergraph_BP_RadiusShrapnelProjectile");
		
		ABP_RadiusShrapnelProjectile_C_ExecuteUbergraph_BP_RadiusShrapnelProjectile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RadiusShrapnelProjectile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RadiusShrapnelProjectile_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_RadiusShrapnelProjectile.BP_RadiusShrapnelProjectile_C");
		return ptr;
	}

}


