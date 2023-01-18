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
	 * BlueprintGeneratedClass BP_Char_Ring.BP_Char_Ring_C
	 * Size -> 0x002F (FullSize[0x0858] - InheritedSize[0x0829])
	 */
	class ABP_Char_Ring_C : public ABPA_Char_C
	{
	public:
		unsigned char                                              UnknownData_91UA[0x7];                                   // 0x0829(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0830(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     AudioDeath;                                              // 0x0838(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UJumpIntoAttackComponent_C*                          JumpIntoAttackComponent;                                 // 0x0840(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioAttack;                                             // 0x0848(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioFootsteps;                                          // 0x0850(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void CheckTrace(const struct FVector& Start, const struct FVector& End, class AActor* targetActor, bool* Result);
		void UserConstructionScript();
		void SetEnableAdditionalThings(bool enable);
		void BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_0_OnAttackLaunched__DelegateSignature();
		void BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_0_OnDamageInstigated__DelegateSignature(class AActor* To, const struct FHitResult& Hit);
		void BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_1_OnStuck__DelegateSignature(const struct FHitResult& Hit);
		void BndEvt__JumpIntoAttackComponent_K2Node_ComponentBoundEvent_2_OnBounce__DelegateSignature(const struct FHitResult& Hit);
		void CharEnabled();
		void OnStart();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnDeath(bool EnableRagdoll);
		void ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const class FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);
		void DisablePhysics(bool Value);
		void BndEvt__BP_Char_Ring_PerceptionComponent_K2Node_ComponentBoundEvent_3_OneParamActor__DelegateSignature(class AActor* Actor);
		void BndEvt__BP_Char_Ring_PerceptionComponent_K2Node_ComponentBoundEvent_5_PlayerLostDelegate__DelegateSignature(class AActor* Actor, const struct FVector& LocLastSeen);
		void OnAttackCommandStarted();
		void OnAttackCommandFinished();
		void OnIdleCommandFinished();
		void OnWalkCommandFinished();
		void PlayFootstepSound();
		void StartFootstepLoop();
		void StopFootstepLoop();
		void ExecuteUbergraph_BP_Char_Ring(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
