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
	 * AnimBlueprintGeneratedClass ABP_Human2.ABP_Human2_C
	 * Size -> 0x10E4 (FullSize[0x139C] - InheritedSize[0x02B8])
	 */
	class UABP_Human2_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_SSSE[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace;                  // 0x02F8(0x0190)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x0488(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x04D0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x0628(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0650(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0698(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x0758(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0780(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x07C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x07F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0818(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0840(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0868(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0890(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x08B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x08E0(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x0908(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x09F0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0A20(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0AA0(0x0030)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x0AD0(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0B98(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0C18(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x0C98(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x0D38(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0DD8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0E58(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0ED8(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x0F08(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x0FF0(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x1090(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1130(0x0080)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x11B0(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1298(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x12C8(0x00B0)
		float                                                      Speed;                                                   // 0x1378(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Direction;                                               // 0x137C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Enable_Jump;                                             // 0x1380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Jumping;                                                 // 0x1381(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Crouching;                                               // 0x1382(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ELocomotionState                                           CurrentLocomotion;                                       // 0x1383(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InputPitch;                                              // 0x1384(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InputYaw;                                                // 0x1388(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GaitValue;                                               // 0x138C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WalkingSpeed;                                            // 0x1390(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RunningSpeed;                                            // 0x1394(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SprintingSpeed;                                          // 0x1398(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void calcGait();
		void Can_Jump(bool Should_Jump, bool* bJumping);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_DCD91D10409BBED46F9F9BA8C939D4F3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_BlendListByBool_88C25A1544E48E5982233592121174A6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_BlendListByBool_2FEDF374418DBD20CC3D5CB0A1991CCB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_BlendListByBool_9AEE876440F37AF4C2531BBB9C0CB734();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_53764F204D74C1B8B60CDE8AE034EA9A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_BlendListByBool_CADFB79647F71B01DABE9C98DD07A307();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_41C6659646EFCA34A057DAA39366E4D8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_50C37BA54DDA7ABC87CACC8C27901129();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_D9770D164071E4820527B78039A40B6E();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_Jump();
		void AnimNotify_IdleStart();
		void AnimNotify_JogStart();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human2_AnimGraphNode_TransitionResult_F348F9CE46954FEC520654841E4D57C1();
		void StartMeleeAttack();
		void JumpPressed();
		void FireWeapon();
		void Revive();
		void Death();
		void ReloadWeapon();
		void HitReaction();
		void SetCrouch(bool SetCrouch);
		void SetTrackPlayer(bool TrackPlayer);
		void SetWeaponType(bool Pistol);
		void ChangeLocomotion(ELocomotionState NewLocomotion);
		void ExecuteUbergraph_ABP_Human2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
