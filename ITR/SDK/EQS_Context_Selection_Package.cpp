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
	 * 		Name   -> Function EQS_Context_Selection.EQS_Context_Selection_C.ProvideSingleActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     QuerierObject                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      QuerierActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ResultingActor                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEQS_Context_Selection_C::ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function EQS_Context_Selection.EQS_Context_Selection_C.ProvideSingleActor");
		
		UEQS_Context_Selection_C_ProvideSingleActor_Params params {};
		params.QuerierObject = QuerierObject;
		params.QuerierActor = QuerierActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultingActor != nullptr)
			*ResultingActor = params.ResultingActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEQS_Context_Selection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEQS_Context_Selection_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EQS_Context_Selection.EQS_Context_Selection_C");
		return ptr;
	}

}


