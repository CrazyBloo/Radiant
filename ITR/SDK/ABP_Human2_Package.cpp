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
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_Human2_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.AnimGraph");
		
		UABP_Human2_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.calcGait
	 * 		Flags  -> ()
	 */
	void UABP_Human2_C::calcGait()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.calcGait");
		
		UABP_Human2_C_calcGait_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.Can Jump
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldJump                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bJumping                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_Human2_C::CanJump(bool ShouldJump, bool* bJumping)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.Can Jump");
		
		UABP_Human2_C_CanJump_Params params {};
		params.ShouldJump = ShouldJump;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bJumping != nullptr)
			*bJumping = params.bJumping;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_DCD91D10409BBED46F9F9BA8C939D4F3
	 * 		Flags  -> ()
	 */
	void UABP_Human2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_DCD91D10409BBED46F9F9BA8C939D4F3()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_DCD91D10409BBED46F9F9BA8C939D4F3");
		
		UABP_Human2_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_DCD91D10409BBED46F9F9BA8C939D4F3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_BlendListByBool_88C25A1544E48E5982233592121174A6
	 * 		Flags  -> ()
	 */
	void UABP_Human2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_BlendListByBool_88C25A1544E48E5982233592121174A6()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_BlendListByBool_88C25A1544E48E5982233592121174A6");
		
		UABP_Human2_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_BlendListByBool_88C25A1544E48E5982233592121174A6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_BlendListByBool_2FEDF374418DBD20CC3D5CB0A1991CCB
	 * 		Flags  -> ()
	 */
	void UABP_Human2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_BlendListByBool_2FEDF374418DBD20CC3D5CB0A1991CCB()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_BlendListByBool_2FEDF374418DBD20CC3D5CB0A1991CCB");
		
		UABP_Human2_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_BlendListByBool_2FEDF374418DBD20CC3D5CB0A1991CCB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_BlendListByBool_9AEE876440F37AF4C2531BBB9C0CB734
	 * 		Flags  -> ()
	 */
	void UABP_Human2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_BlendListByBool_9AEE876440F37AF4C2531BBB9C0CB734()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_BlendListByBool_9AEE876440F37AF4C2531BBB9C0CB734");
		
		UABP_Human2_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_BlendListByBool_9AEE876440F37AF4C2531BBB9C0CB734_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_53764F204D74C1B8B60CDE8AE034EA9A
	 * 		Flags  -> ()
	 */
	void UABP_Human2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_53764F204D74C1B8B60CDE8AE034EA9A()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_53764F204D74C1B8B60CDE8AE034EA9A");
		
		UABP_Human2_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_53764F204D74C1B8B60CDE8AE034EA9A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_BlendListByBool_CADFB79647F71B01DABE9C98DD07A307
	 * 		Flags  -> ()
	 */
	void UABP_Human2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_BlendListByBool_CADFB79647F71B01DABE9C98DD07A307()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_BlendListByBool_CADFB79647F71B01DABE9C98DD07A307");
		
		UABP_Human2_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_BlendListByBool_CADFB79647F71B01DABE9C98DD07A307_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_41C6659646EFCA34A057DAA39366E4D8
	 * 		Flags  -> ()
	 */
	void UABP_Human2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_41C6659646EFCA34A057DAA39366E4D8()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_41C6659646EFCA34A057DAA39366E4D8");
		
		UABP_Human2_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_41C6659646EFCA34A057DAA39366E4D8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_50C37BA54DDA7ABC87CACC8C27901129
	 * 		Flags  -> ()
	 */
	void UABP_Human2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_50C37BA54DDA7ABC87CACC8C27901129()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_50C37BA54DDA7ABC87CACC8C27901129");
		
		UABP_Human2_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_50C37BA54DDA7ABC87CACC8C27901129_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_D9770D164071E4820527B78039A40B6E
	 * 		Flags  -> ()
	 */
	void UABP_Human2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_D9770D164071E4820527B78039A40B6E()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_D9770D164071E4820527B78039A40B6E");
		
		UABP_Human2_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_D9770D164071E4820527B78039A40B6E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Human2_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.BlueprintUpdateAnimation");
		
		UABP_Human2_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.AnimNotify_Jump
	 * 		Flags  -> ()
	 */
	void UABP_Human2_C::AnimNotify_Jump()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.AnimNotify_Jump");
		
		UABP_Human2_C_AnimNotify_Jump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.AnimNotify_IdleStart
	 * 		Flags  -> ()
	 */
	void UABP_Human2_C::AnimNotify_IdleStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.AnimNotify_IdleStart");
		
		UABP_Human2_C_AnimNotify_IdleStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.AnimNotify_JogStart
	 * 		Flags  -> ()
	 */
	void UABP_Human2_C::AnimNotify_JogStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.AnimNotify_JogStart");
		
		UABP_Human2_C_AnimNotify_JogStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_F348F9CE46954FEC520654841E4D57C1
	 * 		Flags  -> ()
	 */
	void UABP_Human2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_F348F9CE46954FEC520654841E4D57C1()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_F348F9CE46954FEC520654841E4D57C1");
		
		UABP_Human2_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_F348F9CE46954FEC520654841E4D57C1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.StartMeleeAttack
	 * 		Flags  -> ()
	 */
	void UABP_Human2_C::StartMeleeAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.StartMeleeAttack");
		
		UABP_Human2_C_StartMeleeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.JumpPressed
	 * 		Flags  -> ()
	 */
	void UABP_Human2_C::JumpPressed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.JumpPressed");
		
		UABP_Human2_C_JumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.FireWeapon
	 * 		Flags  -> ()
	 */
	void UABP_Human2_C::FireWeapon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.FireWeapon");
		
		UABP_Human2_C_FireWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.Revive
	 * 		Flags  -> ()
	 */
	void UABP_Human2_C::Revive()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.Revive");
		
		UABP_Human2_C_Revive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.Death
	 * 		Flags  -> ()
	 */
	void UABP_Human2_C::Death()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.Death");
		
		UABP_Human2_C_Death_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.ReloadWeapon
	 * 		Flags  -> ()
	 */
	void UABP_Human2_C::ReloadWeapon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.ReloadWeapon");
		
		UABP_Human2_C_ReloadWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.HitReaction
	 * 		Flags  -> ()
	 */
	void UABP_Human2_C::HitReaction()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.HitReaction");
		
		UABP_Human2_C_HitReaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.SetCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SetCrouch                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_Human2_C::SetCrouch(bool SetCrouch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.SetCrouch");
		
		UABP_Human2_C_SetCrouch_Params params {};
		params.SetCrouch = SetCrouch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.SetTrackPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TrackPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_Human2_C::SetTrackPlayer(bool TrackPlayer)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.SetTrackPlayer");
		
		UABP_Human2_C_SetTrackPlayer_Params params {};
		params.TrackPlayer = TrackPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.SetWeaponType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pistol                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_Human2_C::SetWeaponType(bool Pistol)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.SetWeaponType");
		
		UABP_Human2_C_SetWeaponType_Params params {};
		params.Pistol = Pistol;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.ChangeLocomotion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELocomotionState                                   NewLocomotion                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Human2_C::ChangeLocomotion(ELocomotionState NewLocomotion)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.ChangeLocomotion");
		
		UABP_Human2_C_ChangeLocomotion_Params params {};
		params.NewLocomotion = NewLocomotion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human2.ABP_Human2_C.ExecuteUbergraph_ABP_Human2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Human2_C::ExecuteUbergraph_ABP_Human2(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human2.ABP_Human2_C.ExecuteUbergraph_ABP_Human2");
		
		UABP_Human2_C_ExecuteUbergraph_ABP_Human2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_Human2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Human2_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Human2.ABP_Human2_C");
		return ptr;
	}

}


