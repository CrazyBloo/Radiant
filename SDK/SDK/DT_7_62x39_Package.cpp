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
	 * 		Name   -> PredefinedFunction UDT_7_x39_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDT_7_x39_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DT_7_62x39.DT_7-62x39_C");
		return ptr;
	}

}


