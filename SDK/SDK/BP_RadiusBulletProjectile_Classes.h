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
	 * BlueprintGeneratedClass BP_RadiusBulletProjectile.BP_RadiusBulletProjectile_C
	 * Size -> 0x0008 (FullSize[0x02E8] - InheritedSize[0x02E0])
	 */
	class ABP_RadiusBulletProjectile_C : public ARadiusBulletProjectile
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnSpawnImpact(const struct FHitResult& Hit, float Scale);
		void BndEvt__BP_RadiusBulletProjectile_BulletComponent_K2Node_ComponentBoundEvent_2_BulletComponentRicochet__DelegateSignature(const struct FVector& Location, const struct FVector& Force, bool IsPenetration);
		void BndEvt__BP_RadiusBulletProjectile_BulletImpulseComponent_K2Node_ComponentBoundEvent_0_BulletImpulseWhistle__DelegateSignature();
		void K2_OnReset();
		void ExecuteUbergraph_BP_RadiusBulletProjectile(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
