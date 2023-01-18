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
	 * 		Name   -> Function BP_ItemDropLocation.BP_ItemDropLocation_C.CheckItems
	 * 		Flags  -> ()
	 */
	void ABP_ItemDropLocation_C::CheckItems()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDropLocation.BP_ItemDropLocation_C.CheckItems");
		
		ABP_ItemDropLocation_C_CheckItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemDropLocation.BP_ItemDropLocation_C.OnItemTaken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ItemDropLocation_C::OnItemTaken(class UInventoryItem* InventoryItem)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDropLocation.BP_ItemDropLocation_C.OnItemTaken");
		
		ABP_ItemDropLocation_C_OnItemTaken_Params params {};
		params.InventoryItem = InventoryItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemDropLocation.BP_ItemDropLocation_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ItemDropLocation_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDropLocation.BP_ItemDropLocation_C.ReceiveBeginPlay");
		
		ABP_ItemDropLocation_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemDropLocation.BP_ItemDropLocation_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ItemDropLocation_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDropLocation.BP_ItemDropLocation_C.ReceiveEndPlay");
		
		ABP_ItemDropLocation_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemDropLocation.BP_ItemDropLocation_C.ExecuteUbergraph_BP_ItemDropLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ItemDropLocation_C::ExecuteUbergraph_BP_ItemDropLocation(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDropLocation.BP_ItemDropLocation_C.ExecuteUbergraph_BP_ItemDropLocation");
		
		ABP_ItemDropLocation_C_ExecuteUbergraph_BP_ItemDropLocation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ItemDropLocation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ItemDropLocation_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemDropLocation.BP_ItemDropLocation_C");
		return ptr;
	}

}


