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
	 * 		Name   -> Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.TurnOffLightHelper
	 * 		Flags  -> ()
	 */
	void ABP_Flashlight_Pocket_C::TurnOffLightHelper()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.TurnOffLightHelper");
		
		ABP_Flashlight_Pocket_C_TurnOffLightHelper_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.TurnOffBasedOnFlashlightType
	 * 		Flags  -> ()
	 */
	void ABP_Flashlight_Pocket_C::TurnOffBasedOnFlashlightType()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.TurnOffBasedOnFlashlightType");
		
		ABP_Flashlight_Pocket_C_TurnOffBasedOnFlashlightType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.ToggleLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Flashlight_Pocket_C::ToggleLight(bool State)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.ToggleLight");
		
		ABP_Flashlight_Pocket_C_ToggleLight_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Flashlight_Pocket_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.ReceiveBeginPlay");
		
		ABP_Flashlight_Pocket_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.ThumbLeft
	 * 		Flags  -> ()
	 */
	void ABP_Flashlight_Pocket_C::ThumbLeft()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.ThumbLeft");
		
		ABP_Flashlight_Pocket_C_ThumbLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.BindEvents
	 * 		Flags  -> ()
	 */
	void ABP_Flashlight_Pocket_C::BindEvents()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.BindEvents");
		
		ABP_Flashlight_Pocket_C_BindEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.OnGameDataSave
	 * 		Flags  -> ()
	 */
	void ABP_Flashlight_Pocket_C::OnGameDataSave()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.OnGameDataSave");
		
		ABP_Flashlight_Pocket_C_OnGameDataSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.OnLevelPrepare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Flashlight_Pocket_C::OnLevelPrepare(const struct FGameplayTag& Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.OnLevelPrepare");
		
		ABP_Flashlight_Pocket_C_OnLevelPrepare_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Flashlight_Pocket_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.OnGripRelease");
		
		ABP_Flashlight_Pocket_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.TurnOffBasedOnLightType
	 * 		Flags  -> ()
	 */
	void ABP_Flashlight_Pocket_C::TurnOffBasedOnLightType()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.TurnOffBasedOnLightType");
		
		ABP_Flashlight_Pocket_C_TurnOffBasedOnLightType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.ExecuteUbergraph_BP_Flashlight_Pocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Flashlight_Pocket_C::ExecuteUbergraph_BP_Flashlight_Pocket(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Flashlight_Pocket.BP_Flashlight_Pocket_C.ExecuteUbergraph_BP_Flashlight_Pocket");
		
		ABP_Flashlight_Pocket_C_ExecuteUbergraph_BP_Flashlight_Pocket_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Flashlight_Pocket_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Flashlight_Pocket_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Flashlight_Pocket.BP_Flashlight_Pocket_C");
		return ptr;
	}

}


