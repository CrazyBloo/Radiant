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
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSuspendRendering
	 */
	struct UOpenVRExpansionFunctionLibrary_SetSuspendRendering_Params
	{
	public:
		bool                                                       bSuspendRendering;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSkyboxOverride_LatLongStereoPair
	 */
	struct UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair_Params
	{
	public:
		class UTexture2D*                                          LatLongSkyboxL;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2D*                                          LatLongSkyboxR;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSkyboxOverride_LatLong
	 */
	struct UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong_Params
	{
	public:
		class UTexture2D*                                          LatLongSkybox;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSkyboxOverride
	 */
	struct UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Params
	{
	public:
		class UTexture*                                            tFront;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2D*                                          tBack;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            tLeft;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            tRight;                                                  // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            tTop;                                                    // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            tBottom;                                                 // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.ReleaseVRCamera
	 */
	struct UOpenVRExpansionFunctionLibrary_ReleaseVRCamera_Params
	{
	public:
		struct FBPOpenVRCameraHandle                               CameraHandle;                                            // 0x0000(0x0008)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EBPOVRResultSwitch                                         Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.IsValid
	 */
	struct UOpenVRExpansionFunctionLibrary_IsValid_Params
	{
	public:
		struct FBPOpenVRCameraHandle                               CameraHandle;                                            // 0x0000(0x0008)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.IsOpenVRDeviceConnected
	 */
	struct UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected_Params
	{
	public:
		int32_t                                                    DeviceIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.HasVRCamera
	 */
	struct UOpenVRExpansionFunctionLibrary_HasVRCamera_Params
	{
	public:
		EOpenVRCameraFrameType                                     FrameType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GLJV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Width;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Height;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyUInt64
	 */
	struct UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Params
	{
	public:
		EVRDeviceProperty_UInt64                                   PropertyToRetrieve;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C4J6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    DeviceID;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              UInt64Value;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPOVRResultSwitch                                         Result;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyString
	 */
	struct UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Params
	{
	public:
		EVRDeviceProperty_String                                   PropertyToRetrieve;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5COW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    DeviceID;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StringValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPOVRResultSwitch                                         Result;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyMatrix34AsTransform
	 */
	struct UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Params
	{
	public:
		EVRDeviceProperty_Matrix34                                 PropertyToRetrieve;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R3WO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    DeviceID;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y407[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          TransformValue;                                          // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EBPOVRResultSwitch                                         Result;                                                  // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyInt32
	 */
	struct UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Params
	{
	public:
		EVRDeviceProperty_Int32                                    PropertyToRetrieve;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6VM2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    DeviceID;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    IntValue;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPOVRResultSwitch                                         Result;                                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyFloat
	 */
	struct UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Params
	{
	public:
		EVRDeviceProperty_Float                                    PropertyToRetrieve;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CJE9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    DeviceID;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FloatValue;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPOVRResultSwitch                                         Result;                                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyBool
	 */
	struct UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Params
	{
	public:
		EVRDeviceProperty_Bool                                     PropertyToRetrieve;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F4ZO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    DeviceID;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       BoolValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPOVRResultSwitch                                         Result;                                                  // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDeviceModelAndTexture
	 */
	struct UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              RenderModelNameOverride;                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              RenderModelNameOut;                                      // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPOpenVRTrackedDeviceClass                                DeviceType;                                              // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_85VS[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UProceduralMeshComponent*>                    ProceduralMeshComponentsToFill;                          // 0x0030(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bCreateCollision;                                        // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAsyncBlueprintResultSwitch                                Result;                                                  // 0x0041(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LPIH[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OverrideDeviceID;                                        // 0x0044(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2D*                                          ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRCameraFrame
	 */
	struct UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Params
	{
	public:
		struct FBPOpenVRCameraHandle                               CameraHandle;                                            // 0x0000(0x0008)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EOpenVRCameraFrameType                                     FrameType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPOVRResultSwitch                                         Result;                                                  // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SCRA[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          TargetRenderTarget;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRHMDType
	 */
	struct UOpenVRExpansionFunctionLibrary_GetOpenVRHMDType_Params
	{
	public:
		EBPOpenVRHMDDeviceType                                     ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRDeviceType
	 */
	struct UOpenVRExpansionFunctionLibrary_GetOpenVRDeviceType_Params
	{
	public:
		int32_t                                                    DeviceIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPOpenVRTrackedDeviceClass                                ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRDevicesByType
	 */
	struct UOpenVRExpansionFunctionLibrary_GetOpenVRDevicesByType_Params
	{
	public:
		EBPOpenVRTrackedDeviceClass                                TypeToRetreive;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9899[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            FoundIndexs;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRDevices
	 */
	struct UOpenVRExpansionFunctionLibrary_GetOpenVRDevices_Params
	{
	public:
		TArray<EBPOpenVRTrackedDeviceClass>                        FoundDevices;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRControllerType
	 */
	struct UOpenVRExpansionFunctionLibrary_GetOpenVRControllerType_Params
	{
	public:
		EBPOpenVRControllerDeviceType                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetCurrentVRGridAlpha
	 */
	struct UOpenVRExpansionFunctionLibrary_GetCurrentVRGridAlpha_Params
	{
	public:
		float                                                      VRGridAlpha;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetCurrentHMDFadeColor
	 */
	struct UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor_Params
	{
	public:
		struct FColor                                              ColorOut;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bBackground;                                             // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.FadeVRGrid
	 */
	struct UOpenVRExpansionFunctionLibrary_FadeVRGrid_Params
	{
	public:
		float                                                      fSeconds;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFadeIn;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.FadeHMDToColor
	 */
	struct UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Params
	{
	public:
		float                                                      fSeconds;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                              Color;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bBackground;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.CreateCameraTexture2D
	 */
	struct UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Params
	{
	public:
		struct FBPOpenVRCameraHandle                               CameraHandle;                                            // 0x0000(0x0008)  (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EOpenVRCameraFrameType                                     FrameType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPOVRResultSwitch                                         Result;                                                  // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QTC8[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.ClearSkyboxOverride
	 */
	struct UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.AcquireVRCamera
	 */
	struct UOpenVRExpansionFunctionLibrary_AcquireVRCamera_Params
	{
	public:
		struct FBPOpenVRCameraHandle                               CameraHandle;                                            // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		EBPOVRResultSwitch                                         Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.ReOpenVRKeyboardForUser
	 */
	struct USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Params
	{
	public:
		bool                                                       bIsForPassword;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsMultiline;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseMinimalMode;                                         // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsRightHand;                                            // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxCharacters;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Description;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StartingString;                                          // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPOVRResultSwitch                                         Result;                                                  // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.OpenVRKeyboard
	 */
	struct USteamVRKeyboardComponent_OpenVRKeyboard_Params
	{
	public:
		bool                                                       bIsForPassword;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsMultiline;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseMinimalMode;                                         // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsRightHand;                                            // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxCharacters;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Description;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StartingString;                                          // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPOVRResultSwitch                                         Result;                                                  // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.GetVRKeyboardText
	 */
	struct USteamVRKeyboardComponent_GetVRKeyboardText_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBPOVRResultSwitch                                         Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.CloseVRKeyboard
	 */
	struct USteamVRKeyboardComponent_CloseVRKeyboard_Params
	{
	public:
		EBPOVRResultSwitch                                         Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
