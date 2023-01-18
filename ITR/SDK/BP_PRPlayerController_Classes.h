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
	 * BlueprintGeneratedClass BP_PRPlayerController.BP_PRPlayerController_C
	 * Size -> 0x0038 (FullSize[0x0620] - InheritedSize[0x05E8])
	 */
	class ABP_PRPlayerController_C : public APRPlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      FadeTime;                                                // 0x05F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PhotocameraSubtitlesBlocked;                             // 0x05F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RInputDelay;                                             // 0x05F5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W8HM[0x2];                                   // 0x05F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABPA_Controls_C*                                     Controls;                                                // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UHapticFeedbackEffect_Curve*                         Curve;                                                   // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EPRControllerType                                          ControllerType;                                          // 0x0608(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G9XL[0x7];                                   // 0x0609(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_DetectionHint_C*                                 DetectionHint;                                           // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_SpectatorPawn_C*                                 Spectator;                                               // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FText GetDamageDealerName();
		struct FGameplayTag GetDamageDealerTag();
		void GetActionButtonName(EControlAction Action, class FString* ButtonName, class UTexture2D** HelpImage, EHand_EHand* DefaultHand);
		float GetTurning_Y();
		float GetTurning_X();
		EPRControllerType GetControllerType();
		void AsString(TArray<EControlAction>* Actions, class FString* String);
		void HandHaptic(EHapticsCurve HapticType, EControllerHand hand);
		void bLockMovement(bool On);
		void BindLeft(bool Pressed);
		void BindRight(bool Pressed);
		void RunToggle(bool Pressed);
		void FireMode(bool Right);
		void InteractLeft(bool Pressed);
		void InteractRight(bool Pressed);
		void EjectMag(bool Right);
		void Arm(bool Right);
		void Backward(float Axis);
		void Left(float Axis);
		void Sprint();
		void TurnPlayerToFaceActor(class AActor* Actor);
		void ShowCapTouch(EOculusButton Button, bool Show);
		void TurnPlayer(float Degrees);
		void EjectMagDrop(bool Right);
		void UpdateControllerShifts();
		void TriggerLeft(float AxisAngle);
		void TriggerRight(float AngleAxis);
		void ToggleAimSmoothing(bool bIsLeft);
		void ReceiveBeginPlay();
		void StartPossesCheck();
		void BlockInput(TArray<EControlAction> Actions, bool AllowInput);
		void HandHaptics(EHapticsCurve Type, EControllerHand hand);
		void ShowButtons(bool Show, TArray<EControlAction> Actions);
		void StopHaptics(EControllerHand hand);
		void BlockAll();
		void AllowAll();
		void AllowOnly(TArray<EControlAction> Actions);
		void InitControlScheme();
		void WaitForVRFocus();
		void ExecuteUbergraph_BP_PRPlayerController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
