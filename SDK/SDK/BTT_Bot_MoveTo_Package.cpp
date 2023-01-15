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
	 * 		Name   -> Function BTT_Bot_MoveTo.BTT_Bot_MoveTo_C.OnMoveFinished_D58B79B44B571A442B6CC2866D51D9C6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPathFollowingResult                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AAIController*                               AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_Bot_MoveTo_C::OnMoveFinished_D58B79B44B571A442B6CC2866D51D9C6(EPathFollowingResult Result, class AAIController* AIController)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_Bot_MoveTo.BTT_Bot_MoveTo_C.OnMoveFinished_D58B79B44B571A442B6CC2866D51D9C6");
		
		UBTT_Bot_MoveTo_C_OnMoveFinished_D58B79B44B571A442B6CC2866D51D9C6_Params params {};
		params.Result = Result;
		params.AIController = AIController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_Bot_MoveTo.BTT_Bot_MoveTo_C.OnRequestFailed_D58B79B44B571A442B6CC2866D51D9C6
	 * 		Flags  -> ()
	 */
	void UBTT_Bot_MoveTo_C::OnRequestFailed_D58B79B44B571A442B6CC2866D51D9C6()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_Bot_MoveTo.BTT_Bot_MoveTo_C.OnRequestFailed_D58B79B44B571A442B6CC2866D51D9C6");
		
		UBTT_Bot_MoveTo_C_OnRequestFailed_D58B79B44B571A442B6CC2866D51D9C6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_Bot_MoveTo.BTT_Bot_MoveTo_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_Bot_MoveTo_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_Bot_MoveTo.BTT_Bot_MoveTo_C.ReceiveExecuteAI");
		
		UBTT_Bot_MoveTo_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_Bot_MoveTo.BTT_Bot_MoveTo_C.ExecuteUbergraph_BTT_Bot_MoveTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_Bot_MoveTo_C::ExecuteUbergraph_BTT_Bot_MoveTo(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_Bot_MoveTo.BTT_Bot_MoveTo_C.ExecuteUbergraph_BTT_Bot_MoveTo");
		
		UBTT_Bot_MoveTo_C_ExecuteUbergraph_BTT_Bot_MoveTo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_Bot_MoveTo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_Bot_MoveTo_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTT_Bot_MoveTo.BTT_Bot_MoveTo_C");
		return ptr;
	}

}


