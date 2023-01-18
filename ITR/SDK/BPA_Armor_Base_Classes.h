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
	 * BlueprintGeneratedClass BPA_Armor_Base.BPA_Armor_Base_C
	 * Size -> 0x0010 (FullSize[0x0608] - InheritedSize[0x05F8])
	 */
	class ABPA_Armor_Base_C : public ABPA_BaseItem_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USoundBase*                                          Wearsound;                                               // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetFootStepBonus(bool* , float* bonus);
		void BlockFaceTrigger(bool* );
		void GetSoundType(bool* Exist, int32_t* Type);
		void OnAddedToHolster(class UHolsterComponent* Holster);
		void ExecuteUbergraph_BPA_Armor_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
