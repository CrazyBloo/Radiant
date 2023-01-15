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
	 * UserDefinedStruct RotateInPlace_Asset.RotateInPlace_Asset
	 * Size -> 0x0020
	 */
	struct FRotateInPlace_Asset
	{
	public:
		class UAnimSequenceBase*                                   Animation_2_7BA2980D4E85CC9E320EB98B57C73B3A;            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SlotName_5_73864C9E40AE26D9F294038C7099722B;             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SlowTurnRate_9_47A596764C9AFE145D75C49448F776A8;         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FastTurnRate_17_566E906643D9AD8B150F87B98BBF88BB;        // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SlowPlayRate_16_1F78888146721190E66721BAA545F229;        // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FastPlayRate_18_730EF8A04D92C6D5D014CFBF34A93F2A;        // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
