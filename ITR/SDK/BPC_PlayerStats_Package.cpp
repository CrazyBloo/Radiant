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
	 * 		Name   -> Function BPC_PlayerStats.BPC_PlayerStats_C.SetTimePassed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RealDeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_PlayerStats_C::SetTimePassed(float DeltaSeconds, float RealDeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerStats.BPC_PlayerStats_C.SetTimePassed");
		
		UBPC_PlayerStats_C_SetTimePassed_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		params.RealDeltaSeconds = RealDeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerStats.BPC_PlayerStats_C.BuffEnd
	 * 		Flags  -> ()
	 */
	void UBPC_PlayerStats_C::BuffEnd()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerStats.BPC_PlayerStats_C.BuffEnd");
		
		UBPC_PlayerStats_C_BuffEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerStats.BPC_PlayerStats_C.BuffStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AmmountToBoost                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ActiveTimeSec                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_PlayerStats_C::BuffStart(float AmmountToBoost, float ActiveTimeSec)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerStats.BPC_PlayerStats_C.BuffStart");
		
		UBPC_PlayerStats_C_BuffStart_Params params {};
		params.AmmountToBoost = AmmountToBoost;
		params.ActiveTimeSec = ActiveTimeSec;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerStats.BPC_PlayerStats_C.CalculateRest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Resting                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_PlayerStats_C::CalculateRest(bool Resting, float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerStats.BPC_PlayerStats_C.CalculateRest");
		
		UBPC_PlayerStats_C_CalculateRest_Params params {};
		params.Resting = Resting;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerStats.BPC_PlayerStats_C.ChangeThirst
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_PlayerStats_C::ChangeThirst(float Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerStats.BPC_PlayerStats_C.ChangeThirst");
		
		UBPC_PlayerStats_C_ChangeThirst_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerStats.BPC_PlayerStats_C.IsLackOfNeeds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Lack                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_PlayerStats_C::IsLackOfNeeds(bool* Lack)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerStats.BPC_PlayerStats_C.IsLackOfNeeds");
		
		UBPC_PlayerStats_C_IsLackOfNeeds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Lack != nullptr)
			*Lack = params.Lack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerStats.BPC_PlayerStats_C.HungerThirstDamage
	 * 		Flags  -> ()
	 */
	void UBPC_PlayerStats_C::HungerThirstDamage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerStats.BPC_PlayerStats_C.HungerThirstDamage");
		
		UBPC_PlayerStats_C_HungerThirstDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerStats.BPC_PlayerStats_C.CalculateStamina
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Use                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_PlayerStats_C::CalculateStamina(bool Use, float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerStats.BPC_PlayerStats_C.CalculateStamina");
		
		UBPC_PlayerStats_C_CalculateStamina_Params params {};
		params.Use = Use;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerStats.BPC_PlayerStats_C.CalculateThirst
	 * 		Flags  -> ()
	 */
	void UBPC_PlayerStats_C::CalculateThirst()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerStats.BPC_PlayerStats_C.CalculateThirst");
		
		UBPC_PlayerStats_C_CalculateThirst_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerStats.BPC_PlayerStats_C.CalculateNutrition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_PlayerStats_C::CalculateNutrition(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerStats.BPC_PlayerStats_C.CalculateNutrition");
		
		UBPC_PlayerStats_C_CalculateNutrition_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerStats.BPC_PlayerStats_C.DisplayStats
	 * 		Flags  -> ()
	 */
	void UBPC_PlayerStats_C::DisplayStats()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerStats.BPC_PlayerStats_C.DisplayStats");
		
		UBPC_PlayerStats_C_DisplayStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerStats.BPC_PlayerStats_C.OnGameStarted
	 * 		Flags  -> ()
	 */
	void UBPC_PlayerStats_C::OnGameStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerStats.BPC_PlayerStats_C.OnGameStarted");
		
		UBPC_PlayerStats_C_OnGameStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerStats.BPC_PlayerStats_C.UseStamina
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Use                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              StaminaUseMult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_PlayerStats_C::UseStamina(bool Use, float StaminaUseMult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerStats.BPC_PlayerStats_C.UseStamina");
		
		UBPC_PlayerStats_C_UseStamina_Params params {};
		params.Use = Use;
		params.StaminaUseMult = StaminaUseMult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerStats.BPC_PlayerStats_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_PlayerStats_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerStats.BPC_PlayerStats_C.ReceiveTick");
		
		UBPC_PlayerStats_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerStats.BPC_PlayerStats_C.ExecuteUbergraph_BPC_PlayerStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_PlayerStats_C::ExecuteUbergraph_BPC_PlayerStats(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerStats.BPC_PlayerStats_C.ExecuteUbergraph_BPC_PlayerStats");
		
		UBPC_PlayerStats_C_ExecuteUbergraph_BPC_PlayerStats_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_PlayerStats.BPC_PlayerStats_C.ThirstEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBPC_PlayerStats_C::ThirstEnd__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_PlayerStats.BPC_PlayerStats_C.ThirstEnd__DelegateSignature");
		
		UBPC_PlayerStats_C_ThirstEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_PlayerStats_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_PlayerStats_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPC_PlayerStats.BPC_PlayerStats_C");
		return ptr;
	}

}


