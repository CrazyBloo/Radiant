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
	 * 		Name   -> Function FL_Helpers_Player.FL_Helpers_Player_C.SwitchInventoryMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Helpers_Player_C::SwitchInventoryMode(class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Helpers_Player.FL_Helpers_Player_C.SwitchInventoryMode");
		
		UFL_Helpers_Player_C_SwitchInventoryMode_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Helpers_Player.FL_Helpers_Player_C.SetInventoryMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryMode                                                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Helpers_Player_C::SetInventoryMode(EInventoryMode , class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Helpers_Player.FL_Helpers_Player_C.SetInventoryMode");
		
		UFL_Helpers_Player_C_SetInventoryMode_Params params {};
		params. = ;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Helpers_Player.FL_Helpers_Player_C.GetInventoryMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInventoryMode                                                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Helpers_Player_C::GetInventoryMode(class UObject* __WorldContext, EInventoryMode* )
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Helpers_Player.FL_Helpers_Player_C.GetInventoryMode");
		
		UFL_Helpers_Player_C_GetInventoryMode_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if ( != nullptr)
			* = params.;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Helpers_Player.FL_Helpers_Player_C.IsDressingMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                                                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Helpers_Player_C::IsDressingMode(class UObject* __WorldContext, bool* )
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Helpers_Player.FL_Helpers_Player_C.IsDressingMode");
		
		UFL_Helpers_Player_C_IsDressingMode_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if ( != nullptr)
			* = params.;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFL_Helpers_Player_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFL_Helpers_Player_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FL_Helpers_Player.FL_Helpers_Player_C");
		return ptr;
	}

}


