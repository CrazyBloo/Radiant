/**
 * Name: Into_The_Radius_VR
 * Version: 2.4
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
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSuspendRendering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuspendRendering                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOpenVRExpansionFunctionLibrary::SetSuspendRendering(bool bSuspendRendering)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSuspendRendering");
		
		UOpenVRExpansionFunctionLibrary_SetSuspendRendering_Params params {};
		params.bSuspendRendering = bSuspendRendering;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSkyboxOverride_LatLongStereoPair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  LatLongSkyboxL                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  LatLongSkyboxR                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOpenVRExpansionFunctionLibrary::SetSkyboxOverride_LatLongStereoPair(class UTexture2D* LatLongSkyboxL, class UTexture2D* LatLongSkyboxR)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSkyboxOverride_LatLongStereoPair");
		
		UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLongStereoPair_Params params {};
		params.LatLongSkyboxL = LatLongSkyboxL;
		params.LatLongSkyboxR = LatLongSkyboxR;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSkyboxOverride_LatLong
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  LatLongSkybox                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOpenVRExpansionFunctionLibrary::SetSkyboxOverride_LatLong(class UTexture2D* LatLongSkybox)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSkyboxOverride_LatLong");
		
		UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_LatLong_Params params {};
		params.LatLongSkybox = LatLongSkybox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSkyboxOverride
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    tFront                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  tBack                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture*                                    tLeft                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture*                                    tRight                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture*                                    tTop                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture*                                    tBottom                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOpenVRExpansionFunctionLibrary::SetSkyboxOverride(class UTexture* tFront, class UTexture2D* tBack, class UTexture* tLeft, class UTexture* tRight, class UTexture* tTop, class UTexture* tBottom)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.SetSkyboxOverride");
		
		UOpenVRExpansionFunctionLibrary_SetSkyboxOverride_Params params {};
		params.tFront = tFront;
		params.tBack = tBack;
		params.tLeft = tLeft;
		params.tRight = tRight;
		params.tTop = tTop;
		params.tBottom = tBottom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.ReleaseVRCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPOpenVRCameraHandle                       CameraHandle                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EBPOVRResultSwitch                                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOpenVRExpansionFunctionLibrary::ReleaseVRCamera(struct FBPOpenVRCameraHandle* CameraHandle, EBPOVRResultSwitch* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.ReleaseVRCamera");
		
		UOpenVRExpansionFunctionLibrary_ReleaseVRCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CameraHandle != nullptr)
			*CameraHandle = params.CameraHandle;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.IsValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPOpenVRCameraHandle                       CameraHandle                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UOpenVRExpansionFunctionLibrary::IsValid(struct FBPOpenVRCameraHandle* CameraHandle)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.IsValid");
		
		UOpenVRExpansionFunctionLibrary_IsValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CameraHandle != nullptr)
			*CameraHandle = params.CameraHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.IsOpenVRDeviceConnected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DeviceIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOpenVRExpansionFunctionLibrary::IsOpenVRDeviceConnected(int32_t DeviceIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.IsOpenVRDeviceConnected");
		
		UOpenVRExpansionFunctionLibrary_IsOpenVRDeviceConnected_Params params {};
		params.DeviceIndex = DeviceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.HasVRCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EOpenVRCameraFrameType                             FrameType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOpenVRExpansionFunctionLibrary::HasVRCamera(EOpenVRCameraFrameType FrameType, int32_t* Width, int32_t* Height)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.HasVRCamera");
		
		UOpenVRExpansionFunctionLibrary_HasVRCamera_Params params {};
		params.FrameType = FrameType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Width != nullptr)
			*Width = params.Width;
		if (Height != nullptr)
			*Height = params.Height;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyUInt64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVRDeviceProperty_UInt64                           PropertyToRetrieve                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DeviceID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UInt64Value                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPOVRResultSwitch                                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyUInt64(EVRDeviceProperty_UInt64 PropertyToRetrieve, int32_t DeviceID, class FString* UInt64Value, EBPOVRResultSwitch* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyUInt64");
		
		UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyUInt64_Params params {};
		params.PropertyToRetrieve = PropertyToRetrieve;
		params.DeviceID = DeviceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UInt64Value != nullptr)
			*UInt64Value = params.UInt64Value;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVRDeviceProperty_String                           PropertyToRetrieve                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DeviceID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StringValue                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPOVRResultSwitch                                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyString(EVRDeviceProperty_String PropertyToRetrieve, int32_t DeviceID, class FString* StringValue, EBPOVRResultSwitch* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyString");
		
		UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyString_Params params {};
		params.PropertyToRetrieve = PropertyToRetrieve;
		params.DeviceID = DeviceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StringValue != nullptr)
			*StringValue = params.StringValue;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyMatrix34AsTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVRDeviceProperty_Matrix34                         PropertyToRetrieve                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DeviceID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  TransformValue                                             (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EBPOVRResultSwitch                                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyMatrix34AsTransform(EVRDeviceProperty_Matrix34 PropertyToRetrieve, int32_t DeviceID, struct FTransform* TransformValue, EBPOVRResultSwitch* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyMatrix34AsTransform");
		
		UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyMatrix34AsTransform_Params params {};
		params.PropertyToRetrieve = PropertyToRetrieve;
		params.DeviceID = DeviceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TransformValue != nullptr)
			*TransformValue = params.TransformValue;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyInt32
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVRDeviceProperty_Int32                            PropertyToRetrieve                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DeviceID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IntValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPOVRResultSwitch                                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyInt32(EVRDeviceProperty_Int32 PropertyToRetrieve, int32_t DeviceID, int32_t* IntValue, EBPOVRResultSwitch* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyInt32");
		
		UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyInt32_Params params {};
		params.PropertyToRetrieve = PropertyToRetrieve;
		params.DeviceID = DeviceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IntValue != nullptr)
			*IntValue = params.IntValue;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVRDeviceProperty_Float                            PropertyToRetrieve                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DeviceID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FloatValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPOVRResultSwitch                                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyFloat(EVRDeviceProperty_Float PropertyToRetrieve, int32_t DeviceID, float* FloatValue, EBPOVRResultSwitch* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyFloat");
		
		UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyFloat_Params params {};
		params.PropertyToRetrieve = PropertyToRetrieve;
		params.DeviceID = DeviceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FloatValue != nullptr)
			*FloatValue = params.FloatValue;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EVRDeviceProperty_Bool                             PropertyToRetrieve                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DeviceID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               BoolValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPOVRResultSwitch                                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOpenVRExpansionFunctionLibrary::GetVRDevicePropertyBool(EVRDeviceProperty_Bool PropertyToRetrieve, int32_t DeviceID, bool* BoolValue, EBPOVRResultSwitch* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDevicePropertyBool");
		
		UOpenVRExpansionFunctionLibrary_GetVRDevicePropertyBool_Params params {};
		params.PropertyToRetrieve = PropertyToRetrieve;
		params.DeviceID = DeviceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BoolValue != nullptr)
			*BoolValue = params.BoolValue;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDeviceModelAndTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RenderModelNameOverride                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RenderModelNameOut                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPOpenVRTrackedDeviceClass                        DeviceType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UProceduralMeshComponent*>            ProceduralMeshComponentsToFill                             (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateCollision                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAsyncBlueprintResultSwitch                        Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OverrideDeviceID                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UOpenVRExpansionFunctionLibrary::GetVRDeviceModelAndTexture(class UObject* WorldContextObject, const class FString& RenderModelNameOverride, class FString* RenderModelNameOut, EBPOpenVRTrackedDeviceClass DeviceType, TArray<class UProceduralMeshComponent*> ProceduralMeshComponentsToFill, bool bCreateCollision, EAsyncBlueprintResultSwitch* Result, int32_t OverrideDeviceID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRDeviceModelAndTexture");
		
		UOpenVRExpansionFunctionLibrary_GetVRDeviceModelAndTexture_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.RenderModelNameOverride = RenderModelNameOverride;
		params.DeviceType = DeviceType;
		params.ProceduralMeshComponentsToFill = ProceduralMeshComponentsToFill;
		params.bCreateCollision = bCreateCollision;
		params.OverrideDeviceID = OverrideDeviceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RenderModelNameOut != nullptr)
			*RenderModelNameOut = params.RenderModelNameOut;
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRCameraFrame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPOpenVRCameraHandle                       CameraHandle                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EOpenVRCameraFrameType                             FrameType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPOVRResultSwitch                                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2D*                                  TargetRenderTarget                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOpenVRExpansionFunctionLibrary::GetVRCameraFrame(struct FBPOpenVRCameraHandle* CameraHandle, EOpenVRCameraFrameType FrameType, EBPOVRResultSwitch* Result, class UTexture2D* TargetRenderTarget)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetVRCameraFrame");
		
		UOpenVRExpansionFunctionLibrary_GetVRCameraFrame_Params params {};
		params.FrameType = FrameType;
		params.TargetRenderTarget = TargetRenderTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CameraHandle != nullptr)
			*CameraHandle = params.CameraHandle;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRHMDType
	 * 		Flags  -> ()
	 */
	EBPOpenVRHMDDeviceType UOpenVRExpansionFunctionLibrary::GetOpenVRHMDType()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRHMDType");
		
		UOpenVRExpansionFunctionLibrary_GetOpenVRHMDType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRDeviceType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DeviceIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EBPOpenVRTrackedDeviceClass UOpenVRExpansionFunctionLibrary::GetOpenVRDeviceType(int32_t DeviceIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRDeviceType");
		
		UOpenVRExpansionFunctionLibrary_GetOpenVRDeviceType_Params params {};
		params.DeviceIndex = DeviceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRDevicesByType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBPOpenVRTrackedDeviceClass                        TypeToRetreive                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    FoundIndexs                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UOpenVRExpansionFunctionLibrary::GetOpenVRDevicesByType(EBPOpenVRTrackedDeviceClass TypeToRetreive, TArray<int32_t>* FoundIndexs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRDevicesByType");
		
		UOpenVRExpansionFunctionLibrary_GetOpenVRDevicesByType_Params params {};
		params.TypeToRetreive = TypeToRetreive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundIndexs != nullptr)
			*FoundIndexs = params.FoundIndexs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRDevices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EBPOpenVRTrackedDeviceClass>                FoundDevices                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UOpenVRExpansionFunctionLibrary::GetOpenVRDevices(TArray<EBPOpenVRTrackedDeviceClass>* FoundDevices)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRDevices");
		
		UOpenVRExpansionFunctionLibrary_GetOpenVRDevices_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundDevices != nullptr)
			*FoundDevices = params.FoundDevices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRControllerType
	 * 		Flags  -> ()
	 */
	EBPOpenVRControllerDeviceType UOpenVRExpansionFunctionLibrary::GetOpenVRControllerType()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetOpenVRControllerType");
		
		UOpenVRExpansionFunctionLibrary_GetOpenVRControllerType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetCurrentVRGridAlpha
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              VRGridAlpha                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOpenVRExpansionFunctionLibrary::GetCurrentVRGridAlpha(float* VRGridAlpha)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetCurrentVRGridAlpha");
		
		UOpenVRExpansionFunctionLibrary_GetCurrentVRGridAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VRGridAlpha != nullptr)
			*VRGridAlpha = params.VRGridAlpha;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetCurrentHMDFadeColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FColor                                      ColorOut                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBackground                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOpenVRExpansionFunctionLibrary::GetCurrentHMDFadeColor(struct FColor* ColorOut, bool bBackground)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.GetCurrentHMDFadeColor");
		
		UOpenVRExpansionFunctionLibrary_GetCurrentHMDFadeColor_Params params {};
		params.bBackground = bBackground;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ColorOut != nullptr)
			*ColorOut = params.ColorOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.FadeVRGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              fSeconds                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFadeIn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOpenVRExpansionFunctionLibrary::FadeVRGrid(float fSeconds, bool bFadeIn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.FadeVRGrid");
		
		UOpenVRExpansionFunctionLibrary_FadeVRGrid_Params params {};
		params.fSeconds = fSeconds;
		params.bFadeIn = bFadeIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.FadeHMDToColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              fSeconds                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBackground                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOpenVRExpansionFunctionLibrary::FadeHMDToColor(float fSeconds, const struct FColor& Color, bool bBackground)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.FadeHMDToColor");
		
		UOpenVRExpansionFunctionLibrary_FadeHMDToColor_Params params {};
		params.fSeconds = fSeconds;
		params.Color = Color;
		params.bBackground = bBackground;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.CreateCameraTexture2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPOpenVRCameraHandle                       CameraHandle                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EOpenVRCameraFrameType                             FrameType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPOVRResultSwitch                                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UOpenVRExpansionFunctionLibrary::CreateCameraTexture2D(struct FBPOpenVRCameraHandle* CameraHandle, EOpenVRCameraFrameType FrameType, EBPOVRResultSwitch* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.CreateCameraTexture2D");
		
		UOpenVRExpansionFunctionLibrary_CreateCameraTexture2D_Params params {};
		params.FrameType = FrameType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CameraHandle != nullptr)
			*CameraHandle = params.CameraHandle;
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.ClearSkyboxOverride
	 * 		Flags  -> ()
	 */
	bool UOpenVRExpansionFunctionLibrary::ClearSkyboxOverride()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.ClearSkyboxOverride");
		
		UOpenVRExpansionFunctionLibrary_ClearSkyboxOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.AcquireVRCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBPOpenVRCameraHandle                       CameraHandle                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EBPOVRResultSwitch                                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOpenVRExpansionFunctionLibrary::AcquireVRCamera(struct FBPOpenVRCameraHandle* CameraHandle, EBPOVRResultSwitch* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary.AcquireVRCamera");
		
		UOpenVRExpansionFunctionLibrary_AcquireVRCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CameraHandle != nullptr)
			*CameraHandle = params.CameraHandle;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpenVRExpansionFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenVRExpansionFunctionLibrary::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OpenVRExpansionPlugin.OpenVRExpansionFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.ReOpenVRKeyboardForUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsForPassword                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsMultiline                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseMinimalMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsRightHand                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxCharacters                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StartingString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPOVRResultSwitch                                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamVRKeyboardComponent::ReOpenVRKeyboardForUser(bool bIsForPassword, bool bIsMultiline, bool bUseMinimalMode, bool bIsRightHand, int32_t MaxCharacters, const class FString& Description, const class FString& StartingString, EBPOVRResultSwitch* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.ReOpenVRKeyboardForUser");
		
		USteamVRKeyboardComponent_ReOpenVRKeyboardForUser_Params params {};
		params.bIsForPassword = bIsForPassword;
		params.bIsMultiline = bIsMultiline;
		params.bUseMinimalMode = bUseMinimalMode;
		params.bIsRightHand = bIsRightHand;
		params.MaxCharacters = MaxCharacters;
		params.Description = Description;
		params.StartingString = StartingString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.OpenVRKeyboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsForPassword                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsMultiline                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseMinimalMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsRightHand                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxCharacters                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StartingString                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPOVRResultSwitch                                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamVRKeyboardComponent::OpenVRKeyboard(bool bIsForPassword, bool bIsMultiline, bool bUseMinimalMode, bool bIsRightHand, int32_t MaxCharacters, const class FString& Description, const class FString& StartingString, EBPOVRResultSwitch* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.OpenVRKeyboard");
		
		USteamVRKeyboardComponent_OpenVRKeyboard_Params params {};
		params.bIsForPassword = bIsForPassword;
		params.bIsMultiline = bIsMultiline;
		params.bUseMinimalMode = bUseMinimalMode;
		params.bIsRightHand = bIsRightHand;
		params.MaxCharacters = MaxCharacters;
		params.Description = Description;
		params.StartingString = StartingString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.GetVRKeyboardText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBPOVRResultSwitch                                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamVRKeyboardComponent::GetVRKeyboardText(class FString* Text, EBPOVRResultSwitch* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.GetVRKeyboardText");
		
		USteamVRKeyboardComponent_GetVRKeyboardText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.CloseVRKeyboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBPOVRResultSwitch                                 Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USteamVRKeyboardComponent::CloseVRKeyboard(EBPOVRResultSwitch* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OpenVRExpansionPlugin.SteamVRKeyboardComponent.CloseVRKeyboard");
		
		USteamVRKeyboardComponent_CloseVRKeyboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamVRKeyboardComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamVRKeyboardComponent::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OpenVRExpansionPlugin.SteamVRKeyboardComponent");
		return ptr;
	}

}


