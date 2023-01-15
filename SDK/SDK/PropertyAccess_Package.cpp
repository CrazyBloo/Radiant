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
	 * 		Name   -> PredefinedFunction UPropertyAccess.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyAccess::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PropertyAccess.PropertyAccess");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPropertyEventBroadcaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyEventBroadcaster::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PropertyAccess.PropertyEventBroadcaster");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPropertyEventSubscriber.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyEventSubscriber::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PropertyAccess.PropertyEventSubscriber");
		return ptr;
	}

}


