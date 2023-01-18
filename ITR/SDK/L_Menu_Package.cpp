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
	 * 		Name   -> PredefinedFunction AL_Menu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AL_Menu_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass L_Menu.L_Menu_C");
		return ptr;
	}

}


