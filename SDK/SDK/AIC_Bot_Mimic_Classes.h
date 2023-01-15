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
	 * BlueprintGeneratedClass AIC_Bot_Mimic.AIC_Bot_Mimic_C
	 * Size -> 0x0070 (FullSize[0x0420] - InheritedSize[0x03B0])
	 */
	class AAIC_Bot_Mimic_C : public AAIC_Bot_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		ECharCommand                                               CharCommand;                                             // 0x03B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2WH2[0x7];                                   // 0x03B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              targetActor;                                             // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             DesiredLocation;                                         // 0x03C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DMON[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        OnLostTimer;                                             // 0x03D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UBehaviorTree*                                       CombatBT;                                                // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBehaviorTree*                                       IdleBT;                                                  // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Sergant_C*                                       Leader;                                                  // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBehaviorTree*                                       CombatBT_Squad;                                          // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBehaviorTree*                                       IdleBT_Squad;                                            // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class APawn*>                                       Squad;                                                   // 0x0408(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class APawn*                                               Array_Element;                                           // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetCommand(ECharCommand* CurrentCommand);
		struct FVector GetDesiredPosition();
		class UPRNpcPerceptionComponent* GetPerception();
		TArray<class AActor*> GetSquadMembers();
		class AActor* GetTargetActor();
		struct FVector GetTargetLocation();
		void OrderAttack();
		void OrderCompleted(class APawn* Pawn);
		void OrderCover();
		void EnemySpoted(class AActor* Actor);
		void GameStarted();
		void SwitchToIdle();
		void ReceiveUnPossess(class APawn* UnpossessedPawn);
		void EnemyLost(class AActor* Actor, const struct FVector& LocLastSeen);
		void SetLeader(class APRBasicActor* NewLeader);
		void SetTargetActor(class AActor* Target);
		void SetDesiredPosition(const struct FVector& Pos);
		void ReportEnemyLocation(const struct FVector& Loc);
		void AddSquadMember(class APawn* Pawn);
		void RemoveSquadMember(class APawn* Pawn);
		void ExecuteUbergraph_AIC_Bot_Mimic(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
