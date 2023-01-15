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
	 * BlueprintGeneratedClass FL_Project.FL_Project_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFL_Project_C : public UBlueprintFunctionLibrary
	{
	public:
		void IsShowTips(class UObject* __WorldContext, bool* Result);
		void PlayHapticsFeedbackWithRotation(EHapticsType Type, const struct FRotationOption& RotationOption, class UObject* __WorldContext);
		void ToImperial(float Centimeters, class UObject* __WorldContext, class FText* Text);
		void PlayRecoilFeedback(int32_t Power, bool IsLeft, class UObject* __WorldContext);
		void GetHapticsFeedback(EHapticsType Type, class UObject* __WorldContext, class UFeedbackFile** Vest, class UFeedbackFile** Head, class UFeedbackFile** Arm);
		void PlayHapticsFeedback(EHapticsType Type, class UObject* __WorldContext);
		void ExitToMainMenu(class UObject* __WorldContext);
		void IsInputEnabledAndNotSimulation(class UObject* __WorldContext, bool* Result);
		void IsLeftHanded(class UObject* __WorldContext, bool* Result);
		void GetSpawnPointNotNearPlayer(const struct FVector& nearby, float InRadius, bool reachable, class UObject* __WorldContext, bool* success, struct FVector* Point);
		void GetCurrentLevelTide(class UObject* __WorldContext, class ABP_TideBase_C** tideRef);
		void GetTurnSpeedCoefficient(class UObject* __WorldContext, float* Result);
		void IsHybridTurn(class UObject* __WorldContext, bool* Result);
		void IsSnapTurn(class UObject* __WorldContext, bool* Result);
		void IsSmoothTurn(class UObject* __WorldContext, bool* Result);
		void Negative(float In, class UObject* __WorldContext, float* Out);
		void TrimFloat(float In, int32_t Digits, class UObject* __WorldContext, class FString* Out);
		void RoundFloat(float In, int32_t Digits, class UObject* __WorldContext, float* Out);
		void RoundTransform(const struct FTransform& In, class UObject* __WorldContext, struct FTransform* Out);
		void CurrentLevelToWorldTransform(const struct FTransform& Level, class UObject* __WorldContext, struct FTransform* World);
		void IsHMDOrControllersUndetected(class UObject* __WorldContext, bool* undetected);
		void IsSaveAllowed(class UObject* __WorldContext, bool* Result);
		void IsShowPlayerPosition(class UObject* __WorldContext, bool* Result);
		void IsHealOnSleep(class UObject* __WorldContext, bool* Result);
		void IsDropAllItems(class UObject* __WorldContext, bool* Result);
		void AttachItemActors(class AActor* attachActor, class AActor* ParentActor, class UObject* __WorldContext, bool* success);
		void FixBR(const class FText& textIn, class UObject* __WorldContext, class FText* textOut);
		void UpdateItemGripTransform(class UObject* GripObject, class UGripMotionControllerComponent* handController, class UObject* __WorldContext);
		void GetActorTag(class AActor* Actor, class UObject* __WorldContext, bool* success, struct FGameplayTag* Tag);
		void ReplaceButtonNames(const class FText& InText, class UObject* __WorldContext, class FText* OutText);
		void FindCluster(const struct FGameplayTag& Tag, class UObject* __WorldContext, bool* found, class APRClusterSpawner** cluster);
		void IsArtifactVisible(class AActor* artifactActor, class UObject* __WorldContext, bool* Visible);
		void GetTagsArrayAssetString(TArray<struct FGameplayTag>* Tag, class UObject* __WorldContext, class FString* String);
		void GetTagAssetString(const struct FGameplayTag& Tag, class UObject* __WorldContext, class FString* String);
		void ForceDropItemActor(class AActor* itemActor, bool simulateActor, bool KillActor, bool dropItem, bool destroyItem, class UObject* __WorldContext, bool* success);
		void TryAttachActor(class AActor* Actor, class UObject* Parent, bool snap, class UObject* __WorldContext, bool* success);
		void GetObjectLocation(class UObject* Object, class UObject* __WorldContext, struct FVector* Location);
		void SortObjectsByDistance(TArray<class UObject*>* InArr, class AActor* DistanceFromActor, class UObject* __WorldContext, TArray<class UObject*>* SortedArr);
		void SpawnNPC(const struct FGameplayTag& NPCTag, const struct FVector& nearby, float Radius, class UObject* __WorldContext, class AActor** NPCActor);
		void IsActorsArraysMatch(TArray<class AActor*>* arrayOne, TArray<class AActor*>* arrayTwo, class UObject* __WorldContext, bool* Match);
		void MatchesTagsArray(const struct FGameplayTag& tagOne, TArray<struct FGameplayTag>* otherTags, bool exactMatch, class UObject* __WorldContext, bool* Match, int32_t* Array_Index);
		void GetCurrentLevelConfig(class UObject* __WorldContext, struct FLevelConfig* currentLevelConfig);
		void DrawDebugBone(class USkeletalMeshComponent* SkeletalMesh, const class FName& BoneName, const struct FLinearColor& Color, float Duration, float Thickness, class UObject* __WorldContext);
		void GetGripForObject(class UObject* Object, class UGripMotionControllerComponent* Controller, class UObject* __WorldContext, struct FBPActorGripInformation* Grip);
		void GetGripRelativeTransformByGeometryTypeAndPoseNumber(class UObject* GripObject, class UGripMotionControllerComponent* handController, EPRHandPoseType poseType, EPRHandPoseGeometryType GeometryType, EPRHandPoseNumber PoseNumber, class UObject* __WorldContext, bool* success, struct FTransform* GripRelativeTransform);
		void DrawDebugTransform(const struct FTransform& Transform, const struct FLinearColor& Color, float Duration, float Thickness, bool Forward, bool Right, bool Up, class UObject* __WorldContext);
		void CompareStrings(const class FString& First, const class FString& Second, class UObject* __WorldContext, bool* firstLower);
		void AsTimeString(const struct FTimespan& Timespan, class UObject* __WorldContext, class FString* String);
		void GetMeanFloat(float Float1, float Float2, class UObject* __WorldContext, float* MeanFloat);
		void GetActorInGameName(class AActor* Actor, class UObject* __WorldContext, bool* success, class FText* Name);
		void GetAM(class UObject* __WorldContext, class UAnalyticsManager** AM);
		void SortActorsByDistance(TArray<class AActor*>* ActorsArr, class AActor* DistanceFromActor, class UObject* __WorldContext, TArray<class AActor*>* SortedActors);
		void Unlock(class AActor* Target, bool Deny_Gripping, class UObject* __WorldContext);
		void GetRelativeTransform(class AActor* Actor, class UObject* __WorldContext, struct FTransform* Transform);
		void GetBPGI(class UObject* __WorldContext, class UBP_PRGameInstance_C** GI);
		void AttachToComponent(class AActor* actorToAttach, class USceneComponent* ParentSceneComponent, class UObject* __WorldContext);
		void UpdateWidgetCounter(class UWidgetComponent* WidgetRef, const class FText& Text, float NumberToShow, class UObject* __WorldContext);
		void WeightedChance(float SingleChancePercent, class UObject* __WorldContext, bool* Output);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
