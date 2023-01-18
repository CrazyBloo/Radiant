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
	 * UserDefinedStruct TurnInPlace_Asset.TurnInPlace_Asset
	 * Size -> 0x0019
	 */
	struct FTurnInPlace_Asset
	{
	public:
		class UAnimSequenceBase*                                   Animation_2_7BA2980D4E85CC9E320EB98B57C73B3A;            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnimatedAngle_11_0BE5A89E455AEBE851DAA49A1FCA81A5;       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SlotName_5_73864C9E40AE26D9F294038C7099722B;             // 0x000C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayRate_8_47A596764C9AFE145D75C49448F776A8;             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ScaleTurnAngle_14_ED8450744340CD92E19052A9E8766866;      // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
