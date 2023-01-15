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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct FBodyArmorSetup.FBodyArmorSetup
	 * Size -> 0x0019
	 */
	struct FFBodyArmorSetup
	{
	public:
		class USkeletalMesh*                                       SKMesh_2_85EC0E4A4C70665425E1009536FD6F1A;               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UMaterialInterface*>                          Materials_6_E8524A4B42BC69D823A076A4493D8F2D;            // 0x0008(0x0010) Edit, BlueprintVisible
		EBodyArmorSetupTypes                                       Type_11_7F0903D246E384D05593128E8E65DAC5;                // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
