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
	 * 		Name   -> Function BP_Bomb.BP_Bomb_C.Explode
	 * 		Flags  -> ()
	 */
	void ABP_Bomb_C::Explode()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Bomb.BP_Bomb_C.Explode");
		
		ABP_Bomb_C_Explode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bomb.BP_Bomb_C.GameplayTrigger
	 * 		Flags  -> ()
	 */
	void ABP_Bomb_C::GameplayTrigger()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Bomb.BP_Bomb_C.GameplayTrigger");
		
		ABP_Bomb_C_GameplayTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Bomb.BP_Bomb_C.ExecuteUbergraph_BP_Bomb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Bomb_C::ExecuteUbergraph_BP_Bomb(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Bomb.BP_Bomb_C.ExecuteUbergraph_BP_Bomb");
		
		ABP_Bomb_C_ExecuteUbergraph_BP_Bomb_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Bomb_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Bomb_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Bomb.BP_Bomb_C");
		return ptr;
	}

}


