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
	 * Class OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOpenVRExpansionFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool SetSuspendRendering(bool bSuspendRendering);
		bool SetSkyboxOverride_LatLongStereoPair(class UTexture2D* LatLongSkyboxL, class UTexture2D* LatLongSkyboxR);
		bool SetSkyboxOverride_LatLong(class UTexture2D* LatLongSkybox);
		bool SetSkyboxOverride(class UTexture* tFront, class UTexture2D* tBack, class UTexture* tLeft, class UTexture* tRight, class UTexture* tTop, class UTexture* tBottom);
		void ReleaseVRCamera(struct FBPOpenVRCameraHandle* CameraHandle, EBPOVRResultSwitch* Result);
		bool IsValid(struct FBPOpenVRCameraHandle* CameraHandle);
		bool IsOpenVRDeviceConnected(int32_t DeviceIndex);
		bool HasVRCamera(EOpenVRCameraFrameType FrameType, int32_t* Width, int32_t* Height);
		void GetVRDevicePropertyUInt64(EVRDeviceProperty_UInt64 PropertyToRetrieve, int32_t DeviceID, class FString* UInt64Value, EBPOVRResultSwitch* Result);
		void GetVRDevicePropertyString(EVRDeviceProperty_String PropertyToRetrieve, int32_t DeviceID, class FString* StringValue, EBPOVRResultSwitch* Result);
		void GetVRDevicePropertyMatrix34AsTransform(EVRDeviceProperty_Matrix34 PropertyToRetrieve, int32_t DeviceID, struct FTransform* TransformValue, EBPOVRResultSwitch* Result);
		void GetVRDevicePropertyInt32(EVRDeviceProperty_Int32 PropertyToRetrieve, int32_t DeviceID, int32_t* IntValue, EBPOVRResultSwitch* Result);
		void GetVRDevicePropertyFloat(EVRDeviceProperty_Float PropertyToRetrieve, int32_t DeviceID, float* FloatValue, EBPOVRResultSwitch* Result);
		void GetVRDevicePropertyBool(EVRDeviceProperty_Bool PropertyToRetrieve, int32_t DeviceID, bool* BoolValue, EBPOVRResultSwitch* Result);
		class UTexture2D* GetVRDeviceModelAndTexture(class UObject* WorldContextObject, const class FString& RenderModelNameOverride, class FString* RenderModelNameOut, EBPOpenVRTrackedDeviceClass DeviceType, TArray<class UProceduralMeshComponent*> ProceduralMeshComponentsToFill, bool bCreateCollision, EAsyncBlueprintResultSwitch* Result, int32_t OverrideDeviceID);
		void GetVRCameraFrame(struct FBPOpenVRCameraHandle* CameraHandle, EOpenVRCameraFrameType FrameType, EBPOVRResultSwitch* Result, class UTexture2D* TargetRenderTarget);
		EBPOpenVRHMDDeviceType GetOpenVRHMDType();
		EBPOpenVRTrackedDeviceClass GetOpenVRDeviceType(int32_t DeviceIndex);
		void GetOpenVRDevicesByType(EBPOpenVRTrackedDeviceClass TypeToRetreive, TArray<int32_t>* FoundIndexs);
		void GetOpenVRDevices(TArray<EBPOpenVRTrackedDeviceClass>* FoundDevices);
		EBPOpenVRControllerDeviceType GetOpenVRControllerType();
		bool GetCurrentVRGridAlpha(float* VRGridAlpha);
		bool GetCurrentHMDFadeColor(struct FColor* ColorOut, bool bBackground);
		bool FadeVRGrid(float fSeconds, bool bFadeIn);
		bool FadeHMDToColor(float fSeconds, const struct FColor& Color, bool bBackground);
		class UTexture2D* CreateCameraTexture2D(struct FBPOpenVRCameraHandle* CameraHandle, EOpenVRCameraFrameType FrameType, EBPOVRResultSwitch* Result);
		bool ClearSkyboxOverride();
		void AcquireVRCamera(struct FBPOpenVRCameraHandle* CameraHandle, EBPOVRResultSwitch* Result);
		static UClass* StaticClass();
	};

	/**
	 * Class OpenVRExpansionPlugin.SteamVRKeyboardComponent
	 * Size -> 0x0038 (FullSize[0x0260] - InheritedSize[0x0228])
	 */
	class USteamVRKeyboardComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_RBV2[0x8];                                   // 0x0228(0x0008) Fix Super Size
		class FScriptMulticastDelegate                             OnKeyboardDone;                                          // 0x0230(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnKeyboardClosed;                                        // 0x0240(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnKeyboardCharInput;                                     // 0x0250(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void ReOpenVRKeyboardForUser(bool bIsForPassword, bool bIsMultiline, bool bUseMinimalMode, bool bIsRightHand, int32_t MaxCharacters, const class FString& Description, const class FString& StartingString, EBPOVRResultSwitch* Result);
		void OpenVRKeyboard(bool bIsForPassword, bool bIsMultiline, bool bUseMinimalMode, bool bIsRightHand, int32_t MaxCharacters, const class FString& Description, const class FString& StartingString, EBPOVRResultSwitch* Result);
		void GetVRKeyboardText(class FString* Text, EBPOVRResultSwitch* Result);
		void CloseVRKeyboard(EBPOVRResultSwitch* Result);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
