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
	 * 		Name   -> Function BPC_Holster.BPC_Holster_C.CalcDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      targetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInRange                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Holster_C::CalcDistance(class AActor* targetActor, bool* bInRange, float* Distance)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster.BPC_Holster_C.CalcDistance");
		
		UBPC_Holster_C_CalcDistance_Params params {};
		params.targetActor = targetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bInRange != nullptr)
			*bInRange = params.bInRange;
		if (Distance != nullptr)
			*Distance = params.Distance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster.BPC_Holster_C.Check if Item from This Holster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Holster_C::CheckifItemfromThisHolster(class UInventoryItem* Item, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster.BPC_Holster_C.Check if Item from This Holster");
		
		UBPC_Holster_C_CheckifItemfromThisHolster_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster.BPC_Holster_C.IsAcceptItemActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      itemActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               onlyIfFree                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               accept                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Holster_C::IsAcceptItemActor(class AActor* itemActor, bool onlyIfFree, bool* accept)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster.BPC_Holster_C.IsAcceptItemActor");
		
		UBPC_Holster_C_IsAcceptItemActor_Params params {};
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
	 * 		Name   -> Function BPC_Holster.BPC_Holster_C.IsSnapHolder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               snapHolder                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Holster_C::IsSnapHolder(bool* snapHolder)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster.BPC_Holster_C.IsSnapHolder");
		
		UBPC_Holster_C_IsSnapHolder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (snapHolder != nullptr)
			*snapHolder = params.snapHolder;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster.BPC_Holster_C.GetHolderID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                holderID                                                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Holster_C::GetHolderID(struct FGameplayTag* holderID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster.BPC_Holster_C.GetHolderID");
		
		UBPC_Holster_C_GetHolderID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (holderID != nullptr)
			*holderID = params.holderID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster.BPC_Holster_C.AdditionalTransformBasedOnTag
	 * 		Flags  -> ()
	 */
	void UBPC_Holster_C::AdditionalTransformBasedOnTag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster.BPC_Holster_C.AdditionalTransformBasedOnTag");
		
		UBPC_Holster_C_AdditionalTransformBasedOnTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster.BPC_Holster_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Holster_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster.BPC_Holster_C.ReceiveTick");
		
		UBPC_Holster_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster.BPC_Holster_C.MeshMarker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Holster_C::MeshMarker(bool On, class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster.BPC_Holster_C.MeshMarker");
		
		UBPC_Holster_C_MeshMarker_Params params {};
		params.On = On;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster.BPC_Holster_C.CheckDist
	 * 		Flags  -> ()
	 */
	void UBPC_Holster_C::CheckDist()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster.BPC_Holster_C.CheckDist");
		
		UBPC_Holster_C_CheckDist_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster.BPC_Holster_C.SpawnContent
	 * 		Flags  -> ()
	 */
	void UBPC_Holster_C::SpawnContent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster.BPC_Holster_C.SpawnContent");
		
		UBPC_Holster_C_SpawnContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster.BPC_Holster_C.RefreshHolder
	 * 		Flags  -> ()
	 */
	void UBPC_Holster_C::RefreshHolder()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster.BPC_Holster_C.RefreshHolder");
		
		UBPC_Holster_C_RefreshHolder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster.BPC_Holster_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Holster_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster.BPC_Holster_C.ReceiveEndPlay");
		
		UBPC_Holster_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster.BPC_Holster_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_Holster_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster.BPC_Holster_C.ReceiveBeginPlay");
		
		UBPC_Holster_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster.BPC_Holster_C.OnItemTaken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Holster_C::OnItemTaken(class UInventoryItem* InventoryItem)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster.BPC_Holster_C.OnItemTaken");
		
		UBPC_Holster_C_OnItemTaken_Params params {};
		params.InventoryItem = InventoryItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster.BPC_Holster_C.InstantAttach
	 * 		Flags  -> ()
	 */
	void UBPC_Holster_C::InstantAttach()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster.BPC_Holster_C.InstantAttach");
		
		UBPC_Holster_C_InstantAttach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster.BPC_Holster_C.SetContentVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Holster_C::SetContentVisibility(bool Visible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster.BPC_Holster_C.SetContentVisibility");
		
		UBPC_Holster_C_SetContentVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster.BPC_Holster_C.SetHolderVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_Holster_C::SetHolderVisibility(bool Visible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster.BPC_Holster_C.SetHolderVisibility");
		
		UBPC_Holster_C_SetHolderVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster.BPC_Holster_C.AttachAndLerpHold
	 * 		Flags  -> ()
	 */
	void UBPC_Holster_C::AttachAndLerpHold()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster.BPC_Holster_C.AttachAndLerpHold");
		
		UBPC_Holster_C_AttachAndLerpHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster.BPC_Holster_C.UpdatePhysicsCollision
	 * 		Flags  -> ()
	 */
	void UBPC_Holster_C::UpdatePhysicsCollision()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster.BPC_Holster_C.UpdatePhysicsCollision");
		
		UBPC_Holster_C_UpdatePhysicsCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster.BPC_Holster_C.ExecuteUbergraph_BPC_Holster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Holster_C::ExecuteUbergraph_BPC_Holster(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster.BPC_Holster_C.ExecuteUbergraph_BPC_Holster");
		
		UBPC_Holster_C_ExecuteUbergraph_BPC_Holster_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_Holster_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Holster_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Holster.BPC_Holster_C");
		return ptr;
	}

}


