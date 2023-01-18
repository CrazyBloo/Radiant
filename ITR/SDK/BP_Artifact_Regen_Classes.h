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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_Artifact_Regen.BP_Artifact_Regen_C
	 * Size -> 0x0010 (FullSize[0x0678] - InheritedSize[0x0668])
	 */
	class ABP_Artifact_Regen_C : public ABPA_Artifact_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0668(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x0670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ApplyEffect();
		void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
		void OnUsed();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void StopUse();
		void ExecuteUbergraph_BP_Artifact_Regen(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
