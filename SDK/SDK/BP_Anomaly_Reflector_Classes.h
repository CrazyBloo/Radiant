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
	 * BlueprintGeneratedClass BP_Anomaly_Reflector.BP_Anomaly_Reflector_C
	 * Size -> 0x0068 (FullSize[0x0450] - InheritedSize[0x03E8])
	 */
	class ABP_Anomaly_Reflector_C : public ABPA_Anomaly_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USphereComponent*                                    Sphere;                                                  // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Rotator;                                                 // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNavModifierComponent*                               NavModifier;                                             // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      BeamLength;                                              // 0x0410(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Center;                                                  // 0x0414(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       playerIsDamaged;                                         // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SQ1H[0x3];                                   // 0x0421(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BeamDamage;                                              // 0x0424(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              BeamDamageType;                                          // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGripMotionControllerComponent*                      Holding_Controller;                                      // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FReflectorAnomlyNonplayerTarget>             NonplayerTargetList;                                     // 0x0438(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      RotationDegPerSec;                                       // 0x0448(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RotationDuration;                                        // 0x044C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ProcessNonplayerTargetList(float DeltaTime);
		void Handle_Nonplayer_Interaction(class AActor* Actor);
		void NonplayerPostRotation(const struct FReflectorAnomlyNonplayerTarget& Target);
		void IsItemHeldOrAttached(class ARadiusItemActor* Item, bool* HeldOrAttached);
		void CalcShootPosition(const struct FVector& Loc, struct FVector* LocOut);
		void UserConstructionScript();
		void SpawnBeam(const struct FVector& vel, const struct FVector& Loc);
		void ThrowBack(const struct FVector& vel, const struct FVector& Loc);
		void Process(class AActor* OverlappingActor);
		void VisualTrigger();
		void ReceiveTick(float DeltaSeconds);
		void OnLevelStarted(const struct FGameplayTag& LevelTag);
		void OnSetupEvent();
		void PopFromPoolActor(const struct FTransform& Transform);
		void PushToPoolActor();
		void AnomalyTriggered();
		void OverlapStartingTriggered(class AActor* OtherActor);
		void ExecuteUbergraph_BP_Anomaly_Reflector(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
