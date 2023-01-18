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
	 * BlueprintGeneratedClass BP_Ammo_40mm.BP_Ammo_40mm_C
	 * Size -> 0x0056 (FullSize[0x0658] - InheritedSize[0x0602])
	 */
	class ABP_Ammo_40mm_C : public ABPA_Ammo_C
	{
	public:
		unsigned char                                              UnknownData_PQN8[0x6];                                   // 0x0602(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0608(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class APawn*                                               DamageInstigator;                                        // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FExplosionInfo                                      ExplosionSettings;                                       // 0x0618(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		class UPrimitiveComponent* GetPhysicsRootComponent();
		void BndEvt__BPC_ItemDurability_K2Node_ComponentBoundEvent_1_OnDamaged__DelegateSignature(class AActor* causer, float Damage, const struct FGameplayTag& weaponTag, class UDamageType* DmgType);
		void HealthEndedOverride();
		void ExecuteUbergraph_BP_Ammo_40mm(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
