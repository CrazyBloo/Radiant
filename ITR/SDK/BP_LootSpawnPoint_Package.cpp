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
	 * 		Name   -> Function BP_LootSpawnPoint.BP_LootSpawnPoint_C.SpawnLoot
	 * 		Flags  -> ()
	 */
	void ABP_LootSpawnPoint_C::SpawnLoot()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootSpawnPoint.BP_LootSpawnPoint_C.SpawnLoot");
		
		ABP_LootSpawnPoint_C_SpawnLoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LootSpawnPoint.BP_LootSpawnPoint_C.GenerateLoot
	 * 		Flags  -> ()
	 */
	void ABP_LootSpawnPoint_C::GenerateLoot()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootSpawnPoint.BP_LootSpawnPoint_C.GenerateLoot");
		
		ABP_LootSpawnPoint_C_GenerateLoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LootSpawnPoint.BP_LootSpawnPoint_C.ExecuteUbergraph_BP_LootSpawnPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LootSpawnPoint_C::ExecuteUbergraph_BP_LootSpawnPoint(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootSpawnPoint.BP_LootSpawnPoint_C.ExecuteUbergraph_BP_LootSpawnPoint");
		
		ABP_LootSpawnPoint_C_ExecuteUbergraph_BP_LootSpawnPoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_LootSpawnPoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LootSpawnPoint_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_LootSpawnPoint.BP_LootSpawnPoint_C");
		return ptr;
	}

}


