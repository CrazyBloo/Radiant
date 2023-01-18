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
	 * BlueprintGeneratedClass BP_RadiusShrapnelProjectile.BP_RadiusShrapnelProjectile_C
	 * Size -> 0x0010 (FullSize[0x02B8] - InheritedSize[0x02A8])
	 */
	class ABP_RadiusShrapnelProjectile_C : public ARadiusShrapnelProjectile
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void BndEvt__BP_RadiusShrapnelProjectile_ShrapnelComponent_K2Node_ComponentBoundEvent_0_ShrapnelComponentImpact__DelegateSignature(const struct FHitResult& Hit, float Scale);
		void BndEvt__BP_RadiusShrapnelProjectile_ShrapnelComponent_K2Node_ComponentBoundEvent_1_ShrapnelComponentApplyDamage__DelegateSignature(const struct FVector& Location, bool IsPearce);
		void ExecuteUbergraph_BP_RadiusShrapnelProjectile(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
