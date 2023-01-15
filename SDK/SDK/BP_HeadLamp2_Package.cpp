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
	 * 		Name   -> Function BP_HeadLamp2.BP_HeadLamp2_C.TurnOffLightHelper
	 * 		Flags  -> ()
	 */
	void ABP_HeadLamp2_C::TurnOffLightHelper()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HeadLamp2.BP_HeadLamp2_C.TurnOffLightHelper");
		
		ABP_HeadLamp2_C_TurnOffLightHelper_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HeadLamp2.BP_HeadLamp2_C.TurnOffBasedOnFlashlightType
	 * 		Flags  -> ()
	 */
	void ABP_HeadLamp2_C::TurnOffBasedOnFlashlightType()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HeadLamp2.BP_HeadLamp2_C.TurnOffBasedOnFlashlightType");
		
		ABP_HeadLamp2_C_TurnOffBasedOnFlashlightType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HeadLamp2.BP_HeadLamp2_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABP_HeadLamp2_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HeadLamp2.BP_HeadLamp2_C.OnUsed");
		
		ABP_HeadLamp2_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HeadLamp2.BP_HeadLamp2_C.OnChildGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_HeadLamp2_C::OnChildGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HeadLamp2.BP_HeadLamp2_C.OnChildGrip");
		
		ABP_HeadLamp2_C_OnChildGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HeadLamp2.BP_HeadLamp2_C.OnChildGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HeadLamp2_C::OnChildGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HeadLamp2.BP_HeadLamp2_C.OnChildGripRelease");
		
		ABP_HeadLamp2_C_OnChildGripRelease_Params params {};
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
	 * 		Name   -> Function BP_HeadLamp2.BP_HeadLamp2_C.ThumbLeft
	 * 		Flags  -> ()
	 */
	void ABP_HeadLamp2_C::ThumbLeft()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HeadLamp2.BP_HeadLamp2_C.ThumbLeft");
		
		ABP_HeadLamp2_C_ThumbLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HeadLamp2.BP_HeadLamp2_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HeadLamp2_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HeadLamp2.BP_HeadLamp2_C.OnGripRelease");
		
		ABP_HeadLamp2_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BP_HeadLamp2.BP_HeadLamp2_C.TurnOffBasedOnLightType
	 * 		Flags  -> ()
	 */
	void ABP_HeadLamp2_C::TurnOffBasedOnLightType()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HeadLamp2.BP_HeadLamp2_C.TurnOffBasedOnLightType");
		
		ABP_HeadLamp2_C_TurnOffBasedOnLightType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HeadLamp2.BP_HeadLamp2_C.ExecuteUbergraph_BP_HeadLamp2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HeadLamp2_C::ExecuteUbergraph_BP_HeadLamp2(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HeadLamp2.BP_HeadLamp2_C.ExecuteUbergraph_BP_HeadLamp2");
		
		ABP_HeadLamp2_C_ExecuteUbergraph_BP_HeadLamp2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HeadLamp2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HeadLamp2_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HeadLamp2.BP_HeadLamp2_C");
		return ptr;
	}

}


