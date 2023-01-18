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
	 * AnimBlueprintGeneratedClass ABP_Zombie.ABP_Zombie_C
	 * Size -> 0x02C8 (FullSize[0x0580] - InheritedSize[0x02B8])
	 */
	class UABP_Zombie_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_5JUM[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x02F8(0x00E8)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x03E0(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x04E8(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0508(0x0020)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0528(0x0048)
		float                                                      WalkWeight;                                              // 0x0570(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AttackLerp;                                              // 0x0574(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             MeleeAttackRef;                                          // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void JumpPressed();
		void FireWeapon();
		void ReloadWeapon();
		void HitReaction();
		void SetCrouch(bool SetCrouch);
		void SetWeaponType(bool Pistol);
		void SetTrackPlayer(bool TrackPlayer);
		void Death();
		void Revive();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ChangeLocomotion(ELocomotionState NewLocomotion);
		void AnimNotify_FootstepHit();
		void BlueprintBeginPlay();
		void AnimNotify_MeleeAttackFinish();
		void StartMeleeAttack();
		void ExecuteUbergraph_ABP_Zombie(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
