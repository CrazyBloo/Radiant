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
	 * 		Name   -> Function BPI_PRGameMode.BPI_PRGameMode_C.ApplyBightnessMult
	 * 		Flags  -> ()
	 */
	void UBPI_PRGameMode_C::ApplyBightnessMult()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRGameMode.BPI_PRGameMode_C.ApplyBightnessMult");
		
		UBPI_PRGameMode_C_ApplyBightnessMult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRGameMode.BPI_PRGameMode_C.OnPlayerDeath
	 * 		Flags  -> ()
	 */
	void UBPI_PRGameMode_C::OnPlayerDeath()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRGameMode.BPI_PRGameMode_C.OnPlayerDeath");
		
		UBPI_PRGameMode_C_OnPlayerDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRGameMode.BPI_PRGameMode_C.GetEnvironment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Environment_C*                           Environment                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRGameMode_C::GetEnvironment(class ABP_Environment_C** Environment)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRGameMode.BPI_PRGameMode_C.GetEnvironment");
		
		UBPI_PRGameMode_C_GetEnvironment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Environment != nullptr)
			*Environment = params.Environment;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_PRGameMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_PRGameMode_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PRGameMode.BPI_PRGameMode_C");
		return ptr;
	}

}


