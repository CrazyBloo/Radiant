#pragma once

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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum HapticsManager.EFeedbackMode
	 */
	enum class EFeedbackMode : uint8_t
	{
		PATH_MODE = 0,
		DOT_MODE  = 1,
		MAX       = 2
	};

	/**
	 * Enum HapticsManager.EPosition
	 */
	enum class EPosition : uint8_t
	{
		VestFront = 0,
		VestBack  = 1,
		GloveL    = 2,
		GloveR    = 3,
		Head      = 4,
		ForearmL  = 5,
		ForearmR  = 6,
		HandL     = 7,
		HandR     = 8,
		FootL     = 9,
		FootR     = 10,
		Left      = 11,
		Right     = 12,
		Default   = 13,
		MAX       = 14
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct HapticsManager.Device
	 * Size -> 0x0040
	 */
	struct FDevice
	{
	public:
		class FString                                              DeviceName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Address;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Position;                                                // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsConnected;                                             // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPaired;                                                // 0x0031(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AAKT[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Battery;                                                 // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAudioJackIn;                                           // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7C2K[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HapticsManager.RegisterRequest
	 * Size -> 0x0020
	 */
	struct FRegisterRequest
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DZZN[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HapticsManager.PathPoint
	 * Size -> 0x0010
	 */
	struct FPathPoint
	{
	public:
		float                                                      X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Intensity;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MotorCount;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HapticsManager.DotPoint
	 * Size -> 0x0008
	 */
	struct FDotPoint
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Intensity;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HapticsManager.HapticFrame
	 * Size -> 0x0038
	 */
	struct FHapticFrame
	{
	public:
		int32_t                                                    DurationMillis;                                          // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O09Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Position;                                                // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPathPoint>                                  PathPoints;                                              // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDotPoint>                                   DotPoints;                                               // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HapticsManager.SubmitRequest
	 * Size -> 0x00A8
	 */
	struct FSubmitRequest
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Key;                                                     // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         Parameters;                                              // 0x0020(0x0050) NativeAccessSpecifierPublic
		struct FHapticFrame                                        Frame;                                                   // 0x0070(0x0038) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HapticsManager.PlayerRequest
	 * Size -> 0x0020
	 */
	struct FPlayerRequest
	{
	public:
		TArray<struct FRegisterRequest>                            Register;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSubmitRequest>                              Submit;                                                  // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HapticsManager.PlayerResponse
	 * Size -> 0x0048
	 */
	struct FPlayerResponse
	{
	public:
		unsigned char                                              UnknownData_CAEF[0x48];                                  // 0x0000(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct HapticsManager.ScaleOption
	 * Size -> 0x0008
	 */
	struct FScaleOption
	{
	public:
		float                                                      Intensity;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HapticsManager.RotationOption
	 * Size -> 0x0008
	 */
	struct FRotationOption
	{
	public:
		float                                                      OffsetAngleX;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffsetY;                                                 // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct HapticsManager.HapticFeedback
	 * Size -> 0x0018
	 */
	struct FHapticFeedback
	{
	public:
		EPosition                                                  Position;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFeedbackMode                                              Mode;                                                    // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6JQT[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      Values;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
