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
	 * 		Name   -> Function BP_Box.BP_Box_C.IsBroken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Box_C::IsBroken(bool* Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Box.BP_Box_C.IsBroken");
		
		ABP_Box_C_IsBroken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Box.BP_Box_C.ParticelEffect_Dust
	 * 		Flags  -> ()
	 */
	void ABP_Box_C::ParticelEffect_Dust()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Box.BP_Box_C.ParticelEffect_Dust");
		
		ABP_Box_C_ParticelEffect_Dust_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Box.BP_Box_C.Initialize
	 * 		Flags  -> ()
	 */
	void ABP_Box_C::Initialize()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Box.BP_Box_C.Initialize");
		
		ABP_Box_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Box.BP_Box_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Box_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Box.BP_Box_C.ReceiveBeginPlay");
		
		ABP_Box_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Box.BP_Box_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentWakeSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         WakingComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Box_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentWakeSignature__DelegateSignature(class UPrimitiveComponent* WakingComponent, const class FName& BoneName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Box.BP_Box_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentWakeSignature__DelegateSignature");
		
		ABP_Box_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentWakeSignature__DelegateSignature_Params params {};
		params.WakingComponent = WakingComponent;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Box.BP_Box_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_2_ComponentSleepSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         SleepingComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Box_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_2_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, const class FName& BoneName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Box.BP_Box_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_2_ComponentSleepSignature__DelegateSignature");
		
		ABP_Box_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_2_ComponentSleepSignature__DelegateSignature_Params params {};
		params.SleepingComponent = SleepingComponent;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Box.BP_Box_C.ReceiveAnyDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Box_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Box.BP_Box_C.ReceiveAnyDamage");
		
		ABP_Box_C_ReceiveAnyDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Box.BP_Box_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Box_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Box.BP_Box_C.OnGripRelease");
		
		ABP_Box_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BP_Box.BP_Box_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Box_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Box.BP_Box_C.OnGrip");
		
		ABP_Box_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Box.BP_Box_C.DoCheck
	 * 		Flags  -> ()
	 */
	void ABP_Box_C::DoCheck()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Box.BP_Box_C.DoCheck");
		
		ABP_Box_C_DoCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Box.BP_Box_C.ExecuteUbergraph_BP_Box
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Box_C::ExecuteUbergraph_BP_Box(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Box.BP_Box_C.ExecuteUbergraph_BP_Box");
		
		ABP_Box_C_ExecuteUbergraph_BP_Box_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Box_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Box_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Box.BP_Box_C");
		return ptr;
	}

}


