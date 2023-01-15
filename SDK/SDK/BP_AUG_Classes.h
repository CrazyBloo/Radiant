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
	 * BlueprintGeneratedClass BP_AUG.BP_AUG_C
	 * Size -> 0x0053 (FullSize[0x0EDC] - InheritedSize[0x0E89])
	 */
	class ABP_AUG_C : public ABP_MagFirearmItem_C
	{
	public:
		unsigned char                                              UnknownData_85ZT[0x7];                                   // 0x0E89(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0E90(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_AtSl_Integrated_NATO_RifleSupressor_C*          BPC_AtSl_Integrated_NATO_RifleSupressor;                 // 0x0E98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_AtSl_Integrated_Rail_B_C*                       BPC_AtSl_Integrated_Rail_B1;                             // 0x0EA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_AtSl_Integrated_Rail_B_C*                       BPC_AtSl_Integrated_Rail_B;                              // 0x0EA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_AUG_Ring;                                             // 0x0EB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_AUG_Trigger;                                          // 0x0EB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_AUG_Sight;                                            // 0x0EC0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_AUG_Grip;                                             // 0x0EC8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                WPN_AKM_WPN_AKM_safetyswitch;                            // 0x0ED0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      PrimaryTriggerAltThreshold;                              // 0x0ED8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Next_Fire_Mode(bool* Changed, EWeaponFireMode* FireMode);
		void SafetyVisual(EWeaponFireMode FireMode);
		void AttachmentAttached(class AActor* Actor);
		void AttachmentDetached(class AActor* Actor);
		void OnReconfigure();
		void RefreshSights();
		void PrimaryTrigger(float AxisValue);
		void OnEndUsed();
		void DoFire();
		void ExecuteUbergraph_BP_AUG(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
