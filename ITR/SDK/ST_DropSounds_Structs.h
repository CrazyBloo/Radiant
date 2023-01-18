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
	 * UserDefinedStruct ST_DropSounds.ST_DropSounds
	 * Size -> 0x0030
	 */
	struct FST_DropSounds
	{
	public:
		EPhysicalSurface                                           Surface_2_FD5D3F554CE75CFF1CBD489D080E7D6B;              // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K55H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           MetalShellSound_5_AAD0C42B45634B42A967449954DAF995;      // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundCue*                                           PlasticShellSound_7_2EC76A5C46302E55CAD723975422A090;    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundCue*                                           SmallItemDropSound_16_A94F30A540C0244728C19498AE984DDB;  // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundCue*                                           BigItemDropSound_15_FF12BE4D445631C232C91993B46B5C19;    // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundCue*                                           ItemHitSound_17_CCDF00C74DF546797B7397B2D32279DF;        // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
