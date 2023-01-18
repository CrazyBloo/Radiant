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
	 * 		Name   -> Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.DropItemOnGround
	 * 		Flags  -> ()
	 */
	bool ABP_SleepingBag_Simple_C::DropItemOnGround()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.DropItemOnGround");
		
		ABP_SleepingBag_Simple_C_DropItemOnGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.SetPacked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Packed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SleepingBag_Simple_C::SetPacked(bool Packed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.SetPacked");
		
		ABP_SleepingBag_Simple_C_SetPacked_Params params {};
		params.Packed = Packed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.ButtonsOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewVisibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SleepingBag_Simple_C::ButtonsOn(bool bNewVisibility)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.ButtonsOn");
		
		ABP_SleepingBag_Simple_C_ButtonsOn_Params params {};
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.PackToggle
	 * 		Flags  -> ()
	 */
	void ABP_SleepingBag_Simple_C::PackToggle()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.PackToggle");
		
		ABP_SleepingBag_Simple_C_PackToggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_SleepingBag_Simple_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.OnReconfigure");
		
		ABP_SleepingBag_Simple_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.OnStart
	 * 		Flags  -> ()
	 */
	void ABP_SleepingBag_Simple_C::OnStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.OnStart");
		
		ABP_SleepingBag_Simple_C_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.UpdateButtons
	 * 		Flags  -> ()
	 */
	void ABP_SleepingBag_Simple_C::UpdateButtons()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.UpdateButtons");
		
		ABP_SleepingBag_Simple_C_UpdateButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABP_SleepingBag_Simple_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.OnUsed");
		
		ABP_SleepingBag_Simple_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_SleepingBag_Simple_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.OnGrip");
		
		ABP_SleepingBag_Simple_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_SleepingBag_Simple_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.OnGripRelease");
		
		ABP_SleepingBag_Simple_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.OnEndUsed
	 * 		Flags  -> ()
	 */
	void ABP_SleepingBag_Simple_C::OnEndUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.OnEndUsed");
		
		ABP_SleepingBag_Simple_C_OnEndUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.UnbindButtons
	 * 		Flags  -> ()
	 */
	void ABP_SleepingBag_Simple_C::UnbindButtons()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.UnbindButtons");
		
		ABP_SleepingBag_Simple_C_UnbindButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.OnLevelStartedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SleepingBag_Simple_C::OnLevelStartedEvent(const struct FGameplayTag& Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.OnLevelStartedEvent");
		
		ABP_SleepingBag_Simple_C_OnLevelStartedEvent_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.SleepFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SleepFor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SleepingBag_Simple_C::SleepFor(float SleepFor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.SleepFor");
		
		ABP_SleepingBag_Simple_C_SleepFor_Params params {};
		params.SleepFor = SleepFor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_SleepingBag_Simple_C::BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
		
		ABP_SleepingBag_Simple_C_BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.TakenByHolder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_SleepingBag_Simple_C::TakenByHolder(const class FString& Name)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.TakenByHolder");
		
		ABP_SleepingBag_Simple_C_TakenByHolder_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.Fix Position
	 * 		Flags  -> ()
	 */
	void ABP_SleepingBag_Simple_C::FixPosition()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.Fix Position");
		
		ABP_SleepingBag_Simple_C_FixPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.ExecuteUbergraph_BP_SleepingBag_Simple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SleepingBag_Simple_C::ExecuteUbergraph_BP_SleepingBag_Simple(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.ExecuteUbergraph_BP_SleepingBag_Simple");
		
		ABP_SleepingBag_Simple_C_ExecuteUbergraph_BP_SleepingBag_Simple_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.SleepStart__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_SleepingBag_Simple_C::SleepStart__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SleepingBag_Simple.BP_SleepingBag_Simple_C.SleepStart__DelegateSignature");
		
		ABP_SleepingBag_Simple_C_SleepStart__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SleepingBag_Simple_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SleepingBag_Simple_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SleepingBag_Simple.BP_SleepingBag_Simple_C");
		return ptr;
	}

}


