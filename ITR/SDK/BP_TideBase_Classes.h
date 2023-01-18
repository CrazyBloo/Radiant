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
	 * BlueprintGeneratedClass BP_TideBase.BP_TideBase_C
	 * Size -> 0x0058 (FullSize[0x02F0] - InheritedSize[0x0298])
	 */
	class ABP_TideBase_C : public APRBasicActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        checkTimer;                                              // 0x02A8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      checkPeriod;                                             // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Disabled;                                                // 0x02B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MLHU[0x3];                                   // 0x02B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Environment_C*                                   Environment;                                             // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              centerPoint;                                             // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             centerLocation;                                          // 0x02C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NoTransition;                                            // 0x02D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VXSQ[0x3];                                   // 0x02D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABP_SpawnSpline_C*>                           PlayerSpawn;                                             // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		class ALevelSequenceActor*                                 TideEventSequence;                                       // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetTideRadius(float* Radius);
		void AnimateTide(const class FScriptDelegate& OnFinished, bool* Animating);
		void GetRandomLocationAlongSpline(struct FVector* Location, bool* success);
		void GetRandomPositionAlongRadius(struct FTransform* navigablePosition, bool* success);
		void GetInZoneGate(class ABP_ZoneGate_C** Gate);
		void GetTideCenter(struct FVector* Center);
		void CheckIsInTide(const struct FVector& Location, bool* inTide);
		void GetDistanceToTide(float* Distance);
		void EventCheck();
		void DoTransition();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnTransitionEnd();
		void OnLevelPrepare(const struct FGameplayTag& LevelTag);
		void OnTransitionStart();
		void UpdateCenterLocation();
		void ExecuteUbergraph_BP_TideBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
