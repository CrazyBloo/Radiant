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
	 * 		Name   -> Function BP_Flashlight.BP_Flashlight_C.GetLightItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABPA_BaseItem_C*                             Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Flashlight_C::GetLightItem(bool* IsOn, class ABPA_BaseItem_C** Item)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight.BP_Flashlight_C.GetLightItem");
		
		ABP_Flashlight_C_GetLightItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOn != nullptr)
			*IsOn = params.IsOn;
		if (Item != nullptr)
			*Item = params.Item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight.BP_Flashlight_C.TurnOffBasedOnFlashlightType
	 * 		Flags  -> ()
	 */
	void ABP_Flashlight_C::TurnOffBasedOnFlashlightType()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight.BP_Flashlight_C.TurnOffBasedOnFlashlightType");
		
		ABP_Flashlight_C_TurnOffBasedOnFlashlightType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight.BP_Flashlight_C.IsOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Flashlight_C::IsOn(bool* On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight.BP_Flashlight_C.IsOn");
		
		ABP_Flashlight_C_IsOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (On != nullptr)
			*On = params.On;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight.BP_Flashlight_C.GetDefaultPoseType
	 * 		Flags  -> ()
	 */
	EPRHandPoseType ABP_Flashlight_C::GetDefaultPoseType()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight.BP_Flashlight_C.GetDefaultPoseType");
		
		ABP_Flashlight_C_GetDefaultPoseType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight.BP_Flashlight_C.LightDetection
	 * 		Flags  -> ()
	 */
	void ABP_Flashlight_C::LightDetection()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight.BP_Flashlight_C.LightDetection");
		
		ABP_Flashlight_C_LightDetection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight.BP_Flashlight_C.UpdateBounceLight
	 * 		Flags  -> ()
	 */
	void ABP_Flashlight_C::UpdateBounceLight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight.BP_Flashlight_C.UpdateBounceLight");
		
		ABP_Flashlight_C_UpdateBounceLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight.BP_Flashlight_C.UpdateLight_Internal
	 * 		Flags  -> ()
	 */
	void ABP_Flashlight_C::UpdateLight_Internal()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight.BP_Flashlight_C.UpdateLight_Internal");
		
		ABP_Flashlight_C_UpdateLight_Internal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight.BP_Flashlight_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Flashlight_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight.BP_Flashlight_C.UserConstructionScript");
		
		ABP_Flashlight_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight.BP_Flashlight_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABP_Flashlight_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight.BP_Flashlight_C.OnUsed");
		
		ABP_Flashlight_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight.BP_Flashlight_C.ShowLight
	 * 		Flags  -> ()
	 */
	void ABP_Flashlight_C::ShowLight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight.BP_Flashlight_C.ShowLight");
		
		ABP_Flashlight_C_ShowLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight.BP_Flashlight_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Flashlight_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight.BP_Flashlight_C.ReceiveTick");
		
		ABP_Flashlight_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight.BP_Flashlight_C.ThumbLeft
	 * 		Flags  -> ()
	 */
	void ABP_Flashlight_C::ThumbLeft()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight.BP_Flashlight_C.ThumbLeft");
		
		ABP_Flashlight_C_ThumbLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight.BP_Flashlight_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Flashlight_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight.BP_Flashlight_C.OnGrip");
		
		ABP_Flashlight_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight.BP_Flashlight_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Flashlight_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight.BP_Flashlight_C.OnGripRelease");
		
		ABP_Flashlight_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BP_Flashlight.BP_Flashlight_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_Flashlight_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight.BP_Flashlight_C.OnReconfigure");
		
		ABP_Flashlight_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight.BP_Flashlight_C.HideLight
	 * 		Flags  -> ()
	 */
	void ABP_Flashlight_C::HideLight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight.BP_Flashlight_C.HideLight");
		
		ABP_Flashlight_C_HideLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight.BP_Flashlight_C.SetItemVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewVisibility                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Flashlight_C::SetItemVisibility(bool bNewVisibility)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight.BP_Flashlight_C.SetItemVisibility");
		
		ABP_Flashlight_C_SetItemVisibility_Params params {};
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight.BP_Flashlight_C.SetLightsVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Flashlight_C::SetLightsVisibility(bool bVisible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight.BP_Flashlight_C.SetLightsVisibility");
		
		ABP_Flashlight_C_SetLightsVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight.BP_Flashlight_C.TurnOffBasedOnLightType
	 * 		Flags  -> ()
	 */
	void ABP_Flashlight_C::TurnOffBasedOnLightType()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight.BP_Flashlight_C.TurnOffBasedOnLightType");
		
		ABP_Flashlight_C_TurnOffBasedOnLightType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight.BP_Flashlight_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Flashlight_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight.BP_Flashlight_C.ReceiveBeginPlay");
		
		ABP_Flashlight_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight.BP_Flashlight_C.SwitchLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSwitchOn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Flashlight_C::SwitchLight(bool bSwitchOn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight.BP_Flashlight_C.SwitchLight");
		
		ABP_Flashlight_C_SwitchLight_Params params {};
		params.bSwitchOn = bSwitchOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight.BP_Flashlight_C.ExecuteUbergraph_BP_Flashlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Flashlight_C::ExecuteUbergraph_BP_Flashlight(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight.BP_Flashlight_C.ExecuteUbergraph_BP_Flashlight");
		
		ABP_Flashlight_C_ExecuteUbergraph_BP_Flashlight_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Flashlight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Flashlight_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Flashlight.BP_Flashlight_C");
		return ptr;
	}

}


