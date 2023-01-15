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
	 * BlueprintGeneratedClass BP_Weapon_Gsh18.BP_Weapon_Gsh18_C
	 * Size -> 0x001F (FullSize[0x0EA8] - InheritedSize[0x0E89])
	 */
	class ABP_Weapon_Gsh18_C : public ABP_MagFirearmItem_C
	{
	public:
		unsigned char                                              UnknownData_ACIU[0x7];                                   // 0x0E89(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBPC_AtSl_PistolOptics_C*                            BPC_AtSl_PistolOptics;                                   // 0x0E90(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_AtSl_Pistol_Supressor_C*                        BPC_AtSl_Pistol_Supressor;                               // 0x0E98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBPC_AtSl_Rail_S_C*                                  BPC_AtSl_Rail_S;                                         // 0x0EA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
