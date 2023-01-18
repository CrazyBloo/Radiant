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
	 * 		Name   -> Function FL_Inventory.FL_Inventory_C.FindHolder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                holderID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               exact                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     holderObject                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Inventory_C::FindHolder(const struct FGameplayTag& holderID, bool exact, class UObject* __WorldContext, class UObject** holderObject)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Inventory.FL_Inventory_C.FindHolder");
		
		UFL_Inventory_C_FindHolder_Params params {};
		params.holderID = holderID;
		params.exact = exact;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (holderObject != nullptr)
			*holderObject = params.holderObject;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Inventory.FL_Inventory_C.SpawnLevelItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Inventory_C::SpawnLevelItems(class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Inventory.FL_Inventory_C.SpawnLevelItems");
		
		UFL_Inventory_C_SpawnLevelItems_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Inventory.FL_Inventory_C.FindItemPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                ItemTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             ParentComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USceneComponent*                             Point                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Inventory_C::FindItemPoint(const struct FGameplayTag& ItemTag, class USceneComponent* ParentComponent, class UObject* __WorldContext, bool* success, class USceneComponent** Point)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Inventory.FL_Inventory_C.FindItemPoint");
		
		UFL_Inventory_C_FindItemPoint_Params params {};
		params.ItemTag = ItemTag;
		params.ParentComponent = ParentComponent;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
		if (Point != nullptr)
			*Point = params.Point;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Inventory.FL_Inventory_C.FindHoldersForActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               onlyFree                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UObject*>                             Holders                                                    (Parm, OutParm)
	 */
	void UFL_Inventory_C::FindHoldersForActor(class AActor* Actor, bool onlyFree, class UObject* __WorldContext, TArray<class UObject*>* Holders)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Inventory.FL_Inventory_C.FindHoldersForActor");
		
		UFL_Inventory_C_FindHoldersForActor_Params params {};
		params.Actor = Actor;
		params.onlyFree = onlyFree;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Holders != nullptr)
			*Holders = params.Holders;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Inventory.FL_Inventory_C.SpawnItemByTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                ItemTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             ParentSceneComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SnapToParent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		bool                                               Preconfigured                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      CustomUID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      SpawnedActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Inventory_C::SpawnItemByTag(const struct FGameplayTag& ItemTag, class USceneComponent* ParentSceneComponent, bool SnapToParent, const struct FTransform& Transform, bool Preconfigured, const class FString& CustomUID, class UObject* __WorldContext, class AActor** SpawnedActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Inventory.FL_Inventory_C.SpawnItemByTag");
		
		UFL_Inventory_C_SpawnItemByTag_Params params {};
		params.ItemTag = ItemTag;
		params.ParentSceneComponent = ParentSceneComponent;
		params.SnapToParent = SnapToParent;
		params.Transform = Transform;
		params.Preconfigured = Preconfigured;
		params.CustomUID = CustomUID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnedActor != nullptr)
			*SpawnedActor = params.SpawnedActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Inventory.FL_Inventory_C.SpawnInventoryItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             ParentSceneComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               KeepRelativeLoc                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Simulate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      SpawnedActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Inventory_C::SpawnInventoryItem(class UInventoryItem* InventoryItem, class USceneComponent* ParentSceneComponent, bool KeepRelativeLoc, bool Simulate, class UObject* __WorldContext, class AActor** SpawnedActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Inventory.FL_Inventory_C.SpawnInventoryItem");
		
		UFL_Inventory_C_SpawnInventoryItem_Params params {};
		params.InventoryItem = InventoryItem;
		params.ParentSceneComponent = ParentSceneComponent;
		params.KeepRelativeLoc = KeepRelativeLoc;
		params.Simulate = Simulate;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnedActor != nullptr)
			*SpawnedActor = params.SpawnedActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Inventory.FL_Inventory_C.CallSpawnActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Inventory_C::CallSpawnActor(class AActor* Actor, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Inventory.FL_Inventory_C.CallSpawnActor");
		
		UFL_Inventory_C_CallSpawnActor_Params params {};
		params.Actor = Actor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Inventory.FL_Inventory_C.CallSpawnComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Inventory_C::CallSpawnComponent(class USceneComponent* Component, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Inventory.FL_Inventory_C.CallSpawnComponent");
		
		UFL_Inventory_C_CallSpawnComponent_Params params {};
		params.Component = Component;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Inventory.FL_Inventory_C.CheckAndSpawnItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Inventory_C::CheckAndSpawnItems(class UObject* Object, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Inventory.FL_Inventory_C.CheckAndSpawnItems");
		
		UFL_Inventory_C_CheckAndSpawnItems_Params params {};
		params.Object = Object;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFL_Inventory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFL_Inventory_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FL_Inventory.FL_Inventory_C");
		return ptr;
	}

}


