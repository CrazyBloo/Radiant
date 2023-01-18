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
	 * BlueprintGeneratedClass BP_Artifact_NightVision.BP_Artifact_NightVision_C
	 * Size -> 0x0028 (FullSize[0x0690] - InheritedSize[0x0668])
	 */
	class ABP_Artifact_NightVision_C : public ABPA_Artifact_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0668(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      FadeTimeline_Alpha_A7868772475230B7A56D34ABC4800952;     // 0x0670(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         FadeTimeline__Direction_A7868772475230B7A56D34ABC4800952; // 0x0674(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z5LO[0x3];                                   // 0x0675(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FadeTimeline;                                            // 0x0678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULevelSequence*                                      QuestLevelSequence;                                      // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ALevelSequenceActor*                                 SequencePlayer;                                          // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void FadeTimeline__FinishedFunc();
		void FadeTimeline__UpdateFunc();
		void Bind();
		void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
		void OnUsed();
		void StopUse();
		void ExecuteUbergraph_BP_Artifact_NightVision(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
