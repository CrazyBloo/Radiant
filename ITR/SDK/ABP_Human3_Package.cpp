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
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_Human3_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.AnimGraph");
		
		UABP_Human3_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.Can Jump
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldJump                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bJumping                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_Human3_C::CanJump(bool ShouldJump, bool* bJumping)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.Can Jump");
		
		UABP_Human3_C_CanJump_Params params {};
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
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_E33368A641B431A8403149AB1C4DE090
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_E33368A641B431A8403149AB1C4DE090()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_E33368A641B431A8403149AB1C4DE090");
		
		UABP_Human3_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_E33368A641B431A8403149AB1C4DE090_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_6CE45C8A466334DB1619FCBC81D3447F
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_6CE45C8A466334DB1619FCBC81D3447F()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_6CE45C8A466334DB1619FCBC81D3447F");
		
		UABP_Human3_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_6CE45C8A466334DB1619FCBC81D3447F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_E83CF9C54AF9867B64E58DAE9C47271D
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_E83CF9C54AF9867B64E58DAE9C47271D()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_E83CF9C54AF9867B64E58DAE9C47271D");
		
		UABP_Human3_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_E83CF9C54AF9867B64E58DAE9C47271D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_LayeredBoneBlend_3E4CADFD4FAC2A81D6EA5EAC0BB7BF95
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_LayeredBoneBlend_3E4CADFD4FAC2A81D6EA5EAC0BB7BF95()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_LayeredBoneBlend_3E4CADFD4FAC2A81D6EA5EAC0BB7BF95");
		
		UABP_Human3_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_LayeredBoneBlend_3E4CADFD4FAC2A81D6EA5EAC0BB7BF95_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_BlendListByBool_48D5116044A4871161628D842DA0B073
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_BlendListByBool_48D5116044A4871161628D842DA0B073()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_BlendListByBool_48D5116044A4871161628D842DA0B073");
		
		UABP_Human3_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_BlendListByBool_48D5116044A4871161628D842DA0B073_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_LayeredBoneBlend_10BF7AA9443BC4A42D8BAD95B39C4790
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_LayeredBoneBlend_10BF7AA9443BC4A42D8BAD95B39C4790()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_LayeredBoneBlend_10BF7AA9443BC4A42D8BAD95B39C4790");
		
		UABP_Human3_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_LayeredBoneBlend_10BF7AA9443BC4A42D8BAD95B39C4790_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_981133DC4B34EC3561DA90B36AB2F26A
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_981133DC4B34EC3561DA90B36AB2F26A()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_981133DC4B34EC3561DA90B36AB2F26A");
		
		UABP_Human3_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_981133DC4B34EC3561DA90B36AB2F26A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_BlendListByBool_1C40E5EB4329DA2CC1946B83949B8506
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_BlendListByBool_1C40E5EB4329DA2CC1946B83949B8506()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_BlendListByBool_1C40E5EB4329DA2CC1946B83949B8506");
		
		UABP_Human3_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_BlendListByBool_1C40E5EB4329DA2CC1946B83949B8506_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_LayeredBoneBlend_06F9706A4F938FA41A2065AD9734DDB2
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_LayeredBoneBlend_06F9706A4F938FA41A2065AD9734DDB2()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_LayeredBoneBlend_06F9706A4F938FA41A2065AD9734DDB2");
		
		UABP_Human3_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_LayeredBoneBlend_06F9706A4F938FA41A2065AD9734DDB2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_LayeredBoneBlend_1EA8E03444C2E291FA16AC9C951D2C86
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_LayeredBoneBlend_1EA8E03444C2E291FA16AC9C951D2C86()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_LayeredBoneBlend_1EA8E03444C2E291FA16AC9C951D2C86");
		
		UABP_Human3_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_LayeredBoneBlend_1EA8E03444C2E291FA16AC9C951D2C86_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_477533B7425E55B968359FB4D1362AA1
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_477533B7425E55B968359FB4D1362AA1()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_477533B7425E55B968359FB4D1362AA1");
		
		UABP_Human3_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_477533B7425E55B968359FB4D1362AA1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_1491590246755BD1D739039D25FF2EB3
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_1491590246755BD1D739039D25FF2EB3()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_1491590246755BD1D739039D25FF2EB3");
		
		UABP_Human3_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_1491590246755BD1D739039D25FF2EB3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_48F7936640A86518F257859A07E8C5F0
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_48F7936640A86518F257859A07E8C5F0()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_48F7936640A86518F257859A07E8C5F0");
		
		UABP_Human3_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_48F7936640A86518F257859A07E8C5F0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Human3_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.BlueprintUpdateAnimation");
		
		UABP_Human3_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.AnimNotify_Jump
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::AnimNotify_Jump()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.AnimNotify_Jump");
		
		UABP_Human3_C_AnimNotify_Jump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.AnimNotify_IdleStart
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::AnimNotify_IdleStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.AnimNotify_IdleStart");
		
		UABP_Human3_C_AnimNotify_IdleStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.AnimNotify_JogStart
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::AnimNotify_JogStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.AnimNotify_JogStart");
		
		UABP_Human3_C_AnimNotify_JogStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.JumpPressed
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::JumpPressed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.JumpPressed");
		
		UABP_Human3_C_JumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.FireWeapon
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::FireWeapon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.FireWeapon");
		
		UABP_Human3_C_FireWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.StartMeleeAttack
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::StartMeleeAttack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.StartMeleeAttack");
		
		UABP_Human3_C_StartMeleeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.Revive
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::Revive()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.Revive");
		
		UABP_Human3_C_Revive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.ReloadWeapon
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::ReloadWeapon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.ReloadWeapon");
		
		UABP_Human3_C_ReloadWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.HitReaction
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::HitReaction()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.HitReaction");
		
		UABP_Human3_C_HitReaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.SetCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SetCrouch                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_Human3_C::SetCrouch(bool SetCrouch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.SetCrouch");
		
		UABP_Human3_C_SetCrouch_Params params {};
		params.SetCrouch = SetCrouch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.Death
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::Death()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.Death");
		
		UABP_Human3_C_Death_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.ChangeLocomotion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELocomotionState                                   NewLocomotion                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Human3_C::ChangeLocomotion(ELocomotionState NewLocomotion)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.ChangeLocomotion");
		
		UABP_Human3_C_ChangeLocomotion_Params params {};
		params.NewLocomotion = NewLocomotion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_339A21BF401B114C9EEC38A0D0BF20CB
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_339A21BF401B114C9EEC38A0D0BF20CB()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_339A21BF401B114C9EEC38A0D0BF20CB");
		
		UABP_Human3_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_339A21BF401B114C9EEC38A0D0BF20CB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.BlueprintBeginPlay
	 * 		Flags  -> ()
	 */
	void UABP_Human3_C::BlueprintBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.BlueprintBeginPlay");
		
		UABP_Human3_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.SetTrackPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TrackPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_Human3_C::SetTrackPlayer(bool TrackPlayer)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.SetTrackPlayer");
		
		UABP_Human3_C_SetTrackPlayer_Params params {};
		params.TrackPlayer = TrackPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.SetWeaponType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pistol                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UABP_Human3_C::SetWeaponType(bool Pistol)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.SetWeaponType");
		
		UABP_Human3_C_SetWeaponType_Params params {};
		params.Pistol = Pistol;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Human3.ABP_Human3_C.ExecuteUbergraph_ABP_Human3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Human3_C::ExecuteUbergraph_ABP_Human3(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Human3.ABP_Human3_C.ExecuteUbergraph_ABP_Human3");
		
		UABP_Human3_C_ExecuteUbergraph_ABP_Human3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_Human3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Human3_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Human3.ABP_Human3_C");
		return ptr;
	}

}


