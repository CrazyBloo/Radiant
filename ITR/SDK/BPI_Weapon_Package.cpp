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
	 * 		Name   -> Function BPI_Weapon.BPI_Weapon_C.GetSmoothingScript
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGS_Smoothing_C*                             SmoothingScript                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Weapon_C::GetSmoothingScript(class UGS_Smoothing_C** SmoothingScript)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Weapon.BPI_Weapon_C.GetSmoothingScript");
		
		UBPI_Weapon_C_GetSmoothingScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SmoothingScript != nullptr)
			*SmoothingScript = params.SmoothingScript;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Weapon.BPI_Weapon_C.UpdateSmoothingAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseLocalAlpha                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewMaxSmoothAlpha                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsAdd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Weapon_C::UpdateSmoothingAttachment(bool bUseLocalAlpha, float NewMaxSmoothAlpha, bool bIsAdd)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Weapon.BPI_Weapon_C.UpdateSmoothingAttachment");
		
		UBPI_Weapon_C_UpdateSmoothingAttachment_Params params {};
		params.bUseLocalAlpha = bUseLocalAlpha;
		params.NewMaxSmoothAlpha = NewMaxSmoothAlpha;
		params.bIsAdd = bIsAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Weapon.BPI_Weapon_C.SmoothingToggle
	 * 		Flags  -> ()
	 */
	void UBPI_Weapon_C::SmoothingToggle()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Weapon.BPI_Weapon_C.SmoothingToggle");
		
		UBPI_Weapon_C_SmoothingToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Weapon.BPI_Weapon_C.SetAdditionalSmoothing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SmoothAlpha                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Weapon_C::SetAdditionalSmoothing(float SmoothAlpha)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Weapon.BPI_Weapon_C.SetAdditionalSmoothing");
		
		UBPI_Weapon_C_SetAdditionalSmoothing_Params params {};
		params.SmoothAlpha = SmoothAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Weapon.BPI_Weapon_C.GetCleaningBarrelLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Length                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Weapon_C::GetCleaningBarrelLength(float* Length)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Weapon.BPI_Weapon_C.GetCleaningBarrelLength");
		
		UBPI_Weapon_C_GetCleaningBarrelLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Length != nullptr)
			*Length = params.Length;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Weapon.BPI_Weapon_C.GetShootingPointTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         Parent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Weapon_C::GetShootingPointTransform(struct FTransform* Transform, class UPrimitiveComponent** Parent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Weapon.BPI_Weapon_C.GetShootingPointTransform");
		
		UBPI_Weapon_C_GetShootingPointTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Transform != nullptr)
			*Transform = params.Transform;
		if (Parent != nullptr)
			*Parent = params.Parent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Weapon.BPI_Weapon_C.VirtualStockToggle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Weapon_C::VirtualStockToggle(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Weapon.BPI_Weapon_C.VirtualStockToggle");
		
		UBPI_Weapon_C_VirtualStockToggle_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Weapon.BPI_Weapon_C.AttachmentDetached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Weapon_C::AttachmentDetached(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Weapon.BPI_Weapon_C.AttachmentDetached");
		
		UBPI_Weapon_C_AttachmentDetached_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Weapon.BPI_Weapon_C.AttachmentAttached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Weapon_C::AttachmentAttached(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Weapon.BPI_Weapon_C.AttachmentAttached");
		
		UBPI_Weapon_C_AttachmentAttached_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Weapon.BPI_Weapon_C.UpdateTargetLoc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TargetLoc                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Weapon_C::UpdateTargetLoc(const struct FVector& TargetLoc)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Weapon.BPI_Weapon_C.UpdateTargetLoc");
		
		UBPI_Weapon_C_UpdateTargetLoc_Params params {};
		params.TargetLoc = TargetLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Weapon.BPI_Weapon_C.PlayerWeaponFired
	 * 		Flags  -> ()
	 */
	void UBPI_Weapon_C::PlayerWeaponFired()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Weapon.BPI_Weapon_C.PlayerWeaponFired");
		
		UBPI_Weapon_C_PlayerWeaponFired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Weapon.BPI_Weapon_C.ReloadFinished
	 * 		Flags  -> ()
	 */
	void UBPI_Weapon_C::ReloadFinished()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Weapon.BPI_Weapon_C.ReloadFinished");
		
		UBPI_Weapon_C_ReloadFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Weapon.BPI_Weapon_C.OutOfAmmo
	 * 		Flags  -> ()
	 */
	void UBPI_Weapon_C::OutOfAmmo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Weapon.BPI_Weapon_C.OutOfAmmo");
		
		UBPI_Weapon_C_OutOfAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Weapon.BPI_Weapon_C.StopFire
	 * 		Flags  -> ()
	 */
	void UBPI_Weapon_C::StopFire()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Weapon.BPI_Weapon_C.StopFire");
		
		UBPI_Weapon_C_StopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Weapon.BPI_Weapon_C.FireGun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Diviation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BurstFire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TargetLoc                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FireRateMult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BurstModeCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Weapon_C::FireGun(class AActor* Target, float Diviation, bool BurstFire, const struct FVector& TargetLoc, float FireRateMult, int32_t BurstModeCount)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Weapon.BPI_Weapon_C.FireGun");
		
		UBPI_Weapon_C_FireGun_Params params {};
		params.Target = Target;
		params.Diviation = Diviation;
		params.BurstFire = BurstFire;
		params.TargetLoc = TargetLoc;
		params.FireRateMult = FireRateMult;
		params.BurstModeCount = BurstModeCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_Weapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Weapon_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Weapon.BPI_Weapon_C");
		return ptr;
	}

}


