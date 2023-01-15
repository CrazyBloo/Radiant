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
	 * 		Name   -> Function BP_MonsterSpawnGenerator.BP_MonsterSpawnGenerator_C.AddAlternativePlace
	 * 		Flags  -> ()
	 */
	void ABP_MonsterSpawnGenerator_C::AddAlternativePlace()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MonsterSpawnGenerator.BP_MonsterSpawnGenerator_C.AddAlternativePlace");
		
		ABP_MonsterSpawnGenerator_C_AddAlternativePlace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterSpawnGenerator.BP_MonsterSpawnGenerator_C.ReceiveAnyDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MonsterSpawnGenerator_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MonsterSpawnGenerator.BP_MonsterSpawnGenerator_C.ReceiveAnyDamage");
		
		ABP_MonsterSpawnGenerator_C_ReceiveAnyDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterSpawnGenerator.BP_MonsterSpawnGenerator_C.OnSpawnerReadyToCall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AMonsterSpawner*                             Spawner                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MonsterSpawnGenerator_C::OnSpawnerReadyToCall(class AMonsterSpawner* Spawner)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MonsterSpawnGenerator.BP_MonsterSpawnGenerator_C.OnSpawnerReadyToCall");
		
		ABP_MonsterSpawnGenerator_C_OnSpawnerReadyToCall_Params params {};
		params.Spawner = Spawner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterSpawnGenerator.BP_MonsterSpawnGenerator_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_MonsterSpawnGenerator_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MonsterSpawnGenerator.BP_MonsterSpawnGenerator_C.ReceiveBeginPlay");
		
		ABP_MonsterSpawnGenerator_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MonsterSpawnGenerator.BP_MonsterSpawnGenerator_C.ExecuteUbergraph_BP_MonsterSpawnGenerator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MonsterSpawnGenerator_C::ExecuteUbergraph_BP_MonsterSpawnGenerator(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MonsterSpawnGenerator.BP_MonsterSpawnGenerator_C.ExecuteUbergraph_BP_MonsterSpawnGenerator");
		
		ABP_MonsterSpawnGenerator_C_ExecuteUbergraph_BP_MonsterSpawnGenerator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MonsterSpawnGenerator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MonsterSpawnGenerator_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MonsterSpawnGenerator.BP_MonsterSpawnGenerator_C");
		return ptr;
	}

}


