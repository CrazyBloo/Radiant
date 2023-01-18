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
	 * BlueprintGeneratedClass BP_Anomaly_Distortion.BP_Anomaly_Distortion_C
	 * Size -> 0x004C (FullSize[0x0434] - InheritedSize[0x03E8])
	 */
	class ABP_Anomaly_Distortion_C : public ABPA_Anomaly_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     A_AnomalyDistortion;                                     // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    Sphere;                                                  // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNavModifierComponent*                               NavModifier;                                             // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            P_Distort2;                                              // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FMinMaxFloat                                        TimeBetweenVisualTriggers;                               // 0x0410(0x0008) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn
		struct FMinMaxFloat                                        VisualTriggerDuration;                                   // 0x0418(0x0008) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn
		struct FTimerHandle                                        SoundTimer;                                              // 0x0420(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      SoundLoopTime;                                           // 0x0428(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaveSpawnRateIdle;                                       // 0x042C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaveSpawnRateActive;                                     // 0x0430(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetupVisual();
		void TurnFxOff();
		void UserConstructionScript();
		void OnLevelStarted(const struct FGameplayTag& LevelTag);
		void InteractWithActors();
		void OnOverlapTimer();
		void OnSetupEvent();
		void PopFromPoolActor(const struct FTransform& Transform);
		void PushToPoolActor();
		void AnomalyTriggered();
		void OverlapLeavingTriggered(class AActor* OtherActor);
		void PlaySound();
		void ExecuteUbergraph_BP_Anomaly_Distortion(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
