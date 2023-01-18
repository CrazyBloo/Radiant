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
	 * 		Name   -> Function BP_Artifact_Valuable_2.BP_Artifact_Valuable_1_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Artifact_Valuable_1_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_Valuable_2.BP_Artifact_Valuable_1_C.Timeline_1__FinishedFunc");
		
		ABP_Artifact_Valuable_1_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Artifact_Valuable_2.BP_Artifact_Valuable_1_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Artifact_Valuable_1_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_Valuable_2.BP_Artifact_Valuable_1_C.Timeline_1__UpdateFunc");
		
		ABP_Artifact_Valuable_1_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Artifact_Valuable_2.BP_Artifact_Valuable_1_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Artifact_Valuable_1_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_Valuable_2.BP_Artifact_Valuable_1_C.OnGrip");
		
		ABP_Artifact_Valuable_1_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Artifact_Valuable_2.BP_Artifact_Valuable_1_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Artifact_Valuable_1_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_Valuable_2.BP_Artifact_Valuable_1_C.OnGripRelease");
		
		ABP_Artifact_Valuable_1_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BP_Artifact_Valuable_2.BP_Artifact_Valuable_1_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABP_Artifact_Valuable_1_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_Valuable_2.BP_Artifact_Valuable_1_C.OnUsed");
		
		ABP_Artifact_Valuable_1_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Artifact_Valuable_2.BP_Artifact_Valuable_1_C.Bind
	 * 		Flags  -> ()
	 */
	void ABP_Artifact_Valuable_1_C::Bind()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_Valuable_2.BP_Artifact_Valuable_1_C.Bind");
		
		ABP_Artifact_Valuable_1_C_Bind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Artifact_Valuable_2.BP_Artifact_Valuable_1_C.StopUse
	 * 		Flags  -> ()
	 */
	void ABP_Artifact_Valuable_1_C::StopUse()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_Valuable_2.BP_Artifact_Valuable_1_C.StopUse");
		
		ABP_Artifact_Valuable_1_C_StopUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Artifact_Valuable_2.BP_Artifact_Valuable_1_C.ExecuteUbergraph_BP_Artifact_Valuable_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Artifact_Valuable_1_C::ExecuteUbergraph_BP_Artifact_Valuable_2(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_Valuable_2.BP_Artifact_Valuable_1_C.ExecuteUbergraph_BP_Artifact_Valuable_2");
		
		ABP_Artifact_Valuable_1_C_ExecuteUbergraph_BP_Artifact_Valuable_2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Artifact_Valuable_1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Artifact_Valuable_1_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Artifact_Valuable_2.BP_Artifact_Valuable_1_C");
		return ptr;
	}

}


