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
	 * BlueprintGeneratedClass BPA_Anomaly.BPA_Anomaly_C
	 * Size -> 0x0010 (FullSize[0x03E8] - InheritedSize[0x03D8])
	 */
	class ABPA_Anomaly_C : public APRAnomaly
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_BP_ToDelete;                                       // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void CopyNativeToBp();
		void CopyBpToNative();
		void CheckIfDiscovered();
		struct FGameplayTag GetDamageDealerTag();
		struct FPRAnomalyInfo GetAnomalyInfo();
		class FText GetDamageDealerName();
		void CheckIfSignificant();
		struct FGameplayTag GetTypeID();
		class FString GetInstanceID();
		float GetRadius();
		void CheckItemActor(class AActor* Actor, bool* inInventory);
		void Fn_EnableEverything();
		void Fn_DisableEverything();
		void Fn_CheckArray(TArray<class UObject*>* ObjectArr, bool* IsValid);
		void Fn_CheckLOS();
		void Fn_CheckOverlap(bool* HasOverlaps, TArray<class AActor*>* ActorArray);
		void OnLevelStarted(const struct FGameplayTag& LevelTag);
		void OverlapTriggered(class AActor* OtherActor);
		void OnOverlapActor(class AActor* OtherActor);
		void OnOverlapTimer();
		void ExecuteUbergraph_BPA_Anomaly(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
