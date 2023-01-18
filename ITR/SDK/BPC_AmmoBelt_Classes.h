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
	 * BlueprintGeneratedClass BPC_AmmoBelt.BPC_AmmoBelt_C
	 * Size -> 0x0060 (FullSize[0x0650] - InheritedSize[0x05F0])
	 */
	class UBPC_AmmoBelt_C : public UGrippableStaticMeshComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FGameplayTag                                        AmmoTag;                                                 // 0x05F8(0x0008) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<struct FGameplayTag>                                Ammo;                                                    // 0x0600(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    maxAmmo;                                                 // 0x0610(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IHZ1[0x4];                                   // 0x0614(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStaticMeshComponent*>                        Points;                                                  // 0x0618(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FString                                              weaponInstanceID;                                        // 0x0628(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       TakenDelay;                                              // 0x0638(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_767J[0x7];                                   // 0x0639(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           AmmoInsertSound;                                         // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundCue*                                           AmmoTakeSound;                                           // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateContent();
		void CollectPoints();
		void UpdateBullets();
		void ReceiveBeginPlay();
		void Initialize(const class FString& itemInstanceID);
		void OnComponentBeginOverlap_Event_1(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
		void ExecuteUbergraph_BPC_AmmoBelt(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
