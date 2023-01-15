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
	 * BlueprintGeneratedClass BP_Sergant.BP_Sergant_C
	 * Size -> 0x0050 (FullSize[0x02E8] - InheritedSize[0x0298])
	 */
	class ABP_Sergant_C : public APRBasicActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBillboardComponent*                                 Billboard;                                               // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class APawn*>                                       Squad;                                                   // 0x02B0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		struct FVector                                             LocalPos;                                                // 0x02C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BY79[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Target;                                                  // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class APawn*>                                       Squad_OrderComplete;                                     // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate

	public:
		void GetCommand(ECharCommand* CurrentCommand);
		struct FVector GetDesiredPosition();
		class UPRNpcPerceptionComponent* GetPerception();
		TArray<class AActor*> GetSquadMembers();
		class AActor* GetTargetActor();
		struct FVector GetTargetLocation();
		void AddSquadMember(class APawn* Pawn);
		void OrderAttack();
		void OrderCover();
		void RemoveSquadMember(class APawn* Pawn);
		void SetDesiredPosition(const struct FVector& Pos);
		void SetLeader(class APRBasicActor* NewLeader);
		void SetTargetActor(class AActor* Target);
		void SpreadOut();
		void ReceiveTick(float DeltaSeconds);
		void OnGameStarted();
		void OrderCompleted(class APawn* Pawn);
		void ReportEnemyLocation(const struct FVector& Loc);
		void ExecuteUbergraph_BP_Sergant(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
