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
	 * 		Name   -> Function BPI_Armor.BPI_Armor_C.GetFootStepBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                                                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              bonus                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Armor_C::GetFootStepBonus(bool* , float* bonus)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Armor.BPI_Armor_C.GetFootStepBonus");
		
		UBPI_Armor_C_GetFootStepBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if ( != nullptr)
			* = params.;
		if (bonus != nullptr)
			*bonus = params.bonus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Armor.BPI_Armor_C.BlockFaceTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                                                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_Armor_C::BlockFaceTrigger(bool* )
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Armor.BPI_Armor_C.BlockFaceTrigger");
		
		UBPI_Armor_C_BlockFaceTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if ( != nullptr)
			* = params.;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_Armor.BPI_Armor_C.GetSoundType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Exist                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_Armor_C::GetSoundType(bool* Exist, int32_t* Type)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_Armor.BPI_Armor_C.GetSoundType");
		
		UBPI_Armor_C_GetSoundType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Exist != nullptr)
			*Exist = params.Exist;
		if (Type != nullptr)
			*Type = params.Type;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_Armor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Armor_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Armor.BPI_Armor_C");
		return ptr;
	}

}


