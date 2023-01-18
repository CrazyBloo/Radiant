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
	 * BlueprintGeneratedClass PWN_Beholder.PWN_Beholder_C
	 * Size -> 0x0070 (FullSize[0x0350] - InheritedSize[0x02E0])
	 */
	class APWN_Beholder_C : public APawn
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_Perception_C*                                   BPC_Perception;                                          // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Sphere;                                                  // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBotShootingComponent_C*                             BotShootingComponent;                                    // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_AliveStats_C*                                   BPC_AliveStats;                                          // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAIEdPerceptionComp*                                 AIEdPerceptionComp;                                      // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      OptimalRange;                                            // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IdleWalkDistance;                                        // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayTag                                        NPCTag;                                                  // 0x0318(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FString                                              CustomUID;                                               // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FRotator                                            CurrentTurretRot;                                        // 0x0330(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            TargetTurretRot;                                         // 0x033C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ABP_Spline_Path_C*                                   Patroolspline;                                           // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class UActorComponent* GetAliveStats();
		struct FTransform GetBoneTransform(const class FName& BoneName);
		EBotMovementMode GetBotMovementMode();
		class UActorComponent* GetBotShootingComponent();
		float GetIdleWalkDistance();
		float GetOptimalRange();
		class USplineComponent* GetPatrolPath();
		void GetPatrolTargets(bool* IsValidOut, TArray<class AActor*>* TargetsOut);
		class UPRNpcPerceptionComponent* GetPerception();
		class AActor* GetSelection();
		float GetStealth();
		void SetBotMovementMode(EBotMovementMode MovementMode, bool* Changed);
		void GetHealth(float* Health);
		void GetHealthPercent(float* HealthPercent);
		bool IsAlive();
		bool IsArmored();
		bool IsCriticalHit(class UPrimitiveComponent* HitComponent, const class FName& BoneName);
		void GetIDs(struct FGameplayTag* TypeID, class FString* InstanceId);
		struct FPRNPCInfo GetNPCInfo();
		bool IsAttacksLocked();
		class FString GetInstanceID();
		void BroadcastEnemyLoc();
		void CcmStartWaitingForCombat();
		void CcmStopWaitingForCombat();
		void OnEnterPlayerViewport();
		void OnExitPlayerViewport();
		void ReportDeath(class AActor* DeadActorRef);
		void SetFlyForce(const struct FVector& Force);
		void SetTargetRotation(const struct FRotator& TargetRotation);
		void StopMovement();
		void TeleportToNextPos();
		void ChangeHealth(float HealthDelta);
		void Alert(class AActor* Target, const struct FTransform& Location);
		void SetDebug(bool NewDebug);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_PWN_Beholder(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
