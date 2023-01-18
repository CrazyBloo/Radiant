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
	 * BlueprintGeneratedClass BP_ObjectiveExecutor_Tutorial.BP_ObjectiveExecutor_Tutorial_C
	 * Size -> 0x001F (FullSize[0x02F0] - InheritedSize[0x02D1])
	 */
	class ABP_ObjectiveExecutor_Tutorial_C : public ABPA_ObjectiveExecutor_C
	{
	public:
		unsigned char                                              UnknownData_1SLL[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMissionTutorialObjectiveData*                       objectiveData;                                           // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Tutorial_Mission_C*                              sequencer;                                               // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnTutorialSequenceFinishedEvent(class AActor* Actor);
		void Execute();
		void ExecuteUbergraph_BP_ObjectiveExecutor_Tutorial(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
