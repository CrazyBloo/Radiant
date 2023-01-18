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
	 * 		Name   -> Function GS_Smoothing.GS_Smoothing_C.SetRecoilState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsRecoil                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGS_Smoothing_C::SetRecoilState(bool bIsRecoil)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GS_Smoothing.GS_Smoothing_C.SetRecoilState");
		
		UGS_Smoothing_C_SetRecoilState_Params params {};
		params.bIsRecoil = bIsRecoil;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Smoothing.GS_Smoothing_C.GetIsOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsOn                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGS_Smoothing_C::GetIsOn(bool* bIsOn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GS_Smoothing.GS_Smoothing_C.GetIsOn");
		
		UGS_Smoothing_C_GetIsOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsOn != nullptr)
			*bIsOn = params.bIsOn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Smoothing.GS_Smoothing_C.SwitchAimSmoothing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSwitchOn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGS_Smoothing_C::SwitchAimSmoothing(bool bSwitchOn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GS_Smoothing.GS_Smoothing_C.SwitchAimSmoothing");
		
		UGS_Smoothing_C_SwitchAimSmoothing_Params params {};
		params.bSwitchOn = bSwitchOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Smoothing.GS_Smoothing_C.GetSmoothingAlpha
	 * 		Flags  -> ()
	 */
	float UGS_Smoothing_C::GetSmoothingAlpha()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GS_Smoothing.GS_Smoothing_C.GetSmoothingAlpha");
		
		UGS_Smoothing_C_GetSmoothingAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Smoothing.GS_Smoothing_C.GetWorldTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  WorldTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  ParentTransform                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FBPActorGripInformation                     Grip                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         Root                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bRootHasInterface                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bActorHasInterface                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsForTeleport                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UGS_Smoothing_C::GetWorldTransform(class UGripMotionControllerComponent* GrippingController, float DeltaTime, struct FTransform* WorldTransform, const struct FTransform& ParentTransform, struct FBPActorGripInformation* Grip, class AActor* Actor, class UPrimitiveComponent* Root, bool bRootHasInterface, bool bActorHasInterface, bool bIsForTeleport)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GS_Smoothing.GS_Smoothing_C.GetWorldTransform");
		
		UGS_Smoothing_C_GetWorldTransform_Params params {};
		params.GrippingController = GrippingController;
		params.DeltaTime = DeltaTime;
		params.ParentTransform = ParentTransform;
		params.Actor = Actor;
		params.Root = Root;
		params.bRootHasInterface = bRootHasInterface;
		params.bActorHasInterface = bActorHasInterface;
		params.bIsForTeleport = bIsForTeleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldTransform != nullptr)
			*WorldTransform = params.WorldTransform;
		if (Grip != nullptr)
			*Grip = params.Grip;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Smoothing.GS_Smoothing_C.Reset
	 * 		Flags  -> ()
	 */
	void UGS_Smoothing_C::Reset()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GS_Smoothing.GS_Smoothing_C.Reset");
		
		UGS_Smoothing_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Smoothing.GS_Smoothing_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void UGS_Smoothing_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GS_Smoothing.GS_Smoothing_C.OnGrip");
		
		UGS_Smoothing_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GS_Smoothing.GS_Smoothing_C.ExecuteUbergraph_GS_Smoothing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGS_Smoothing_C::ExecuteUbergraph_GS_Smoothing(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GS_Smoothing.GS_Smoothing_C.ExecuteUbergraph_GS_Smoothing");
		
		UGS_Smoothing_C_ExecuteUbergraph_GS_Smoothing_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGS_Smoothing_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGS_Smoothing_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GS_Smoothing.GS_Smoothing_C");
		return ptr;
	}

}


