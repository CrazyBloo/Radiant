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
	 * 		Name   -> Function BPA_Artifact.BPA_Artifact_C.IsVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Artifact_C::IsVisible(bool* Visible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Artifact.BPA_Artifact_C.IsVisible");
		
		ABPA_Artifact_C_IsVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visible != nullptr)
			*Visible = params.Visible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Artifact.BPA_Artifact_C.DestroyArtifact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Particles                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Artifact_C::DestroyArtifact(bool Particles)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Artifact.BPA_Artifact_C.DestroyArtifact");
		
		ABPA_Artifact_C_DestroyArtifact_Params params {};
		params.Particles = Particles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Artifact.BPA_Artifact_C.ApplyEffect
	 * 		Flags  -> ()
	 */
	void ABPA_Artifact_C::ApplyEffect()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Artifact.BPA_Artifact_C.ApplyEffect");
		
		ABPA_Artifact_C_ApplyEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Artifact.BPA_Artifact_C.ReduceDurabilityPerCall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Artifact_C::ReduceDurabilityPerCall(float DeltaTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Artifact.BPA_Artifact_C.ReduceDurabilityPerCall");
		
		ABPA_Artifact_C_ReduceDurabilityPerCall_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Artifact.BPA_Artifact_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABPA_Artifact_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Artifact.BPA_Artifact_C.Timeline_0__FinishedFunc");
		
		ABPA_Artifact_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Artifact.BPA_Artifact_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABPA_Artifact_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Artifact.BPA_Artifact_C.Timeline_0__UpdateFunc");
		
		ABPA_Artifact_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Artifact.BPA_Artifact_C.MakeVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NoGlow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               dropItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Artifact_C::MakeVisible(bool NoGlow, bool dropItem)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Artifact.BPA_Artifact_C.MakeVisible");
		
		ABPA_Artifact_C_MakeVisible_Params params {};
		params.NoGlow = NoGlow;
		params.dropItem = dropItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Artifact.BPA_Artifact_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABPA_Artifact_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Artifact.BPA_Artifact_C.OnGrip");
		
		ABPA_Artifact_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Artifact.BPA_Artifact_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Artifact_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Artifact.BPA_Artifact_C.OnGripRelease");
		
		ABPA_Artifact_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BPA_Artifact.BPA_Artifact_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Artifact_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Artifact.BPA_Artifact_C.ReceiveTick");
		
		ABPA_Artifact_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Artifact.BPA_Artifact_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABPA_Artifact_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Artifact.BPA_Artifact_C.OnUsed");
		
		ABPA_Artifact_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Artifact.BPA_Artifact_C.OnEndUsed
	 * 		Flags  -> ()
	 */
	void ABPA_Artifact_C::OnEndUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Artifact.BPA_Artifact_C.OnEndUsed");
		
		ABPA_Artifact_C_OnEndUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Artifact.BPA_Artifact_C.MadeVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABPA_Artifact_C*                             ArtRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Artifact_C::MadeVisible(class ABPA_Artifact_C* ArtRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Artifact.BPA_Artifact_C.MadeVisible");
		
		ABPA_Artifact_C_MadeVisible_Params params {};
		params.ArtRef = ArtRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Artifact.BPA_Artifact_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABPA_Artifact_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Artifact.BPA_Artifact_C.OnReconfigure");
		
		ABPA_Artifact_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Artifact.BPA_Artifact_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Artifact_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Artifact.BPA_Artifact_C.ReceiveEndPlay");
		
		ABPA_Artifact_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Artifact.BPA_Artifact_C.MakeHidden
	 * 		Flags  -> ()
	 */
	void ABPA_Artifact_C::MakeHidden()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Artifact.BPA_Artifact_C.MakeHidden");
		
		ABPA_Artifact_C_MakeHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Artifact.BPA_Artifact_C.ExecuteUbergraph_BPA_Artifact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Artifact_C::ExecuteUbergraph_BPA_Artifact(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Artifact.BPA_Artifact_C.ExecuteUbergraph_BPA_Artifact");
		
		ABPA_Artifact_C_ExecuteUbergraph_BPA_Artifact_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_Artifact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_Artifact_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_Artifact.BPA_Artifact_C");
		return ptr;
	}

}


