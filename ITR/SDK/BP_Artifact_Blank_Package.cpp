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
	 * 		Name   -> PredefinedFunction ABP_Artifact_Blank_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Artifact_Blank_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Artifact_Blank.BP_Artifact_Blank_C");
		return ptr;
	}

}


