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
	 * 		Name   -> PredefinedFunction UAnimationDataSourceRegistry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationDataSourceRegistry::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationCore.AnimationDataSourceRegistry");
		return ptr;
	}

}


