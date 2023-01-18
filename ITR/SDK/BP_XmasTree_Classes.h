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
	 * BlueprintGeneratedClass BP_XmasTree.BP_XmasTree_C
	 * Size -> 0x0028 (FullSize[0x0620] - InheritedSize[0x05F8])
	 */
	class ABP_XmasTree_C : public ABPA_BaseItem_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio;                                                   // 0x0600(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       burning;                                                 // 0x0608(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WTU0[0x7];                                   // 0x0609(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInventoryItem*                                      InventoryItem;                                           // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayTag                                        NoteTagToSpawn;                                          // 0x0618(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateMaterialDamage();
		void UserConstructionScript();
		void CustomEvent_1();
		void BndEvt__BP_XmasTree_BPC_ItemDurability_K2Node_ComponentBoundEvent_1_OnDestroyed__DelegateSignature();
		void ReceiveBeginPlay();
		void BndEvt__BP_XmasTree_BPC_ItemDurability_K2Node_ComponentBoundEvent_0_OnDamaged__DelegateSignature(class AActor* causer, float Damage, const struct FGameplayTag& weaponTag, class UDamageType* DmgType);
		void ExecuteUbergraph_BP_XmasTree(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
