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
	 * 		Name   -> Function BPC_Holster_WeaponPrimary.BPC_Holster_WeaponPrimary_C.OnItemTaken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Holster_WeaponPrimary_C::OnItemTaken(class UInventoryItem* InventoryItem)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster_WeaponPrimary.BPC_Holster_WeaponPrimary_C.OnItemTaken");
		
		UBPC_Holster_WeaponPrimary_C_OnItemTaken_Params params {};
		params.InventoryItem = InventoryItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster_WeaponPrimary.BPC_Holster_WeaponPrimary_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Holster_WeaponPrimary_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster_WeaponPrimary.BPC_Holster_WeaponPrimary_C.ReceiveTick");
		
		UBPC_Holster_WeaponPrimary_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster_WeaponPrimary.BPC_Holster_WeaponPrimary_C.Clear GSLerp target
	 * 		Flags  -> ()
	 */
	void UBPC_Holster_WeaponPrimary_C::ClearGSLerptarget()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster_WeaponPrimary.BPC_Holster_WeaponPrimary_C.Clear GSLerp target");
		
		UBPC_Holster_WeaponPrimary_C_ClearGSLerptarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster_WeaponPrimary.BPC_Holster_WeaponPrimary_C.AttachAndLerpHold
	 * 		Flags  -> ()
	 */
	void UBPC_Holster_WeaponPrimary_C::AttachAndLerpHold()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster_WeaponPrimary.BPC_Holster_WeaponPrimary_C.AttachAndLerpHold");
		
		UBPC_Holster_WeaponPrimary_C_AttachAndLerpHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster_WeaponPrimary.BPC_Holster_WeaponPrimary_C.InstantAttach
	 * 		Flags  -> ()
	 */
	void UBPC_Holster_WeaponPrimary_C::InstantAttach()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster_WeaponPrimary.BPC_Holster_WeaponPrimary_C.InstantAttach");
		
		UBPC_Holster_WeaponPrimary_C_InstantAttach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster_WeaponPrimary.BPC_Holster_WeaponPrimary_C.SpawnContent
	 * 		Flags  -> ()
	 */
	void UBPC_Holster_WeaponPrimary_C::SpawnContent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster_WeaponPrimary.BPC_Holster_WeaponPrimary_C.SpawnContent");
		
		UBPC_Holster_WeaponPrimary_C_SpawnContent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_Holster_WeaponPrimary.BPC_Holster_WeaponPrimary_C.ExecuteUbergraph_BPC_Holster_WeaponPrimary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_Holster_WeaponPrimary_C::ExecuteUbergraph_BPC_Holster_WeaponPrimary(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_Holster_WeaponPrimary.BPC_Holster_WeaponPrimary_C.ExecuteUbergraph_BPC_Holster_WeaponPrimary");
		
		UBPC_Holster_WeaponPrimary_C_ExecuteUbergraph_BPC_Holster_WeaponPrimary_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_Holster_WeaponPrimary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_Holster_WeaponPrimary_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPC_Holster_WeaponPrimary.BPC_Holster_WeaponPrimary_C");
		return ptr;
	}

}


