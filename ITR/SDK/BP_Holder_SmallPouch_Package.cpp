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
	 * 		Name   -> Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.PlayHaptics
	 * 		Flags  -> ()
	 */
	void ABP_Holder_SmallPouch_C::PlayHaptics()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.PlayHaptics");
		
		ABP_Holder_SmallPouch_C_PlayHaptics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.TryAttachToInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorDropped                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Attached                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Holder_SmallPouch_C::TryAttachToInventory(class AActor* ActorDropped, bool* Attached)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.TryAttachToInventory");
		
		ABP_Holder_SmallPouch_C_TryAttachToInventory_Params params {};
		params.ActorDropped = ActorDropped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attached != nullptr)
			*Attached = params.Attached;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.DoAttach
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Simulate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NoItemTake                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Holder_SmallPouch_C::DoAttach(class AActor* Actor, bool Simulate, bool NoItemTake)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.DoAttach");
		
		ABP_Holder_SmallPouch_C_DoAttach_Params params {};
		params.Actor = Actor;
		params.Simulate = Simulate;
		params.NoItemTake = NoItemTake;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.IsAcceptItemActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      itemActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               onlyIfFree                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               accept                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Holder_SmallPouch_C::IsAcceptItemActor(class AActor* itemActor, bool onlyIfFree, bool* accept)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.IsAcceptItemActor");
		
		ABP_Holder_SmallPouch_C_IsAcceptItemActor_Params params {};
		params.itemActor = itemActor;
		params.onlyIfFree = onlyIfFree;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (accept != nullptr)
			*accept = params.accept;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.IsOverlapSomething
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Holder_SmallPouch_C::IsOverlapSomething(bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.IsOverlapSomething");
		
		ABP_Holder_SmallPouch_C_IsOverlapSomething_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.BndEvt__HolsterBoxTrigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Holder_SmallPouch_C::BndEvt__HolsterBoxTrigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.BndEvt__HolsterBoxTrigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");
		
		ABP_Holder_SmallPouch_C_BndEvt__HolsterBoxTrigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.ReinitPrimitives
	 * 		Flags  -> ()
	 */
	void ABP_Holder_SmallPouch_C::ReinitPrimitives()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.ReinitPrimitives");
		
		ABP_Holder_SmallPouch_C_ReinitPrimitives_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.BndEvt__HolsterBoxTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Holder_SmallPouch_C::BndEvt__HolsterBoxTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.BndEvt__HolsterBoxTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_Holder_SmallPouch_C_BndEvt__HolsterBoxTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.RefreshHolder
	 * 		Flags  -> ()
	 */
	void ABP_Holder_SmallPouch_C::RefreshHolder()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.RefreshHolder");
		
		ABP_Holder_SmallPouch_C_RefreshHolder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.OnGameStarted
	 * 		Flags  -> ()
	 */
	void ABP_Holder_SmallPouch_C::OnGameStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.OnGameStarted");
		
		ABP_Holder_SmallPouch_C_OnGameStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.OnPlayerBodyVisibilityChangedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Holder_SmallPouch_C::OnPlayerBodyVisibilityChangedEvent(bool Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.OnPlayerBodyVisibilityChangedEvent");
		
		ABP_Holder_SmallPouch_C_OnPlayerBodyVisibilityChangedEvent_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.ExecuteUbergraph_BP_Holder_SmallPouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Holder_SmallPouch_C::ExecuteUbergraph_BP_Holder_SmallPouch(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.ExecuteUbergraph_BP_Holder_SmallPouch");
		
		ABP_Holder_SmallPouch_C_ExecuteUbergraph_BP_Holder_SmallPouch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Holder_SmallPouch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Holder_SmallPouch_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Holder_SmallPouch.BP_Holder_SmallPouch_C");
		return ptr;
	}

}


