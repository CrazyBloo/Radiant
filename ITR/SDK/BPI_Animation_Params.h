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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPI_Animation.BPI_Animation_C.StartMeleeAttack
	 */
	struct UBPI_Animation_C_StartMeleeAttack_Params
	{	};

	/**
	 * Function BPI_Animation.BPI_Animation_C.Revive
	 */
	struct UBPI_Animation_C_Revive_Params
	{	};

	/**
	 * Function BPI_Animation.BPI_Animation_C.Death
	 */
	struct UBPI_Animation_C_Death_Params
	{	};

	/**
	 * Function BPI_Animation.BPI_Animation_C.SetTrackPlayer
	 */
	struct UBPI_Animation_C_SetTrackPlayer_Params
	{
	public:
		bool                                                       TrackPlayer;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Animation.BPI_Animation_C.SetWeaponType
	 */
	struct UBPI_Animation_C_SetWeaponType_Params
	{
	public:
		bool                                                       Pistol;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Animation.BPI_Animation_C.SetCrouch
	 */
	struct UBPI_Animation_C_SetCrouch_Params
	{
	public:
		bool                                                       SetCrouch;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Animation.BPI_Animation_C.HitReaction
	 */
	struct UBPI_Animation_C_HitReaction_Params
	{	};

	/**
	 * Function BPI_Animation.BPI_Animation_C.ReloadWeapon
	 */
	struct UBPI_Animation_C_ReloadWeapon_Params
	{	};

	/**
	 * Function BPI_Animation.BPI_Animation_C.FireWeapon
	 */
	struct UBPI_Animation_C_FireWeapon_Params
	{	};

	/**
	 * Function BPI_Animation.BPI_Animation_C.JumpPressed
	 */
	struct UBPI_Animation_C_JumpPressed_Params
	{	};

	/**
	 * Function BPI_Animation.BPI_Animation_C.ChangeLocomotion
	 */
	struct UBPI_Animation_C_ChangeLocomotion_Params
	{
	public:
		ELocomotionState                                           NewLocomotion;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
