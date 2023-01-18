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
	 * 		Name   -> PredefinedFunction UAudioAnalyzerAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioAnalyzerAsset::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioAnalyzer.AudioAnalyzerAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioAnalyzerNRTSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioAnalyzerNRTSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioAnalyzer.AudioAnalyzerNRTSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioAnalyzerNRT.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioAnalyzerNRT::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioAnalyzer.AudioAnalyzerNRT");
		return ptr;
	}

}


