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
	 * 		Name   -> Function HapticsManager.AndroidHapticLibrary.IsDeviceConnceted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Position                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAndroidHapticLibrary::IsDeviceConnceted(const class FString& Position)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.IsDeviceConnceted");
		
		UAndroidHapticLibrary_IsDeviceConnceted_Params params {};
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.AndroidHapticLibrary.GetCurrentDevices
	 * 		Flags  -> ()
	 */
	TArray<struct FDevice> UAndroidHapticLibrary::GetCurrentDevices()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.GetCurrentDevices");
		
		UAndroidHapticLibrary_GetCurrentDevices_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.AndroidHapticLibrary.AndroidThunkJava_PingPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Position                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAndroidHapticLibrary::AndroidThunkJava_PingPosition(const class FString& Position)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkJava_PingPosition");
		
		UAndroidHapticLibrary_AndroidThunkJava_PingPosition_Params params {};
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_TogglePosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      DeviceAddress                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAndroidHapticLibrary::AndroidThunkCpp_TogglePosition(const class FString& DeviceAddress)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_TogglePosition");
		
		UAndroidHapticLibrary_AndroidThunkCpp_TogglePosition_Params params {};
		params.DeviceAddress = DeviceAddress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_PingAll
	 * 		Flags  -> ()
	 */
	void UAndroidHapticLibrary::AndroidThunkCpp_PingAll()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_PingAll");
		
		UAndroidHapticLibrary_AndroidThunkCpp_PingAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_Ping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      DeviceAddress                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAndroidHapticLibrary::AndroidThunkCpp_Ping(const class FString& DeviceAddress)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_Ping");
		
		UAndroidHapticLibrary_AndroidThunkCpp_Ping_Params params {};
		params.DeviceAddress = DeviceAddress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_ChangePosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      DeviceAddress                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Position                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAndroidHapticLibrary::AndroidThunkCpp_ChangePosition(const class FString& DeviceAddress, const class FString& Position)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.AndroidHapticLibrary.AndroidThunkCpp_ChangePosition");
		
		UAndroidHapticLibrary_AndroidThunkCpp_ChangePosition_Params params {};
		params.DeviceAddress = DeviceAddress;
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAndroidHapticLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAndroidHapticLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HapticsManager.AndroidHapticLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.TurnOffRegisteredFeedbackFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFeedbackFile*                               Feedback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBhapticsRequestLibrary::TurnOffRegisteredFeedbackFile(class UFeedbackFile* Feedback)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.TurnOffRegisteredFeedbackFile");
		
		UBhapticsRequestLibrary_TurnOffRegisteredFeedbackFile_Params params {};
		params.Feedback = Feedback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.TurnOffRegisteredFeedback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBhapticsRequestLibrary::TurnOffRegisteredFeedback(const class FString& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.TurnOffRegisteredFeedback");
		
		UBhapticsRequestLibrary_TurnOffRegisteredFeedback_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.TurnOffAllFeedback
	 * 		Flags  -> ()
	 */
	void UBhapticsRequestLibrary::TurnOffAllFeedback()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.TurnOffAllFeedback");
		
		UBhapticsRequestLibrary_TurnOffAllFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.ToggleHapticFeedback
	 * 		Flags  -> ()
	 */
	void UBhapticsRequestLibrary::ToggleHapticFeedback()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.ToggleHapticFeedback");
		
		UBhapticsRequestLibrary_ToggleHapticFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.SubmitPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EPosition                                          PositionEnum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPathPoint>                          PathPoints                                                 (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DurationInMilliSecs                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBhapticsRequestLibrary::SubmitPath(const class FString& Key, EPosition PositionEnum, TArray<struct FPathPoint> PathPoints, int32_t DurationInMilliSecs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.SubmitPath");
		
		UBhapticsRequestLibrary_SubmitPath_Params params {};
		params.Key = Key;
		params.PositionEnum = PositionEnum;
		params.PathPoints = PathPoints;
		params.DurationInMilliSecs = DurationInMilliSecs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFeedbackFile*                               Feedback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AltKey                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotationOption                             Option                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               UseAltKey                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBhapticsRequestLibrary::SubmitFeedbackWithTransform(class UFeedbackFile* Feedback, const class FString& AltKey, const struct FRotationOption& Option, bool UseAltKey)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithTransform");
		
		UBhapticsRequestLibrary_SubmitFeedbackWithTransform_Params params {};
		params.Feedback = Feedback;
		params.AltKey = AltKey;
		params.Option = Option;
		params.UseAltKey = UseAltKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithScaleOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFeedbackFile*                               Feedback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FScaleOption                                ScaleOption                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBhapticsRequestLibrary::SubmitFeedbackWithScaleOption(class UFeedbackFile* Feedback, const struct FScaleOption& ScaleOption)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithScaleOption");
		
		UBhapticsRequestLibrary_SubmitFeedbackWithScaleOption_Params params {};
		params.Feedback = Feedback;
		params.ScaleOption = ScaleOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFeedbackFile*                               Feedback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotationOption                             RotationOption                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FScaleOption                                ScaleOption                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBhapticsRequestLibrary::SubmitFeedbackWithOptions(class UFeedbackFile* Feedback, const class FString& Key, const struct FRotationOption& RotationOption, const struct FScaleOption& ScaleOption)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithOptions");
		
		UBhapticsRequestLibrary_SubmitFeedbackWithOptions_Params params {};
		params.Feedback = Feedback;
		params.Key = Key;
		params.RotationOption = RotationOption;
		params.ScaleOption = ScaleOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithIntensityDuration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFeedbackFile*                               Feedback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AltKey                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotationOption                             RotationOption                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FScaleOption                                ScaleOption                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               UseAltKey                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBhapticsRequestLibrary::SubmitFeedbackWithIntensityDuration(class UFeedbackFile* Feedback, const class FString& AltKey, const struct FRotationOption& RotationOption, const struct FScaleOption& ScaleOption, bool UseAltKey)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackWithIntensityDuration");
		
		UBhapticsRequestLibrary_SubmitFeedbackWithIntensityDuration_Params params {};
		params.Feedback = Feedback;
		params.AltKey = AltKey;
		params.RotationOption = RotationOption;
		params.ScaleOption = ScaleOption;
		params.UseAltKey = UseAltKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackReflected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFeedbackFile*                               Feedback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FScaleOption                                ScaleOption                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBhapticsRequestLibrary::SubmitFeedbackReflected(class UFeedbackFile* Feedback, const struct FScaleOption& ScaleOption)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.SubmitFeedbackReflected");
		
		UBhapticsRequestLibrary_SubmitFeedbackReflected_Params params {};
		params.Feedback = Feedback;
		params.ScaleOption = ScaleOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.SubmitFeedback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFeedbackFile*                               Feedback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBhapticsRequestLibrary::SubmitFeedback(class UFeedbackFile* Feedback)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.SubmitFeedback");
		
		UBhapticsRequestLibrary_SubmitFeedback_Params params {};
		params.Feedback = Feedback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.SubmitDots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EPosition                                          PositionEnum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FDotPoint>                           DotPoints                                                  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DurationInMilliSecs                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBhapticsRequestLibrary::SubmitDots(const class FString& Key, EPosition PositionEnum, TArray<struct FDotPoint> DotPoints, int32_t DurationInMilliSecs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.SubmitDots");
		
		UBhapticsRequestLibrary_SubmitDots_Params params {};
		params.Key = Key;
		params.PositionEnum = PositionEnum;
		params.DotPoints = DotPoints;
		params.DurationInMilliSecs = DurationInMilliSecs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.SubmitBytes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EPosition                                          PositionEnum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              InputBytes                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DurationInMilliSecs                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBhapticsRequestLibrary::SubmitBytes(const class FString& Key, EPosition PositionEnum, TArray<unsigned char> InputBytes, int32_t DurationInMilliSecs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.SubmitBytes");
		
		UBhapticsRequestLibrary_SubmitBytes_Params params {};
		params.Key = Key;
		params.PositionEnum = PositionEnum;
		params.InputBytes = InputBytes;
		params.DurationInMilliSecs = DurationInMilliSecs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.RegisterFeedbackFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UFeedbackFile*                               Feedback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBhapticsRequestLibrary::RegisterFeedbackFile(const class FString& Key, class UFeedbackFile* Feedback)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.RegisterFeedbackFile");
		
		UBhapticsRequestLibrary_RegisterFeedbackFile_Params params {};
		params.Key = Key;
		params.Feedback = Feedback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.ProjectToVestLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ContactLocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     PlayerLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    PlayerRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FRotationOption UBhapticsRequestLibrary::ProjectToVestLocation(const struct FVector& ContactLocation, const struct FVector& PlayerLocation, const struct FRotator& PlayerRotation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.ProjectToVestLocation");
		
		UBhapticsRequestLibrary_ProjectToVestLocation_Params params {};
		params.ContactLocation = ContactLocation;
		params.PlayerLocation = PlayerLocation;
		params.PlayerRotation = PlayerRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.ProjectToVest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ContactLocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         PlayerComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HalfHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotationOption UBhapticsRequestLibrary::ProjectToVest(const struct FVector& ContactLocation, class UPrimitiveComponent* PlayerComponent, float HalfHeight)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.ProjectToVest");
		
		UBhapticsRequestLibrary_ProjectToVest_Params params {};
		params.ContactLocation = ContactLocation;
		params.PlayerComponent = PlayerComponent;
		params.HalfHeight = HalfHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.IsRegisteredPlaying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBhapticsRequestLibrary::IsRegisteredPlaying(const class FString& Key)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.IsRegisteredPlaying");
		
		UBhapticsRequestLibrary_IsRegisteredPlaying_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.IsRegisteredFilePlaying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UFeedbackFile*                               Feedback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBhapticsRequestLibrary::IsRegisteredFilePlaying(class UFeedbackFile* Feedback)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.IsRegisteredFilePlaying");
		
		UBhapticsRequestLibrary_IsRegisteredFilePlaying_Params params {};
		params.Feedback = Feedback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.IsDeviceConnected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPosition                                          Device                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBhapticsRequestLibrary::IsDeviceConnected(EPosition Device)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.IsDeviceConnected");
		
		UBhapticsRequestLibrary_IsDeviceConnected_Params params {};
		params.Device = Device;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.IsAnythingPlaying
	 * 		Flags  -> ()
	 */
	bool UBhapticsRequestLibrary::IsAnythingPlaying()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.IsAnythingPlaying");
		
		UBhapticsRequestLibrary_IsAnythingPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.Initialize
	 * 		Flags  -> ()
	 */
	void UBhapticsRequestLibrary::Initialize()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.Initialize");
		
		UBhapticsRequestLibrary_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.GetResponseStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPosition                                          Pos                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> UBhapticsRequestLibrary::GetResponseStatus(EPosition Pos)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.GetResponseStatus");
		
		UBhapticsRequestLibrary_GetResponseStatus_Params params {};
		params.Pos = Pos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.EnableHapticFeedback
	 * 		Flags  -> ()
	 */
	void UBhapticsRequestLibrary::EnableHapticFeedback()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.EnableHapticFeedback");
		
		UBhapticsRequestLibrary_EnableHapticFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.DisableHapticFeedback
	 * 		Flags  -> ()
	 */
	void UBhapticsRequestLibrary::DisableHapticFeedback()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.DisableHapticFeedback");
		
		UBhapticsRequestLibrary_DisableHapticFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.BhapticsRequestLibrary.CustomProjectToVest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ContactLocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         PlayerComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HalfHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     UpVector                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ForwardVector                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotationOption UBhapticsRequestLibrary::CustomProjectToVest(const struct FVector& ContactLocation, class UPrimitiveComponent* PlayerComponent, float HalfHeight, const struct FVector& UpVector, const struct FVector& ForwardVector)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.BhapticsRequestLibrary.CustomProjectToVest");
		
		UBhapticsRequestLibrary_CustomProjectToVest_Params params {};
		params.ContactLocation = ContactLocation;
		params.PlayerComponent = PlayerComponent;
		params.HalfHeight = HalfHeight;
		params.UpVector = UpVector;
		params.ForwardVector = ForwardVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBhapticsRequestLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBhapticsRequestLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HapticsManager.BhapticsRequestLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFeedbackFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFeedbackFile::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HapticsManager.FeedbackFile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFootFeedbackFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFootFeedbackFile::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HapticsManager.FootFeedbackFile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGloveFeedbackFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGloveFeedbackFile::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HapticsManager.GloveFeedbackFile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHandFeedbackFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHandFeedbackFile::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HapticsManager.HandFeedbackFile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.HapticDevice.TogglePosition
	 * 		Flags  -> ()
	 */
	void UHapticDevice::TogglePosition()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.HapticDevice.TogglePosition");
		
		UHapticDevice_TogglePosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.HapticDevice.SetDeviceData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDevice                                     LinkedDevice                                               (Parm, NativeAccessSpecifierPublic)
	 */
	void UHapticDevice::SetDeviceData(const struct FDevice& LinkedDevice)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.HapticDevice.SetDeviceData");
		
		UHapticDevice_SetDeviceData_Params params {};
		params.LinkedDevice = LinkedDevice;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.HapticDevice.Ping
	 * 		Flags  -> ()
	 */
	void UHapticDevice::Ping()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.HapticDevice.Ping");
		
		UHapticDevice_Ping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.HapticDevice.ChangePosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Position                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHapticDevice::ChangePosition(const class FString& Position)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.HapticDevice.ChangePosition");
		
		UHapticDevice_ChangePosition_Params params {};
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHapticDevice.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHapticDevice::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HapticsManager.HapticDevice");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHapticSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHapticSettings::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HapticsManager.HapticSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HapticsManager.HapticsManagerActor.SetTactSuit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SleeveLeft                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             SleeveRight                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             Head                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             VestFront                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             VestBack                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             GloveLeft                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             GloveRight                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             ShoeLeft                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             ShoeRight                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHapticsManagerActor::SetTactSuit(class USceneComponent* SleeveLeft, class USceneComponent* SleeveRight, class USceneComponent* Head, class USceneComponent* VestFront, class USceneComponent* VestBack, class USceneComponent* GloveLeft, class USceneComponent* GloveRight, class USceneComponent* ShoeLeft, class USceneComponent* ShoeRight)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function HapticsManager.HapticsManagerActor.SetTactSuit");
		
		AHapticsManagerActor_SetTactSuit_Params params {};
		params.SleeveLeft = SleeveLeft;
		params.SleeveRight = SleeveRight;
		params.Head = Head;
		params.VestFront = VestFront;
		params.VestBack = VestBack;
		params.GloveLeft = GloveLeft;
		params.GloveRight = GloveRight;
		params.ShoeLeft = ShoeLeft;
		params.ShoeRight = ShoeRight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHapticsManagerActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHapticsManagerActor::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HapticsManager.HapticsManagerActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTactalFeedbackFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTactalFeedbackFile::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HapticsManager.TactalFeedbackFile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTactosyFeedbackFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTactosyFeedbackFile::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HapticsManager.TactosyFeedbackFile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTactotFeedbackFile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTactotFeedbackFile::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HapticsManager.TactotFeedbackFile");
		return ptr;
	}

}


