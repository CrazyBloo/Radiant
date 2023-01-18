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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPC_PlayerPostProcess.BPC_PlayerPostProcess_C
	 * Size -> 0x000A (FullSize[0x00EA] - InheritedSize[0x00E0])
	 */
	class UBPC_PlayerPostProcess_C : public UPRBasicActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       NVEnabled;                                               // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       VignetteEnabled;                                         // 0x00E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SwitchPPElement(bool On, int32_t Index);
		void SetVignetteEnable(bool enable);
		void SetNVEnable(bool enable);
		void SetCaptureGuideToggle(bool enable);
		void VignetteChange(bool bIsOn);
		void OnLevelStarted(const struct FGameplayTag& LevelTag);
		void ExecuteUbergraph_BPC_PlayerPostProcess(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
