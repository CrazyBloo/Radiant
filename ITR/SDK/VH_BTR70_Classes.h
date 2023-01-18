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
	 * BlueprintGeneratedClass VH_BTR70.VH_BTR70_C
	 * Size -> 0x00E0 (FullSize[0x03D0] - InheritedSize[0x02F0])
	 */
	class AVH_BTR70_C : public AWheeledVehicle
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Conus;                                                   // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene1;                                                  // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAliveStatsComponent*                                AliveStats;                                              // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 SpotLight;                                               // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Cue_BTR_Engine;                                          // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_Perception_C*                                   BPC_Perception;                                          // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBotShootingComponent_C*                             BotShootingComponent;                                    // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAIEdPerceptionComp*                                 AIEdPerceptionComp;                                      // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      OptimalRange;                                            // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IdleWalkDistance;                                        // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayTag                                        NPCTag;                                                  // 0x0350(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FString                                              CustomUID;                                               // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FRotator                                            CurrentTurretRot;                                        // 0x0368(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            TargetTurretRot;                                         // 0x0374(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ABP_Spline_Path_C*                                   Patroolspline;                                           // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FlipCounter;                                             // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxHealth;                                               // 0x038C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CritBoneName;                                            // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             TurretTargetLocation;                                    // 0x0398(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DRK9[0x4];                                   // 0x03A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     StuckCheckPositions;                                     // 0x03A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      StuckCheckTime;                                          // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StuckCheckPoints;                                        // 0x03BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StuckCheckMinPassedDistance;                             // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_51TT[0x4];                                   // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        StuckCheckTimerHandle;                                   // 0x03C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

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
		void Unstuck();
		void CheckStuck(bool* bStuck);
		void ComputeSmallestTurnAngle(const struct FVector& TargetLoc, struct FRotator* TurnTransform);
		void InitCritBone();
		void LoadConfig();
		void CcmStartWaitingForCombat();
		void CcmStopWaitingForCombat();
		void OnEnterPlayerViewport();
		void OnExitPlayerViewport();
		void ReportDeath(class AActor* DeadActorRef);
		void SetFlyForce(const struct FVector& Force);
		void SetTargetRotation(const struct FRotator& TargetRotation);
		void ChangeHealth(float HealthDelta);
		void Alert(class AActor* Target, const struct FTransform& Location);
		void SetDebug(bool NewDebug);
		void CustomThrottle(float TargetAngle, float DestinationDistance, float DesiredSpeed, float CalculatedThrottle);
		void CustomSteering(float TargetAngle, float Steering, float DestinationDistance);
		void CustomBraking(float TargetAngle, float DestinationDistance, float DesiredSpeed, float CalculatedBrake);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void saveData();
		void StopMovement();
		void TeleportToNextPos();
		void BndEvt__VH_BTR70_AliveStats_K2Node_ComponentBoundEvent_2_OnHealthEnd__DelegateSignature();
		void BndEvt__VH_BTR70_AliveStats_K2Node_ComponentBoundEvent_3_OnDamaged__DelegateSignature(class AActor* Actor, float Damage);
		void StuckCheckEvent();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void BroadcastEnemyLoc();
		void ExecuteUbergraph_VH_BTR70(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
