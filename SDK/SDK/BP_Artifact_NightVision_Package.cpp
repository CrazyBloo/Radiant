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
	 * 		Name   -> Function BP_Artifact_NightVision.BP_Artifact_NightVision_C.FadeTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Artifact_NightVision_C::FadeTimeline__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_NightVision.BP_Artifact_NightVision_C.FadeTimeline__FinishedFunc");
		
		ABP_Artifact_NightVision_C_FadeTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Artifact_NightVision.BP_Artifact_NightVision_C.FadeTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Artifact_NightVision_C::FadeTimeline__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_NightVision.BP_Artifact_NightVision_C.FadeTimeline__UpdateFunc");
		
		ABP_Artifact_NightVision_C_FadeTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Artifact_NightVision.BP_Artifact_NightVision_C.Bind
	 * 		Flags  -> ()
	 */
	void ABP_Artifact_NightVision_C::Bind()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_NightVision.BP_Artifact_NightVision_C.Bind");
		
		ABP_Artifact_NightVision_C_Bind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Artifact_NightVision.BP_Artifact_NightVision_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Artifact_NightVision_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_NightVision.BP_Artifact_NightVision_C.OnGripRelease");
		
		ABP_Artifact_NightVision_C_OnGripRelease_Params params {};
		params.ReleasingController = ReleasingController;
		params.GripInformation = GripInformation;
		params.bWasSocketed = bWasSocketed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Artifact_NightVision.BP_Artifact_NightVision_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABP_Artifact_NightVision_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_NightVision.BP_Artifact_NightVision_C.OnUsed");
		
		ABP_Artifact_NightVision_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Artifact_NightVision.BP_Artifact_NightVision_C.StopUse
	 * 		Flags  -> ()
	 */
	void ABP_Artifact_NightVision_C::StopUse()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_NightVision.BP_Artifact_NightVision_C.StopUse");
		
		ABP_Artifact_NightVision_C_StopUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Artifact_NightVision.BP_Artifact_NightVision_C.ExecuteUbergraph_BP_Artifact_NightVision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Artifact_NightVision_C::ExecuteUbergraph_BP_Artifact_NightVision(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_NightVision.BP_Artifact_NightVision_C.ExecuteUbergraph_BP_Artifact_NightVision");
		
		ABP_Artifact_NightVision_C_ExecuteUbergraph_BP_Artifact_NightVision_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Artifact_NightVision_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Artifact_NightVision_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Artifact_NightVision.BP_Artifact_NightVision_C");
		return ptr;
	}

}


