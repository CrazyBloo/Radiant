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
	 * 		Name   -> Function BP_Consumable_CakeWithCandle.BP_Consumable_CakeWithCandle_C.ReceiveAnyDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Consumable_CakeWithCandle_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Consumable_CakeWithCandle.BP_Consumable_CakeWithCandle_C.ReceiveAnyDamage");
		
		ABP_Consumable_CakeWithCandle_C_ReceiveAnyDamage_Params params {};
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
	 * 		Name   -> Function BP_Consumable_CakeWithCandle.BP_Consumable_CakeWithCandle_C.Use
	 * 		Flags  -> ()
	 */
	void ABP_Consumable_CakeWithCandle_C::Use()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Consumable_CakeWithCandle.BP_Consumable_CakeWithCandle_C.Use");
		
		ABP_Consumable_CakeWithCandle_C_Use_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Consumable_CakeWithCandle.BP_Consumable_CakeWithCandle_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Consumable_CakeWithCandle_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Consumable_CakeWithCandle.BP_Consumable_CakeWithCandle_C.ReceiveEndPlay");
		
		ABP_Consumable_CakeWithCandle_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Consumable_CakeWithCandle.BP_Consumable_CakeWithCandle_C.RequestPhysicsCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Requestor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Consumable_CakeWithCandle_C::RequestPhysicsCollision(bool On, const class FName& Requestor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Consumable_CakeWithCandle.BP_Consumable_CakeWithCandle_C.RequestPhysicsCollision");
		
		ABP_Consumable_CakeWithCandle_C_RequestPhysicsCollision_Params params {};
		params.On = On;
		params.Requestor = Requestor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Consumable_CakeWithCandle.BP_Consumable_CakeWithCandle_C.BlowOutCandle
	 * 		Flags  -> ()
	 */
	void ABP_Consumable_CakeWithCandle_C::BlowOutCandle()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Consumable_CakeWithCandle.BP_Consumable_CakeWithCandle_C.BlowOutCandle");
		
		ABP_Consumable_CakeWithCandle_C_BlowOutCandle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Consumable_CakeWithCandle.BP_Consumable_CakeWithCandle_C.IgniteCandle
	 * 		Flags  -> ()
	 */
	void ABP_Consumable_CakeWithCandle_C::IgniteCandle()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Consumable_CakeWithCandle.BP_Consumable_CakeWithCandle_C.IgniteCandle");
		
		ABP_Consumable_CakeWithCandle_C_IgniteCandle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Consumable_CakeWithCandle.BP_Consumable_CakeWithCandle_C.ExecuteUbergraph_BP_Consumable_CakeWithCandle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Consumable_CakeWithCandle_C::ExecuteUbergraph_BP_Consumable_CakeWithCandle(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Consumable_CakeWithCandle.BP_Consumable_CakeWithCandle_C.ExecuteUbergraph_BP_Consumable_CakeWithCandle");
		
		ABP_Consumable_CakeWithCandle_C_ExecuteUbergraph_BP_Consumable_CakeWithCandle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Consumable_CakeWithCandle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Consumable_CakeWithCandle_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Consumable_CakeWithCandle.BP_Consumable_CakeWithCandle_C");
		return ptr;
	}

}


