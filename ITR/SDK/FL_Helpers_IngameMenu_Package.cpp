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
	 * 		Name   -> Function FL_Helpers_IngameMenu.FL_Helpers_IngameMenu_C.IsIngameMenuActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Active                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Helpers_IngameMenu_C::IsIngameMenuActive(class UObject* __WorldContext, bool* Active)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Helpers_IngameMenu.FL_Helpers_IngameMenu_C.IsIngameMenuActive");
		
		UFL_Helpers_IngameMenu_C_IsIngameMenuActive_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Active != nullptr)
			*Active = params.Active;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Helpers_IngameMenu.FL_Helpers_IngameMenu_C.CloseIngameMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Helpers_IngameMenu_C::CloseIngameMenu(class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Helpers_IngameMenu.FL_Helpers_IngameMenu_C.CloseIngameMenu");
		
		UFL_Helpers_IngameMenu_C_CloseIngameMenu_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Helpers_IngameMenu.FL_Helpers_IngameMenu_C.SwitchIngameMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Helpers_IngameMenu_C::SwitchIngameMenu(class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Helpers_IngameMenu.FL_Helpers_IngameMenu_C.SwitchIngameMenu");
		
		UFL_Helpers_IngameMenu_C_SwitchIngameMenu_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFL_Helpers_IngameMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFL_Helpers_IngameMenu_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FL_Helpers_IngameMenu.FL_Helpers_IngameMenu_C");
		return ptr;
	}

}


