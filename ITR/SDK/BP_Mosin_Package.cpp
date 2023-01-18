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
	 * 		Name   -> Function BP_Mosin.BP_Mosin_C.GetPoseShift
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRHandPoseType                                    poseType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FTransform ABP_Mosin_C::GetPoseShift(EPRHandPoseType poseType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mosin.BP_Mosin_C.GetPoseShift");
		
		ABP_Mosin_C_GetPoseShift_Params params {};
		params.poseType = poseType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mosin.BP_Mosin_C.DestroyComp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SceneComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Mosin_C::DestroyComp(class USceneComponent* SceneComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mosin.BP_Mosin_C.DestroyComp");
		
		ABP_Mosin_C_DestroyComp_Params params {};
		params.SceneComponent = SceneComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mosin.BP_Mosin_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABP_Mosin_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mosin.BP_Mosin_C.OnReconfigure");
		
		ABP_Mosin_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mosin.BP_Mosin_C.UpdateAttachmentSlots
	 * 		Flags  -> ()
	 */
	void ABP_Mosin_C::UpdateAttachmentSlots()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mosin.BP_Mosin_C.UpdateAttachmentSlots");
		
		ABP_Mosin_C_UpdateAttachmentSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mosin.BP_Mosin_C.ExecuteUbergraph_BP_Mosin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Mosin_C::ExecuteUbergraph_BP_Mosin(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mosin.BP_Mosin_C.ExecuteUbergraph_BP_Mosin");
		
		ABP_Mosin_C_ExecuteUbergraph_BP_Mosin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Mosin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Mosin_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mosin.BP_Mosin_C");
		return ptr;
	}

}


