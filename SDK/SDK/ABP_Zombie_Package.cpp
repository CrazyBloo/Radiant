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
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_Zombie_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimGraph");
		
		UABP_Zombie_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.JumpPressed
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::JumpPressed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.JumpPressed");
		
		UABP_Zombie_C_JumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.FireWeapon
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::FireWeapon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.FireWeapon");
		
		UABP_Zombie_C_FireWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.ReloadWeapon
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::ReloadWeapon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.ReloadWeapon");
		
		UABP_Zombie_C_ReloadWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.HitReaction
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::HitReaction()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.HitReaction");
		
		UABP_Zombie_C_HitReaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.SetCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SetCrouch                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_Zombie_C::SetCrouch(bool SetCrouch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.SetCrouch");
		
		UABP_Zombie_C_SetCrouch_Params params {};
		params.SetCrouch = SetCrouch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.SetWeaponType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pistol                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_Zombie_C::SetWeaponType(bool Pistol)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.SetWeaponType");
		
		UABP_Zombie_C_SetWeaponType_Params params {};
		params.Pistol = Pistol;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.SetTrackPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TrackPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_Zombie_C::SetTrackPlayer(bool TrackPlayer)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.SetTrackPlayer");
		
		UABP_Zombie_C_SetTrackPlayer_Params params {};
		params.TrackPlayer = TrackPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.Death
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::Death()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.Death");
		
		UABP_Zombie_C_Death_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.Revive
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::Revive()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.Revive");
		
		UABP_Zombie_C_Revive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Zombie_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.BlueprintUpdateAnimation");
		
		UABP_Zombie_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.ChangeLocomotion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELocomotionState                                   NewLocomotion                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Zombie_C::ChangeLocomotion(ELocomotionState NewLocomotion)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.ChangeLocomotion");
		
		UABP_Zombie_C_ChangeLocomotion_Params params {};
		params.NewLocomotion = NewLocomotion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.AnimNotify_FootstepHit
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::AnimNotify_FootstepHit()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimNotify_FootstepHit");
		
		UABP_Zombie_C_AnimNotify_FootstepHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::BlueprintBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.BlueprintBeginPlay");
		
		UABP_Zombie_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.AnimNotify_MeleeAttackFinish
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::AnimNotify_MeleeAttackFinish()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimNotify_MeleeAttackFinish");
		
		UABP_Zombie_C_AnimNotify_MeleeAttackFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.StartMeleeAttack
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::StartMeleeAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.StartMeleeAttack");
		
		UABP_Zombie_C_StartMeleeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.ExecuteUbergraph_ABP_Zombie
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Zombie_C::ExecuteUbergraph_ABP_Zombie(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.ExecuteUbergraph_ABP_Zombie");
		
		UABP_Zombie_C_ExecuteUbergraph_ABP_Zombie_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_Zombie_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Zombie_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Zombie.ABP_Zombie_C");
		return ptr;
	}

}


