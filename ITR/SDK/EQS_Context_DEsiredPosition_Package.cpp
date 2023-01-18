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
	 * 		Name   -> Function EQS_Context_DEsiredPosition.EQS_Context_DEsiredPosition_C.ProvideSingleLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     QuerierObject                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      QuerierActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ResultingLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEQS_Context_DEsiredPosition_C::ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function EQS_Context_DEsiredPosition.EQS_Context_DEsiredPosition_C.ProvideSingleLocation");
		
		UEQS_Context_DEsiredPosition_C_ProvideSingleLocation_Params params {};
		params.QuerierObject = QuerierObject;
		params.QuerierActor = QuerierActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultingLocation != nullptr)
			*ResultingLocation = params.ResultingLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEQS_Context_DEsiredPosition_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEQS_Context_DEsiredPosition_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EQS_Context_DEsiredPosition.EQS_Context_DEsiredPosition_C");
		return ptr;
	}

}


