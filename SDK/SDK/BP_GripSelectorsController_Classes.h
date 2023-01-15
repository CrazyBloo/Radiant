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
	 * BlueprintGeneratedClass BP_GripSelectorsController.BP_GripSelectorsController_C
	 * Size -> 0x0470 (FullSize[0x0710] - InheritedSize[0x02A0])
	 */
	class ABP_GripSelectorsController_C : public AGripSelectorsController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            PS_SelectorRightTrigger;                                 // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_SelectorLeftTrigger;                                  // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_SelectorLeftGrip;                                     // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            PS_SelectorRightGrip;                                    // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FGripOverlap                                        gripLeft;                                                // 0x02D0(0x0110) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference
		struct FGripOverlap                                        selectedGripLeft;                                        // 0x03E0(0x0110) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference
		struct FGripOverlap                                        gripRight;                                               // 0x04F0(0x0110) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference
		struct FGripOverlap                                        selectedGripRight;                                       // 0x0600(0x0110) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference

	public:
		void UpdateSelectors(EPRHand hand);
		void ShowGripSelector(EPRHand hand, bool Distance);
		void GetGripPrimitive(EPRHand hand, class UPrimitiveComponent** Primitive, struct FVector* Point, bool* selected);
		void ShowTriggerSelector(EPRHand hand);
		void GetTriggerPrimitiveLocation(EPRHand hand, struct FVector* );
		void GetTriggerPrimitive(EPRHand hand, class UPrimitiveComponent** );
		void HideSelectors(EPRHand hand, bool Grip, bool Trigger);
		void UpdateGrips(EPRHand hand);
		void ReceiveTick(float DeltaSeconds);
		void OnGameStarted();
		void ShowSelector(EPRHand hand, bool Distance);
		void HideSelector(EPRHand hand);
		void HideAllSelectors();
		void ExecuteUbergraph_BP_GripSelectorsController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
