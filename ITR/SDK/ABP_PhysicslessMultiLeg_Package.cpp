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
	 * 		Name   -> Function ABP_PhysicslessMultiLeg.ABP_PhysicslessMultiLeg_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_PhysicslessMultiLeg_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_PhysicslessMultiLeg.ABP_PhysicslessMultiLeg_C.AnimGraph");
		
		UABP_PhysicslessMultiLeg_C_AnimGraph_Params params {};
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
	 * 		Name   -> Function ABP_PhysicslessMultiLeg.ABP_PhysicslessMultiLeg_C.ExecuteUbergraph_ABP_PhysicslessMultiLeg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_PhysicslessMultiLeg_C::ExecuteUbergraph_ABP_PhysicslessMultiLeg(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_PhysicslessMultiLeg.ABP_PhysicslessMultiLeg_C.ExecuteUbergraph_ABP_PhysicslessMultiLeg");
		
		UABP_PhysicslessMultiLeg_C_ExecuteUbergraph_ABP_PhysicslessMultiLeg_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_PhysicslessMultiLeg_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_PhysicslessMultiLeg_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_PhysicslessMultiLeg.ABP_PhysicslessMultiLeg_C");
		return ptr;
	}

}


