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
	 * BlueprintGeneratedClass BPA_Char.BPA_Char_C
	 * Size -> 0x02E9 (FullSize[0x0829] - InheritedSize[0x0540])
	 */
	class ABPA_Char_C : public APRBasicCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0540(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UContactShadowImpostorComponent*                     ContactShadowImpostor;                                   // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioIdle;                                               // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_AliveStats_C*                                   AliveComp;                                               // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_Perception_C*                                   PerceptionComponent;                                     // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAIEdPerceptionComp*                                 AIEdPerceptionComp;                                      // 0x0568(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAIPerceptionStimuliSourceComponent*                 AIPerceptionStimuliSource;                               // 0x0570(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AAIController*                                       AIC;                                                     // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlackboardComponent*                                BB;                                                      // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECharCommand                                               Command;                                                 // 0x0588(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B3DG[0x3];                                   // 0x0589(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CommandKeyName;                                          // 0x058C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WalkSpeed;                                               // 0x0594(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             POI;                                                     // 0x0598(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayTag                                        NPCTag;                                                  // 0x05A4(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9ZA2[0x4];                                   // 0x05AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              IdleOrigin;                                              // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      IdleTime;                                                // 0x05B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StrictOrigin;                                            // 0x05BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       DebugInfo;                                               // 0x05BD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       LerpMovement;                                            // 0x05BE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AKLU[0x1];                                   // 0x05BF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             CritComponent;                                           // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ValidDistanceToPlayer;                                   // 0x05C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LookAroundAfterWalk;                                     // 0x05CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DF1G[0x3];                                   // 0x05CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IdleWalkRadius;                                          // 0x05D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Enabled;                                                 // 0x05D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QMWD[0x3];                                   // 0x05D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              LootItemClass;                                           // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LootPossibility;                                         // 0x05E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SRVK[0x4];                                   // 0x05E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CharName;                                                // 0x05E8(0x0018) Edit, BlueprintVisible
		class FString                                              SpawnerId;                                               // 0x0600(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		class FString                                              CustomUID;                                               // 0x0610(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FPRNPCInfo                                          NpcInfo;                                                 // 0x0620(0x01B8) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      LootPossibilityOverride;                                 // 0x07D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_55ZU[0x4];                                   // 0x07DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_CharBroadcast_C*                                 AlertSphere;                                             // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      overlaps;                                                // 0x07E8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       AlertCooldown;                                           // 0x07F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UORN[0x7];                                   // 0x07F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDeathDispatcher;                                       // 0x0800(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       ActiveState;                                             // 0x0810(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCcmWaitingForCombat;                                    // 0x0811(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ECharDetailLevel                                           CurrentDetailLevel;                                      // 0x0812(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bWithinActivationDistance;                               // 0x0813(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDetailLevelUpdateRequested;                             // 0x0814(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bInViewport;                                             // 0x0815(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ECharReappearWaitingReason                                 ReappearWaitingReason;                                   // 0x0816(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LM7Y[0x1];                                   // 0x0817(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNpcPointQueryHandle                                CoverQueryHandle;                                        // 0x0818(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bVolumeActivationState;                                  // 0x0828(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

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
		class FString GetInstanceID();
		bool IsArmored();
		bool IsCriticalHit(class UPrimitiveComponent* HitComponent, const class FName& BoneName);
		bool IsAttacksLocked();
		struct FPRNPCInfo GetNPCInfo();
		void GetIDs(struct FGameplayTag* TypeID, class FString* InstanceId);
		void GetCurrentDetailLevel(ECharDetailLevel* DetailLevel);
		void Reappear_Cover_Callback(const struct FNpcPointQueryResult& QueryResult);
		void Reappear_Out_Of_Sight();
		void NpcAwarenessLevelChanged(EAwarenessLevel PrevAwarenessLevel, EAwarenessLevel NewAwarenessLevel);
		void Set_Brain_Enabled(bool Enabled);
		void RequestDetailLevelUpdate();
		void InitDetailLevel();
		void SetNpcEnabled(bool bNewEnable);
		void UpdateActivationStatus();
		void TogglePendingDisableState(bool bEnableOptim);
		void CheckedSetNpcEnabled(bool bNewEnable);
		void UpdateDetailLevel();
		void CloseCombatCleanup();
		void CloseCombatSetup();
		void WalkToLocation(const struct FVector& Actor);
		void CheckDistanceToPlayerMet();
		void IsLocInValidRange(const struct FVector& Location, bool* Valid);
		void SetupState(float Awareness, const struct FVector& POI, ECharCommand Command);
		void GetAttackLostLocationTime(float* Result);
		void GetAttackMoveDilationAngle(float* Result);
		void GetFootstepNoiseRange(float* Result);
		void InvestigateLocation(const struct FVector& Location);
		void ProcessDamage(class AActor* causer, float Damage);
		void SpawnLoot();
		void ProcessNoise(const class FName& Tag, const struct FVector& Location);
		void GetAwarenessLevel(EAwarenessLevel* AwarenessLevel);
		void IsEnabled(bool* Enabled);
		void IsPlayerNear(bool* PlayerNear);
		void SetEnableAdditionalThings(bool enable);
		void SelectAndAttack(class AActor* Actor, bool* success);
		void WalkToActorLocation(class AActor* Actor);
		void SelectAndAttackClosestTarget(bool* success);
		void DestroyController();
		void LoadBaseSettings();
		void LoadAdditionalSettings();
		void GetIdleOriginPoint(struct FVector* Point);
		void RestartTree();
		void PrintMessage(const class FString& Message);
		void EnableRagdoll();
		void SetEnableEverything(bool enable);
		void SetCommand(ECharCommand NewCommand, bool Force);
		void GetCommand(ECharCommand* CurrentCommand);
		void OnAttackCommandFinished();
		void OnAttackCommandStarted();
		void OnIdleCommandFinished();
		void OnIdleCommandStarted();
		void OnWalkCommandFinished();
		void OnWalkCommandStarted();
		void ReportDeath(class AActor* DeadActorRef);
		void SetFlyForce(const struct FVector& Force);
		void SetTargetRotation(const struct FRotator& TargetRotation);
		void StopMovement();
		void TeleportToNextPos();
		void ReceiveBeginPlay();
		void BndEvt__HealthComp_K2Node_ComponentBoundEvent_0_HealthEnd__DelegateSignature();
		void ReceiveTick(float DeltaSeconds);
		void BndEvt__PerceptionComponent_K2Node_ComponentBoundEvent_0_OnHeardNoise__DelegateSignature(class AActor* Actor, const struct FVector& Location, float Strength, const class FName& Tag);
		void BndEvt__AliveComp_K2Node_ComponentBoundEvent_1_OnDamaged__DelegateSignature(class AActor* causer, float Damage);
		void OnStart();
		void CharEnabled();
		void OnDeath(bool EnableRagdoll);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void AlertNearbyMonsters(class AActor* causer);
		void ChangeHealth(float HealthDelta);
		void LightOn(const struct FVector& Location, class USceneComponent* Component);
		void SetPausedState(bool Value);
		void BroadcastEnemyLoc();
		void Alert(class AActor* Target, const struct FTransform& Location);
		void OnGameStateChange(bool IsPause);
		void SetDebug(bool NewDebug);
		void OnEnterPlayerViewport();
		void OnExitPlayerViewport();
		void OnTransitionEndOnceEventDelegate();
		void SetVolumeActivationState(bool NewState);
		void CcmStartWaitingForCombat();
		void CcmStopWaitingForCombat();
		void OnTransitionStartOnce();
		void SaveGameData();
		void OnGameStartedEventDelegate();
		void ExecuteUbergraph_BPA_Char(int32_t EntryPoint);
		void OnDeathDispatcher__DelegateSignature(class AActor* CharacterRef);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
