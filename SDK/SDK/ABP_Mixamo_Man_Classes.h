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
	 * AnimBlueprintGeneratedClass ABP_Mixamo_Man.ABP_Mixamo_Man_C
	 * Size -> 0x0390 (FullSize[0x0648] - InheritedSize[0x02B8])
	 */
	class UABP_Mixamo_Man_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_0LPV[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x02C8(0x0030)
		unsigned char                                              UnknownData_GBG4[0x8];                                   // 0x02F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x0300(0x01B0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x04B0(0x0020)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x04D0(0x00E8)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x05B8(0x0020)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x05D8(0x0048)
		struct FVector                                             LookAtTarget;                                            // 0x0620(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TE1M[0x4];                                   // 0x062C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABPA_Char_C*                                         CharActor;                                               // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             MeleeAttackRef;                                          // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Gait;                                                    // 0x0640(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HitAlpha;                                                // 0x0644(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void SetWeaponType(bool Pistol);
		void SetTrackPlayer(bool TrackPlayer);
		void Death();
		void Revive();
		void BlueprintBeginPlay();
		void FireWeapon();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void JumpPressed();
		void SetCrouch(bool SetCrouch);
		void ReloadWeapon();
		void HitReaction();
		void StartMeleeAttack();
		void AnimNotify_FootstepHit();
		void ChangeLocomotion(ELocomotionState NewLocomotion);
		void ExecuteUbergraph_ABP_Mixamo_Man(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
