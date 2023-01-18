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
	 * 		Name   -> Function BP_ObjectiveExecutor_KillNPC.BP_ObjectiveExecutor_KillNPC_C.Execute
	 * 		Flags  -> ()
	 */
	void ABP_ObjectiveExecutor_KillNPC_C::Execute()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ObjectiveExecutor_KillNPC.BP_ObjectiveExecutor_KillNPC_C.Execute");
		
		ABP_ObjectiveExecutor_KillNPC_C_Execute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectiveExecutor_KillNPC.BP_ObjectiveExecutor_KillNPC_C.OnSpawnerCleared
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AMonsterSpawner*                             Spawner                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ObjectiveExecutor_KillNPC_C::OnSpawnerCleared(class AMonsterSpawner* Spawner)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ObjectiveExecutor_KillNPC.BP_ObjectiveExecutor_KillNPC_C.OnSpawnerCleared");
		
		ABP_ObjectiveExecutor_KillNPC_C_OnSpawnerCleared_Params params {};
		params.Spawner = Spawner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectiveExecutor_KillNPC.BP_ObjectiveExecutor_KillNPC_C.ExecuteUbergraph_BP_ObjectiveExecutor_KillNPC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ObjectiveExecutor_KillNPC_C::ExecuteUbergraph_BP_ObjectiveExecutor_KillNPC(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ObjectiveExecutor_KillNPC.BP_ObjectiveExecutor_KillNPC_C.ExecuteUbergraph_BP_ObjectiveExecutor_KillNPC");
		
		ABP_ObjectiveExecutor_KillNPC_C_ExecuteUbergraph_BP_ObjectiveExecutor_KillNPC_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ObjectiveExecutor_KillNPC_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ObjectiveExecutor_KillNPC_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ObjectiveExecutor_KillNPC.BP_ObjectiveExecutor_KillNPC_C");
		return ptr;
	}

}


