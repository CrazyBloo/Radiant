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
	 * 		Name   -> Function BTT_Pawn_FindNextPatroolLoc.BTT_Pawn_FindNextPatroolLoc_C.ReceiveExecuteAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_Pawn_FindNextPatroolLoc_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_Pawn_FindNextPatroolLoc.BTT_Pawn_FindNextPatroolLoc_C.ReceiveExecuteAI");
		
		UBTT_Pawn_FindNextPatroolLoc_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BTT_Pawn_FindNextPatroolLoc.BTT_Pawn_FindNextPatroolLoc_C.ExecuteUbergraph_BTT_Pawn_FindNextPatroolLoc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_Pawn_FindNextPatroolLoc_C::ExecuteUbergraph_BTT_Pawn_FindNextPatroolLoc(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BTT_Pawn_FindNextPatroolLoc.BTT_Pawn_FindNextPatroolLoc_C.ExecuteUbergraph_BTT_Pawn_FindNextPatroolLoc");
		
		UBTT_Pawn_FindNextPatroolLoc_C_ExecuteUbergraph_BTT_Pawn_FindNextPatroolLoc_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_Pawn_FindNextPatroolLoc_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_Pawn_FindNextPatroolLoc_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTT_Pawn_FindNextPatroolLoc.BTT_Pawn_FindNextPatroolLoc_C");
		return ptr;
	}

}


