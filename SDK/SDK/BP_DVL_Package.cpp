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
	 * 		Name   -> Function BP_DVL.BP_DVL_C.IsCanLoadRound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DVL_C::IsCanLoadRound(bool* Return)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DVL.BP_DVL_C.IsCanLoadRound");
		
		ABP_DVL_C_IsCanLoadRound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DVL.BP_DVL_C.GetAttachmentsList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Attachments                                                (Parm, OutParm)
	 */
	void ABP_DVL_C::GetAttachmentsList(TArray<class FString>* Attachments)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DVL.BP_DVL_C.GetAttachmentsList");
		
		ABP_DVL_C_GetAttachmentsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attachments != nullptr)
			*Attachments = params.Attachments;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DVL.BP_DVL_C.GetPoseShift
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRHandPoseType                                    poseType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FTransform ABP_DVL_C::GetPoseShift(EPRHandPoseType poseType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DVL.BP_DVL_C.GetPoseShift");
		
		ABP_DVL_C_GetPoseShift_Params params {};
		params.poseType = poseType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DVL.BP_DVL_C.EjectMag
	 * 		Flags  -> ()
	 */
	void ABP_DVL_C::EjectMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DVL.BP_DVL_C.EjectMag");
		
		ABP_DVL_C_EjectMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DVL.BP_DVL_C.DropEjectedMag
	 * 		Flags  -> ()
	 */
	void ABP_DVL_C::DropEjectedMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DVL.BP_DVL_C.DropEjectedMag");
		
		ABP_DVL_C_DropEjectedMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DVL.BP_DVL_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_DVL_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DVL.BP_DVL_C.OnGrip");
		
		ABP_DVL_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DVL.BP_DVL_C.LoadRound
	 * 		Flags  -> ()
	 */
	void ABP_DVL_C::LoadRound()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DVL.BP_DVL_C.LoadRound");
		
		ABP_DVL_C_LoadRound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DVL.BP_DVL_C.UpdateAmmoInBolt
	 * 		Flags  -> ()
	 */
	void ABP_DVL_C::UpdateAmmoInBolt()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DVL.BP_DVL_C.UpdateAmmoInBolt");
		
		ABP_DVL_C_UpdateAmmoInBolt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DVL.BP_DVL_C.BndEvt__WeaponBolt_K2Node_ComponentBoundEvent_1_NoParamsDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponBoltState                                   prevState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DVL_C::BndEvt__WeaponBolt_K2Node_ComponentBoundEvent_1_NoParamsDelegate__DelegateSignature(EWeaponBoltState prevState)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DVL.BP_DVL_C.BndEvt__WeaponBolt_K2Node_ComponentBoundEvent_1_NoParamsDelegate__DelegateSignature");
		
		ABP_DVL_C_BndEvt__WeaponBolt_K2Node_ComponentBoundEvent_1_NoParamsDelegate__DelegateSignature_Params params {};
		params.prevState = prevState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DVL.BP_DVL_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_DVL_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DVL.BP_DVL_C.OnReconfigure");
		
		ABP_DVL_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DVL.BP_DVL_C.ExecuteUbergraph_BP_DVL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DVL_C::ExecuteUbergraph_BP_DVL(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DVL.BP_DVL_C.ExecuteUbergraph_BP_DVL");
		
		ABP_DVL_C_ExecuteUbergraph_BP_DVL_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DVL_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DVL_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_DVL.BP_DVL_C");
		return ptr;
	}

}


