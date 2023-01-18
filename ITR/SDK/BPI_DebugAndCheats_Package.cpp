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
	 * 		Name   -> Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.CheatShowActorsOfClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_DebugAndCheats_C::CheatShowActorsOfClass(class UClass* Class)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.CheatShowActorsOfClass");
		
		UBPI_DebugAndCheats_C_CheatShowActorsOfClass_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SwitchCheatShowClimableActors
	 * 		Flags  -> ()
	 */
	void UBPI_DebugAndCheats_C::SwitchCheatShowClimableActors()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SwitchCheatShowClimableActors");
		
		UBPI_DebugAndCheats_C_SwitchCheatShowClimableActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.GetCheatShowClimabledistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_DebugAndCheats_C::GetCheatShowClimabledistance(int32_t* Distance)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.GetCheatShowClimabledistance");
		
		UBPI_DebugAndCheats_C_GetCheatShowClimabledistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Distance != nullptr)
			*Distance = params.Distance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SwitchNightVision
	 * 		Flags  -> ()
	 */
	void UBPI_DebugAndCheats_C::SwitchNightVision()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SwitchNightVision");
		
		UBPI_DebugAndCheats_C_SwitchNightVision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SwitchCheatShowItems
	 * 		Flags  -> ()
	 */
	void UBPI_DebugAndCheats_C::SwitchCheatShowItems()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SwitchCheatShowItems");
		
		UBPI_DebugAndCheats_C_SwitchCheatShowItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SetCheatShowItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_DebugAndCheats_C::SetCheatShowItems(int32_t Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SetCheatShowItems");
		
		UBPI_DebugAndCheats_C_SetCheatShowItems_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.GetCheatShowItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_DebugAndCheats_C::GetCheatShowItems(int32_t* Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.GetCheatShowItems");
		
		UBPI_DebugAndCheats_C_GetCheatShowItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SwitchCheatSpeed
	 * 		Flags  -> ()
	 */
	void UBPI_DebugAndCheats_C::SwitchCheatSpeed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SwitchCheatSpeed");
		
		UBPI_DebugAndCheats_C_SwitchCheatSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SetCheatSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_DebugAndCheats_C::SetCheatSpeed(bool Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SetCheatSpeed");
		
		UBPI_DebugAndCheats_C_SetCheatSpeed_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.GetCheatSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_DebugAndCheats_C::GetCheatSpeed(bool* Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.GetCheatSpeed");
		
		UBPI_DebugAndCheats_C_GetCheatSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SwitchCheatShowNearbyNPCs
	 * 		Flags  -> ()
	 */
	void UBPI_DebugAndCheats_C::SwitchCheatShowNearbyNPCs()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SwitchCheatShowNearbyNPCs");
		
		UBPI_DebugAndCheats_C_SwitchCheatShowNearbyNPCs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SetCheatShowNearbyNPCs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_DebugAndCheats_C::SetCheatShowNearbyNPCs(bool Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SetCheatShowNearbyNPCs");
		
		UBPI_DebugAndCheats_C_SetCheatShowNearbyNPCs_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.GetCheatShowNearbyNPCs
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_DebugAndCheats_C::GetCheatShowNearbyNPCs(bool* Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.GetCheatShowNearbyNPCs");
		
		UBPI_DebugAndCheats_C_GetCheatShowNearbyNPCs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_DebugAndCheats_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_DebugAndCheats_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_DebugAndCheats.BPI_DebugAndCheats_C");
		return ptr;
	}

}


