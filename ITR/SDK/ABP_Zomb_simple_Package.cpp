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
	 * 		Name   -> Function ABP_Zomb_simple.ABP_Zomb_simple_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_Zomb_simple_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zomb_simple.ABP_Zomb_simple_C.AnimGraph");
		
		UABP_Zomb_simple_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zomb_simple.ABP_Zomb_simple_C.Revive
	 * 		Flags  -> ()
	 */
	void UABP_Zomb_simple_C::Revive()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zomb_simple.ABP_Zomb_simple_C.Revive");
		
		UABP_Zomb_simple_C_Revive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zomb_simple.ABP_Zomb_simple_C.Death
	 * 		Flags  -> ()
	 */
	void UABP_Zomb_simple_C::Death()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zomb_simple.ABP_Zomb_simple_C.Death");
		
		UABP_Zomb_simple_C_Death_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zomb_simple.ABP_Zomb_simple_C.SetTrackPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TrackPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_Zomb_simple_C::SetTrackPlayer(bool TrackPlayer)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zomb_simple.ABP_Zomb_simple_C.SetTrackPlayer");
		
		UABP_Zomb_simple_C_SetTrackPlayer_Params params {};
		params.TrackPlayer = TrackPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zomb_simple.ABP_Zomb_simple_C.SetWeaponType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pistol                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_Zomb_simple_C::SetWeaponType(bool Pistol)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zomb_simple.ABP_Zomb_simple_C.SetWeaponType");
		
		UABP_Zomb_simple_C_SetWeaponType_Params params {};
		params.Pistol = Pistol;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zomb_simple.ABP_Zomb_simple_C.SetCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SetCrouch                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_Zomb_simple_C::SetCrouch(bool SetCrouch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zomb_simple.ABP_Zomb_simple_C.SetCrouch");
		
		UABP_Zomb_simple_C_SetCrouch_Params params {};
		params.SetCrouch = SetCrouch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zomb_simple.ABP_Zomb_simple_C.HitReaction
	 * 		Flags  -> ()
	 */
	void UABP_Zomb_simple_C::HitReaction()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zomb_simple.ABP_Zomb_simple_C.HitReaction");
		
		UABP_Zomb_simple_C_HitReaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zomb_simple.ABP_Zomb_simple_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Zomb_simple_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zomb_simple.ABP_Zomb_simple_C.BlueprintUpdateAnimation");
		
		UABP_Zomb_simple_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zomb_simple.ABP_Zomb_simple_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UABP_Zomb_simple_C::BlueprintBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zomb_simple.ABP_Zomb_simple_C.BlueprintBeginPlay");
		
		UABP_Zomb_simple_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zomb_simple.ABP_Zomb_simple_C.ReloadWeapon
	 * 		Flags  -> ()
	 */
	void UABP_Zomb_simple_C::ReloadWeapon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zomb_simple.ABP_Zomb_simple_C.ReloadWeapon");
		
		UABP_Zomb_simple_C_ReloadWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zomb_simple.ABP_Zomb_simple_C.FireWeapon
	 * 		Flags  -> ()
	 */
	void UABP_Zomb_simple_C::FireWeapon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zomb_simple.ABP_Zomb_simple_C.FireWeapon");
		
		UABP_Zomb_simple_C_FireWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zomb_simple.ABP_Zomb_simple_C.AnimNotify_FootstepHit
	 * 		Flags  -> ()
	 */
	void UABP_Zomb_simple_C::AnimNotify_FootstepHit()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zomb_simple.ABP_Zomb_simple_C.AnimNotify_FootstepHit");
		
		UABP_Zomb_simple_C_AnimNotify_FootstepHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zomb_simple.ABP_Zomb_simple_C.JumpPressed
	 * 		Flags  -> ()
	 */
	void UABP_Zomb_simple_C::JumpPressed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zomb_simple.ABP_Zomb_simple_C.JumpPressed");
		
		UABP_Zomb_simple_C_JumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zomb_simple.ABP_Zomb_simple_C.ChangeLocomotion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELocomotionState                                   NewLocomotion                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Zomb_simple_C::ChangeLocomotion(ELocomotionState NewLocomotion)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zomb_simple.ABP_Zomb_simple_C.ChangeLocomotion");
		
		UABP_Zomb_simple_C_ChangeLocomotion_Params params {};
		params.NewLocomotion = NewLocomotion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zomb_simple.ABP_Zomb_simple_C.StartMeleeAttack
	 * 		Flags  -> ()
	 */
	void UABP_Zomb_simple_C::StartMeleeAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zomb_simple.ABP_Zomb_simple_C.StartMeleeAttack");
		
		UABP_Zomb_simple_C_StartMeleeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zomb_simple.ABP_Zomb_simple_C.AnimNotify_AttackEnd
	 * 		Flags  -> ()
	 */
	void UABP_Zomb_simple_C::AnimNotify_AttackEnd()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zomb_simple.ABP_Zomb_simple_C.AnimNotify_AttackEnd");
		
		UABP_Zomb_simple_C_AnimNotify_AttackEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zomb_simple.ABP_Zomb_simple_C.ExecuteUbergraph_ABP_Zomb_simple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Zomb_simple_C::ExecuteUbergraph_ABP_Zomb_simple(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Zomb_simple.ABP_Zomb_simple_C.ExecuteUbergraph_ABP_Zomb_simple");
		
		UABP_Zomb_simple_C_ExecuteUbergraph_ABP_Zomb_simple_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_Zomb_simple_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Zomb_simple_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Zomb_simple.ABP_Zomb_simple_C");
		return ptr;
	}

}


