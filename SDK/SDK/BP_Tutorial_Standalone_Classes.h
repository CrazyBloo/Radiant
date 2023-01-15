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
	 * BlueprintGeneratedClass BP_Tutorial_Standalone.BP_Tutorial_Standalone_C
	 * Size -> 0x009D (FullSize[0x0379] - InheritedSize[0x02DC])
	 */
	class ABP_Tutorial_Standalone_C : public ABPA_Tutorial_C
	{
	public:
		unsigned char                                              UnknownData_QAZI[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPointLightComponent*                                PointLight;                                              // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       TriggerBox;                                              // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             TriggerSizeM;                                            // 0x0300(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       NoSize;                                                  // 0x030C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_C9II[0x3];                                   // 0x030D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              Color;                                                   // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      StopDistanceMultiplier;                                  // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      stopDistance;                                            // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      stepStartTime;                                           // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABPA_BaseItem_C*>                             TiedItems;                                               // 0x0320(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn
		bool                                                       RestoreItemsOnSecondStart;                               // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_G3A4[0x3];                                   // 0x0331(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        TriggerTutorial;                                         // 0x0334(0x0008) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_6KQ8[0x4];                                   // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      tiedIDs;                                                 // 0x0340(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UInventoryItem*>                              Items;                                                   // 0x0350(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       delayPassed;                                             // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2A1H[0x7];                                   // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBPC_Tutorial_Check_C*>                       StartChecks;                                             // 0x0368(0x0010) Edit, BlueprintVisible, ContainsInstancedReference
		bool                                                       DisableWhenFinished;                                     // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void KillTutor();
		void RestoreTiedItems();
		void UserConstructionScript();
		void BndEvt__TriggerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void DoRunTutorial();
		void DoStopTutorial();
		void ReceiveTick(float DeltaSeconds);
		void ResetTutorial();
		void RunNextStep();
		void OnStepFinish();
		void ReceiveBeginPlay();
		void StopStep();
		void CheckStartActor(class AActor* Actor);
		void OnTransitionEnd();
		void EventOnTutorialStart(const struct FGameplayTag& Value);
		void OnGamePaused(bool bPaused);
		void CheckShowParticles();
		void OnStepFinishEvent();
		void OnTransitionStartOnceEvent();
		void ExecuteUbergraph_BP_Tutorial_Standalone(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
