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
	 * 		Name   -> Function BPA_Stash.BPA_Stash_C.SetLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Locked                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Stash_C::SetLocked(bool Locked)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Stash.BPA_Stash_C.SetLocked");
		
		ABPA_Stash_C_SetLocked_Params params {};
		params.Locked = Locked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Stash.BPA_Stash_C.OnDoorStateChanged
	 * 		Flags  -> ()
	 */
	void ABPA_Stash_C::OnDoorStateChanged()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Stash.BPA_Stash_C.OnDoorStateChanged");
		
		ABPA_Stash_C_OnDoorStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Stash.BPA_Stash_C.OnLevelStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Stash_C::OnLevelStarted(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Stash.BPA_Stash_C.OnLevelStarted");
		
		ABPA_Stash_C_OnLevelStarted_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Stash.BPA_Stash_C.SpawnLoot
	 * 		Flags  -> ()
	 */
	void ABPA_Stash_C::SpawnLoot()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Stash.BPA_Stash_C.SpawnLoot");
		
		ABPA_Stash_C_SpawnLoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Stash.BPA_Stash_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FStashSpawnInfo                             StashSpawnInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABPA_Stash_C::Setup(const struct FStashSpawnInfo& StashSpawnInfo)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Stash.BPA_Stash_C.Setup");
		
		ABPA_Stash_C_Setup_Params params {};
		params.StashSpawnInfo = StashSpawnInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Stash.BPA_Stash_C.ExecuteUbergraph_BPA_Stash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Stash_C::ExecuteUbergraph_BPA_Stash(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Stash.BPA_Stash_C.ExecuteUbergraph_BPA_Stash");
		
		ABPA_Stash_C_ExecuteUbergraph_BPA_Stash_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Stash.BPA_Stash_C.StashOpened__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABPA_Stash_C::StashOpened__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Stash.BPA_Stash_C.StashOpened__DelegateSignature");
		
		ABPA_Stash_C_StashOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_Stash_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_Stash_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_Stash.BPA_Stash_C");
		return ptr;
	}

}


