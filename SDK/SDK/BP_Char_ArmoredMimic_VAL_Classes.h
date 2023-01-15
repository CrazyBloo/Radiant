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
	 * BlueprintGeneratedClass BP_Char_ArmoredMimic_VAL.BP_Char_ArmoredMimic_VAL_C
	 * Size -> 0x0013 (FullSize[0x0D40] - InheritedSize[0x0D2D])
	 */
	class ABP_Char_ArmoredMimic_VAL_C : public ABP_Char_Mimic_C
	{
	public:
		unsigned char                                              UnknownData_LJ8I[0x3];                                   // 0x0D2D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0D30(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              SK_Armor_Base_01;                                        // 0x0D38(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Char_ArmoredMimic_VAL(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
