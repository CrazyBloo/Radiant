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
	 * UserDefinedStruct MaterialProperties.MaterialProperties
	 * Size -> 0x000C
	 */
	struct FMaterialProperties
	{
	public:
		EPhysicalSurface                                           Surface_17_698FEFE845775A207845AE99FFBAF96B;             // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EMaterialState                                             State_14_61E0B712481824F4BA6280AB67960F45;               // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Hot_1_7675291340422B4D62A20890042B3A8E;                  // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Cold_3_EAF04D7947F23AEB869676AD44B3E911;                 // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Absorbant_5_78457C98416340E4819BCBBD380296B7;            // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Flammable_8_C0F512C9460008173C1A59A4477B1EE0;            // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Rough_11_8F6CBB0C4510DF49CAE693AB50E894DC;               // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Metal_26_2A9345284DD8B91ACCE945A9D8727884;               // 0x0007(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Conductive_19_3114916748B571EA1C1BDCB2325A29B4;          // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Explosive_21_83F672664CE9B5DA467EDDA780CC0D92;           // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Extinguisher_23_9E8FBD3744EAB0239E2152BEB1654964;        // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Caustic_28_11BB6B0D4809CFF94C53D18EF603EF0A;             // 0x000B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
