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
	 * BlueprintGeneratedClass BPC_Holster.BPC_Holster_C
	 * Size -> 0x0120 (FullSize[0x0370] - InheritedSize[0x0250])
	 */
	class UBPC_Holster_C : public UHolsterComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0250(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FGameplayTagContainer                               AcceptsTag;                                              // 0x0258(0x0020) Edit, BlueprintVisible
		float                                                      LerpFactor;                                              // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9IEM[0x4];                                   // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LerpStartTransform;                                      // 0x0280(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LerpCoefficient;                                         // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S08L[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          HolsterSound;                                            // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MarkerMeshComp;                                          // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              ActorInHand;                                             // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          ItemRelTransform;                                        // 0x02D0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTimerHandle                                        markTimer;                                               // 0x0300(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<struct FGameplayTag, struct FTransform>               TransformByTags;                                         // 0x0308(0x0050) Edit, BlueprintVisible
		TArray<class USceneComponent*>                             holderComponents;                                        // 0x0358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UFeedbackFile*                                       HapticsFeedback;                                         // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CalcDistance(class AActor* targetActor, bool* bInRange, float* Distance);
		void Check_if_Item_from_This_Holster(class UInventoryItem* Item, bool* Result);
		void IsAcceptItemActor(class AActor* itemActor, bool onlyIfFree, bool* accept);
		void IsSnapHolder(bool* snapHolder);
		void GetHolderID(struct FGameplayTag* holderID);
		void AdditionalTransformBasedOnTag();
		void ReceiveTick(float DeltaSeconds);
		void MeshMarker(bool On, class AActor* Actor);
		void CheckDist();
		void SpawnContent();
		void RefreshHolder();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ReceiveBeginPlay();
		void OnItemTaken(class UInventoryItem* InventoryItem);
		void InstantAttach();
		void SetContentVisibility(bool Visible);
		void SetHolderVisibility(bool Visible);
		void AttachAndLerpHold();
		void ExecuteUbergraph_BPC_Holster(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
