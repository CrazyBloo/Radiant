﻿#pragma once

/**
 * Name: Into_The_Radius_VR
 * Version: 2.4
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
	 * Class AudioCapture.AudioCapture
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UAudioCapture : public UAudioGenerator
	{
	public:
		unsigned char                                              UnknownData_BILU[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void StopCapturingAudio();
		void StartCapturingAudio();
		bool IsCapturingAudio();
		bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo* OutInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioCapture.AudioCaptureFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UAudioCapture* CreateAudioCapture();
		static UClass* StaticClass();
	};

	/**
	 * Class AudioCapture.AudioCaptureComponent
	 * Size -> 0x00C0 (FullSize[0x07B0] - InheritedSize[0x06F0])
	 */
	class UAudioCaptureComponent : public USynthComponent
	{
	public:
		int32_t                                                    JitterLatencyFrames;                                     // 0x06F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0RVF[0xBC];                                  // 0x06F4(0x00BC) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
