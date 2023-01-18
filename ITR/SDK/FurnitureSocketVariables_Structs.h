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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct FurnitureSocketVariables.FurnitureSocketVariables
	 * Size -> 0x0010
	 */
	struct FFurnitureSocketVariables
	{
	public:
		bool                                                       IsExist_3_E95A0ECC4CA374738950A99C978BDEF8;              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsStaticMesh_4_DA30EF8C4CAE2873DBEBFB82AC45887E;         // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsLocked_5_DFE7E41A495F446E52683BB00CE1C7D4;             // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       RandomPosition_7_89E6F65E4EC40D96FA54AAAFC49F8647;       // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H692[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         StaticMesh_11_76DA35BF4346B7F17241FBA8A7056F50;          // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
