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
	 * UserDefinedStruct DynamicMontageParams.DynamicMontageParams
	 * Size -> 0x0018
	 */
	struct FDynamicMontageParams
	{
	public:
		class UAnimSequenceBase*                                   Animation_2_5E5C122A46BA0311400556A423FC05D0;            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendInTime_10_1C5E8446412E51FFA0B03AB8BD32E6E8;         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlendOutTime_12_79DFD9804491A7DF0813EFA923002F9C;        // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayRate_5_4724216C43D83EADF735F0AFEE9947EB;             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartTime_7_3C5D7A3849D194E10AB51CA0344EBC8D;            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
