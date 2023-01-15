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
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.SetupProfilingCredentials
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::SetupProfilingCredentials()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.SetupProfilingCredentials");
		
		UBPC_ProfilingComponent_C_SetupProfilingCredentials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.MoveToNextCameraOrLevel
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::MoveToNextCameraOrLevel()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.MoveToNextCameraOrLevel");
		
		UBPC_ProfilingComponent_C_MoveToNextCameraOrLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.SetNextCamera
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::SetNextCamera()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.SetNextCamera");
		
		UBPC_ProfilingComponent_C_SetNextCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.GetProfileFolderAndNamePC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      FilePath                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPC_ProfilingComponent_C::GetProfileFolderAndNamePC(class FString* Directory, class FString* FilePath)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.GetProfileFolderAndNamePC");
		
		UBPC_ProfilingComponent_C_GetProfileFolderAndNamePC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Directory != nullptr)
			*Directory = params.Directory;
		if (FilePath != nullptr)
			*FilePath = params.FilePath;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.SortCameras
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ABP_ProfilingCameraPlacement_C*>      Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class ABP_ProfilingCameraPlacement_C*>      SortedArray                                                (Parm, OutParm)
	 */
	void UBPC_ProfilingComponent_C::SortCameras(TArray<class ABP_ProfilingCameraPlacement_C*>* Array, TArray<class ABP_ProfilingCameraPlacement_C*>* SortedArray)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.SortCameras");
		
		UBPC_ProfilingComponent_C_SortCameras_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (SortedArray != nullptr)
			*SortedArray = params.SortedArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.Tick Cache Frame Values
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::Tick_Cache_Frame_Values()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.Tick Cache Frame Values");
		
		UBPC_ProfilingComponent_C_Tick_Cache_Frame_Values_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.Get Avg Frame Times
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AvgFrameMs                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AvgGameThTimeMs                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AvgRenderThTimeMs                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AvgGpuFrameTimeMs                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ProfilingComponent_C::Get_Avg_Frame_Times(float* AvgFrameMs, float* AvgGameThTimeMs, float* AvgRenderThTimeMs, float* AvgGpuFrameTimeMs)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.Get Avg Frame Times");
		
		UBPC_ProfilingComponent_C_Get_Avg_Frame_Times_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AvgFrameMs != nullptr)
			*AvgFrameMs = params.AvgFrameMs;
		if (AvgGameThTimeMs != nullptr)
			*AvgGameThTimeMs = params.AvgGameThTimeMs;
		if (AvgRenderThTimeMs != nullptr)
			*AvgRenderThTimeMs = params.AvgRenderThTimeMs;
		if (AvgGpuFrameTimeMs != nullptr)
			*AvgGpuFrameTimeMs = params.AvgGpuFrameTimeMs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.StopCachingFPS
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::StopCachingFPS()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.StopCachingFPS");
		
		UBPC_ProfilingComponent_C_StopCachingFPS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.StartCachingFPS
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::StartCachingFPS()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.StartCachingFPS");
		
		UBPC_ProfilingComponent_C_StartCachingFPS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.InitSceneCapture
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::InitSceneCapture()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.InitSceneCapture");
		
		UBPC_ProfilingComponent_C_InitSceneCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.GetLocationInfrontOfCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             CameraRoot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector UBPC_ProfilingComponent_C::GetLocationInfrontOfCamera(class USceneComponent* CameraRoot, float Distance)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.GetLocationInfrontOfCamera");
		
		UBPC_ProfilingComponent_C_GetLocationInfrontOfCamera_Params params {};
		params.CameraRoot = CameraRoot;
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.HeartBeatEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPC_ProfilingComponent_C::HeartBeatEvent(const class FString& String)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.HeartBeatEvent");
		
		UBPC_ProfilingComponent_C_HeartBeatEvent_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.GetCheatManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPRCheatManager*                             AsPRCheat_Manager                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_ProfilingComponent_C::GetCheatManager(class UPRCheatManager** AsPRCheat_Manager, bool* bIsValid)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.GetCheatManager");
		
		UBPC_ProfilingComponent_C_GetCheatManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsPRCheat_Manager != nullptr)
			*AsPRCheat_Manager = params.AsPRCheat_Manager;
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.Get Items Num
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemsNum                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ProfilingComponent_C::Get_Items_Num(int32_t* ItemsNum)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.Get Items Num");
		
		UBPC_ProfilingComponent_C_Get_Items_Num_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemsNum != nullptr)
			*ItemsNum = params.ItemsNum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.LogStartTransitionToLvl
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::LogStartTransitionToLvl()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.LogStartTransitionToLvl");
		
		UBPC_ProfilingComponent_C_LogStartTransitionToLvl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.ParseCommandLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStartProfiling                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bGatherProfileInfo                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCachePSO                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_ProfilingComponent_C::ParseCommandLine(bool* bStartProfiling, bool* bGatherProfileInfo, bool* bCachePSO)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.ParseCommandLine");
		
		UBPC_ProfilingComponent_C_ParseCommandLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bStartProfiling != nullptr)
			*bStartProfiling = params.bStartProfiling;
		if (bGatherProfileInfo != nullptr)
			*bGatherProfileInfo = params.bGatherProfileInfo;
		if (bCachePSO != nullptr)
			*bCachePSO = params.bCachePSO;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.LogProfilingFinishedForCurrentLevel
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::LogProfilingFinishedForCurrentLevel()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.LogProfilingFinishedForCurrentLevel");
		
		UBPC_ProfilingComponent_C_LogProfilingFinishedForCurrentLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.GenerateAllLevelTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FGameplayTag>                        LevelTags                                                  (Parm, OutParm)
	 */
	void UBPC_ProfilingComponent_C::GenerateAllLevelTags(TArray<struct FGameplayTag>* LevelTags)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.GenerateAllLevelTags");
		
		UBPC_ProfilingComponent_C_GenerateAllLevelTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LevelTags != nullptr)
			*LevelTags = params.LevelTags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.GetProfileFolderAndName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Directory                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      FilePath                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPC_ProfilingComponent_C::GetProfileFolderAndName(class FString* Directory, class FString* FilePath)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.GetProfileFolderAndName");
		
		UBPC_ProfilingComponent_C_GetProfileFolderAndName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Directory != nullptr)
			*Directory = params.Directory;
		if (FilePath != nullptr)
			*FilePath = params.FilePath;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.SetVariables
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StreamingLoadTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseFpsCheck                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_ProfilingComponent_C::SetVariables(float StreamingLoadTime, bool UseFpsCheck)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.SetVariables");
		
		UBPC_ProfilingComponent_C_SetVariables_Params params {};
		params.StreamingLoadTime = StreamingLoadTime;
		params.UseFpsCheck = UseFpsCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.PrepChartoProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               LockToHmd                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UReplicatedVRCameraComponent*                VRCameraRefrence                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       Ownver                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ProfilingComponent_C::PrepChartoProfile(bool LockToHmd, class UReplicatedVRCameraComponent* VRCameraRefrence, class APawn* Ownver)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.PrepChartoProfile");
		
		UBPC_ProfilingComponent_C_PrepChartoProfile_Params params {};
		params.LockToHmd = LockToHmd;
		params.VRCameraRefrence = VRCameraRefrence;
		params.Ownver = Ownver;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.StartPcProfiling
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::StartPcProfiling()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.StartPcProfiling");
		
		UBPC_ProfilingComponent_C_StartPcProfiling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.DoPCProfilingOnCurrentCamera
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::DoPCProfilingOnCurrentCamera()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.DoPCProfilingOnCurrentCamera");
		
		UBPC_ProfilingComponent_C_DoPCProfilingOnCurrentCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.Profile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              StreamingLoadTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseFpsCheck                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_ProfilingComponent_C::Profile(const struct FGameplayTag& LevelTag, float StreamingLoadTime, bool UseFpsCheck)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.Profile");
		
		UBPC_ProfilingComponent_C_Profile_Params params {};
		params.LevelTag = LevelTag;
		params.StreamingLoadTime = StreamingLoadTime;
		params.UseFpsCheck = UseFpsCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.ReceiveBeginPlay");
		
		UBPC_ProfilingComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.BeginProfileOnLevel
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::BeginProfileOnLevel()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.BeginProfileOnLevel");
		
		UBPC_ProfilingComponent_C_BeginProfileOnLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.LaunchProfileEvent
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::LaunchProfileEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.LaunchProfileEvent");
		
		UBPC_ProfilingComponent_C_LaunchProfileEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.MoveToNextlevel
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::MoveToNextlevel()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.MoveToNextlevel");
		
		UBPC_ProfilingComponent_C_MoveToNextlevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.ProfileAndGatherAnalytics
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::ProfileAndGatherAnalytics()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.ProfileAndGatherAnalytics");
		
		UBPC_ProfilingComponent_C_ProfileAndGatherAnalytics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.PSOItems
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::PSOItems()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.PSOItems");
		
		UBPC_ProfilingComponent_C_PSOItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.PSONextItem
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::PSONextItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.PSONextItem");
		
		UBPC_ProfilingComponent_C_PSONextItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.ClearAfterAndMoveOn
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::ClearAfterAndMoveOn()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.ClearAfterAndMoveOn");
		
		UBPC_ProfilingComponent_C_ClearAfterAndMoveOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.StartItemPSO
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::StartItemPSO()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.StartItemPSO");
		
		UBPC_ProfilingComponent_C_StartItemPSO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.Rotate
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::Rotate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.Rotate");
		
		UBPC_ProfilingComponent_C_Rotate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.SpawnNextNPC
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::SpawnNextNPC()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.SpawnNextNPC");
		
		UBPC_ProfilingComponent_C_SpawnNextNPC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.Shoot
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::Shoot()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.Shoot");
		
		UBPC_ProfilingComponent_C_Shoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.StartPSOforNPC
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::StartPSOforNPC()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.StartPSOforNPC");
		
		UBPC_ProfilingComponent_C_StartPSOforNPC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.PSOEmitters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ProfilingComponent_C::PSOEmitters(int32_t InputPin)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.PSOEmitters");
		
		UBPC_ProfilingComponent_C_PSOEmitters_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.NextEmitter
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::NextEmitter()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.NextEmitter");
		
		UBPC_ProfilingComponent_C_NextEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.SwitchLights
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::SwitchLights()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.SwitchLights");
		
		UBPC_ProfilingComponent_C_SwitchLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.DEVPREP
	 * 		Flags  -> ()
	 */
	void UBPC_ProfilingComponent_C::DEVPREP()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.DEVPREP");
		
		UBPC_ProfilingComponent_C_DEVPREP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.Launch Flare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeToShine                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSwitchFlashlight                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_ProfilingComponent_C::Launch_Flare(float TimeToShine, bool bSwitchFlashlight)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.Launch Flare");
		
		UBPC_ProfilingComponent_C_Launch_Flare_Params params {};
		params.TimeToShine = TimeToShine;
		params.bSwitchFlashlight = bSwitchFlashlight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.SwitchCapture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ProfilingComponent_C::SwitchCapture(float Duration)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.SwitchCapture");
		
		UBPC_ProfilingComponent_C_SwitchCapture_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ProfilingComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.ReceiveTick");
		
		UBPC_ProfilingComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.ExecuteUbergraph_BPC_ProfilingComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_ProfilingComponent_C::ExecuteUbergraph_BPC_ProfilingComponent(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.ExecuteUbergraph_BPC_ProfilingComponent");
		
		UBPC_ProfilingComponent_C_ExecuteUbergraph_BPC_ProfilingComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_ProfilingComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_ProfilingComponent_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPC_ProfilingComponent.BPC_ProfilingComponent_C");
		return ptr;
	}

}


