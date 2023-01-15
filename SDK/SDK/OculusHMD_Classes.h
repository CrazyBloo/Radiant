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
	 * Class OculusHMD.OculusEventComponent
	 * Size -> 0x0010 (FullSize[0x00F0] - InheritedSize[0x00E0])
	 */
	class UOculusEventComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OculusDisplayRefreshRateChanged;                         // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OculusHMD.OculusFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOculusFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetPositionScale3D(const struct FVector& PosScale3D);
		void SetGuardianVisibility(bool GuardianVisible);
		void SetFixedFoveatedRenderingLevel(EFixedFoveatedRenderingLevel Level, bool isDynamic);
		void SetDisplayFrequency(float RequestedFrequency);
		void SetCPUAndGPULevels(int32_t CPULevel, int32_t GPULevel);
		void SetColorScaleAndOffset(const struct FLinearColor& ColorScale, const struct FLinearColor& ColorOffset, bool bApplyToAllLayers);
		void SetClientColorDesc(EColorSpace ColorSpace);
		void SetBaseRotationAndPositionOffset(const struct FRotator& BaseRot, const struct FVector& PosOffset, EOrientPositionSelector Options);
		void SetBaseRotationAndBaseOffsetInMeters(const struct FRotator& Rotation, const struct FVector& BaseOffsetInMeters, EOrientPositionSelector Options);
		bool IsGuardianDisplayed();
		bool IsGuardianConfigured();
		bool IsDeviceTracked(ETrackedDeviceType DeviceType);
		bool HasSystemOverlayPresent();
		bool HasInputFocus();
		bool GetUserProfile(struct FHmdUserProfile* Profile);
		bool GetSystemHmd3DofModeEnabled();
		void GetRawSensorData(struct FVector* AngularAcceleration, struct FVector* LinearAcceleration, struct FVector* AngularVelocity, struct FVector* LinearVelocity, float* TimeInSeconds, ETrackedDeviceType DeviceType);
		void GetPose(struct FRotator* DeviceRotation, struct FVector* DevicePosition, struct FVector* NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, const struct FVector& PositionScale);
		struct FGuardianTestResult GetPointGuardianIntersection(const struct FVector& Point, EBoundaryType BoundaryType);
		struct FTransform GetPlayAreaTransform();
		struct FGuardianTestResult GetNodeGuardianIntersection(ETrackedDeviceType DeviceType, EBoundaryType BoundaryType);
		EColorSpace GetHmdColorDesc();
		TArray<struct FVector> GetGuardianPoints(EBoundaryType BoundaryType, bool UsePawnSpace);
		struct FVector GetGuardianDimensions(EBoundaryType BoundaryType);
		void GetGPUUtilization(bool* IsGPUAvailable, float* GPUUtilization);
		float GetGPUFrameTime();
		EFixedFoveatedRenderingLevel GetFixedFoveatedRenderingLevel();
		EOculusDeviceType GetDeviceType();
		class FString GetDeviceName();
		float GetCurrentDisplayFrequency();
		void GetBaseRotationAndPositionOffset(struct FRotator* OutRot, struct FVector* OutPosOffset);
		void GetBaseRotationAndBaseOffsetInMeters(struct FRotator* OutRotation, struct FVector* OutBaseOffsetInMeters);
		TArray<float> GetAvailableDisplayFrequencies();
		void EnablePositionTracking(bool bPositionTracking);
		void EnableOrientationTracking(bool bOrientationTracking);
		void ClearLoadingSplashScreens();
		void AddLoadingSplashScreen(class UTexture2D* Texture, const struct FVector& TranslationInMeters, const struct FRotator& Rotation, const struct FVector2D& SizeInMeters, const struct FRotator& DeltaRotation, bool bClearBeforeAdd);
		static UClass* StaticClass();
	};

	/**
	 * Class OculusHMD.OculusHMDRuntimeSettings
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UOculusHMDRuntimeSettings : public UObject
	{
	public:
		bool                                                       bAutoEnabled;                                            // 0x0028(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U4WT[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FOculusSplashDesc>                           SplashDescs;                                             // 0x0030(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		EOculusXrApi                                               XrApi;                                                   // 0x0040(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EColorSpace                                                ColorSpace;                                              // 0x0041(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsDash;                                           // 0x0042(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompositesDepth;                                        // 0x0043(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHQDistortion;                                           // 0x0044(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WT04[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PixelDensityMin;                                         // 0x0048(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PixelDensityMax;                                         // 0x004C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFilePath                                           OSSplashScreen;                                          // 0x0050(0x0010) Edit, Config, NativeAccessSpecifierPublic
		int32_t                                                    CPULevel;                                                // 0x0060(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GPULevel;                                                // 0x0064(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFixedFoveatedRenderingLevel                               FFRLevel;                                                // 0x0068(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FFRDynamic;                                              // 0x0069(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFocusAware;                                             // 0x006A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLateLatching;                                           // 0x006B(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresSystemKeyboard;                                 // 0x006C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHandTrackingSupport                                       HandTrackingSupport;                                     // 0x006D(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHandTrackingFrequency                                     HandTrackingFrequency;                                   // 0x006E(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInsightPassthroughEnabled;                              // 0x006F(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPhaseSync;                                              // 0x0070(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5NL7[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OculusHMD.PassthroughLayerBase
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UPassthroughLayerBase : public UStereoLayerShape
	{
	public:
		float                                                      TextureOpacityFactor;                                    // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableEdgeColor;                                        // 0x002C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2MNB[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        EdgeColor;                                               // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableColorMap;                                         // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EColorMapType                                              ColorMapType;                                            // 0x0041(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S757[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveLinearColor*                                   ColorMapCurve;                                           // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetTextureOpacity(float InOpacity);
		void SetEdgeRenderingColor(const struct FLinearColor& InEdgeColor);
		void SetColorMapType(EColorMapType InColorMapType);
		void SetColorMapCurve(class UCurveLinearColor* InColorMapCurve);
		void EnableEdgeColor(bool bInEnableEdgeRendering);
		void EnableColorMap(bool bInEnableEdgeRendering);
		static UClass* StaticClass();
	};

	/**
	 * Class OculusHMD.StereoLayerShapeReconstructed
	 * Size -> 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
	 */
	class UStereoLayerShapeReconstructed : public UPassthroughLayerBase
	{
	public:
		EPassthroughLayerOrder                                     LayerOrder;                                              // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W7EW[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OculusHMD.StereoLayerShapeUserDefined
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UStereoLayerShapeUserDefined : public UPassthroughLayerBase
	{
	public:
		unsigned char                                              UnknownData_8L5Z[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OculusHMD.OculusPassthroughLayerComponent
	 * Size -> 0x0058 (FullSize[0x0360] - InheritedSize[0x0308])
	 */
	class UOculusPassthroughLayerComponent : public UStereoLayerComponent
	{
	public:
		TMap<class FString, class AStaticMeshActor*>               PassthroughActorMap;                                     // 0x0308(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AJDY[0x8];                                   // 0x0358(0x0008) MISSED OFFSET (PADDING)

	public:
		void RemoveSurfaceGeometry(class AStaticMeshActor* StaticMeshActor);
		void MarkPassthroughStyleForUpdate();
		void AddSurfaceGeometry(class AStaticMeshActor* StaticMeshActor, bool updateTransform);
		static UClass* StaticClass();
	};

	/**
	 * Class OculusHMD.OculusResourceHolder
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UOculusResourceHolder : public UObject
	{
	public:
		class UMaterial*                                           PokeAHoleMaterial;                                       // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OculusHMD.OculusSceneCaptureCubemap
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UOculusSceneCaptureCubemap : public UObject
	{
	public:
		unsigned char                                              UnknownData_15NL[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USceneCaptureComponent2D*>                    CaptureComponents;                                       // 0x0038(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CFR0[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
