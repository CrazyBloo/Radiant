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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_LightningGun.BP_LightningGun_C
	 * Size -> 0x0014 (FullSize[0x0C18] - InheritedSize[0x0C04])
	 */
	class ABP_LightningGun_C : public ABP_FirearmItem_C
	{
	public:
		unsigned char                                              UnknownData_AC74[0x4];                                   // 0x0C04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0C08(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   NS_P_LightningStrike;                                    // 0x0C10(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OnShotVFX(const struct FVector& TargetLoc);
		void ExecuteUbergraph_BP_LightningGun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
