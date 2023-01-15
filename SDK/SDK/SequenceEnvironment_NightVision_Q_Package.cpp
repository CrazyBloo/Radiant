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
	 * 		Name   -> PredefinedFunction USequenceDirector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequenceDirector_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SequenceEnvironment_NightVision_Q.SequenceDirector_C");
		return ptr;
	}

}


