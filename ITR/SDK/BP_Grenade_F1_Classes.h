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
	 * BlueprintGeneratedClass BP_Grenade_F1.BP_Grenade_F1_C
	 * Size -> 0x0018 (FullSize[0x07A8] - InheritedSize[0x0790])
	 */
	class ABP_Grenade_F1_C : public ABPA_Grenade_C
	{
	public:
		float                                                      MaxRange_1;                                              // 0x0790(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DIDR[0x4];                                   // 0x0794(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      AffectedActors;                                          // 0x0798(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void Explode(bool* bIsSuccess);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
