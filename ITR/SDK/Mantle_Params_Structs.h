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
	 * UserDefinedStruct Mantle_Params.Mantle_Params
	 * Size -> 0x0024
	 */
	struct FMantle_Params_FMantle_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage_24_3C1AEF894F90C77357FC01B1216DD889;         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveVector*                                        PositionCorrectionCurve_25_716DDA5E44F540C50DA005B54E95AB0F; // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartingPosition_15_6F68E2244B632497DCA448A29CBDA0C8;    // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayRate_13_BBABD3264A1E44D275287FAE4C6D5556;            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             StartingOffset_10_381585D949B08D9A56D088A73A78B31B;      // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
