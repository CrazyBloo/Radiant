﻿/**
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
	 * 		Name   -> PredefinedFunction UWBP_PaperNote_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_PaperNote_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PaperNote.WBP_PaperNote_C");
		return ptr;
	}

}


