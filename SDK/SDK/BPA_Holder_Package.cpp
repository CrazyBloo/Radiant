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
	 * 		Name   -> Function BPA_Holder.BPA_Holder_C.IsAcceptItemActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      itemActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               onlyIfFree                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               accept                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Holder_C::IsAcceptItemActor(class AActor* itemActor, bool onlyIfFree, bool* accept)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Holder.BPA_Holder_C.IsAcceptItemActor");
		
		ABPA_Holder_C_IsAcceptItemActor_Params params {};
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
	 * 		Name   -> Function BPA_Holder.BPA_Holder_C.IsSnapHolder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               snapHolder                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Holder_C::IsSnapHolder(bool* snapHolder)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Holder.BPA_Holder_C.IsSnapHolder");
		
		ABPA_Holder_C_IsSnapHolder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (snapHolder != nullptr)
			*snapHolder = params.snapHolder;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Holder.BPA_Holder_C.GetHolderID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                holderID                                                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Holder_C::GetHolderID(struct FGameplayTag* holderID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Holder.BPA_Holder_C.GetHolderID");
		
		ABPA_Holder_C_GetHolderID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (holderID != nullptr)
			*holderID = params.holderID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Holder.BPA_Holder_C.FixItemsPositions
	 * 		Flags  -> ()
	 */
	void ABPA_Holder_C::FixItemsPositions()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Holder.BPA_Holder_C.FixItemsPositions");
		
		ABPA_Holder_C_FixItemsPositions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Holder.BPA_Holder_C.IsActorTagMatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Holder_C::IsActorTagMatch(class AActor* Actor, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Holder.BPA_Holder_C.IsActorTagMatch");
		
		ABPA_Holder_C_IsActorTagMatch_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Holder.BPA_Holder_C.IsOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABPA_Holder_C*                               Holder                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      itemActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Holder_C::IsOverlap(class ABPA_Holder_C* Holder, class AActor* itemActor, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Holder.BPA_Holder_C.IsOverlap");
		
		ABPA_Holder_C_IsOverlap_Params params {};
		params.Holder = Holder;
		params.itemActor = itemActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Holder.BPA_Holder_C.HideHeldItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Hidden                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Holder_C::HideHeldItems(bool Hidden)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Holder.BPA_Holder_C.HideHeldItems");
		
		ABPA_Holder_C_HideHeldItems_Params params {};
		params.Hidden = Hidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Holder.BPA_Holder_C.DoAttach
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Simulate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NoItemTake                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Holder_C::DoAttach(class AActor* Actor, bool Simulate, bool NoItemTake)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Holder.BPA_Holder_C.DoAttach");
		
		ABPA_Holder_C_DoAttach_Params params {};
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
	 * 		Name   -> Function BPA_Holder.BPA_Holder_C.ReinitPrimitives
	 * 		Flags  -> ()
	 */
	void ABPA_Holder_C::ReinitPrimitives()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Holder.BPA_Holder_C.ReinitPrimitives");
		
		ABPA_Holder_C_ReinitPrimitives_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Holder.BPA_Holder_C.IsHoldObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IgnodeGripped                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Holder_C::IsHoldObject(class AActor* Actor, bool IgnodeGripped, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Holder.BPA_Holder_C.IsHoldObject");
		
		ABPA_Holder_C_IsHoldObject_Params params {};
		params.Actor = Actor;
		params.IgnodeGripped = IgnodeGripped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Holder.BPA_Holder_C.GetHeldCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NotEmpty                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Holder_C::GetHeldCount(bool* NotEmpty, int32_t* Count)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Holder.BPA_Holder_C.GetHeldCount");
		
		ABPA_Holder_C_GetHeldCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NotEmpty != nullptr)
			*NotEmpty = params.NotEmpty;
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Holder.BPA_Holder_C.GetHeldObjects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IgnodeGripped                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class AActor*>                              HeldObjects                                                (Parm, OutParm)
	 */
	void ABPA_Holder_C::GetHeldObjects(bool IgnodeGripped, TArray<class AActor*>* HeldObjects)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Holder.BPA_Holder_C.GetHeldObjects");
		
		ABPA_Holder_C_GetHeldObjects_Params params {};
		params.IgnodeGripped = IgnodeGripped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeldObjects != nullptr)
			*HeldObjects = params.HeldObjects;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Holder.BPA_Holder_C.GetTotalWeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TotalWeight                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Holder_C::GetTotalWeight(float* TotalWeight)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Holder.BPA_Holder_C.GetTotalWeight");
		
		ABPA_Holder_C_GetTotalWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TotalWeight != nullptr)
			*TotalWeight = params.TotalWeight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Holder.BPA_Holder_C.TryRemoveFromInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTagContainer                       AllowedTag                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABPA_Holder_C::TryRemoveFromInventory(class AActor* Actor, const struct FGameplayTagContainer& AllowedTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Holder.BPA_Holder_C.TryRemoveFromInventory");
		
		ABPA_Holder_C_TryRemoveFromInventory_Params params {};
		params.Actor = Actor;
		params.AllowedTag = AllowedTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Holder.BPA_Holder_C.TryAttachToInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorDropped                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Attached                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Holder_C::TryAttachToInventory(class AActor* ActorDropped, bool* Attached)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Holder.BPA_Holder_C.TryAttachToInventory");
		
		ABPA_Holder_C_TryAttachToInventory_Params params {};
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
	 * 		Name   -> Function BPA_Holder.BPA_Holder_C.OnSpawnedFromInventory
	 * 		Flags  -> ()
	 */
	void ABPA_Holder_C::OnSpawnedFromInventory()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Holder.BPA_Holder_C.OnSpawnedFromInventory");
		
		ABPA_Holder_C_OnSpawnedFromInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Holder.BPA_Holder_C.OnDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Holder_C::OnDrop(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Holder.BPA_Holder_C.OnDrop");
		
		ABPA_Holder_C_OnDrop_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Holder.BPA_Holder_C.SpawnContent
	 * 		Flags  -> ()
	 */
	void ABPA_Holder_C::SpawnContent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Holder.BPA_Holder_C.SpawnContent");
		
		ABPA_Holder_C_SpawnContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Holder.BPA_Holder_C.RefreshHolder
	 * 		Flags  -> ()
	 */
	void ABPA_Holder_C::RefreshHolder()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Holder.BPA_Holder_C.RefreshHolder");
		
		ABPA_Holder_C_RefreshHolder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Holder.BPA_Holder_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Holder_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Holder.BPA_Holder_C.ReceiveEndPlay");
		
		ABPA_Holder_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Holder.BPA_Holder_C.OnGameStarted
	 * 		Flags  -> ()
	 */
	void ABPA_Holder_C::OnGameStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Holder.BPA_Holder_C.OnGameStarted");
		
		ABPA_Holder_C_OnGameStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Holder.BPA_Holder_C.OnTransitionEnd
	 * 		Flags  -> ()
	 */
	void ABPA_Holder_C::OnTransitionEnd()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Holder.BPA_Holder_C.OnTransitionEnd");
		
		ABPA_Holder_C_OnTransitionEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Holder.BPA_Holder_C.ExecuteUbergraph_BPA_Holder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Holder_C::ExecuteUbergraph_BPA_Holder(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Holder.BPA_Holder_C.ExecuteUbergraph_BPA_Holder");
		
		ABPA_Holder_C_ExecuteUbergraph_BPA_Holder_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_Holder_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_Holder_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_Holder.BPA_Holder_C");
		return ptr;
	}

}


