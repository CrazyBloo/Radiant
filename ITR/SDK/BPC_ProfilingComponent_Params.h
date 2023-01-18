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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.SetupProfilingCredentials
	 */
	struct UBPC_ProfilingComponent_C_SetupProfilingCredentials_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.MoveToNextCameraOrLevel
	 */
	struct UBPC_ProfilingComponent_C_MoveToNextCameraOrLevel_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.SetNextCamera
	 */
	struct UBPC_ProfilingComponent_C_SetNextCamera_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.GetProfileFolderAndNamePC
	 */
	struct UBPC_ProfilingComponent_C_GetProfileFolderAndNamePC_Params
	{
	public:
		class FString                                              Directory;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              FilePath;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.SortCameras
	 */
	struct UBPC_ProfilingComponent_C_SortCameras_Params
	{
	public:
		TArray<class ABP_ProfilingCameraPlacement_C*>              Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class ABP_ProfilingCameraPlacement_C*>              SortedArray;                                             // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.Tick Cache Frame Values
	 */
	struct UBPC_ProfilingComponent_C_TickCacheFrameValues_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.Get Avg Frame Times
	 */
	struct UBPC_ProfilingComponent_C_GetAvgFrameTimes_Params
	{
	public:
		float                                                      AvgFrameMs;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AvgGameThTimeMs;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AvgRenderThTimeMs;                                       // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AvgGpuFrameTimeMs;                                       // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.StopCachingFPS
	 */
	struct UBPC_ProfilingComponent_C_StopCachingFPS_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.StartCachingFPS
	 */
	struct UBPC_ProfilingComponent_C_StartCachingFPS_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.InitSceneCapture
	 */
	struct UBPC_ProfilingComponent_C_InitSceneCapture_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.GetLocationInfrontOfCamera
	 */
	struct UBPC_ProfilingComponent_C_GetLocationInfrontOfCamera_Params
	{
	public:
		class USceneComponent*                                     CameraRoot;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Distance;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.HeartBeatEvent
	 */
	struct UBPC_ProfilingComponent_C_HeartBeatEvent_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.GetCheatManager
	 */
	struct UBPC_ProfilingComponent_C_GetCheatManager_Params
	{
	public:
		class UPRCheatManager*                                     AsPRCheatManager;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsValid;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.Get Items Num
	 */
	struct UBPC_ProfilingComponent_C_GetItemsNum_Params
	{
	public:
		int32_t                                                    ItemsNum;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.LogStartTransitionToLvl
	 */
	struct UBPC_ProfilingComponent_C_LogStartTransitionToLvl_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.ParseCommandLine
	 */
	struct UBPC_ProfilingComponent_C_ParseCommandLine_Params
	{
	public:
		bool                                                       bStartProfiling;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bGatherProfileInfo;                                      // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCachePSO;                                               // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.LogProfilingFinishedForCurrentLevel
	 */
	struct UBPC_ProfilingComponent_C_LogProfilingFinishedForCurrentLevel_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.GenerateAllLevelTags
	 */
	struct UBPC_ProfilingComponent_C_GenerateAllLevelTags_Params
	{
	public:
		TArray<struct FGameplayTag>                                LevelTags;                                               // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.GetProfileFolderAndName
	 */
	struct UBPC_ProfilingComponent_C_GetProfileFolderAndName_Params
	{
	public:
		class FString                                              Directory;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              FilePath;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.SetVariables
	 */
	struct UBPC_ProfilingComponent_C_SetVariables_Params
	{
	public:
		float                                                      StreamingLoadTime;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UseFpsCheck;                                             // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.PrepChartoProfile
	 */
	struct UBPC_ProfilingComponent_C_PrepChartoProfile_Params
	{
	public:
		bool                                                       LockToHmd;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2H66[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UReplicatedVRCameraComponent*                        VRCameraRefrence;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               Ownver;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.StartPcProfiling
	 */
	struct UBPC_ProfilingComponent_C_StartPcProfiling_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.DoPCProfilingOnCurrentCamera
	 */
	struct UBPC_ProfilingComponent_C_DoPCProfilingOnCurrentCamera_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.Profile
	 */
	struct UBPC_ProfilingComponent_C_Profile_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		float                                                      StreamingLoadTime;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UseFpsCheck;                                             // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.ReceiveBeginPlay
	 */
	struct UBPC_ProfilingComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.BeginProfileOnLevel
	 */
	struct UBPC_ProfilingComponent_C_BeginProfileOnLevel_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.LaunchProfileEvent
	 */
	struct UBPC_ProfilingComponent_C_LaunchProfileEvent_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.MoveToNextlevel
	 */
	struct UBPC_ProfilingComponent_C_MoveToNextlevel_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.ProfileAndGatherAnalytics
	 */
	struct UBPC_ProfilingComponent_C_ProfileAndGatherAnalytics_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.PSOItems
	 */
	struct UBPC_ProfilingComponent_C_PSOItems_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.PSONextItem
	 */
	struct UBPC_ProfilingComponent_C_PSONextItem_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.ClearAfterAndMoveOn
	 */
	struct UBPC_ProfilingComponent_C_ClearAfterAndMoveOn_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.StartItemPSO
	 */
	struct UBPC_ProfilingComponent_C_StartItemPSO_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.Rotate
	 */
	struct UBPC_ProfilingComponent_C_Rotate_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.SpawnNextNPC
	 */
	struct UBPC_ProfilingComponent_C_SpawnNextNPC_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.Shoot
	 */
	struct UBPC_ProfilingComponent_C_Shoot_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.StartPSOforNPC
	 */
	struct UBPC_ProfilingComponent_C_StartPSOforNPC_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.PSOEmitters
	 */
	struct UBPC_ProfilingComponent_C_PSOEmitters_Params
	{
	public:
		int32_t                                                    InputPin;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.NextEmitter
	 */
	struct UBPC_ProfilingComponent_C_NextEmitter_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.SwitchLights
	 */
	struct UBPC_ProfilingComponent_C_SwitchLights_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.DEVPREP
	 */
	struct UBPC_ProfilingComponent_C_DEVPREP_Params
	{	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.Launch Flare
	 */
	struct UBPC_ProfilingComponent_C_LaunchFlare_Params
	{
	public:
		float                                                      TimeToShine;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSwitchFlashlight;                                       // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.SwitchCapture
	 */
	struct UBPC_ProfilingComponent_C_SwitchCapture_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.ReceiveTick
	 */
	struct UBPC_ProfilingComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ProfilingComponent.BPC_ProfilingComponent_C.ExecuteUbergraph_BPC_ProfilingComponent
	 */
	struct UBPC_ProfilingComponent_C_ExecuteUbergraph_BPC_ProfilingComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
