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
	 * 		Name   -> Function BP_Artifact_Regen.BP_Artifact_Regen_C.ApplyEffect
	 * 		Flags  -> ()
	 */
	void ABP_Artifact_Regen_C::ApplyEffect()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_Regen.BP_Artifact_Regen_C.ApplyEffect");
		
		ABP_Artifact_Regen_C_ApplyEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Artifact_Regen.BP_Artifact_Regen_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Artifact_Regen_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_Regen.BP_Artifact_Regen_C.OnGripRelease");
		
		ABP_Artifact_Regen_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BP_Artifact_Regen.BP_Artifact_Regen_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABP_Artifact_Regen_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_Regen.BP_Artifact_Regen_C.OnUsed");
		
		ABP_Artifact_Regen_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Artifact_Regen.BP_Artifact_Regen_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Artifact_Regen_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_Regen.BP_Artifact_Regen_C.ReceiveEndPlay");
		
		ABP_Artifact_Regen_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Artifact_Regen.BP_Artifact_Regen_C.StopUse
	 * 		Flags  -> ()
	 */
	void ABP_Artifact_Regen_C::StopUse()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_Regen.BP_Artifact_Regen_C.StopUse");
		
		ABP_Artifact_Regen_C_StopUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Artifact_Regen.BP_Artifact_Regen_C.ExecuteUbergraph_BP_Artifact_Regen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Artifact_Regen_C::ExecuteUbergraph_BP_Artifact_Regen(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Artifact_Regen.BP_Artifact_Regen_C.ExecuteUbergraph_BP_Artifact_Regen");
		
		ABP_Artifact_Regen_C_ExecuteUbergraph_BP_Artifact_Regen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Artifact_Regen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Artifact_Regen_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Artifact_Regen.BP_Artifact_Regen_C");
		return ptr;
	}

}


