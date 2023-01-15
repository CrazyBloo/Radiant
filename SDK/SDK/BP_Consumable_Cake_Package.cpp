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
	 * 		Name   -> Function BP_Consumable_Cake.BP_Consumable_Cake_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_Consumable_Cake_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Consumable_Cake.BP_Consumable_Cake_C.OnReconfigure");
		
		ABP_Consumable_Cake_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Consumable_Cake.BP_Consumable_Cake_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Consumable_Cake_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Consumable_Cake.BP_Consumable_Cake_C.OnGripRelease");
		
		ABP_Consumable_Cake_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BP_Consumable_Cake.BP_Consumable_Cake_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Consumable_Cake_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Consumable_Cake.BP_Consumable_Cake_C.OnGrip");
		
		ABP_Consumable_Cake_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Consumable_Cake.BP_Consumable_Cake_C.Use
	 * 		Flags  -> ()
	 */
	void ABP_Consumable_Cake_C::Use()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Consumable_Cake.BP_Consumable_Cake_C.Use");
		
		ABP_Consumable_Cake_C_Use_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Consumable_Cake.BP_Consumable_Cake_C.OnUseCountEnd
	 * 		Flags  -> ()
	 */
	void ABP_Consumable_Cake_C::OnUseCountEnd()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Consumable_Cake.BP_Consumable_Cake_C.OnUseCountEnd");
		
		ABP_Consumable_Cake_C_OnUseCountEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Consumable_Cake.BP_Consumable_Cake_C.UpdateMesh
	 * 		Flags  -> ()
	 */
	void ABP_Consumable_Cake_C::UpdateMesh()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Consumable_Cake.BP_Consumable_Cake_C.UpdateMesh");
		
		ABP_Consumable_Cake_C_UpdateMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Consumable_Cake.BP_Consumable_Cake_C.BndEvt__BP_Consumable_Cake_BPC_ItemDurability_K2Node_ComponentBoundEvent_0_OnDurabilityChange__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_Consumable_Cake_C::BndEvt__BP_Consumable_Cake_BPC_ItemDurability_K2Node_ComponentBoundEvent_0_OnDurabilityChange__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Consumable_Cake.BP_Consumable_Cake_C.BndEvt__BP_Consumable_Cake_BPC_ItemDurability_K2Node_ComponentBoundEvent_0_OnDurabilityChange__DelegateSignature");
		
		ABP_Consumable_Cake_C_BndEvt__BP_Consumable_Cake_BPC_ItemDurability_K2Node_ComponentBoundEvent_0_OnDurabilityChange__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Consumable_Cake.BP_Consumable_Cake_C.ExecuteUbergraph_BP_Consumable_Cake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Consumable_Cake_C::ExecuteUbergraph_BP_Consumable_Cake(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Consumable_Cake.BP_Consumable_Cake_C.ExecuteUbergraph_BP_Consumable_Cake");
		
		ABP_Consumable_Cake_C_ExecuteUbergraph_BP_Consumable_Cake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Consumable_Cake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Consumable_Cake_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Consumable_Cake.BP_Consumable_Cake_C");
		return ptr;
	}

}


