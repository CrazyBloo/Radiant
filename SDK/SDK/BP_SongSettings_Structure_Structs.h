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
	 * UserDefinedStruct BP_SongSettings_Structure.BP_SongSettings_Structure
	 * Size -> 0x0040
	 */
	struct FBP_SongSettings_Structure
	{
	public:
		struct FDataTableRowHandle                                 Chords_9_34A30C0D4B1E5621E2AB36AA536B69A1;               // 0x0000(0x0010) Edit, BlueprintVisible, NoDestructor
		class FText                                                SongName_8_71EEFADB4098617549EAB8B57C01506C;             // 0x0010(0x0018) Edit, BlueprintVisible
		float                                                      Tempo_15_693D01E443EA534E8F73298BC687EC55;               // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Size_22_7BF5437D46A470AA3C248E9B2910B909;                // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FBP_ChordSizePair>                           SongSequence_19_1FFDB90A45DED5609FCB21AD977A20B6;        // 0x0030(0x0010) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
