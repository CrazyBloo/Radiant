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
	 * 		Name   -> Function BPI_GripMover.BPI_GripMover_C.GetOffsetInTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Offset                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_GripMover_C::GetOffsetInTime(struct FVector* Offset)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_GripMover.BPI_GripMover_C.GetOffsetInTime");
		
		UBPI_GripMover_C_GetOffsetInTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Offset != nullptr)
			*Offset = params.Offset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_GripMover_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_GripMover_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_GripMover.BPI_GripMover_C");
		return ptr;
	}

}


