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
	 * BlueprintGeneratedClass BP_Flashlight_Pocket.BP_Flashlight_Pocket_C
	 * Size -> 0x0017 (FullSize[0x0644] - InheritedSize[0x062D])
	 */
	class ABP_Flashlight_Pocket_C : public ABP_Flashlight_C
	{
	public:
		unsigned char                                              UnknownData_LNDB[0x3];                                   // 0x062D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0630(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       LightState;                                              // 0x0638(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SGCO[0x3];                                   // 0x0639(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        LightMark;                                               // 0x063C(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void TurnOffLightHelper();
		void TurnOffBasedOnFlashlightType();
		void ToggleLight(bool State);
		void ReceiveBeginPlay();
		void ThumbLeft();
		void BindEvents();
		void OnGameDataSave();
		void OnLevelPrepare(const struct FGameplayTag& Value);
		void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
		void TurnOffBasedOnLightType();
		void ExecuteUbergraph_BP_Flashlight_Pocket(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
