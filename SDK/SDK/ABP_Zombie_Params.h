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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ABP_Zombie.ABP_Zombie_C.AnimGraph
	 */
	struct UABP_Zombie_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_Zombie.ABP_Zombie_C.JumpPressed
	 */
	struct UABP_Zombie_C_JumpPressed_Params
	{	};

	/**
	 * Function ABP_Zombie.ABP_Zombie_C.FireWeapon
	 */
	struct UABP_Zombie_C_FireWeapon_Params
	{	};

	/**
	 * Function ABP_Zombie.ABP_Zombie_C.ReloadWeapon
	 */
	struct UABP_Zombie_C_ReloadWeapon_Params
	{	};

	/**
	 * Function ABP_Zombie.ABP_Zombie_C.HitReaction
	 */
	struct UABP_Zombie_C_HitReaction_Params
	{	};

	/**
	 * Function ABP_Zombie.ABP_Zombie_C.SetCrouch
	 */
	struct UABP_Zombie_C_SetCrouch_Params
	{
	public:
		bool                                                       SetCrouch;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_Zombie.ABP_Zombie_C.SetWeaponType
	 */
	struct UABP_Zombie_C_SetWeaponType_Params
	{
	public:
		bool                                                       Pistol;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_Zombie.ABP_Zombie_C.SetTrackPlayer
	 */
	struct UABP_Zombie_C_SetTrackPlayer_Params
	{
	public:
		bool                                                       TrackPlayer;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_Zombie.ABP_Zombie_C.Death
	 */
	struct UABP_Zombie_C_Death_Params
	{	};

	/**
	 * Function ABP_Zombie.ABP_Zombie_C.Revive
	 */
	struct UABP_Zombie_C_Revive_Params
	{	};

	/**
	 * Function ABP_Zombie.ABP_Zombie_C.BlueprintUpdateAnimation
	 */
	struct UABP_Zombie_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_Zombie.ABP_Zombie_C.ChangeLocomotion
	 */
	struct UABP_Zombie_C_ChangeLocomotion_Params
	{
	public:
		ELocomotionState                                           NewLocomotion;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_Zombie.ABP_Zombie_C.AnimNotify_FootstepHit
	 */
	struct UABP_Zombie_C_AnimNotify_FootstepHit_Params
	{	};

	/**
	 * Function ABP_Zombie.ABP_Zombie_C.BlueprintBeginPlay
	 */
	struct UABP_Zombie_C_BlueprintBeginPlay_Params
	{	};

	/**
	 * Function ABP_Zombie.ABP_Zombie_C.AnimNotify_MeleeAttackFinish
	 */
	struct UABP_Zombie_C_AnimNotify_MeleeAttackFinish_Params
	{	};

	/**
	 * Function ABP_Zombie.ABP_Zombie_C.StartMeleeAttack
	 */
	struct UABP_Zombie_C_StartMeleeAttack_Params
	{	};

	/**
	 * Function ABP_Zombie.ABP_Zombie_C.ExecuteUbergraph_ABP_Zombie
	 */
	struct UABP_Zombie_C_ExecuteUbergraph_ABP_Zombie_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
