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
	 * 		Name   -> PredefinedFunction UDT_Fire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDT_Fire_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DT_Fire.DT_Fire_C");
		return ptr;
	}

}


