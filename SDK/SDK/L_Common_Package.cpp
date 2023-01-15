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
	 * 		Name   -> PredefinedFunction AL_Common_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AL_Common_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass L_Common.L_Common_C");
		return ptr;
	}

}


