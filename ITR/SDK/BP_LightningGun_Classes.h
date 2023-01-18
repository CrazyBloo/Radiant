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
	 * BlueprintGeneratedClass BP_LightningGun.BP_LightningGun_C
	 * Size -> 0x0010 (FullSize[0x0C20] - InheritedSize[0x0C10])
	 */
	class ABP_LightningGun_C : public ABP_FirearmItem_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0C10(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   NS_P_LightningStrike;                                    // 0x0C18(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OnShotVFX(const struct FVector& TargetLoc);
		void ExecuteUbergraph_BP_LightningGun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
