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
	 * 		Name   -> Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.CalcThrottle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Throttle                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Break                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_VehicleStictMoveToLoc_C::CalcThrottle(const struct FVector& Target, float* Throttle, float* Break)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.CalcThrottle");
		
		UBTT_VehicleStictMoveToLoc_C_CalcThrottle_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Throttle != nullptr)
			*Throttle = params.Throttle;
		if (Break != nullptr)
			*Break = params.Break;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.CalcSteering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Steering                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_VehicleStictMoveToLoc_C::CalcSteering(const struct FVector& Target, float* Steering)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.CalcSteering");
		
		UBTT_VehicleStictMoveToLoc_C_CalcSteering_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Steering != nullptr)
			*Steering = params.Steering;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.Event Reverse
	 * 		Flags  -> ()
	 */
	void UBTT_VehicleStictMoveToLoc_C::Event_Reverse()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.Event Reverse");
		
		UBTT_VehicleStictMoveToLoc_C_Event_Reverse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.ReverseCalcs
	 * 		Flags  -> ()
	 */
	void UBTT_VehicleStictMoveToLoc_C::ReverseCalcs()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.ReverseCalcs");
		
		UBTT_VehicleStictMoveToLoc_C_ReverseCalcs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_VehicleStictMoveToLoc_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.ReceiveExecuteAI");
		
		UBTT_VehicleStictMoveToLoc_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.CustomEvent
	 * 		Flags  -> ()
	 */
	void UBTT_VehicleStictMoveToLoc_C::CustomEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.CustomEvent");
		
		UBTT_VehicleStictMoveToLoc_C_CustomEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.Continue
	 * 		Flags  -> ()
	 */
	void UBTT_VehicleStictMoveToLoc_C::Continue()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.Continue");
		
		UBTT_VehicleStictMoveToLoc_C_Continue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.ExecuteUbergraph_BTT_VehicleStictMoveToLoc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_VehicleStictMoveToLoc_C::ExecuteUbergraph_BTT_VehicleStictMoveToLoc(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C.ExecuteUbergraph_BTT_VehicleStictMoveToLoc");
		
		UBTT_VehicleStictMoveToLoc_C_ExecuteUbergraph_BTT_VehicleStictMoveToLoc_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_VehicleStictMoveToLoc_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_VehicleStictMoveToLoc_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTT_VehicleStictMoveToLoc.BTT_VehicleStictMoveToLoc_C");
		return ptr;
	}

}


