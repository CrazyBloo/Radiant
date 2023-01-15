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
	 * BlueprintGeneratedClass BP_PRGameInstance.BP_PRGameInstance_C
	 * Size -> 0x0038 (FullSize[0x02F8] - InheritedSize[0x02C0])
	 */
	class UBP_PRGameInstance_C : public UPRGameInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPO_AnalyticsManager_C*                             AnalyticsManager;                                        // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             Settings;                                                // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       loadedSaveOnStartup;                                     // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3AB9[0x7];                                   // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_DeathNotice_C*                                   DeathNoticeRef;                                          // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             GraphicsSettingsApply;                                   // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetSharpness(float Sharpen, int32_t Mode);
		void SetTAAU();
		void SetFSRMode();
		class UAnalyticsManager* GetAnalyticsManager();
		void SetDLSSMode();
		void SetScreenPercent();
		void FindGPUTier(bool Low, bool* found);
		void SetQualityLevel();
		void GetPCM(bool* success, class APlayerCameraManager** PCM);
		void CheatAddItems();
		void OnPlayerDeath();
		void RestartAfterDeath();
		void OnShutdown();
		void ReceiveOnGameStart();
		void StartNewGame(int32_t ProfileNumber, bool bSkipTutorial, bool bIronman, const struct FRadiusGameDifficulty& GameDifficulty, bool bFromMainMenu);
		void ExitGameBP(bool bMenu, bool bSave);
		void OnBeforeLoad();
		void ExecuteUbergraph_BP_PRGameInstance(int32_t EntryPoint);
		void GraphicsSettingsApply__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
