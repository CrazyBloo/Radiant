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
	 * BlueprintGeneratedClass BP_Char_Fragment_tutorial.BP_Char_Fragment_tutorial_C
	 * Size -> 0x006C (FullSize[0x08BC] - InheritedSize[0x0850])
	 */
	class ABP_Char_Fragment_tutorial_C : public ABP_Char_Fragment_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0850(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Sphere;                                                  // 0x0858(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMeleeContinousAttackComponent_C*                    MeleeAttackComponent;                                    // 0x0860(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_AggroSound;                                        // 0x0868(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioAttack;                                             // 0x0870(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioFootsteps_1;                                        // 0x0878(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      MatAnim_NewTrack_0_505A899E41308407F86920B97D668BE7;     // 0x0880(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         MatAnim__Direction_505A899E41308407F86920B97D668BE7;     // 0x0884(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2H7X[0x3];                                   // 0x0885(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  MatAnim;                                                 // 0x0888(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ForceFieldDuration;                                      // 0x0890(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5ZMF[0x4];                                   // 0x089C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABPA_Armor_C*                                        ArmorRef;                                                // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MatRef;                                                  // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DownedState;                                             // 0x08B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ICK6[0x3];                                   // 0x08B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DownedRegenTime;                                         // 0x08B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      DownedHealth;                                            // 0x08B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		bool IsAttacksLocked();
		void MatAnim__FinishedFunc();
		void MatAnim__UpdateFunc();
		void LoadAdditionalSettings();
		void BndEvt__MeleeAttackComponent_K2Node_ComponentBoundEvent_0_OnTargetHit__DelegateSignature();
		void SetEnableAdditionalThings(bool enable);
		void SpawnArmor();
		void DamagedState(bool enable);
		void DeathTest();
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void OnDeath(bool EnableRagdoll);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void BndEvt__BP_Char_Fragment_tutorial_PerceptionComponent_K2Node_ComponentBoundEvent_1_OneParamActor__DelegateSignature(class AActor* Actor);
		void BndEvt__BP_Char_Fragment_tutorial_PerceptionComponent_K2Node_ComponentBoundEvent_2_PlayerLostDelegate__DelegateSignature(class AActor* Actor, const struct FVector& LocLastSeen);
		void OnAttackCommandStarted();
		void OnIdleCommandFinished();
		void OnWalkCommandFinished();
		void OnAttackCommandFinished();
		void ExecuteUbergraph_BP_Char_Fragment_tutorial(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
