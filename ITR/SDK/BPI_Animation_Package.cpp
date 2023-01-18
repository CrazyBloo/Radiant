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
	 * 		Name   -> Function BPI_Animation.BPI_Animation_C.StartMeleeAttack
	 * 		Flags  -> ()
	 */
	void UBPI_Animation_C::StartMeleeAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Animation.BPI_Animation_C.StartMeleeAttack");
		
		UBPI_Animation_C_StartMeleeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Animation.BPI_Animation_C.Revive
	 * 		Flags  -> ()
	 */
	void UBPI_Animation_C::Revive()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Animation.BPI_Animation_C.Revive");
		
		UBPI_Animation_C_Revive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Animation.BPI_Animation_C.Death
	 * 		Flags  -> ()
	 */
	void UBPI_Animation_C::Death()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Animation.BPI_Animation_C.Death");
		
		UBPI_Animation_C_Death_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Animation.BPI_Animation_C.SetTrackPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TrackPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Animation_C::SetTrackPlayer(bool TrackPlayer)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Animation.BPI_Animation_C.SetTrackPlayer");
		
		UBPI_Animation_C_SetTrackPlayer_Params params {};
		params.TrackPlayer = TrackPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Animation.BPI_Animation_C.SetWeaponType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pistol                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Animation_C::SetWeaponType(bool Pistol)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Animation.BPI_Animation_C.SetWeaponType");
		
		UBPI_Animation_C_SetWeaponType_Params params {};
		params.Pistol = Pistol;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Animation.BPI_Animation_C.SetCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SetCrouch                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Animation_C::SetCrouch(bool SetCrouch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Animation.BPI_Animation_C.SetCrouch");
		
		UBPI_Animation_C_SetCrouch_Params params {};
		params.SetCrouch = SetCrouch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Animation.BPI_Animation_C.HitReaction
	 * 		Flags  -> ()
	 */
	void UBPI_Animation_C::HitReaction()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Animation.BPI_Animation_C.HitReaction");
		
		UBPI_Animation_C_HitReaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Animation.BPI_Animation_C.ReloadWeapon
	 * 		Flags  -> ()
	 */
	void UBPI_Animation_C::ReloadWeapon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Animation.BPI_Animation_C.ReloadWeapon");
		
		UBPI_Animation_C_ReloadWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Animation.BPI_Animation_C.FireWeapon
	 * 		Flags  -> ()
	 */
	void UBPI_Animation_C::FireWeapon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Animation.BPI_Animation_C.FireWeapon");
		
		UBPI_Animation_C_FireWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Animation.BPI_Animation_C.JumpPressed
	 * 		Flags  -> ()
	 */
	void UBPI_Animation_C::JumpPressed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Animation.BPI_Animation_C.JumpPressed");
		
		UBPI_Animation_C_JumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Animation.BPI_Animation_C.ChangeLocomotion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELocomotionState                                   NewLocomotion                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Animation_C::ChangeLocomotion(ELocomotionState NewLocomotion)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Animation.BPI_Animation_C.ChangeLocomotion");
		
		UBPI_Animation_C_ChangeLocomotion_Params params {};
		params.NewLocomotion = NewLocomotion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_Animation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Animation_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Animation.BPI_Animation_C");
		return ptr;
	}

}


