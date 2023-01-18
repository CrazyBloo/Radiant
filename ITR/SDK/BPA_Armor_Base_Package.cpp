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
	 * 		Name   -> Function BPA_Armor_Base.BPA_Armor_Base_C.GetFootStepBonus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                                                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              bonus                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Armor_Base_C::GetFootStepBonus(bool* , float* bonus)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Armor_Base.BPA_Armor_Base_C.GetFootStepBonus");
		
		ABPA_Armor_Base_C_GetFootStepBonus_Params params {};
		
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
	 * 		Name   -> Function BPA_Armor_Base.BPA_Armor_Base_C.BlockFaceTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                                                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Armor_Base_C::BlockFaceTrigger(bool* )
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Armor_Base.BPA_Armor_Base_C.BlockFaceTrigger");
		
		ABPA_Armor_Base_C_BlockFaceTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if ( != nullptr)
			* = params.;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Armor_Base.BPA_Armor_Base_C.GetSoundType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Exist                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Armor_Base_C::GetSoundType(bool* Exist, int32_t* Type)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Armor_Base.BPA_Armor_Base_C.GetSoundType");
		
		ABPA_Armor_Base_C_GetSoundType_Params params {};
		
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
	 * 		Name   -> Function BPA_Armor_Base.BPA_Armor_Base_C.OnAddedToHolster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHolsterComponent*                           Holster                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Armor_Base_C::OnAddedToHolster(class UHolsterComponent* Holster)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Armor_Base.BPA_Armor_Base_C.OnAddedToHolster");
		
		ABPA_Armor_Base_C_OnAddedToHolster_Params params {};
		params.Holster = Holster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Armor_Base.BPA_Armor_Base_C.ExecuteUbergraph_BPA_Armor_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Armor_Base_C::ExecuteUbergraph_BPA_Armor_Base(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Armor_Base.BPA_Armor_Base_C.ExecuteUbergraph_BPA_Armor_Base");
		
		ABPA_Armor_Base_C_ExecuteUbergraph_BPA_Armor_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_Armor_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_Armor_Base_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_Armor_Base.BPA_Armor_Base_C");
		return ptr;
	}

}


