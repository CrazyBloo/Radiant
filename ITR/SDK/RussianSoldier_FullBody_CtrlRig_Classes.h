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
	// # Classes
	// --------------------------------------------------
	/**
	 * ControlRigBlueprintGeneratedClass RussianSoldier_FullBody_CtrlRig.RussianSoldier_FullBody_CtrlRig_C
	 * Size -> 0x0030 (FullSize[0x0680] - InheritedSize[0x0650])
	 */
	class URussianSoldier_FullBody_CtrlRig_C : public UControlRig
	{
	public:
		struct FVector                                             tickLeftHandLocation;                                    // 0x0650(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            tickLeftHandRotation;                                    // 0x065C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             tickRightHandLocation;                                   // 0x0668(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            tickRightHandRotation;                                   // 0x0674(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
