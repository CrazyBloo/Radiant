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
	 * BlueprintGeneratedClass BP_TutorStep_MoveHere.BP_TutorStep_MoveHere_C
	 * Size -> 0x0047 (FullSize[0x047C] - InheritedSize[0x0435])
	 */
	class ABP_TutorStep_MoveHere_C : public ABPA_TutorStep_C
	{
	public:
		unsigned char                                              UnknownData_3YYY[0x3];                                   // 0x0435(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0438(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            P_TutorialPointer1;                                      // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                sm_player_walking;                                       // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      CheckTimerDelta;                                         // 0x0450(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0QHD[0x4];                                   // 0x0454(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        TimerCheck;                                              // 0x0458(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class ABP_Spline_Path_C*>                           FootstepPath;                                            // 0x0460(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		bool                                                       SnapToCenter;                                            // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_POPS[0x3];                                   // 0x0471(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        SetOnStepEndTrigger;                                     // 0x0474(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash

	public:
		void OccupyWidget();
		void DoExecute();
		void CheckPlayer();
		void DoStop();
		void DoPrepare();
		void SkipStep();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BP_TutorStep_MoveHere(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
