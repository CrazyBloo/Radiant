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
	 * 		Name   -> Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_Mixamo_Man_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.AnimGraph");
		
		UABP_Mixamo_Man_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.SetWeaponType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pistol                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_Mixamo_Man_C::SetWeaponType(bool Pistol)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.SetWeaponType");
		
		UABP_Mixamo_Man_C_SetWeaponType_Params params {};
		params.Pistol = Pistol;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.SetTrackPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TrackPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_Mixamo_Man_C::SetTrackPlayer(bool TrackPlayer)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.SetTrackPlayer");
		
		UABP_Mixamo_Man_C_SetTrackPlayer_Params params {};
		params.TrackPlayer = TrackPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.Death
	 * 		Flags  -> ()
	 */
	void UABP_Mixamo_Man_C::Death()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.Death");
		
		UABP_Mixamo_Man_C_Death_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.Revive
	 * 		Flags  -> ()
	 */
	void UABP_Mixamo_Man_C::Revive()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.Revive");
		
		UABP_Mixamo_Man_C_Revive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UABP_Mixamo_Man_C::BlueprintBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.BlueprintBeginPlay");
		
		UABP_Mixamo_Man_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.FireWeapon
	 * 		Flags  -> ()
	 */
	void UABP_Mixamo_Man_C::FireWeapon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.FireWeapon");
		
		UABP_Mixamo_Man_C_FireWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Mixamo_Man_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.BlueprintUpdateAnimation");
		
		UABP_Mixamo_Man_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.JumpPressed
	 * 		Flags  -> ()
	 */
	void UABP_Mixamo_Man_C::JumpPressed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.JumpPressed");
		
		UABP_Mixamo_Man_C_JumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.SetCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SetCrouch                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_Mixamo_Man_C::SetCrouch(bool SetCrouch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.SetCrouch");
		
		UABP_Mixamo_Man_C_SetCrouch_Params params {};
		params.SetCrouch = SetCrouch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.ReloadWeapon
	 * 		Flags  -> ()
	 */
	void UABP_Mixamo_Man_C::ReloadWeapon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.ReloadWeapon");
		
		UABP_Mixamo_Man_C_ReloadWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.HitReaction
	 * 		Flags  -> ()
	 */
	void UABP_Mixamo_Man_C::HitReaction()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.HitReaction");
		
		UABP_Mixamo_Man_C_HitReaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.StartMeleeAttack
	 * 		Flags  -> ()
	 */
	void UABP_Mixamo_Man_C::StartMeleeAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.StartMeleeAttack");
		
		UABP_Mixamo_Man_C_StartMeleeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.AnimNotify_FootstepHit
	 * 		Flags  -> ()
	 */
	void UABP_Mixamo_Man_C::AnimNotify_FootstepHit()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.AnimNotify_FootstepHit");
		
		UABP_Mixamo_Man_C_AnimNotify_FootstepHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.ChangeLocomotion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELocomotionState                                   NewLocomotion                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Mixamo_Man_C::ChangeLocomotion(ELocomotionState NewLocomotion)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.ChangeLocomotion");
		
		UABP_Mixamo_Man_C_ChangeLocomotion_Params params {};
		params.NewLocomotion = NewLocomotion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.ExecuteUbergraph_ABP_Mixamo_Man
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Mixamo_Man_C::ExecuteUbergraph_ABP_Mixamo_Man(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Mixamo_Man.ABP_Mixamo_Man_C.ExecuteUbergraph_ABP_Mixamo_Man");
		
		UABP_Mixamo_Man_C_ExecuteUbergraph_ABP_Mixamo_Man_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_Mixamo_Man_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Mixamo_Man_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Mixamo_Man.ABP_Mixamo_Man_C");
		return ptr;
	}

}


