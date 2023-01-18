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
	 * BlueprintGeneratedClass BP_Groza.BP_Groza_C
	 * Size -> 0x0017 (FullSize[0x0EA8] - InheritedSize[0x0E91])
	 */
	class ABP_Groza_C : public ABP_MagFirearmItem_C
	{
	public:
		unsigned char                                              UnknownData_DBNS[0x7];                                   // 0x0E91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0E98(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                WPN_AKM_WPN_AKM_safetyswitch;                            // 0x0EA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Groza(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
