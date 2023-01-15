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
	 * BlueprintGeneratedClass BP_Char_Shooter_AK.BP_Char_Shooter_AK_C
	 * Size -> 0x0047 (FullSize[0x0870] - InheritedSize[0x0829])
	 */
	class ABP_Char_Shooter_AK_C : public ABPA_Char_C
	{
	public:
		unsigned char                                              UnknownData_86EM[0x7];                                   // 0x0829(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0830(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFireArmedComponent_C*                               FireArmedComponent;                                      // 0x0838(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioAttack;                                             // 0x0840(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioFootsteps;                                          // 0x0848(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UClass*                                              DamageType;                                              // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimInstance*                                       AnimInstance;                                            // 0x0858(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BurstBulletsCountMin;                                    // 0x0860(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BurstBulletsCountMax;                                    // 0x0864(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StoredWalkSpeed;                                         // 0x0868(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OptimAttackRange;                                        // 0x086C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void StartFootstepLoop();
		void StopFootstepLoop();
		void LoadAdditionalSettings();
		void SetEnableAdditionalThings(bool enable);
		void BndEvt__FireArmedComponent_K2Node_ComponentBoundEvent_2_OnShotsLimitEvent__DelegateSignature();
		void SetCommand(ECharCommand NewCommand, bool Force);
		void ProcessDamage(class AActor* causer, float Damage);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnDeath(bool EnableRagdoll);
		void CoverResult(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus);
		void FindCover();
		void Wait();
		void BndEvt__BP_Char_Shooter_AK_PerceptionComponent_K2Node_ComponentBoundEvent_0_OneParamActor__DelegateSignature(class AActor* Actor);
		void BndEvt__BP_Char_Shooter_AK_PerceptionComponent_K2Node_ComponentBoundEvent_1_PlayerLostDelegate__DelegateSignature(class AActor* Actor, const struct FVector& LocLastSeen);
		void OnWalkCommandStarted();
		void OnIdleCommandStarted();
		void OnIdleCommandFinished();
		void OnAttackCommandStarted();
		void OnAttackCommandFinished();
		void OnWalkCommandFinished();
		void PlayFootstepSound();
		void ExecuteUbergraph_BP_Char_Shooter_AK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
