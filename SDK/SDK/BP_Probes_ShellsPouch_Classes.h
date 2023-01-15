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
	 * BlueprintGeneratedClass BP_Probes_ShellsPouch.BP_Probes_ShellsPouch_C
	 * Size -> 0x0024 (FullSize[0x0690] - InheritedSize[0x066C])
	 */
	class ABP_Probes_ShellsPouch_C : public ABPA_BaseItem_Throwable_C
	{
	public:
		unsigned char                                              UnknownData_9N4V[0x4];                                   // 0x066C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0670(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UGripMotionControllerComponent*                      GrippingController_1;                                    // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              ProbeForThrow;                                           // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ProbeToSpawn;                                            // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetThrowVelocity(float Multiplier, struct FVector* CurrentAvrgLinVel, struct FVector* CurentAvrgAnglVel);
		void SpawnProbe(class AActor** SpawnedProbe);
		void OnUsed();
		void OnEndUsed();
		void ReceiveTick(float DeltaSeconds);
		void ThrowItem();
		void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
		void StopUse();
		void ExecuteUbergraph_BP_Probes_ShellsPouch(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
