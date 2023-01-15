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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function HapticsManager.AndroidHapticLibrary.IsDeviceConnceted
	 */
	struct UAndroidHapticLibrary_IsDeviceConnceted_Params
	{
	public:
		class FString                                              Position;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.AndroidHapticLibrary.GetCurrentDevices
	 */
	struct UAndroidHapticLibrary_GetCurrentDevices_Params
	{
	public:
		TArray<struct FDevice>                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.AndroidHapticLibrary.AndroidThunkJava_PingPosition
	 */
	struct UAndroidHapticLibrary_AndroidThunkJava_PingPosition_Params
	{
	public:
		class FString                                              Position;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_TogglePosition
	 */
	struct UAndroidHapticLibrary_AndroidThunkCpp_TogglePosition_Params
	{
	public:
		class FString                                              DeviceAddress;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_PingAll
	 */
	struct UAndroidHapticLibrary_AndroidThunkCpp_PingAll_Params
	{	};

	/**
	 * Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_Ping
	 */
	struct UAndroidHapticLibrary_AndroidThunkCpp_Ping_Params
	{
	public:
		class FString                                              DeviceAddress;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_ChangePosition
	 */
	struct UAndroidHapticLibrary_AndroidThunkCpp_ChangePosition_Params
	{
	public:
		class FString                                              DeviceAddress;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Position;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.TurnOffRegisteredFeedbackFile
	 */
	struct UBhapticsRequestLibrary_TurnOffRegisteredFeedbackFile_Params
	{
	public:
		class UFeedbackFile*                                       Feedback;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.TurnOffRegisteredFeedback
	 */
	struct UBhapticsRequestLibrary_TurnOffRegisteredFeedback_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.TurnOffAllFeedback
	 */
	struct UBhapticsRequestLibrary_TurnOffAllFeedback_Params
	{	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.ToggleHapticFeedback
	 */
	struct UBhapticsRequestLibrary_ToggleHapticFeedback_Params
	{	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.SubmitPath
	 */
	struct UBhapticsRequestLibrary_SubmitPath_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPosition                                                  PositionEnum;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SQDK[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FPathPoint>                                  PathPoints;                                              // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    DurationInMilliSecs;                                     // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithTransform
	 */
	struct UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Params
	{
	public:
		class UFeedbackFile*                                       Feedback;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AltKey;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotationOption                                     Option;                                                  // 0x0018(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       UseAltKey;                                               // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithScaleOption
	 */
	struct UBhapticsRequestLibrary_SubmitFeedbackWithScaleOption_Params
	{
	public:
		class UFeedbackFile*                                       Feedback;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FScaleOption                                        ScaleOption;                                             // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithOptions
	 */
	struct UBhapticsRequestLibrary_SubmitFeedbackWithOptions_Params
	{
	public:
		class UFeedbackFile*                                       Feedback;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Key;                                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotationOption                                     RotationOption;                                          // 0x0018(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FScaleOption                                        ScaleOption;                                             // 0x0020(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithIntensityDuration
	 */
	struct UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Params
	{
	public:
		class UFeedbackFile*                                       Feedback;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AltKey;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotationOption                                     RotationOption;                                          // 0x0018(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		struct FScaleOption                                        ScaleOption;                                             // 0x0020(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       UseAltKey;                                               // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackReflected
	 */
	struct UBhapticsRequestLibrary_SubmitFeedbackReflected_Params
	{
	public:
		class UFeedbackFile*                                       Feedback;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FScaleOption                                        ScaleOption;                                             // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.SubmitFeedback
	 */
	struct UBhapticsRequestLibrary_SubmitFeedback_Params
	{
	public:
		class UFeedbackFile*                                       Feedback;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.SubmitDots
	 */
	struct UBhapticsRequestLibrary_SubmitDots_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPosition                                                  PositionEnum;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DU1Z[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FDotPoint>                                   DotPoints;                                               // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    DurationInMilliSecs;                                     // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.SubmitBytes
	 */
	struct UBhapticsRequestLibrary_SubmitBytes_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPosition                                                  PositionEnum;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3F6D[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<unsigned char>                                      InputBytes;                                              // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    DurationInMilliSecs;                                     // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.RegisterFeedbackFile
	 */
	struct UBhapticsRequestLibrary_RegisterFeedbackFile_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UFeedbackFile*                                       Feedback;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.ProjectToVestLocation
	 */
	struct UBhapticsRequestLibrary_ProjectToVestLocation_Params
	{
	public:
		struct FVector                                             ContactLocation;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             PlayerLocation;                                          // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            PlayerRotation;                                          // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FRotationOption                                     ReturnValue;                                             // 0x0024(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.ProjectToVest
	 */
	struct UBhapticsRequestLibrary_ProjectToVest_Params
	{
	public:
		struct FVector                                             ContactLocation;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7FBX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 PlayerComponent;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      HalfHeight;                                              // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotationOption                                     ReturnValue;                                             // 0x001C(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.IsRegisteredPlaying
	 */
	struct UBhapticsRequestLibrary_IsRegisteredPlaying_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.IsRegisteredFilePlaying
	 */
	struct UBhapticsRequestLibrary_IsRegisteredFilePlaying_Params
	{
	public:
		class UFeedbackFile*                                       Feedback;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.IsDeviceConnected
	 */
	struct UBhapticsRequestLibrary_IsDeviceConnected_Params
	{
	public:
		EPosition                                                  Device;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.IsAnythingPlaying
	 */
	struct UBhapticsRequestLibrary_IsAnythingPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.Initialize
	 */
	struct UBhapticsRequestLibrary_Initialize_Params
	{	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.GetResponseStatus
	 */
	struct UBhapticsRequestLibrary_GetResponseStatus_Params
	{
	public:
		EPosition                                                  Pos;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4YNM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<unsigned char>                                      ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.EnableHapticFeedback
	 */
	struct UBhapticsRequestLibrary_EnableHapticFeedback_Params
	{	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.DisableHapticFeedback
	 */
	struct UBhapticsRequestLibrary_DisableHapticFeedback_Params
	{	};

	/**
	 * Function HapticsManager.BhapticsRequestLibrary.CustomProjectToVest
	 */
	struct UBhapticsRequestLibrary_CustomProjectToVest_Params
	{
	public:
		struct FVector                                             ContactLocation;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_69RX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 PlayerComponent;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      HalfHeight;                                              // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             UpVector;                                                // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ForwardVector;                                           // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotationOption                                     ReturnValue;                                             // 0x0034(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.HapticDevice.TogglePosition
	 */
	struct UHapticDevice_TogglePosition_Params
	{	};

	/**
	 * Function HapticsManager.HapticDevice.SetDeviceData
	 */
	struct UHapticDevice_SetDeviceData_Params
	{
	public:
		struct FDevice                                             LinkedDevice;                                            // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.HapticDevice.Ping
	 */
	struct UHapticDevice_Ping_Params
	{	};

	/**
	 * Function HapticsManager.HapticDevice.ChangePosition
	 */
	struct UHapticDevice_ChangePosition_Params
	{
	public:
		class FString                                              Position;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HapticsManager.HapticsManagerActor.SetTactSuit
	 */
	struct AHapticsManagerActor_SetTactSuit_Params
	{
	public:
		class USceneComponent*                                     SleeveLeft;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     SleeveRight;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     Head;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     VestFront;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     VestBack;                                                // 0x0020(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     GloveLeft;                                               // 0x0028(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     GloveRight;                                              // 0x0030(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     ShoeLeft;                                                // 0x0038(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     ShoeRight;                                               // 0x0040(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
