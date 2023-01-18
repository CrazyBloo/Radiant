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
	 * 		Name   -> Function BPC_DamageOverTime.BPC_DamageOverTime_C.DoTTick
	 * 		Flags  -> ()
	 */
	void UBPC_DamageOverTime_C::DoTTick()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_DamageOverTime.BPC_DamageOverTime_C.DoTTick");
		
		UBPC_DamageOverTime_C_DoTTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_DamageOverTime.BPC_DamageOverTime_C.DotFinished
	 * 		Flags  -> ()
	 */
	void UBPC_DamageOverTime_C::DotFinished()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_DamageOverTime.BPC_DamageOverTime_C.DotFinished");
		
		UBPC_DamageOverTime_C_DotFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_DamageOverTime.BPC_DamageOverTime_C.ContiniousDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              ActorsToAffect                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPC_DamageOverTime_C::ContiniousDamage(TArray<class AActor*> ActorsToAffect)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_DamageOverTime.BPC_DamageOverTime_C.ContiniousDamage");
		
		UBPC_DamageOverTime_C_ContiniousDamage_Params params {};
		params.ActorsToAffect = ActorsToAffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_DamageOverTime.BPC_DamageOverTime_C.ApplyDoT
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_DamageOverTime_C::ApplyDoT(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_DamageOverTime.BPC_DamageOverTime_C.ApplyDoT");
		
		UBPC_DamageOverTime_C_ApplyDoT_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_DamageOverTime.BPC_DamageOverTime_C.Damage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_DamageOverTime_C::Damage(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_DamageOverTime.BPC_DamageOverTime_C.Damage");
		
		UBPC_DamageOverTime_C_Damage_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_DamageOverTime.BPC_DamageOverTime_C.ExecuteUbergraph_BPC_DamageOverTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_DamageOverTime_C::ExecuteUbergraph_BPC_DamageOverTime(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_DamageOverTime.BPC_DamageOverTime_C.ExecuteUbergraph_BPC_DamageOverTime");
		
		UBPC_DamageOverTime_C_ExecuteUbergraph_BPC_DamageOverTime_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_DamageOverTime_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_DamageOverTime_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPC_DamageOverTime.BPC_DamageOverTime_C");
		return ptr;
	}

}


