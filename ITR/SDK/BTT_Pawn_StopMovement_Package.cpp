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
	 * 		Name   -> Function BTT_Pawn_StopMovement.BTT_Pawn_StopMovement_C.CalcThrottle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Throttle                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Break                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_Pawn_StopMovement_C::CalcThrottle(const struct FVector& Target, float* Throttle, float* Break)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_Pawn_StopMovement.BTT_Pawn_StopMovement_C.CalcThrottle");
		
		UBTT_Pawn_StopMovement_C_CalcThrottle_Params params {};
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
	 * 		Name   -> Function BTT_Pawn_StopMovement.BTT_Pawn_StopMovement_C.CalcSteering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Steering                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_Pawn_StopMovement_C::CalcSteering(const struct FVector& Target, float* Steering)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_Pawn_StopMovement.BTT_Pawn_StopMovement_C.CalcSteering");
		
		UBTT_Pawn_StopMovement_C_CalcSteering_Params params {};
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
	 * 		Name   -> Function BTT_Pawn_StopMovement.BTT_Pawn_StopMovement_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_Pawn_StopMovement_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_Pawn_StopMovement.BTT_Pawn_StopMovement_C.ReceiveExecuteAI");
		
		UBTT_Pawn_StopMovement_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_Pawn_StopMovement.BTT_Pawn_StopMovement_C.ExecuteUbergraph_BTT_Pawn_StopMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_Pawn_StopMovement_C::ExecuteUbergraph_BTT_Pawn_StopMovement(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_Pawn_StopMovement.BTT_Pawn_StopMovement_C.ExecuteUbergraph_BTT_Pawn_StopMovement");
		
		UBTT_Pawn_StopMovement_C_ExecuteUbergraph_BTT_Pawn_StopMovement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_Pawn_StopMovement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_Pawn_StopMovement_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTT_Pawn_StopMovement.BTT_Pawn_StopMovement_C");
		return ptr;
	}

}


