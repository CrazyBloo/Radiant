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
	 * 		Name   -> Function BP_Camera.BP_Camera_C.GetPictureMarker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	class FString ABP_Camera_C::GetPictureMarker(const struct FGameplayTag& Tag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.GetPictureMarker");
		
		ABP_Camera_C_GetPictureMarker_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Camera.BP_Camera_C.GetTakenPictures
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FGameplayTag>                        pictures                                                   (Parm, OutParm)
	 */
	void ABP_Camera_C::GetTakenPictures(TArray<struct FGameplayTag>* pictures)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.GetTakenPictures");
		
		ABP_Camera_C_GetTakenPictures_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (pictures != nullptr)
			*pictures = params.pictures;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Camera.BP_Camera_C.CheckTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Camera_C::CheckTag(const struct FGameplayTag& Tag, bool* success, int32_t* Index)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.CheckTag");
		
		ABP_Camera_C_CheckTag_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Camera.BP_Camera_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Camera_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.UserConstructionScript");
		
		ABP_Camera_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Camera.BP_Camera_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Camera_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.Timeline_0__FinishedFunc");
		
		ABP_Camera_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Camera.BP_Camera_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Camera_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.Timeline_0__UpdateFunc");
		
		ABP_Camera_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Camera.BP_Camera_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Camera_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.ReceiveTick");
		
		ABP_Camera_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Camera.BP_Camera_C.ThumbUp
	 * 		Flags  -> ()
	 */
	void ABP_Camera_C::ThumbUp()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.ThumbUp");
		
		ABP_Camera_C_ThumbUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Camera.BP_Camera_C.EjectMag
	 * 		Flags  -> ()
	 */
	void ABP_Camera_C::EjectMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.EjectMag");
		
		ABP_Camera_C_EjectMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Camera.BP_Camera_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABP_Camera_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.OnUsed");
		
		ABP_Camera_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Camera.BP_Camera_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_Camera_C::ReceiveDestroyed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.ReceiveDestroyed");
		
		ABP_Camera_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Camera.BP_Camera_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Camera_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.OnGrip");
		
		ABP_Camera_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Camera.BP_Camera_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Camera_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.OnGripRelease");
		
		ABP_Camera_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BP_Camera.BP_Camera_C.RefreshMissionPictures
	 * 		Flags  -> ()
	 */
	void ABP_Camera_C::RefreshMissionPictures()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.RefreshMissionPictures");
		
		ABP_Camera_C_RefreshMissionPictures_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Camera.BP_Camera_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_Camera_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.OnReconfigure");
		
		ABP_Camera_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Camera.BP_Camera_C.ME
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMissionData*                                MissionData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Camera_C::ME(class UMissionData* MissionData)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.ME");
		
		ABP_Camera_C_ME_Params params {};
		params.MissionData = MissionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Camera.BP_Camera_C.ExecuteUbergraph_BP_Camera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Camera_C::ExecuteUbergraph_BP_Camera(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Camera.BP_Camera_C.ExecuteUbergraph_BP_Camera");
		
		ABP_Camera_C_ExecuteUbergraph_BP_Camera_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Camera_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Camera_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Camera.BP_Camera_C");
		return ptr;
	}

}


