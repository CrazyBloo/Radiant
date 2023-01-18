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
	 * 		Name   -> PredefinedFunction UJsonUtilitiesDummyObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJsonUtilitiesDummyObject::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class JsonUtilities.JsonUtilitiesDummyObject");
		return ptr;
	}

}


