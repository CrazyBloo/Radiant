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
	 * AnimBlueprintGeneratedClass ABP_Human3.ABP_Human3_C
	 * Size -> 0x2281 (FullSize[0x2539] - InheritedSize[0x02B8])
	 */
	class UABP_Human3_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_RUTU[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_3;                // 0x02F8(0x0190)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x0488(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x04D0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x0628(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x0650(0x0048)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_12;                       // 0x0698(0x00C0)
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
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_11;                       // 0x0908(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x09C8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x0A48(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_10;                       // 0x0AC8(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x0B88(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_9;                        // 0x0C08(0x00C0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5;                        // 0x0CC8(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0DB0(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_8;                        // 0x0DE0(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x0EA0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x0F20(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x0FA0(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x1040(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x10C0(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_7;                        // 0x10F0(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x11B0(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_6;                        // 0x1230(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x12F0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x1370(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x13F0(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x1490(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x1510(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x15B0(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x1650(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x16D0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x1750(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_5;                        // 0x1780(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x1840(0x0080)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x18C0(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x19A8(0x00E8)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0x1A90(0x00C0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x1B50(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x1C10(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x1C90(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1D50(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x1DD0(0x00C0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x1E90(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x1F30(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x2018(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x2100(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x2130(0x00B0)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_2;                // 0x21E0(0x0190)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace;                  // 0x2370(0x0190)
		float                                                      Speed;                                                   // 0x2500(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Direction;                                               // 0x2504(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableJump;                                              // 0x2508(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Jumping;                                                 // 0x2509(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Crouching;                                               // 0x250A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ELocomotionState                                           CurrentLocomotion;                                       // 0x250B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InputPitch;                                              // 0x250C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InputYaw;                                                // 0x2510(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Pistol;                                                  // 0x2514(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3NAI[0x3];                                   // 0x2515(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PistolToRifleBlend;                                      // 0x2518(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            LookAtRotation;                                          // 0x251C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TrackingPlayer;                                          // 0x2528(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DOZK[0x7];                                   // 0x2529(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              SkelMesh;                                                // 0x2530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Reloading;                                               // 0x2538(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void CanJump(bool ShouldJump, bool* bJumping);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_E33368A641B431A8403149AB1C4DE090();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_6CE45C8A466334DB1619FCBC81D3447F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_E83CF9C54AF9867B64E58DAE9C47271D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_LayeredBoneBlend_3E4CADFD4FAC2A81D6EA5EAC0BB7BF95();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_BlendListByBool_48D5116044A4871161628D842DA0B073();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_LayeredBoneBlend_10BF7AA9443BC4A42D8BAD95B39C4790();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_981133DC4B34EC3561DA90B36AB2F26A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_BlendListByBool_1C40E5EB4329DA2CC1946B83949B8506();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_LayeredBoneBlend_06F9706A4F938FA41A2065AD9734DDB2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_LayeredBoneBlend_1EA8E03444C2E291FA16AC9C951D2C86();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_477533B7425E55B968359FB4D1362AA1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_1491590246755BD1D739039D25FF2EB3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_48F7936640A86518F257859A07E8C5F0();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_Jump();
		void AnimNotify_IdleStart();
		void AnimNotify_JogStart();
		void JumpPressed();
		void FireWeapon();
		void StartMeleeAttack();
		void Revive();
		void ReloadWeapon();
		void HitReaction();
		void SetCrouch(bool SetCrouch);
		void Death();
		void ChangeLocomotion(ELocomotionState NewLocomotion);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Human3_AnimGraphNode_TransitionResult_339A21BF401B114C9EEC38A0D0BF20CB();
		void BlueprintBeginPlay();
		void SetTrackPlayer(bool TrackPlayer);
		void SetWeaponType(bool Pistol);
		void ExecuteUbergraph_ABP_Human3(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
