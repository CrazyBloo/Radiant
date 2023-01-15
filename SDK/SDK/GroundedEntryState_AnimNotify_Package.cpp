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
	 * 		Name   -> Function GroundedEntryState_AnimNotify.GroundedEntryState_AnimNotify_C.GetNotifyName
	 * 		Flags  -> ()
	 */
	class FString UGroundedEntryState_AnimNotify_C::GetNotifyName()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GroundedEntryState_AnimNotify.GroundedEntryState_AnimNotify_C.GetNotifyName");
		
		UGroundedEntryState_AnimNotify_C_GetNotifyName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GroundedEntryState_AnimNotify.GroundedEntryState_AnimNotify_C.Received_Notify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UGroundedEntryState_AnimNotify_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GroundedEntryState_AnimNotify.GroundedEntryState_AnimNotify_C.Received_Notify");
		
		UGroundedEntryState_AnimNotify_C_Received_Notify_Params params {};
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroundedEntryState_AnimNotify_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroundedEntryState_AnimNotify_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GroundedEntryState_AnimNotify.GroundedEntryState_AnimNotify_C");
		return ptr;
	}

}


