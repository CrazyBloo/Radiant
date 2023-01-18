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
	 * 		Name   -> Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_Player_MainWithHands_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.AnimGraph");
		
		UABP_Player_MainWithHands_C_AnimGraph_Params params {};
		params.InPose = InPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.SetLeftHand
	 * 		Flags  -> ()
	 */
	void UABP_Player_MainWithHands_C::SetLeftHand()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.SetLeftHand");
		
		UABP_Player_MainWithHands_C_SetLeftHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.CalculateGait
	 * 		Flags  -> ()
	 */
	void UABP_Player_MainWithHands_C::CalculateGait()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.CalculateGait");
		
		UABP_Player_MainWithHands_C_CalculateGait_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.ReadDefaultData
	 * 		Flags  -> ()
	 */
	void UABP_Player_MainWithHands_C::ReadDefaultData()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.ReadDefaultData");
		
		UABP_Player_MainWithHands_C_ReadDefaultData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.CalculateTickData
	 * 		Flags  -> ()
	 */
	void UABP_Player_MainWithHands_C::CalculateTickData()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.CalculateTickData");
		
		UABP_Player_MainWithHands_C_CalculateTickData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.BlueprintInitializeAnimation
	 * 		Flags  -> ()
	 */
	void UABP_Player_MainWithHands_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.BlueprintInitializeAnimation");
		
		UABP_Player_MainWithHands_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Player_MainWithHands_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.BlueprintUpdateAnimation");
		
		UABP_Player_MainWithHands_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.ExecuteUbergraph_ABP_Player_MainWithHands
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Player_MainWithHands_C::ExecuteUbergraph_ABP_Player_MainWithHands(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Player_MainWithHands.ABP_Player_MainWithHands_C.ExecuteUbergraph_ABP_Player_MainWithHands");
		
		UABP_Player_MainWithHands_C_ExecuteUbergraph_ABP_Player_MainWithHands_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_Player_MainWithHands_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Player_MainWithHands_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Player_MainWithHands.ABP_Player_MainWithHands_C");
		return ptr;
	}

}


