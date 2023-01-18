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
	 * BlueprintGeneratedClass BP_ZoneGate_Shortcut.BP_ZoneGate_Shortcut_C
	 * Size -> 0x0048 (FullSize[0x0424] - InheritedSize[0x03DC])
	 */
	class ABP_ZoneGate_Shortcut_C : public ABP_ZoneGate_C
	{
	public:
		unsigned char                                              UnknownData_XSID[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                SM_Shortcut_Rope_01_a1_1;                                // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Shortcut_Post_01_b1_1;                                // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Shortcut_Post_01_b_1;                                 // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FGameplayTag                                        ActivationTrigger;                                       // 0x0400(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		class FText                                                HintText;                                                // 0x0408(0x0018) Edit, BlueprintVisible
		float                                                      HintDuration;                                            // 0x0420(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetTrigger(struct FGameplayTag* Trigger);
		void CheckTrigger(bool* Activated);
		void IsActivated(bool* Activated);
		void SetDisabled(bool Disabled);
		void DoTransfer();
		void BndEvt__BP_ZoneGate_Shortcut_BoxDimentions_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void ExecuteUbergraph_BP_ZoneGate_Shortcut(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
