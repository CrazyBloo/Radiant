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
	 * 		Name   -> Function BP_Holder_BackPack.BP_Holder_BackPack_C.UpdateOverlappedActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Empty                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Holder_BackPack_C::UpdateOverlappedActors(bool* Empty)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Holder_BackPack.BP_Holder_BackPack_C.UpdateOverlappedActors");
		
		ABP_Holder_BackPack_C_UpdateOverlappedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Empty != nullptr)
			*Empty = params.Empty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Holder_BackPack.BP_Holder_BackPack_C.BndEvt__backpack01_Box002_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Holder_BackPack_C::BndEvt__backpack01_Box002_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Holder_BackPack.BP_Holder_BackPack_C.BndEvt__backpack01_Box002_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_Holder_BackPack_C_BndEvt__backpack01_Box002_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_Holder_BackPack.BP_Holder_BackPack_C.BndEvt__backpack01_Box002_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Holder_BackPack_C::BndEvt__backpack01_Box002_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Holder_BackPack.BP_Holder_BackPack_C.BndEvt__backpack01_Box002_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		ABP_Holder_BackPack_C_BndEvt__backpack01_Box002_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_Holder_BackPack.BP_Holder_BackPack_C.ReinitPrimitives
	 * 		Flags  -> ()
	 */
	void ABP_Holder_BackPack_C::ReinitPrimitives()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Holder_BackPack.BP_Holder_BackPack_C.ReinitPrimitives");
		
		ABP_Holder_BackPack_C_ReinitPrimitives_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Holder_BackPack.BP_Holder_BackPack_C.OnDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Holder_BackPack_C::OnDrop(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Holder_BackPack.BP_Holder_BackPack_C.OnDrop");
		
		ABP_Holder_BackPack_C_OnDrop_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Holder_BackPack.BP_Holder_BackPack_C.OnSpawnedFromInventory
	 * 		Flags  -> ()
	 */
	void ABP_Holder_BackPack_C::OnSpawnedFromInventory()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Holder_BackPack.BP_Holder_BackPack_C.OnSpawnedFromInventory");
		
		ABP_Holder_BackPack_C_OnSpawnedFromInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Holder_BackPack.BP_Holder_BackPack_C.UpdateWeight
	 * 		Flags  -> ()
	 */
	void ABP_Holder_BackPack_C::UpdateWeight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Holder_BackPack.BP_Holder_BackPack_C.UpdateWeight");
		
		ABP_Holder_BackPack_C_UpdateWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Holder_BackPack.BP_Holder_BackPack_C.RefreshHolder
	 * 		Flags  -> ()
	 */
	void ABP_Holder_BackPack_C::RefreshHolder()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Holder_BackPack.BP_Holder_BackPack_C.RefreshHolder");
		
		ABP_Holder_BackPack_C_RefreshHolder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Holder_BackPack.BP_Holder_BackPack_C.SetContentVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Holder_BackPack_C::SetContentVisibility(bool Visible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Holder_BackPack.BP_Holder_BackPack_C.SetContentVisibility");
		
		ABP_Holder_BackPack_C_SetContentVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Holder_BackPack.BP_Holder_BackPack_C.SetHolderVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Holder_BackPack_C::SetHolderVisibility(bool Visible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Holder_BackPack.BP_Holder_BackPack_C.SetHolderVisibility");
		
		ABP_Holder_BackPack_C_SetHolderVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Holder_BackPack.BP_Holder_BackPack_C.ExecuteUbergraph_BP_Holder_BackPack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Holder_BackPack_C::ExecuteUbergraph_BP_Holder_BackPack(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Holder_BackPack.BP_Holder_BackPack_C.ExecuteUbergraph_BP_Holder_BackPack");
		
		ABP_Holder_BackPack_C_ExecuteUbergraph_BP_Holder_BackPack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Holder_BackPack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Holder_BackPack_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Holder_BackPack.BP_Holder_BackPack_C");
		return ptr;
	}

}


