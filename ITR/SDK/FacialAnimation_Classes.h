﻿#pragma once

/**
 * Name: Into_The_Radius_VR
 * Version: 2.5.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class FacialAnimation.AudioCurveSourceComponent
	 * Size -> 0x0040 (FullSize[0x08D0] - InheritedSize[0x0890])
	 */
	class UAudioCurveSourceComponent : public UAudioComponent
	{
	public:
		unsigned char                                              UnknownData_FQT4[0x8];                                   // 0x0890(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CurveSourceBindingName;                                  // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurveSyncOffset;                                         // 0x08A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KEIF[0x2C];                                  // 0x08A4(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
