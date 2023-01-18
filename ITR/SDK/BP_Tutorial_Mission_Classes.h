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
	 * BlueprintGeneratedClass BP_Tutorial_Mission.BP_Tutorial_Mission_C
	 * Size -> 0x009C (FullSize[0x0378] - InheritedSize[0x02DC])
	 */
	class ABP_Tutorial_Mission_C : public ABPA_Tutorial_C
	{
	public:
		unsigned char                                              UnknownData_OLWP[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FGameplayTag                                        ID;                                                      // 0x02E8(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		TArray<class ABPA_TutorStep_C*>                            Steps;                                                   // 0x02F0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn
		float                                                      StartDelay;                                              // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    stepIndex_1;                                             // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       executing;                                               // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NZQ3[0x3];                                   // 0x0309(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              Color;                                                   // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      stepStartTime;                                           // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      missingItemCheckDelay;                                   // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      ActorsToDeleteOnStart;                                   // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		TArray<class AActor*>                                      ActorsToCheckMissing;                                    // 0x0328(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       AddPlayerInventoryToMissingCheck;                        // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KBGI[0x7];                                   // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                LostItemText;                                            // 0x0340(0x0018) Edit, BlueprintVisible
		class ABP_TutorStep_ItemEquipCheck_C*                      missingItemStep;                                         // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        missingCheckTimer;                                       // 0x0360(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ABP_TutorialZone_C*                                  Zone;                                                    // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       finishTriggered;                                         // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DeactivateZone;                                          // 0x0371(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AutoStart;                                               // 0x0372(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QYJ3[0x1];                                   // 0x0373(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AutoStartSkipToStep;                                     // 0x0374(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateMissingItemsList();
		void FindItemActor(const struct FGameplayTag& ItemTag, bool* success, class AActor** Actor);
		void GetMissingItem(class AActor** missingActor);
		void GetItemNotInInventory(TArray<class AActor*>* ItemsArray, class ABPA_BaseItem_C** itemActor);
		void GetCurrentStep(class ABPA_TutorStep_C** step);
		void UserConstructionScript();
		void ExecuteNextStep();
		void IncrementAndContinue();
		void MissingItemsCheck();
		void StopStep();
		void StopSequenceAndShowMissingItem(class AActor* Actor);
		void FinishStep();
		void FinishSequencer();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ReceiveTick(float DeltaSeconds);
		void OnLevelPrepare(const struct FGameplayTag& LevelTag);
		void OnTransitionEnd();
		void DoRunTutorial();
		void OnTransitionStartOnceEvent();
		void ExecuteUbergraph_BP_Tutorial_Mission(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
