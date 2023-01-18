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
	 * Function ABP_Fragment2.ABP_Fragment2_C.AnimGraph
	 */
	struct UABP_Fragment2_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_Fragment2.ABP_Fragment2_C.SetCrouch
	 */
	struct UABP_Fragment2_C_SetCrouch_Params
	{
	public:
		bool                                                       SetCrouch;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_Fragment2.ABP_Fragment2_C.SetWeaponType
	 */
	struct UABP_Fragment2_C_SetWeaponType_Params
	{
	public:
		bool                                                       Pistol;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_Fragment2.ABP_Fragment2_C.SetTrackPlayer
	 */
	struct UABP_Fragment2_C_SetTrackPlayer_Params
	{
	public:
		bool                                                       TrackPlayer;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_Fragment2.ABP_Fragment2_C.StartMeleeAttack
	 */
	struct UABP_Fragment2_C_StartMeleeAttack_Params
	{	};

	/**
	 * Function ABP_Fragment2.ABP_Fragment2_C.HitReaction
	 */
	struct UABP_Fragment2_C_HitReaction_Params
	{	};

	/**
	 * Function ABP_Fragment2.ABP_Fragment2_C.ReloadWeapon
	 */
	struct UABP_Fragment2_C_ReloadWeapon_Params
	{	};

	/**
	 * Function ABP_Fragment2.ABP_Fragment2_C.FireWeapon
	 */
	struct UABP_Fragment2_C_FireWeapon_Params
	{	};

	/**
	 * Function ABP_Fragment2.ABP_Fragment2_C.JumpPressed
	 */
	struct UABP_Fragment2_C_JumpPressed_Params
	{	};

	/**
	 * Function ABP_Fragment2.ABP_Fragment2_C.ChangeLocomotion
	 */
	struct UABP_Fragment2_C_ChangeLocomotion_Params
	{
	public:
		ELocomotionState                                           NewLocomotion;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_Fragment2.ABP_Fragment2_C.Death
	 */
	struct UABP_Fragment2_C_Death_Params
	{	};

	/**
	 * Function ABP_Fragment2.ABP_Fragment2_C.AnimNotify_AN_Step
	 */
	struct UABP_Fragment2_C_AnimNotify_AN_Step_Params
	{	};

	/**
	 * Function ABP_Fragment2.ABP_Fragment2_C.Revive
	 */
	struct UABP_Fragment2_C_Revive_Params
	{	};

	/**
	 * Function ABP_Fragment2.ABP_Fragment2_C.BlueprintUpdateAnimation
	 */
	struct UABP_Fragment2_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_Fragment2.ABP_Fragment2_C.ExecuteUbergraph_ABP_Fragment2
	 */
	struct UABP_Fragment2_C_ExecuteUbergraph_ABP_Fragment2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
