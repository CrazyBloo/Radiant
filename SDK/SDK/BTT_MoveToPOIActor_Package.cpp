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
	 * 		Name   -> Function BTT_MoveToPOIActor.BTT_MoveToPOIActor_C.OnMoveFinished_E8DF58754BC47E1EB30724A11857BD0D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPathFollowingResult                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AAIController*                               AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_MoveToPOIActor_C::OnMoveFinished_E8DF58754BC47E1EB30724A11857BD0D(EPathFollowingResult Result, class AAIController* AIController)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_MoveToPOIActor.BTT_MoveToPOIActor_C.OnMoveFinished_E8DF58754BC47E1EB30724A11857BD0D");
		
		UBTT_MoveToPOIActor_C_OnMoveFinished_E8DF58754BC47E1EB30724A11857BD0D_Params params {};
		params.Result = Result;
		params.AIController = AIController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_MoveToPOIActor.BTT_MoveToPOIActor_C.OnRequestFailed_E8DF58754BC47E1EB30724A11857BD0D
	 * 		Flags  -> ()
	 */
	void UBTT_MoveToPOIActor_C::OnRequestFailed_E8DF58754BC47E1EB30724A11857BD0D()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_MoveToPOIActor.BTT_MoveToPOIActor_C.OnRequestFailed_E8DF58754BC47E1EB30724A11857BD0D");
		
		UBTT_MoveToPOIActor_C_OnRequestFailed_E8DF58754BC47E1EB30724A11857BD0D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_MoveToPOIActor.BTT_MoveToPOIActor_C.StuckCheck
	 * 		Flags  -> ()
	 */
	void UBTT_MoveToPOIActor_C::StuckCheck()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_MoveToPOIActor.BTT_MoveToPOIActor_C.StuckCheck");
		
		UBTT_MoveToPOIActor_C_StuckCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_MoveToPOIActor.BTT_MoveToPOIActor_C.ReceiveExecute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_MoveToPOIActor_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_MoveToPOIActor.BTT_MoveToPOIActor_C.ReceiveExecute");
		
		UBTT_MoveToPOIActor_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_MoveToPOIActor.BTT_MoveToPOIActor_C.CheckDistance
	 * 		Flags  -> ()
	 */
	void UBTT_MoveToPOIActor_C::CheckDistance()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_MoveToPOIActor.BTT_MoveToPOIActor_C.CheckDistance");
		
		UBTT_MoveToPOIActor_C_CheckDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_MoveToPOIActor.BTT_MoveToPOIActor_C.ReceiveAbortAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_MoveToPOIActor_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_MoveToPOIActor.BTT_MoveToPOIActor_C.ReceiveAbortAI");
		
		UBTT_MoveToPOIActor_C_ReceiveAbortAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_MoveToPOIActor.BTT_MoveToPOIActor_C.ExecuteUbergraph_BTT_MoveToPOIActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_MoveToPOIActor_C::ExecuteUbergraph_BTT_MoveToPOIActor(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_MoveToPOIActor.BTT_MoveToPOIActor_C.ExecuteUbergraph_BTT_MoveToPOIActor");
		
		UBTT_MoveToPOIActor_C_ExecuteUbergraph_BTT_MoveToPOIActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_MoveToPOIActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_MoveToPOIActor_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTT_MoveToPOIActor.BTT_MoveToPOIActor_C");
		return ptr;
	}

}


