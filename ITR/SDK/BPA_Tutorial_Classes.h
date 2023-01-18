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
	 * BlueprintGeneratedClass BPA_Tutorial.BPA_Tutorial_C
	 * Size -> 0x0044 (FullSize[0x02DC] - InheritedSize[0x0298])
	 */
	class ABPA_Tutorial_C : public APRBasicActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetComponent*                                    W_Message;                                               // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FGameplayTag                                        TutorialId;                                              // 0x02B0(0x0008) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<class ABPA_TutorStep_C*>                            StepsList;                                               // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn
		bool                                                       Enabled;                                                 // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       running;                                                 // 0x02C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TICL[0x6];                                   // 0x02CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWBP_TutorialText_C*                                 textWidget;                                              // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    stepIndex;                                               // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetStepIndex(int32_t* stepIndex);
		void IsEnabled(bool* Enabled);
		void IsFinished(bool* Finished);
		void SetStepIndex(int32_t Index);
		void IncStepIndex();
		void GetNextStep(class ABPA_TutorStep_C** step);
		void ResetMessageWidget();
		void GetMessageWidget(class UWidgetComponent** Component, class UWBP_TutorialText_C** Widget);
		void StopTutorial();
		void RunTutorial();
		void SetTutorialRunning(bool running);
		void IsTutorialRunning(bool* running);
		void InitTutorialSteps();
		void OnTransitionEnd();
		void DoRunTutorial();
		void DoStopTutorial();
		void ReceiveBeginPlay();
		void OnTransitionStart();
		void SetDisabled();
		void ExecuteUbergraph_BPA_Tutorial(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
