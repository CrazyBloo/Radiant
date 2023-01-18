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
	 * BlueprintGeneratedClass BPA_AmmoBox.BPA_AmmoBox_C
	 * Size -> 0x003B (FullSize[0x067C] - InheritedSize[0x0641])
	 */
	class ABPA_AmmoBox_C : public ABPA_AmmoContainer_C
	{
	public:
		unsigned char                                              UnknownData_C9EK[0x7];                                   // 0x0641(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0648(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetComponent*                                    W_Info;                                                  // 0x0650(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FGameplayTag>                                CustomAmmoInBox;                                         // 0x0658(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		class ABPA_Ammo_C*                                         TriggerAmmo;                                             // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BoxMatID;                                                // 0x0670(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ExplosionShotCount;                                      // 0x0674(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxExplosionCount;                                       // 0x0678(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateMaterialDamage();
		void GetAmmoCount(int32_t* ammoCount);
		void IsFull(bool* full);
		void UpdateAmmoTypeText();
		void UpdateItemWeight();
		void UpdateCounter();
		void OnReconfigure();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnItemCreated();
		void OnStart();
		void FillAmmo();
		void HealthEndedOverride();
		void OnAmmoAdded();
		void OnAmmoRemoved();
		void FillContainerWithFirst();
		void ExecuteUbergraph_BPA_AmmoBox(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
