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
	 * 		Name   -> Function BTR70_Anim_BP.BTR70_Anim_BP_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBTR70_Anim_BP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTR70_Anim_BP.BTR70_Anim_BP_C.AnimGraph");
		
		UBTR70_Anim_BP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTR70_Anim_BP.BTR70_Anim_BP_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTR70_Anim_BP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTR70_Anim_BP.BTR70_Anim_BP_C.BlueprintUpdateAnimation");
		
		UBTR70_Anim_BP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTR70_Anim_BP.BTR70_Anim_BP_C.ExecuteUbergraph_BTR70_Anim_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTR70_Anim_BP_C::ExecuteUbergraph_BTR70_Anim_BP(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTR70_Anim_BP.BTR70_Anim_BP_C.ExecuteUbergraph_BTR70_Anim_BP");
		
		UBTR70_Anim_BP_C_ExecuteUbergraph_BTR70_Anim_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTR70_Anim_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTR70_Anim_BP_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass BTR70_Anim_BP.BTR70_Anim_BP_C");
		return ptr;
	}

}


