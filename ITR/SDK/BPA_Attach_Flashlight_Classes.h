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
	 * BlueprintGeneratedClass BPA_Attach_Flashlight.BPA_Attach_Flashlight_C
	 * Size -> 0x0011 (FullSize[0x0651] - InheritedSize[0x0640])
	 */
	class ABPA_Attach_Flashlight_C : public ABPA_Attachment_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0640(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USpotLightComponent*                                 SpotLight;                                               // 0x0648(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       IsOn_1;                                                  // 0x0650(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetLightItem(bool* IsOn, class ABPA_BaseItem_C** Item);
		void IsOn(bool* On);
		void LightDetection();
		void Off(bool On);
		void ReceiveTick(float DeltaSeconds);
		void OnReconfigure();
		void OnUsed();
		void Hide(bool Show);
		void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
		void ExecuteUbergraph_BPA_Attach_Flashlight(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
