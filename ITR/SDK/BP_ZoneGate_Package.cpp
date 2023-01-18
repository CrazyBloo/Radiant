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
	 * 		Name   -> Function BP_ZoneGate.BP_ZoneGate_C.GetTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Trigger                                                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ZoneGate_C::GetTrigger(struct FGameplayTag* Trigger)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZoneGate.BP_ZoneGate_C.GetTrigger");
		
		ABP_ZoneGate_C_GetTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Trigger != nullptr)
			*Trigger = params.Trigger;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ZoneGate.BP_ZoneGate_C.CheckTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Activated                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ZoneGate_C::CheckTrigger(bool* Activated)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZoneGate.BP_ZoneGate_C.CheckTrigger");
		
		ABP_ZoneGate_C_CheckTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Activated != nullptr)
			*Activated = params.Activated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ZoneGate.BP_ZoneGate_C.GetDestinationLevelName
	 * 		Flags  -> ()
	 */
	class FText ABP_ZoneGate_C::GetDestinationLevelName()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZoneGate.BP_ZoneGate_C.GetDestinationLevelName");
		
		ABP_ZoneGate_C_GetDestinationLevelName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ZoneGate.BP_ZoneGate_C.IsActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Activated                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ZoneGate_C::IsActivated(bool* Activated)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZoneGate.BP_ZoneGate_C.IsActivated");
		
		ABP_ZoneGate_C_IsActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Activated != nullptr)
			*Activated = params.Activated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ZoneGate.BP_ZoneGate_C.IsPlayerInside
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ZoneGate_C::IsPlayerInside(bool* Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZoneGate.BP_ZoneGate_C.IsPlayerInside");
		
		ABP_ZoneGate_C_IsPlayerInside_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ZoneGate.BP_ZoneGate_C.CheckEquals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                PairTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ZoneGate_C::CheckEquals(const struct FGameplayTag& Level, const struct FGameplayTag& PairTag, bool* Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZoneGate.BP_ZoneGate_C.CheckEquals");
		
		ABP_ZoneGate_C_CheckEquals_Params params {};
		params.Level = Level;
		params.PairTag = PairTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ZoneGate.BP_ZoneGate_C.GetExitPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  Value                                                      (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_ZoneGate_C::GetExitPoint(struct FTransform* Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZoneGate.BP_ZoneGate_C.GetExitPoint");
		
		ABP_ZoneGate_C_GetExitPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ZoneGate.BP_ZoneGate_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ZoneGate_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZoneGate.BP_ZoneGate_C.UserConstructionScript");
		
		ABP_ZoneGate_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ZoneGate.BP_ZoneGate_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_ZoneGate_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZoneGate.BP_ZoneGate_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_ZoneGate_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ZoneGate.BP_ZoneGate_C.OnTransitionEnd
	 * 		Flags  -> ()
	 */
	void ABP_ZoneGate_C::OnTransitionEnd()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZoneGate.BP_ZoneGate_C.OnTransitionEnd");
		
		ABP_ZoneGate_C_OnTransitionEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ZoneGate.BP_ZoneGate_C.OnTransitionStart
	 * 		Flags  -> ()
	 */
	void ABP_ZoneGate_C::OnTransitionStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZoneGate.BP_ZoneGate_C.OnTransitionStart");
		
		ABP_ZoneGate_C_OnTransitionStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ZoneGate.BP_ZoneGate_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ZoneGate_C::BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZoneGate.BP_ZoneGate_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		ABP_ZoneGate_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ZoneGate.BP_ZoneGate_C.SetDisabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Disabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ZoneGate_C::SetDisabled(bool Disabled)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZoneGate.BP_ZoneGate_C.SetDisabled");
		
		ABP_ZoneGate_C_SetDisabled_Params params {};
		params.Disabled = Disabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ZoneGate.BP_ZoneGate_C.DoTransfer
	 * 		Flags  -> ()
	 */
	void ABP_ZoneGate_C::DoTransfer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZoneGate.BP_ZoneGate_C.DoTransfer");
		
		ABP_ZoneGate_C_DoTransfer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ZoneGate.BP_ZoneGate_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ZoneGate_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZoneGate.BP_ZoneGate_C.ReceiveBeginPlay");
		
		ABP_ZoneGate_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ZoneGate.BP_ZoneGate_C.ExecuteUbergraph_BP_ZoneGate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ZoneGate_C::ExecuteUbergraph_BP_ZoneGate(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZoneGate.BP_ZoneGate_C.ExecuteUbergraph_BP_ZoneGate");
		
		ABP_ZoneGate_C_ExecuteUbergraph_BP_ZoneGate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ZoneGate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ZoneGate_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZoneGate.BP_ZoneGate_C");
		return ptr;
	}

}


