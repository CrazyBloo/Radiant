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
	 * 		Name   -> PredefinedFunction UBTR70_Drive_Wheel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTR70_Drive_Wheel_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTR70_Drive_Wheel.BTR70_Drive_Wheel_C");
		return ptr;
	}

}


