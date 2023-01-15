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
	 * 		Name   -> Function ABP_Fragment2.ABP_Fragment2_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_Fragment2_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Fragment2.ABP_Fragment2_C.AnimGraph");
		
		UABP_Fragment2_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Fragment2.ABP_Fragment2_C.SetCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SetCrouch                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_Fragment2_C::SetCrouch(bool SetCrouch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Fragment2.ABP_Fragment2_C.SetCrouch");
		
		UABP_Fragment2_C_SetCrouch_Params params {};
		params.SetCrouch = SetCrouch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Fragment2.ABP_Fragment2_C.SetWeaponType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pistol                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_Fragment2_C::SetWeaponType(bool Pistol)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Fragment2.ABP_Fragment2_C.SetWeaponType");
		
		UABP_Fragment2_C_SetWeaponType_Params params {};
		params.Pistol = Pistol;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Fragment2.ABP_Fragment2_C.SetTrackPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TrackPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_Fragment2_C::SetTrackPlayer(bool TrackPlayer)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Fragment2.ABP_Fragment2_C.SetTrackPlayer");
		
		UABP_Fragment2_C_SetTrackPlayer_Params params {};
		params.TrackPlayer = TrackPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Fragment2.ABP_Fragment2_C.StartMeleeAttack
	 * 		Flags  -> ()
	 */
	void UABP_Fragment2_C::StartMeleeAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Fragment2.ABP_Fragment2_C.StartMeleeAttack");
		
		UABP_Fragment2_C_StartMeleeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Fragment2.ABP_Fragment2_C.HitReaction
	 * 		Flags  -> ()
	 */
	void UABP_Fragment2_C::HitReaction()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Fragment2.ABP_Fragment2_C.HitReaction");
		
		UABP_Fragment2_C_HitReaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Fragment2.ABP_Fragment2_C.ReloadWeapon
	 * 		Flags  -> ()
	 */
	void UABP_Fragment2_C::ReloadWeapon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Fragment2.ABP_Fragment2_C.ReloadWeapon");
		
		UABP_Fragment2_C_ReloadWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Fragment2.ABP_Fragment2_C.FireWeapon
	 * 		Flags  -> ()
	 */
	void UABP_Fragment2_C::FireWeapon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Fragment2.ABP_Fragment2_C.FireWeapon");
		
		UABP_Fragment2_C_FireWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Fragment2.ABP_Fragment2_C.JumpPressed
	 * 		Flags  -> ()
	 */
	void UABP_Fragment2_C::JumpPressed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Fragment2.ABP_Fragment2_C.JumpPressed");
		
		UABP_Fragment2_C_JumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Fragment2.ABP_Fragment2_C.ChangeLocomotion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELocomotionState                                   NewLocomotion                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Fragment2_C::ChangeLocomotion(ELocomotionState NewLocomotion)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Fragment2.ABP_Fragment2_C.ChangeLocomotion");
		
		UABP_Fragment2_C_ChangeLocomotion_Params params {};
		params.NewLocomotion = NewLocomotion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Fragment2.ABP_Fragment2_C.Death
	 * 		Flags  -> ()
	 */
	void UABP_Fragment2_C::Death()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Fragment2.ABP_Fragment2_C.Death");
		
		UABP_Fragment2_C_Death_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Fragment2.ABP_Fragment2_C.AnimNotify_AN_Step
	 * 		Flags  -> ()
	 */
	void UABP_Fragment2_C::AnimNotify_AN_Step()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Fragment2.ABP_Fragment2_C.AnimNotify_AN_Step");
		
		UABP_Fragment2_C_AnimNotify_AN_Step_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Fragment2.ABP_Fragment2_C.Revive
	 * 		Flags  -> ()
	 */
	void UABP_Fragment2_C::Revive()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Fragment2.ABP_Fragment2_C.Revive");
		
		UABP_Fragment2_C_Revive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Fragment2.ABP_Fragment2_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Fragment2_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Fragment2.ABP_Fragment2_C.BlueprintUpdateAnimation");
		
		UABP_Fragment2_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Fragment2.ABP_Fragment2_C.ExecuteUbergraph_ABP_Fragment2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Fragment2_C::ExecuteUbergraph_ABP_Fragment2(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Fragment2.ABP_Fragment2_C.ExecuteUbergraph_ABP_Fragment2");
		
		UABP_Fragment2_C_ExecuteUbergraph_ABP_Fragment2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_Fragment2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Fragment2_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Fragment2.ABP_Fragment2_C");
		return ptr;
	}

}


