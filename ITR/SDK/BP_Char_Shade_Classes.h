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
	 * BlueprintGeneratedClass BP_Char_Shade.BP_Char_Shade_C
	 * Size -> 0x003F (FullSize[0x0868] - InheritedSize[0x0829])
	 */
	class ABP_Char_Shade_C : public ABPA_Char_C
	{
	public:
		unsigned char                                              UnknownData_JCAN[0x7];                                   // 0x0829(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0830(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFireArmedComponent_C*                               FireArmedComponent;                                      // 0x0838(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            P_Shade;                                                 // 0x0840(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioAttack;                                             // 0x0848(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioFootsteps;                                          // 0x0850(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Footsteps_Loop__Direction_9EEB9CB24A271516FC7AA4AF5AA85D41; // 0x0858(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1WTW[0x7];                                   // 0x0859(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FootstepsLoop;                                           // 0x0860(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void FootstepsLoop__FinishedFunc();
		void FootstepsLoop__UpdateFunc();
		void FootstepsLoop__PlayFootstep__EventFunc();
		void ReceiveBeginPlay();
		void BndEvt__AliveComp_K2Node_ComponentBoundEvent_5_HealthEnd__DelegateSignature();
		void SetEnableAdditionalThings(bool enable);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void BndEvt__BP_Char_Shade_PerceptionComponent_K2Node_ComponentBoundEvent_0_OneParamActor__DelegateSignature(class AActor* Actor);
		void BndEvt__BP_Char_Shade_PerceptionComponent_K2Node_ComponentBoundEvent_1_PlayerLostDelegate__DelegateSignature(class AActor* Actor, const struct FVector& LocLastSeen);
		void OnIdleCommandFinished();
		void OnWalkCommandFinished();
		void OnAttackCommandFinished();
		void PlayFootstepSound();
		void StartFootstepLoop();
		void StopFootstepLoop();
		void ExecuteUbergraph_BP_Char_Shade(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
