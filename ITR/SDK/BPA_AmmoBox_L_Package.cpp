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
	 * 		Name   -> PredefinedFunction ABPA_AmmoBox_L_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_AmmoBox_L_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_AmmoBox_L.BPA_AmmoBox_L_C");
		return ptr;
	}

}


