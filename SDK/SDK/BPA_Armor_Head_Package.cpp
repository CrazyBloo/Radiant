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
	 * 		Name   -> Function BPA_Armor_Head.BPA_Armor_Head_C.BlockFaceTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                                                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Armor_Head_C::BlockFaceTrigger(bool* )
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Armor_Head.BPA_Armor_Head_C.BlockFaceTrigger");
		
		ABPA_Armor_Head_C_BlockFaceTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if ( != nullptr)
			* = params.;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Armor_Head.BPA_Armor_Head_C.RemovePostProcess
	 * 		Flags  -> ()
	 */
	void ABPA_Armor_Head_C::RemovePostProcess()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Armor_Head.BPA_Armor_Head_C.RemovePostProcess");
		
		ABPA_Armor_Head_C_RemovePostProcess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Armor_Head.BPA_Armor_Head_C.AddPostProcess
	 * 		Flags  -> ()
	 */
	void ABPA_Armor_Head_C::AddPostProcess()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Armor_Head.BPA_Armor_Head_C.AddPostProcess");
		
		ABPA_Armor_Head_C_AddPostProcess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Armor_Head.BPA_Armor_Head_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Armor_Head_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Armor_Head.BPA_Armor_Head_C.ReceiveEndPlay");
		
		ABPA_Armor_Head_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Armor_Head.BPA_Armor_Head_C.OnStart
	 * 		Flags  -> ()
	 */
	void ABPA_Armor_Head_C::OnStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Armor_Head.BPA_Armor_Head_C.OnStart");
		
		ABPA_Armor_Head_C_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Armor_Head.BPA_Armor_Head_C.OnAddedToHolster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHolsterComponent*                           Holster                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Armor_Head_C::OnAddedToHolster(class UHolsterComponent* Holster)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Armor_Head.BPA_Armor_Head_C.OnAddedToHolster");
		
		ABPA_Armor_Head_C_OnAddedToHolster_Params params {};
		params.Holster = Holster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Armor_Head.BPA_Armor_Head_C.OnRemovedFromHolster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHolsterComponent*                           Holster                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Armor_Head_C::OnRemovedFromHolster(class UHolsterComponent* Holster)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Armor_Head.BPA_Armor_Head_C.OnRemovedFromHolster");
		
		ABPA_Armor_Head_C_OnRemovedFromHolster_Params params {};
		params.Holster = Holster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Armor_Head.BPA_Armor_Head_C.ExecuteUbergraph_BPA_Armor_Head
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Armor_Head_C::ExecuteUbergraph_BPA_Armor_Head(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Armor_Head.BPA_Armor_Head_C.ExecuteUbergraph_BPA_Armor_Head");
		
		ABPA_Armor_Head_C_ExecuteUbergraph_BPA_Armor_Head_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_Armor_Head_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_Armor_Head_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_Armor_Head.BPA_Armor_Head_C");
		return ptr;
	}

}


