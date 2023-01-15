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
	 * 		Name   -> Function BP_OilSpray.BP_OilSpray_C.CheckWidgetInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsWidgetInteraction                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OilSpray_C::CheckWidgetInteraction(bool* IsWidgetInteraction)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OilSpray.BP_OilSpray_C.CheckWidgetInteraction");
		
		ABP_OilSpray_C_CheckWidgetInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsWidgetInteraction != nullptr)
			*IsWidgetInteraction = params.IsWidgetInteraction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OilSpray.BP_OilSpray_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_OilSpray_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OilSpray.BP_OilSpray_C.ReceiveBeginPlay");
		
		ABP_OilSpray_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OilSpray.BP_OilSpray_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OilSpray_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OilSpray.BP_OilSpray_C.ReceiveTick");
		
		ABP_OilSpray_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OilSpray.BP_OilSpray_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABP_OilSpray_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OilSpray.BP_OilSpray_C.OnUsed");
		
		ABP_OilSpray_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OilSpray.BP_OilSpray_C.OnEndUsed
	 * 		Flags  -> ()
	 */
	void ABP_OilSpray_C::OnEndUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OilSpray.BP_OilSpray_C.OnEndUsed");
		
		ABP_OilSpray_C_OnEndUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OilSpray.BP_OilSpray_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OilSpray_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OilSpray.BP_OilSpray_C.OnGripRelease");
		
		ABP_OilSpray_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BP_OilSpray.BP_OilSpray_C.ToggleFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_OilSpray_C::ToggleFX(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OilSpray.BP_OilSpray_C.ToggleFX");
		
		ABP_OilSpray_C_ToggleFX_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OilSpray.BP_OilSpray_C.ExecuteUbergraph_BP_OilSpray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OilSpray_C::ExecuteUbergraph_BP_OilSpray(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OilSpray.BP_OilSpray_C.ExecuteUbergraph_BP_OilSpray");
		
		ABP_OilSpray_C_ExecuteUbergraph_BP_OilSpray_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_OilSpray_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OilSpray_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_OilSpray.BP_OilSpray_C");
		return ptr;
	}

}


