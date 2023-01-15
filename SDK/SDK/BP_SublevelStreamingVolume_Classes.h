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
	 * BlueprintGeneratedClass BP_SublevelStreamingVolume.BP_SublevelStreamingVolume_C
	 * Size -> 0x0010 (FullSize[0x02C8] - InheritedSize[0x02B8])
	 */
	class ABP_SublevelStreamingVolume_C : public APRSublevelStreamingVolume
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FTimerHandle                                        TimerHandle;                                             // 0x02C0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void FixScale();
		void UserConstructionScript();
		void OnLevelStarted(const struct FGameplayTag& LevelTag);
		void CheckPlayerTimerEvent();
		void CheckAndShowSublevels(const struct FVector& Point, float Coefficient);
		void ExecuteUbergraph_BP_SublevelStreamingVolume(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
