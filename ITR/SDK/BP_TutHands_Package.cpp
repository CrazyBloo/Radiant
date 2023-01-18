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
	 * 		Name   -> Function BP_TutHands.BP_TutHands_C.Scale__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_TutHands_C::Scale__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutHands.BP_TutHands_C.Scale__FinishedFunc");
		
		ABP_TutHands_C_Scale__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutHands.BP_TutHands_C.Scale__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_TutHands_C::Scale__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutHands.BP_TutHands_C.Scale__UpdateFunc");
		
		ABP_TutHands_C_Scale__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutHands.BP_TutHands_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_TutHands_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutHands.BP_TutHands_C.ReceiveBeginPlay");
		
		ABP_TutHands_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutHands.BP_TutHands_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TutHands_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutHands.BP_TutHands_C.ReceiveEndPlay");
		
		ABP_TutHands_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutHands.BP_TutHands_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_TutHands_C::ReceiveDestroyed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutHands.BP_TutHands_C.ReceiveDestroyed");
		
		ABP_TutHands_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutHands.BP_TutHands_C.ExecuteUbergraph_BP_TutHands
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TutHands_C::ExecuteUbergraph_BP_TutHands(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutHands.BP_TutHands_C.ExecuteUbergraph_BP_TutHands");
		
		ABP_TutHands_C_ExecuteUbergraph_BP_TutHands_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TutHands_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TutHands_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_TutHands.BP_TutHands_C");
		return ptr;
	}

}


