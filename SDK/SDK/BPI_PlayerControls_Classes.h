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
	 * BlueprintGeneratedClass BPI_PlayerControls.BPI_PlayerControls_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_PlayerControls_C : public UInterface
	{
	public:
		void TriggerRight(float AngleAxis);
		void TriggerLeft(float AxisAngle);
		void UpdateControllerShifts();
		void AllowOnly(TArray<EControlAction> Actions);
		void AllowAll();
		void BlockAll();
		void EjectMagDrop(bool Right);
		void GetActionButtonName(EControlAction Action, class FString* ButtonName, class UTexture2D** HelpImage, EHand_EHand* DefaultHand);
		void HandHaptics(EHapticsCurve Type, EControllerHand hand);
		void StopHaptics(EControllerHand hand);
		void TurnPlayer(float Degrees);
		void ShowCapTouch(EOculusButton Button, bool Show);
		void BlockInput(TArray<EControlAction> Actions, bool AllowInput);
		void TurnPlayerToFaceActor(class AActor* Actor);
		void ShowButtons(bool Show, TArray<EControlAction> Actions);
		void Sprint();
		void Left(float Axis);
		void Backward(float Axis);
		void Arm(bool Right);
		void EjectMag(bool Right);
		void InteractRight(bool Pressed);
		void InteractLeft(bool Pressed);
		void FireMode(bool Right);
		void RunToggle(bool Pressed);
		void BindRight(bool Pressed);
		void BindLeft(bool Pressed);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
