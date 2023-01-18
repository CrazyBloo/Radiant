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
	 * 		Name   -> Function BPA_Ammo.BPA_Ammo_C.GetPhysicsRootComponent
	 * 		Flags  -> ()
	 */
	class UPrimitiveComponent* ABPA_Ammo_C::GetPhysicsRootComponent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Ammo.BPA_Ammo_C.GetPhysicsRootComponent");
		
		ABPA_Ammo_C_GetPhysicsRootComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Ammo.BPA_Ammo_C.GetAmmoInfo
	 * 		Flags  -> ()
	 */
	struct FAmmoInfo ABPA_Ammo_C::GetAmmoInfo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Ammo.BPA_Ammo_C.GetAmmoInfo");
		
		ABPA_Ammo_C_GetAmmoInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Ammo.BPA_Ammo_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABPA_Ammo_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Ammo.BPA_Ammo_C.UserConstructionScript");
		
		ABPA_Ammo_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Ammo.BPA_Ammo_C.AmmoShot
	 * 		Flags  -> ()
	 */
	void ABPA_Ammo_C::AmmoShot()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Ammo.BPA_Ammo_C.AmmoShot");
		
		ABPA_Ammo_C_AmmoShot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Ammo.BPA_Ammo_C.PlayDropSounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     HitImpulse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsHeld                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Ammo_C::PlayDropSounds(const struct FHitResult& Hit, const struct FVector& HitImpulse, bool IsHeld)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Ammo.BPA_Ammo_C.PlayDropSounds");
		
		ABPA_Ammo_C_PlayDropSounds_Params params {};
		params.Hit = Hit;
		params.HitImpulse = HitImpulse;
		params.IsHeld = IsHeld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Ammo.BPA_Ammo_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABPA_Ammo_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Ammo.BPA_Ammo_C.OnReconfigure");
		
		ABPA_Ammo_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Ammo.BPA_Ammo_C.UpdateMesh
	 * 		Flags  -> ()
	 */
	void ABPA_Ammo_C::UpdateMesh()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Ammo.BPA_Ammo_C.UpdateMesh");
		
		ABPA_Ammo_C_UpdateMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Ammo.BPA_Ammo_C.HealthEndedOverride
	 * 		Flags  -> ()
	 */
	void ABPA_Ammo_C::HealthEndedOverride()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Ammo.BPA_Ammo_C.HealthEndedOverride");
		
		ABPA_Ammo_C_HealthEndedOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Ammo.BPA_Ammo_C.ExecuteUbergraph_BPA_Ammo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Ammo_C::ExecuteUbergraph_BPA_Ammo(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Ammo.BPA_Ammo_C.ExecuteUbergraph_BPA_Ammo");
		
		ABPA_Ammo_C_ExecuteUbergraph_BPA_Ammo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_Ammo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_Ammo_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_Ammo.BPA_Ammo_C");
		return ptr;
	}

}


