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
	 * BlueprintGeneratedClass BPC_ProfilingComponent.BPC_ProfilingComponent_C
	 * Size -> 0x01B9 (FullSize[0x0299] - InheritedSize[0x00E0])
	 */
	class UBPC_ProfilingComponent_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class ABP_ProfilingCameraPlacement_C*>              CamerasArray;                                            // 0x00E8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		int32_t                                                    CameraNum;                                               // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WACT[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UReplicatedVRCameraComponent*                        VrCameraRef;                                             // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ProfilingTime;                                           // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZF5C[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVRBaseCharacterMovementComponent*                   VRMoveCompRed;                                           // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StreamingLoadTime;                                       // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsRecording;                                             // 0x0124(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseFpsCheck;                                             // 0x0125(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BAAL[0x2];                                   // 0x0126(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DeviceFpsInMs;                                           // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V964[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ProfileSting;                                            // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FGameplayTag>                                LevelTagArray;                                           // 0x0140(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              StartUTCTimeSec;                                         // 0x0150(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              BuildVersion;                                            // 0x0160(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              BuildType;                                               // 0x0170(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       PSOCaching;                                              // 0x0180(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OIIK[0x7];                                   // 0x0181(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               mapFilter;                                               // 0x0188(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              CurrentLevelTagName;                                     // 0x01A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FGameplayTag                                        CurrentLvlProfileTag;                                    // 0x01B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bProfilerInProcess;                                      // 0x01C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MCAT[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               itemTags;                                                // 0x01C8(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FGameplayTag>                                Gameplay_Tags;                                           // 0x01E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    CurrentIndexOfEntity;                                    // 0x01F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FBCS[0x4];                                   // 0x01FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInventoryItem*                                      CurrentItem;                                             // 0x0200(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_ProfilingCameraPlacement_C*                      CurrentCameraPlacement;                                  // 0x0208(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPRCheatManager*                                     PRCheatManager;                                          // 0x0210(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        ItemPSO_TimreHandle;                                     // 0x0218(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              ParticleEmitters[0x10];                                  // 0x0220(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class FString                                              ProfilingFolderName;                                     // 0x0230(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              ProfilingFilePath;                                       // 0x0240(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class AActor*                                              FlareRef;                                                // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Flashlight_C*                                    FlashLightRef;                                           // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USceneCaptureComponent2D*                            SceneCapture2D;                                          // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RawFrameTime;                                            // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FrameCounter;                                            // 0x026C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CachingFrames;                                           // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TDHM[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PrevProfilingResult;                                     // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    NumberOfLingths;                                         // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RawGameThTime;                                           // 0x028C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RawRenderThTime;                                         // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RawGPUFrameTime;                                         // 0x0294(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsPCProfiling;                                          // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetupProfilingCredentials();
		void MoveToNextCameraOrLevel();
		void SetNextCamera();
		void GetProfileFolderAndNamePC(class FString* Directory, class FString* FilePath);
		void SortCameras(TArray<class ABP_ProfilingCameraPlacement_C*>* Array, TArray<class ABP_ProfilingCameraPlacement_C*>* SortedArray);
		void Tick_Cache_Frame_Values();
		void Get_Avg_Frame_Times(float* AvgFrameMs, float* AvgGameThTimeMs, float* AvgRenderThTimeMs, float* AvgGpuFrameTimeMs);
		void StopCachingFPS();
		void StartCachingFPS();
		void InitSceneCapture();
		struct FVector GetLocationInfrontOfCamera(class USceneComponent* CameraRoot, float Distance);
		void HeartBeatEvent(const class FString& String);
		void GetCheatManager(class UPRCheatManager** AsPRCheat_Manager, bool* bIsValid);
		void Get_Items_Num(int32_t* ItemsNum);
		void LogStartTransitionToLvl();
		void ParseCommandLine(bool* bStartProfiling, bool* bGatherProfileInfo, bool* bCachePSO);
		void LogProfilingFinishedForCurrentLevel();
		void GenerateAllLevelTags(TArray<struct FGameplayTag>* LevelTags);
		void GetProfileFolderAndName(class FString* Directory, class FString* FilePath);
		void SetVariables(float StreamingLoadTime, bool UseFpsCheck);
		void PrepChartoProfile(bool LockToHmd, class UReplicatedVRCameraComponent* VRCameraRefrence, class APawn* Ownver);
		void StartPcProfiling();
		void DoPCProfilingOnCurrentCamera();
		void Profile(const struct FGameplayTag& LevelTag, float StreamingLoadTime, bool UseFpsCheck);
		void ReceiveBeginPlay();
		void BeginProfileOnLevel();
		void LaunchProfileEvent();
		void MoveToNextlevel();
		void ProfileAndGatherAnalytics();
		void PSOItems();
		void PSONextItem();
		void ClearAfterAndMoveOn();
		void StartItemPSO();
		void Rotate();
		void SpawnNextNPC();
		void Shoot();
		void StartPSOforNPC();
		void PSOEmitters(int32_t InputPin);
		void NextEmitter();
		void SwitchLights();
		void DEVPREP();
		void Launch_Flare(float TimeToShine, bool bSwitchFlashlight);
		void SwitchCapture(float Duration);
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BPC_ProfilingComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
