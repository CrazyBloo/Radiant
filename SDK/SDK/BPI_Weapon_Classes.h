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
	 * BlueprintGeneratedClass BPI_Weapon.BPI_Weapon_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_Weapon_C : public UInterface
	{
	public:
		void SetAdditionalSmoothing(bool TurnOn, float Alpha);
		void GetCleaningBarrelLength(float* Length);
		void GetShootingPointTransform(struct FTransform* Transform, class UPrimitiveComponent** Parent);
		void VirtualStockToggle(bool On);
		void AttachmentDetached(class AActor* Actor);
		void AttachmentAttached(class AActor* Actor);
		void UpdateTargetLoc(const struct FVector& TargetLoc);
		void PlayerWeaponFired();
		void ReloadFinished();
		void OutOfAmmo();
		void StopFire();
		void FireGun(class AActor* Target, float Diviation, bool BurstFire, const struct FVector& TargetLoc, float FireRateMult, int32_t BurstModeCount);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
