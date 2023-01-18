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
	 * BlueprintGeneratedClass BPA_Ammo.BPA_Ammo_C
	 * Size -> 0x000A (FullSize[0x0602] - InheritedSize[0x05F8])
	 */
	class ABPA_Ammo_C : public ABPA_BaseItem_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       IsShot;                                                  // 0x0600(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsMetal;                                                 // 0x0601(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		class UPrimitiveComponent* GetPhysicsRootComponent();
		struct FAmmoInfo GetAmmoInfo();
		void UserConstructionScript();
		void AmmoShot();
		void PlayDropSounds(const struct FHitResult& Hit, const struct FVector& HitImpulse, bool IsHeld);
		void OnReconfigure();
		void UpdateMesh();
		void HealthEndedOverride();
		void ExecuteUbergraph_BPA_Ammo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
