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
	 * 		Name   -> Function BP_IngameMenuController.BP_IngameMenuController_C.OnIngameMenuActivated
	 * 		Flags  -> ()
	 */
	void ABP_IngameMenuController_C::OnIngameMenuActivated()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_IngameMenuController.BP_IngameMenuController_C.OnIngameMenuActivated");
		
		ABP_IngameMenuController_C_OnIngameMenuActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IngameMenuController.BP_IngameMenuController_C.OnIngameMenuDeactivated
	 * 		Flags  -> ()
	 */
	void ABP_IngameMenuController_C::OnIngameMenuDeactivated()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_IngameMenuController.BP_IngameMenuController_C.OnIngameMenuDeactivated");
		
		ABP_IngameMenuController_C_OnIngameMenuDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_IngameMenuController.BP_IngameMenuController_C.ExecuteUbergraph_BP_IngameMenuController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_IngameMenuController_C::ExecuteUbergraph_BP_IngameMenuController(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_IngameMenuController.BP_IngameMenuController_C.ExecuteUbergraph_BP_IngameMenuController");
		
		ABP_IngameMenuController_C_ExecuteUbergraph_BP_IngameMenuController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_IngameMenuController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_IngameMenuController_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_IngameMenuController.BP_IngameMenuController_C");
		return ptr;
	}

}


