﻿#pragma once

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
	// # Enums
	// --------------------------------------------------
	/**
	 * BoneSkeletalMesh SK_Milicioner_01.SK_Milicioner_01
	 */
	enum class EBone_SK_Milicioner_01 : uint8_t
	{
		Root                = 0,
		pelvis              = 1,
		spine_01            = 2,
		spine_02            = 3,
		spine_03            = 4,
		clavicle_l          = 5,
		upperarm_l          = 6,
		lowerarm_l          = 7,
		hand_l              = 8,
		index_01_l          = 9,
		index_02_l          = 10,
		index_03_l          = 11,
		middle_01_l         = 12,
		middle_02_l         = 13,
		middle_03_l         = 14,
		pinky_01_l          = 15,
		pinky_02_l          = 16,
		pinky_03_l          = 17,
		ring_01_l           = 18,
		ring_02_l           = 19,
		ring_03_l           = 20,
		thumb_01_l          = 21,
		thumb_02_l          = 22,
		thumb_03_l          = 23,
		lowerarm_twist_01_l = 24,
		upperarm_twist_01_l = 25,
		clavicle_r          = 26,
		upperarm_r          = 27,
		lowerarm_r          = 28,
		Hand_R              = 29,
		index_01_r          = 30,
		index_02_r          = 31,
		index_03_r          = 32,
		middle_01_r         = 33,
		middle_02_r         = 34,
		middle_03_r         = 35,
		pinky_01_r          = 36,
		pinky_02_r          = 37,
		pinky_03_r          = 38,
		ring_01_r           = 39,
		ring_02_r           = 40,
		ring_03_r           = 41,
		thumb_01_r          = 42,
		thumb_02_r          = 43,
		thumb_03_r          = 44,
		lowerarm_twist_01_r = 45,
		upperarm_twist_01_r = 46,
		neck_01             = 47,
		Head                = 48,
		thigh_l             = 49,
		calf_l              = 50,
		calf_twist_01_l     = 51,
		foot_l              = 52,
		ball_l              = 53,
		thigh_twist_01_l    = 54,
		thigh_r             = 55,
		calf_r              = 56,
		calf_twist_01_r     = 57,
		foot_r              = 58,
		ball_r              = 59,
		thigh_twist_01_r    = 60,
		ik_foot_root        = 61,
		ik_foot_l           = 62,
		ik_foot_r           = 63,
		ik_hand_root        = 64,
		ik_hand_gun         = 65,
		ik_hand_l           = 66,
		ik_hand_r           = 67,
		VBik_foot_l_Offset  = 68,
		VBik_foot_r_Offset  = 69,
		VBRHS_ik_hand_gun   = 70,
		VBLHS_ik_hand_gun   = 71,
		VBRHS_ik_hand_l     = 72,
		VBLHS_ik_hand_r     = 73,
		VBik_knee_target_l  = 74,
		VBik_knee_target_r  = 75,
		VBCurves            = 76,
		VBfoot_target_l     = 77,
		VBfoot_target_r     = 78
	};

	/**
	 * BoneSkeletalMesh SM_Character_Gloves_01_Right.SM_Character_Gloves_01_Right
	 */
	enum class EBone_SM_Character_Gloves_01_Right : uint8_t
	{
		Root                = 0,
		ik_foot_root        = 1,
		ik_foot_l           = 2,
		ik_foot_r           = 3,
		ik_hand_root        = 4,
		ik_hand_gun         = 5,
		ik_hand_l           = 6,
		ik_hand_r           = 7,
		pelvis              = 8,
		back_belt           = 9,
		front_belt          = 10,
		l_side_belt         = 11,
		r_side_belt         = 12,
		spine_01            = 13,
		l_back_rig_01       = 14,
		l_front_rig_03      = 15,
		l_side_rig_01       = 16,
		r_back_rig_01       = 17,
		r_front_rig_02      = 18,
		r_side_rig_01       = 19,
		spine_02            = 20,
		l_front_rig_01      = 21,
		l_front_rig_02      = 22,
		r_front_rig_01      = 23,
		radio_push          = 24,
		spine_03            = 25,
		back_rig_01         = 26,
		clavicle_l          = 27,
		radio_wire          = 28,
		upperarm_l          = 29,
		lowerarm_l          = 30,
		hand_l              = 31,
		index_01_l          = 32,
		index_02_l          = 33,
		index_03_l          = 34,
		middle_01_l         = 35,
		middle_02_l         = 36,
		middle_03_l         = 37,
		pinky_01_l          = 38,
		pinky_02_l          = 39,
		pinky_03_l          = 40,
		ring_01_l           = 41,
		ring_02_l           = 42,
		ring_03_l           = 43,
		thumb_01_l          = 44,
		thumb_02_l          = 45,
		thumb_03_l          = 46,
		lowerarm_twist_01_l = 47,
		upperarm_twist_01_l = 48,
		clavicle_r          = 49,
		upperarm_r          = 50,
		lowerarm_r          = 51,
		Hand_R              = 52,
		index_01_r          = 53,
		index_02_r          = 54,
		index_03_r          = 55,
		middle_01_r         = 56,
		middle_02_r         = 57,
		middle_03_r         = 58,
		pinky_01_r          = 59,
		pinky_02_r          = 60,
		pinky_03_r          = 61,
		ring_01_r           = 62,
		ring_02_r           = 63,
		ring_03_r           = 64,
		thumb_01_r          = 65,
		thumb_02_r          = 66,
		thumb_03_r          = 67,
		lowerarm_twist_01_r = 68,
		upperarm_twist_01_r = 69,
		neck_01             = 70,
		Head                = 71,
		faceAttach          = 72,
		brow_mid            = 73,
		brow_mid_l          = 74,
		brow_mid_r          = 75,
		brow_outer_l        = 76,
		brow_outer_r        = 77,
		cheek_inner_l       = 78,
		cheek_inner_r       = 79,
		eye_l               = 80,
		eye_lid_lower_mid_l = 81,
		eye_lid_upper_mid_l = 82,
		eye_r               = 83,
		eye_lid_lower_mid_r = 84,
		eye_lid_upper_mid_r = 85,
		jaw                 = 86,
		lip_lower_mid       = 87,
		lip_lower_outer_l   = 88,
		lip_lower_outer_r   = 89,
		teeth_lower         = 90,
		tongue              = 91,
		lip_corner_l        = 92,
		lip_corner_r        = 93,
		lip_upper_mid       = 94,
		lip_upper_outer_l   = 95,
		lip_upper_outer_r   = 96,
		nose_bridge         = 97,
		nose_tip            = 98,
		teeth_upper         = 99,
		gmask               = 100,
		gmask_can_l         = 101,
		gmask_can_r         = 102,
		Helmet              = 103,
		radio               = 104,
		thigh_l             = 105,
		calf_l              = 106,
		calf_twist_01_l     = 107,
		foot_l              = 108,
		ball_l              = 109,
		thigh_twist_01_l    = 110,
		l_leg_rig_01        = 111,
		thigh_r             = 112,
		calf_r              = 113,
		calf_twist_01_r     = 114,
		foot_r              = 115,
		ball_r              = 116,
		thigh_twist_01_r    = 117,
		holster_rig         = 118,
		pistol_rig          = 119,
		r_leg_rig_01        = 120,
		lowerarm_twist_02_l = 121,
		lowerarm_twist_03_l = 122,
		lowerarm_twist_02_r = 123,
		lowerarm_twist_03_r = 124,
		VBthigh_l_calf_l    = 125,
		VBthigh_r_calf_r    = 126
	};

	/**
	 * BoneSkeletalMesh SK_Backpack_001.SK_Backpack_001
	 */
	enum class EBone_SK_Backpack_001 : uint8_t
	{
		Bone_000     = 0,
		Bone_001     = 1,
		Bone_002     = 2,
		Bone_003     = 3,
		Bone_004     = 4,
		Bone_005     = 5,
		Bone_006     = 6,
		Bone_006_end = 7
	};

	/**
	 * BoneSkeletalMesh SM_BTR70.SM_BTR70
	 */
	enum class EBone_SM_BTR70 : uint8_t
	{
		Root          = 0,
		FR1           = 1,
		FR2           = 2,
		BR1           = 3,
		BR2           = 4,
		BL2           = 5,
		BL1           = 6,
		FL2           = 7,
		FL1           = 8,
		Turret        = 9,
		Big_Gun       = 10,
		Small_Gun     = 11,
		FR1_end       = 12,
		FR2_end       = 13,
		BR1_end       = 14,
		BR2_end       = 15,
		BL2_end       = 16,
		BL1_end       = 17,
		FL2_end       = 18,
		FL1_end       = 19,
		Big_Gun_end   = 20,
		Small_Gun_end = 21
	};

	/**
	 * BoneSkeletalMesh SM_Character_Gloves_Body_01_Left.SM_Character_Gloves_Body_01_Left
	 */
	enum class EBone_SM_Character_Gloves_Body_01_Left : uint8_t
	{
		Root                = 0,
		ik_foot_root        = 1,
		ik_foot_l           = 2,
		ik_foot_r           = 3,
		ik_hand_root        = 4,
		ik_hand_gun         = 5,
		ik_hand_l           = 6,
		ik_hand_r           = 7,
		pelvis              = 8,
		back_belt           = 9,
		front_belt          = 10,
		l_side_belt         = 11,
		r_side_belt         = 12,
		spine_01            = 13,
		l_back_rig_01       = 14,
		l_front_rig_03      = 15,
		l_side_rig_01       = 16,
		r_back_rig_01       = 17,
		r_front_rig_02      = 18,
		r_side_rig_01       = 19,
		spine_02            = 20,
		l_front_rig_01      = 21,
		l_front_rig_02      = 22,
		r_front_rig_01      = 23,
		radio_push          = 24,
		spine_03            = 25,
		back_rig_01         = 26,
		clavicle_l          = 27,
		radio_wire          = 28,
		upperarm_l          = 29,
		lowerarm_l          = 30,
		hand_l              = 31,
		index_01_l          = 32,
		index_02_l          = 33,
		index_03_l          = 34,
		middle_01_l         = 35,
		middle_02_l         = 36,
		middle_03_l         = 37,
		pinky_01_l          = 38,
		pinky_02_l          = 39,
		pinky_03_l          = 40,
		ring_01_l           = 41,
		ring_02_l           = 42,
		ring_03_l           = 43,
		thumb_01_l          = 44,
		thumb_02_l          = 45,
		thumb_03_l          = 46,
		lowerarm_twist_01_l = 47,
		upperarm_twist_01_l = 48,
		clavicle_r          = 49,
		upperarm_r          = 50,
		lowerarm_r          = 51,
		Hand_R              = 52,
		index_01_r          = 53,
		index_02_r          = 54,
		index_03_r          = 55,
		middle_01_r         = 56,
		middle_02_r         = 57,
		middle_03_r         = 58,
		pinky_01_r          = 59,
		pinky_02_r          = 60,
		pinky_03_r          = 61,
		ring_01_r           = 62,
		ring_02_r           = 63,
		ring_03_r           = 64,
		thumb_01_r          = 65,
		thumb_02_r          = 66,
		thumb_03_r          = 67,
		lowerarm_twist_01_r = 68,
		upperarm_twist_01_r = 69,
		neck_01             = 70,
		Head                = 71,
		faceAttach          = 72,
		brow_mid            = 73,
		brow_mid_l          = 74,
		brow_mid_r          = 75,
		brow_outer_l        = 76,
		brow_outer_r        = 77,
		cheek_inner_l       = 78,
		cheek_inner_r       = 79,
		eye_l               = 80,
		eye_lid_lower_mid_l = 81,
		eye_lid_upper_mid_l = 82,
		eye_r               = 83,
		eye_lid_lower_mid_r = 84,
		eye_lid_upper_mid_r = 85,
		jaw                 = 86,
		lip_lower_mid       = 87,
		lip_lower_outer_l   = 88,
		lip_lower_outer_r   = 89,
		teeth_lower         = 90,
		tongue              = 91,
		lip_corner_l        = 92,
		lip_corner_r        = 93,
		lip_upper_mid       = 94,
		lip_upper_outer_l   = 95,
		lip_upper_outer_r   = 96,
		nose_bridge         = 97,
		nose_tip            = 98,
		teeth_upper         = 99,
		gmask               = 100,
		gmask_can_l         = 101,
		gmask_can_r         = 102,
		Helmet              = 103,
		radio               = 104,
		thigh_l             = 105,
		calf_l              = 106,
		calf_twist_01_l     = 107,
		foot_l              = 108,
		ball_l              = 109,
		thigh_twist_01_l    = 110,
		l_leg_rig_01        = 111,
		thigh_r             = 112,
		calf_r              = 113,
		calf_twist_01_r     = 114,
		foot_r              = 115,
		ball_r              = 116,
		thigh_twist_01_r    = 117,
		holster_rig         = 118,
		pistol_rig          = 119,
		r_leg_rig_01        = 120,
		lowerarm_twist_02_l = 121,
		lowerarm_twist_03_l = 122,
		lowerarm_twist_02_r = 123,
		lowerarm_twist_03_r = 124,
		VBthigh_l_calf_l    = 125,
		VBthigh_r_calf_r    = 126
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif