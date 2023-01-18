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
	 * 		Name   -> Function BP_Corpse.BP_Corpse_C.UpdateCorpseMesh
	 * 		Flags  -> ()
	 */
	void ABP_Corpse_C::UpdateCorpseMesh()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Corpse.BP_Corpse_C.UpdateCorpseMesh");
		
		ABP_Corpse_C_UpdateCorpseMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Corpse.BP_Corpse_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Corpse_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Corpse.BP_Corpse_C.ReceiveEndPlay");
		
		ABP_Corpse_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Corpse.BP_Corpse_C.OnLevelStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Corpse_C::OnLevelStarted(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Corpse.BP_Corpse_C.OnLevelStarted");
		
		ABP_Corpse_C_OnLevelStarted_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Corpse.BP_Corpse_C.ExecuteUbergraph_BP_Corpse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Corpse_C::ExecuteUbergraph_BP_Corpse(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Corpse.BP_Corpse_C.ExecuteUbergraph_BP_Corpse");
		
		ABP_Corpse_C_ExecuteUbergraph_BP_Corpse_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Corpse_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Corpse_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Corpse.BP_Corpse_C");
		return ptr;
	}

}


