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
	 * BlueprintGeneratedClass BP_Controls_WMR.BP_Controls_WMR_C
	 * Size -> 0x0014 (FullSize[0x036C] - InheritedSize[0x0358])
	 */
	class ABP_Controls_WMR_C : public ABPA_Controls_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       SprintToggle;                                            // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A6BW[0x3];                                   // 0x0361(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MovementDeadZone;                                        // 0x0364(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SprintThumbstick;                                        // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CheckCanTurn(float AxisValue, bool* TurnAllowed);
		void ConvertActionToButton(EControlAction Action, class FString* ButtonName, class UTexture2D** HelpImage, EHand_EHand* DefaultHand);
		void InpActEvt_Grip_Left_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_Grip_Left_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_Grip_Right_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Grip_Right_K2Node_InputActionEvent_1(const struct FKey& Key);
		void HightlightButtons(bool Activate, TArray<EControlAction> Actions);
		void ReceiveBeginPlay();
		void OnTurning_Y(float AxisValue);
		void OnMovement_X(float AxisValue);
		void OnMovement_Y(float AxisValue);
		void ExecuteUbergraph_BP_Controls_WMR(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
