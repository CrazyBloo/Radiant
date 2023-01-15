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
	 * BlueprintGeneratedClass BP_Char_Zombie.BP_Char_Zombie_C
	 * Size -> 0x0073 (FullSize[0x089C] - InheritedSize[0x0829])
	 */
	class ABP_Char_Zombie_C : public ABPA_Char_C
	{
	public:
		unsigned char                                              UnknownData_2T3A[0x7];                                   // 0x0829(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0830(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     AudioFootsteps;                                          // 0x0838(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMeleeOnceAttackComponent_C*                         MeleeOnceAttackComponent;                                // 0x0840(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTeleportToPOISkillComponent_C*                      TeleportToPOISkillComponent;                             // 0x0848(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_ConstSound;                                        // 0x0850(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh_1;                                            // 0x0858(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioAttack;                                             // 0x0860(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      TimelineFX_Shift_E903A97441787B8BBCA305B42906CE6C;       // 0x0868(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimelineFX_Distortion_E903A97441787B8BBCA305B42906CE6C;  // 0x086C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TimelineFX__Direction_E903A97441787B8BBCA305B42906CE6C;  // 0x0870(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KZBM[0x7];                                   // 0x0871(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TimelineFX;                                              // 0x0878(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IdlePossibilityAfterMove;                                // 0x0880(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U52J[0x4];                                   // 0x0884(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            MaterialRef;                                             // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             TeleportShift;                                           // 0x0890(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void TimelineFX__FinishedFunc();
		void TimelineFX__UpdateFunc();
		void SetEnableAdditionalThings(bool enable);
		void BndEvt__TeleportToPOISkillComponent_K2Node_ComponentBoundEvent_0_OnTeleportStart__DelegateSignature(const struct FVector& TargetLocation, float Time);
		void BndEvt__TeleportToPOISkillComponent_K2Node_ComponentBoundEvent_1_OnTeleportFinish__DelegateSignature();
		void StopFootstepLoop();
		void StartFootstepLoop();
		void BndEvt__MeleeOnceAttackComponent_K2Node_ComponentBoundEvent_0_OnTargetHit__DelegateSignature();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnDeath(bool EnableRagdoll);
		void BndEvt__BP_Char_Zombie_PerceptionComponent_K2Node_ComponentBoundEvent_2_OneParamActor__DelegateSignature(class AActor* Actor);
		void BndEvt__BP_Char_Zombie_PerceptionComponent_K2Node_ComponentBoundEvent_4_PlayerLostDelegate__DelegateSignature(class AActor* Actor, const struct FVector& LocLastSeen);
		void OnWalkCommandFinished();
		void OnAttackCommandStarted();
		void OnIdleCommandStarted();
		void OnAttackCommandFinished();
		void PlayFootstepSound();
		void ExecuteUbergraph_BP_Char_Zombie(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
