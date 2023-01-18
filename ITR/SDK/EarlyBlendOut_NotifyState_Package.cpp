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
	 * 		Name   -> Function EarlyBlendOut_NotifyState.EarlyBlendOut_NotifyState_C.GetNotifyName
	 * 		Flags  -> ()
	 */
	class FString UEarlyBlendOut_NotifyState_C::GetNotifyName()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function EarlyBlendOut_NotifyState.EarlyBlendOut_NotifyState_C.GetNotifyName");
		
		UEarlyBlendOut_NotifyState_C_GetNotifyName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EarlyBlendOut_NotifyState.EarlyBlendOut_NotifyState_C.Received_NotifyTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FrameDeltaTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UEarlyBlendOut_NotifyState_C::Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function EarlyBlendOut_NotifyState.EarlyBlendOut_NotifyState_C.Received_NotifyTick");
		
		UEarlyBlendOut_NotifyState_C_Received_NotifyTick_Params params {};
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		params.FrameDeltaTime = FrameDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEarlyBlendOut_NotifyState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEarlyBlendOut_NotifyState_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EarlyBlendOut_NotifyState.EarlyBlendOut_NotifyState_C");
		return ptr;
	}

}


