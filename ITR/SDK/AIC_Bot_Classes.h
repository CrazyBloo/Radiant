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
	 * BlueprintGeneratedClass AIC_Bot.AIC_Bot_C
	 * Size -> 0x0018 (FullSize[0x03B0] - InheritedSize[0x0398])
	 */
	class AAIC_Bot_C : public AAIController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0398(0x0008) ZeroConstructor, Transient, DuplicateTransient
		ECharCommand                                               Command;                                                 // 0x03A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z74K[0x3];                                   // 0x03A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LocCache;                                                // 0x03A4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FText GetDamageDealerName();
		struct FGameplayTag GetDamageDealerTag();
		void FGetStats(class UBPC_AliveStats_C** CAlive);
		void FDistanceToSelection(const struct FVector& Loc, float* Distance);
		void FAdvanceToLocation(const struct FVector& InLoc, struct FVector* Loc);
		void FGetPerception(bool* success, class UPRNpcPerceptionComponent** PerceptionComp);
		void OnTransitionEndOnceEventDelegate();
		void ReceiveBeginPlay();
		void OnStart();
		void EnemySpoted(class AActor* Actor);
		void AwarenessChanged(EAwarenessLevel PrevLvl, EAwarenessLevel NewLvl);
		void ReactToNoise(const class FName& Tag, const struct FVector& Loc);
		void OnGameStartedEventDelegate();
		void GameStarted();
		void EnemyLost(class AActor* Actor, const struct FVector& LocLastSeen);
		void ReceiveUnPossess(class APawn* UnpossessedPawn);
		void SetPausedState(bool Value);
		void ReceivePossess(class APawn* PossessedPawn);
		void ExecuteUbergraph_AIC_Bot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
