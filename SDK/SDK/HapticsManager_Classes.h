#pragma once

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
	 * Class HapticsManager.AndroidHapticLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAndroidHapticLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool IsDeviceConnceted(const class FString& Position);
		TArray<struct FDevice> GetCurrentDevices();
		void AndroidThunkJava_PingPosition(const class FString& Position);
		void AndroidThunkCpp_TogglePosition(const class FString& DeviceAddress);
		void AndroidThunkCpp_PingAll();
		void AndroidThunkCpp_Ping(const class FString& DeviceAddress);
		void AndroidThunkCpp_ChangePosition(const class FString& DeviceAddress, const class FString& Position);
		static UClass* StaticClass();
	};

	/**
	 * Class HapticsManager.BhapticsRequestLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBhapticsRequestLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void TurnOffRegisteredFeedbackFile(class UFeedbackFile* Feedback);
		void TurnOffRegisteredFeedback(const class FString& Key);
		void TurnOffAllFeedback();
		void ToggleHapticFeedback();
		void SubmitPath(const class FString& Key, EPosition PositionEnum, TArray<struct FPathPoint> PathPoints, int32_t DurationInMilliSecs);
		void SubmitFeedbackWithTransform(class UFeedbackFile* Feedback, const class FString& AltKey, const struct FRotationOption& Option, bool UseAltKey);
		void SubmitFeedbackWithScaleOption(class UFeedbackFile* Feedback, const struct FScaleOption& ScaleOption);
		void SubmitFeedbackWithOptions(class UFeedbackFile* Feedback, const class FString& Key, const struct FRotationOption& RotationOption, const struct FScaleOption& ScaleOption);
		void SubmitFeedbackWithIntensityDuration(class UFeedbackFile* Feedback, const class FString& AltKey, const struct FRotationOption& RotationOption, const struct FScaleOption& ScaleOption, bool UseAltKey);
		void SubmitFeedbackReflected(class UFeedbackFile* Feedback, const struct FScaleOption& ScaleOption);
		void SubmitFeedback(class UFeedbackFile* Feedback);
		void SubmitDots(const class FString& Key, EPosition PositionEnum, TArray<struct FDotPoint> DotPoints, int32_t DurationInMilliSecs);
		void SubmitBytes(const class FString& Key, EPosition PositionEnum, TArray<unsigned char> InputBytes, int32_t DurationInMilliSecs);
		void RegisterFeedbackFile(const class FString& Key, class UFeedbackFile* Feedback);
		struct FRotationOption ProjectToVestLocation(const struct FVector& ContactLocation, const struct FVector& PlayerLocation, const struct FRotator& PlayerRotation);
		struct FRotationOption ProjectToVest(const struct FVector& ContactLocation, class UPrimitiveComponent* PlayerComponent, float HalfHeight);
		bool IsRegisteredPlaying(const class FString& Key);
		bool IsRegisteredFilePlaying(class UFeedbackFile* Feedback);
		bool IsDeviceConnected(EPosition Device);
		bool IsAnythingPlaying();
		void Initialize();
		TArray<unsigned char> GetResponseStatus(EPosition Pos);
		void EnableHapticFeedback();
		void DisableHapticFeedback();
		struct FRotationOption CustomProjectToVest(const struct FVector& ContactLocation, class UPrimitiveComponent* PlayerComponent, float HalfHeight, const struct FVector& UpVector, const struct FVector& ForwardVector);
		static UClass* StaticClass();
	};

	/**
	 * Class HapticsManager.FeedbackFile
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UFeedbackFile : public UObject
	{
	public:
		class FString                                              Key;                                                     // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProjectString;                                           // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ID;                                                      // 0x0048(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Device;                                                  // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0068(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ABYJ[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HapticsManager.FootFeedbackFile
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UFootFeedbackFile : public UFeedbackFile
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HapticsManager.GloveFeedbackFile
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UGloveFeedbackFile : public UFeedbackFile
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HapticsManager.HandFeedbackFile
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UHandFeedbackFile : public UFeedbackFile
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HapticsManager.HapticDevice
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UHapticDevice : public UObject
	{
	public:
		struct FDevice                                             DeviceData;                                              // 0x0028(0x0040) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		bool                                                       DidUpdateDevice;                                         // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDarkMode;                                              // 0x0069(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E321[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (PADDING)

	public:
		void TogglePosition();
		void SetDeviceData(const struct FDevice& LinkedDevice);
		void Ping();
		void ChangePosition(const class FString& Position);
		static UClass* StaticClass();
	};

	/**
	 * Class HapticsManager.HapticSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UHapticSettings : public UDeveloperSettings
	{
	public:
		bool                                                       bShouldLaunch;                                           // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3JU5[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HapticsManager.HapticsManagerActor
	 * Size -> 0x0090 (FullSize[0x0310] - InheritedSize[0x0280])
	 */
	class AHapticsManagerActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_I29A[0x90];                                  // 0x0280(0x0090) MISSED OFFSET (PADDING)

	public:
		void SetTactSuit(class USceneComponent* SleeveLeft, class USceneComponent* SleeveRight, class USceneComponent* Head, class USceneComponent* VestFront, class USceneComponent* VestBack, class USceneComponent* GloveLeft, class USceneComponent* GloveRight, class USceneComponent* ShoeLeft, class USceneComponent* ShoeRight);
		static UClass* StaticClass();
	};

	/**
	 * Class HapticsManager.TactalFeedbackFile
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UTactalFeedbackFile : public UFeedbackFile
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HapticsManager.TactosyFeedbackFile
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UTactosyFeedbackFile : public UFeedbackFile
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HapticsManager.TactotFeedbackFile
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UTactotFeedbackFile : public UFeedbackFile
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
