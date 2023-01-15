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
	 * BlueprintGeneratedClass BP_Char_Harvester.BP_Char_Harvester_C
	 * Size -> 0x004F (FullSize[0x0878] - InheritedSize[0x0829])
	 */
	class ABP_Char_Harvester_C : public ABPA_Char_C
	{
	public:
		unsigned char                                              UnknownData_J9YI[0x7];                                   // 0x0829(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0830(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_DamageOverTime_C*                               BPC_DamageOverTime;                                      // 0x0838(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0840(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpawnCharSkillComponent_C*                          SpawnCharSkillComponent;                                 // 0x0848(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USplineComponent*                                    Spline;                                                  // 0x0850(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Core;                                                    // 0x0858(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioAttack;                                             // 0x0860(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioFootsteps;                                          // 0x0868(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      DistanceAlongSpline;                                     // 0x0870(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CoreSpeed;                                               // 0x0874(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveTick(float DeltaSeconds);
		void LoadAdditionalSettings();
		void BndEvt__AliveComp_K2Node_ComponentBoundEvent_6_HealthEnd__DelegateSignature();
		void SetEnableAdditionalThings(bool enable);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void CustomEvent_1();
		void BndEvt__BP_Char_Harvester_PerceptionComponent_K2Node_ComponentBoundEvent_1_OneParamActor__DelegateSignature(class AActor* Actor);
		void BndEvt__BP_Char_Harvester_PerceptionComponent_K2Node_ComponentBoundEvent_2_PlayerLostDelegate__DelegateSignature(class AActor* Actor, const struct FVector& LocLastSeen);
		void OnAttackCommandStarted();
		void OnIdleCommandFinished();
		void OnWalkCommandFinished();
		void OnAttackCommandFinished();
		void ExecuteUbergraph_BP_Char_Harvester(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
