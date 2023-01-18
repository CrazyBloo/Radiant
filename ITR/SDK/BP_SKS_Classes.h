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
	 * BlueprintGeneratedClass BP_SKS.BP_SKS_C
	 * Size -> 0x0057 (FullSize[0x0EE8] - InheritedSize[0x0E91])
	 */
	class ABP_SKS_C : public ABP_MagFirearmItem_C
	{
	public:
		unsigned char                                              UnknownData_L0H9[0x7];                                   // 0x0E91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0E98(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                sks_2018_fbx_sks_sight;                                  // 0x0EA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                sks_rearSight;                                           // 0x0EA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_AtSl_Rail_B_C*                                  BPC_AtSl_Rail_B1;                                        // 0x0EB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_AtSl_Rail_B_C*                                  BPC_AtSl_Rail_B;                                         // 0x0EB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_AtSl_USSR_RifleSupressor_C*                     BPC_AtSl_USSR_RifleSupressor;                            // 0x0EC0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_AtSl_PU_C*                                      BPC_AtSl_PU;                                             // 0x0EC8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                sks_safety;                                              // 0x0ED0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                WPN_AKM_WPN_AKM_trigger;                                 // 0x0ED8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FGameplayTag                                        BayonetTag;                                              // 0x0EE0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void OnReconfigure();
		void UpdateAttachmentSlots();
		void ExecuteUbergraph_BP_SKS(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
