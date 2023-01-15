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
	 * BlueprintGeneratedClass BPA_Holder.BPA_Holder_C
	 * Size -> 0x0060 (FullSize[0x0318] - InheritedSize[0x02B8])
	 */
	class ABPA_Holder_C : public APRHolder
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UC_OverlapHighlit_C*                                 C_OverlapHighlit;                                        // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FGameplayTag                                        ID;                                                      // 0x02D0(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		struct FGameplayTagContainer                               AllowedTags;                                             // 0x02D8(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		class USceneComponent*                                     AttachToPrim;                                            // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPrimitiveComponent*                                 HightlightPrim;                                          // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPrimitiveComponent*                                 InventoryColider;                                        // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       KeepWorldLocOnAttach;                                    // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L1O1[0x3];                                   // 0x0311(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxNumberOfActors;                                       // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IsAcceptItemActor(class AActor* itemActor, bool onlyIfFree, bool* accept);
		void IsSnapHolder(bool* snapHolder);
		void GetHolderID(struct FGameplayTag* holderID);
		void FixItemsPositions();
		void IsActorTagMatch(class AActor* Actor, bool* Result);
		void IsOverlap(class ABPA_Holder_C* Holder, class AActor* itemActor, bool* Result);
		void HideHeldItems(bool Hidden);
		void DoAttach(class AActor* Actor, bool Simulate, bool NoItemTake);
		void ReinitPrimitives();
		void IsHoldObject(class AActor* Actor, bool IgnodeGripped, bool* Result);
		void GetHeldCount(bool* NotEmpty, int32_t* Count);
		void GetHeldObjects(bool IgnodeGripped, TArray<class AActor*>* HeldObjects);
		void GetTotalWeight(float* TotalWeight);
		void TryRemoveFromInventory(class AActor* Actor, const struct FGameplayTagContainer& AllowedTag);
		void TryAttachToInventory(class AActor* ActorDropped, bool* Attached);
		void OnSpawnedFromInventory();
		void OnDrop(class AActor* Actor);
		void SpawnContent();
		void RefreshHolder();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnGameStarted();
		void OnTransitionEnd();
		void ExecuteUbergraph_BPA_Holder(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
