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
	 * 		Name   -> PredefinedFunction UDT_BuckShot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDT_BuckShot_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DT_BuckShot.DT_BuckShot_C");
		return ptr;
	}

}


