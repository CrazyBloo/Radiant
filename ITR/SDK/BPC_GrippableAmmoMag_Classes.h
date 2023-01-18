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
	 * BlueprintGeneratedClass BPC_GrippableAmmoMag.BPC_GrippableAmmoMag_C
	 * Size -> 0x0009 (FullSize[0x0171] - InheritedSize[0x0168])
	 */
	class UBPC_GrippableAmmoMag_C : public UBPC_InternalMag_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0168(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       IsBulletsGrippable;                                      // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnAmmoTaken(int32_t AmmoIndex);
		class UStaticMeshComponent* DoSpawn(const struct FGameplayTag& ItemTypeID, int32_t Index);
		void SetBulletsGrippable(bool IsGrippable);
		void ExecuteUbergraph_BPC_GrippableAmmoMag(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
