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
	 * 		Name   -> Function BP_Ammo_40mm.BP_Ammo_40mm_C.GetPhysicsRootComponent
	 * 		Flags  -> ()
	 */
	class UPrimitiveComponent* ABP_Ammo_40mm_C::GetPhysicsRootComponent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Ammo_40mm.BP_Ammo_40mm_C.GetPhysicsRootComponent");
		
		ABP_Ammo_40mm_C_GetPhysicsRootComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Ammo_40mm.BP_Ammo_40mm_C.BndEvt__BPC_ItemDurability_K2Node_ComponentBoundEvent_1_OnDamaged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      causer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                weaponTag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DmgType                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Ammo_40mm_C::BndEvt__BPC_ItemDurability_K2Node_ComponentBoundEvent_1_OnDamaged__DelegateSignature(class AActor* causer, float Damage, const struct FGameplayTag& weaponTag, class UDamageType* DmgType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Ammo_40mm.BP_Ammo_40mm_C.BndEvt__BPC_ItemDurability_K2Node_ComponentBoundEvent_1_OnDamaged__DelegateSignature");
		
		ABP_Ammo_40mm_C_BndEvt__BPC_ItemDurability_K2Node_ComponentBoundEvent_1_OnDamaged__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_Ammo_40mm.BP_Ammo_40mm_C.HealthEndedOverride
	 * 		Flags  -> ()
	 */
	void ABP_Ammo_40mm_C::HealthEndedOverride()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Ammo_40mm.BP_Ammo_40mm_C.HealthEndedOverride");
		
		ABP_Ammo_40mm_C_HealthEndedOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Ammo_40mm.BP_Ammo_40mm_C.ExecuteUbergraph_BP_Ammo_40mm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Ammo_40mm_C::ExecuteUbergraph_BP_Ammo_40mm(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Ammo_40mm.BP_Ammo_40mm_C.ExecuteUbergraph_BP_Ammo_40mm");
		
		ABP_Ammo_40mm_C_ExecuteUbergraph_BP_Ammo_40mm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Ammo_40mm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Ammo_40mm_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ammo_40mm.BP_Ammo_40mm_C");
		return ptr;
	}

}


