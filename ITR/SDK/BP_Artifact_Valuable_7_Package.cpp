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
	 * 		Name   -> Function BP_Artifact_Valuable_7.BP_Artifact_Valuable_6_C.ApplyEffect
	 * 		Flags  -> ()
	 */
	void ABP_Artifact_Valuable_6_C::ApplyEffect()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_Valuable_7.BP_Artifact_Valuable_6_C.ApplyEffect");
		
		ABP_Artifact_Valuable_6_C_ApplyEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Artifact_Valuable_7.BP_Artifact_Valuable_6_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Artifact_Valuable_6_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_Valuable_7.BP_Artifact_Valuable_6_C.OnGripRelease");
		
		ABP_Artifact_Valuable_6_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BP_Artifact_Valuable_7.BP_Artifact_Valuable_6_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABP_Artifact_Valuable_6_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_Valuable_7.BP_Artifact_Valuable_6_C.OnUsed");
		
		ABP_Artifact_Valuable_6_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Artifact_Valuable_7.BP_Artifact_Valuable_6_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Artifact_Valuable_6_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_Valuable_7.BP_Artifact_Valuable_6_C.ReceiveEndPlay");
		
		ABP_Artifact_Valuable_6_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Artifact_Valuable_7.BP_Artifact_Valuable_6_C.StopUse
	 * 		Flags  -> ()
	 */
	void ABP_Artifact_Valuable_6_C::StopUse()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_Valuable_7.BP_Artifact_Valuable_6_C.StopUse");
		
		ABP_Artifact_Valuable_6_C_StopUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Artifact_Valuable_7.BP_Artifact_Valuable_6_C.ExecuteUbergraph_BP_Artifact_Valuable_7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Artifact_Valuable_6_C::ExecuteUbergraph_BP_Artifact_Valuable_7(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_Valuable_7.BP_Artifact_Valuable_6_C.ExecuteUbergraph_BP_Artifact_Valuable_7");
		
		ABP_Artifact_Valuable_6_C_ExecuteUbergraph_BP_Artifact_Valuable_7_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Artifact_Valuable_6_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Artifact_Valuable_6_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Artifact_Valuable_7.BP_Artifact_Valuable_6_C");
		return ptr;
	}

}


