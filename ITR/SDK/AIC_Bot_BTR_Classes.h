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
	 * BlueprintGeneratedClass AIC_Bot_BTR.AIC_Bot_BTR_C
	 * Size -> 0x0030 (FullSize[0x03E0] - InheritedSize[0x03B0])
	 */
	class AAIC_Bot_BTR_C : public AAIC_Bot_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FTimerHandle                                        OnLostTimer;                                             // 0x03B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		ECharCommand                                               CharCommand;                                             // 0x03C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_20B3[0x7];                                   // 0x03C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              targetActor;                                             // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DesiredSpeed;                                            // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             DesiredLocation;                                         // 0x03D4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetCommand(ECharCommand* CurrentCommand);
		struct FVector GetDesiredPosition();
		class UPRNpcPerceptionComponent* GetPerception();
		TArray<class AActor*> GetSquadMembers();
		class AActor* GetTargetActor();
		struct FVector GetTargetLocation();
		void AddSquadMember(class APawn* Pawn);
		void OrderAttack();
		void OrderCompleted(class APawn* Pawn);
		void OrderCover();
		void RemoveSquadMember(class APawn* Pawn);
		void ReportEnemyLocation(const struct FVector& Loc);
		void SetDesiredPosition(const struct FVector& Pos);
		void SetLeader(class APRBasicActor* NewLeader);
		void SetTargetActor(class AActor* Target);
		void SwitchToIdle();
		void EnemySpoted(class AActor* Actor);
		void EnemyLost(class AActor* Actor, const struct FVector& LocLastSeen);
		void Initialize();
		void ExecuteUbergraph_AIC_Bot_BTR(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
