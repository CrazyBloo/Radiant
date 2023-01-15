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
	 * 		Name   -> Function BP_ZoneGate_Shortcut.BP_ZoneGate_Shortcut_C.GetTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Trigger                                                    (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ZoneGate_Shortcut_C::GetTrigger(struct FGameplayTag* Trigger)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZoneGate_Shortcut.BP_ZoneGate_Shortcut_C.GetTrigger");
		
		ABP_ZoneGate_Shortcut_C_GetTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Trigger != nullptr)
			*Trigger = params.Trigger;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ZoneGate_Shortcut.BP_ZoneGate_Shortcut_C.CheckTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Activated                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ZoneGate_Shortcut_C::CheckTrigger(bool* Activated)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZoneGate_Shortcut.BP_ZoneGate_Shortcut_C.CheckTrigger");
		
		ABP_ZoneGate_Shortcut_C_CheckTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Activated != nullptr)
			*Activated = params.Activated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ZoneGate_Shortcut.BP_ZoneGate_Shortcut_C.IsActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Activated                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ZoneGate_Shortcut_C::IsActivated(bool* Activated)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZoneGate_Shortcut.BP_ZoneGate_Shortcut_C.IsActivated");
		
		ABP_ZoneGate_Shortcut_C_IsActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Activated != nullptr)
			*Activated = params.Activated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ZoneGate_Shortcut.BP_ZoneGate_Shortcut_C.SetDisabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Disabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ZoneGate_Shortcut_C::SetDisabled(bool Disabled)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZoneGate_Shortcut.BP_ZoneGate_Shortcut_C.SetDisabled");
		
		ABP_ZoneGate_Shortcut_C_SetDisabled_Params params {};
		params.Disabled = Disabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ZoneGate_Shortcut.BP_ZoneGate_Shortcut_C.DoTransfer
	 * 		Flags  -> ()
	 */
	void ABP_ZoneGate_Shortcut_C::DoTransfer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZoneGate_Shortcut.BP_ZoneGate_Shortcut_C.DoTransfer");
		
		ABP_ZoneGate_Shortcut_C_DoTransfer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ZoneGate_Shortcut.BP_ZoneGate_Shortcut_C.BndEvt__BP_ZoneGate_Shortcut_BoxDimentions_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_ZoneGate_Shortcut_C::BndEvt__BP_ZoneGate_Shortcut_BoxDimentions_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZoneGate_Shortcut.BP_ZoneGate_Shortcut_C.BndEvt__BP_ZoneGate_Shortcut_BoxDimentions_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_ZoneGate_Shortcut_C_BndEvt__BP_ZoneGate_Shortcut_BoxDimentions_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_ZoneGate_Shortcut.BP_ZoneGate_Shortcut_C.ExecuteUbergraph_BP_ZoneGate_Shortcut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ZoneGate_Shortcut_C::ExecuteUbergraph_BP_ZoneGate_Shortcut(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZoneGate_Shortcut.BP_ZoneGate_Shortcut_C.ExecuteUbergraph_BP_ZoneGate_Shortcut");
		
		ABP_ZoneGate_Shortcut_C_ExecuteUbergraph_BP_ZoneGate_Shortcut_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ZoneGate_Shortcut_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ZoneGate_Shortcut_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZoneGate_Shortcut.BP_ZoneGate_Shortcut_C");
		return ptr;
	}

}


