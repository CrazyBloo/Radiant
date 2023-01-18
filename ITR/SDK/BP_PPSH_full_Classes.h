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
	 * BlueprintGeneratedClass BP_PPSH_full.BP_PPSH_full_C
	 * Size -> 0x0027 (FullSize[0x0EB8] - InheritedSize[0x0E91])
	 */
	class ABP_PPSH_full_C : public ABP_MagFirearmItem_C
	{
	public:
		unsigned char                                              UnknownData_8G9B[0x7];                                   // 0x0E91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0E98(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_AtSl_Rail_S_C*                                  BPC_AtSl_Rail_S;                                         // 0x0EA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_AtSl_Rail_B_C*                                  BPC_AtSl_Rail_B;                                         // 0x0EA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                WPN_AKM_WPN_AKM_safetyswitch;                            // 0x0EB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void SafetyVisual(EWeaponFireMode FireMode);
		void ExecuteUbergraph_BP_PPSH_full(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
