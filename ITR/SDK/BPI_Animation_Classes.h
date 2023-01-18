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
	 * BlueprintGeneratedClass BPI_Animation.BPI_Animation_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_Animation_C : public UInterface
	{
	public:
		void StartMeleeAttack();
		void Revive();
		void Death();
		void SetTrackPlayer(bool TrackPlayer);
		void SetWeaponType(bool Pistol);
		void SetCrouch(bool SetCrouch);
		void HitReaction();
		void ReloadWeapon();
		void FireWeapon();
		void JumpPressed();
		void ChangeLocomotion(ELocomotionState NewLocomotion);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
