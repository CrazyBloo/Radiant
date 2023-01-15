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
	 * 		Name   -> Function ALS_BTTask_GetRandomLocation.ALS_BTTask_GetRandomLocation_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALS_BTTask_GetRandomLocation_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ALS_BTTask_GetRandomLocation.ALS_BTTask_GetRandomLocation_C.ReceiveExecuteAI");
		
		UALS_BTTask_GetRandomLocation_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ALS_BTTask_GetRandomLocation.ALS_BTTask_GetRandomLocation_C.ExecuteUbergraph_ALS_BTTask_GetRandomLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALS_BTTask_GetRandomLocation_C::ExecuteUbergraph_ALS_BTTask_GetRandomLocation(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ALS_BTTask_GetRandomLocation.ALS_BTTask_GetRandomLocation_C.ExecuteUbergraph_ALS_BTTask_GetRandomLocation");
		
		UALS_BTTask_GetRandomLocation_C_ExecuteUbergraph_ALS_BTTask_GetRandomLocation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UALS_BTTask_GetRandomLocation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UALS_BTTask_GetRandomLocation_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ALS_BTTask_GetRandomLocation.ALS_BTTask_GetRandomLocation_C");
		return ptr;
	}

}


