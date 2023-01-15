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
	 * BlueprintGeneratedClass DT_BaseGroupedDamage.DT_BaseGroupedDamage_C
	 * Size -> 0x0001 (FullSize[0x0041] - InheritedSize[0x0040])
	 */
	class UDT_BaseGroupedDamage_C : public UDamageType
	{
	public:
		EDamageCategory                                            DamageCategory;                                          // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		EDamageCategory GetDamageCategory();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
