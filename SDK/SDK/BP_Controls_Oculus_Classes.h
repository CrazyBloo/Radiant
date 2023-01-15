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
	 * BlueprintGeneratedClass BP_Controls_Oculus.BP_Controls_Oculus_C
	 * Size -> 0x0010 (FullSize[0x0314] - InheritedSize[0x0304])
	 */
	class ABP_Controls_Oculus_C : public ABPA_Controls_C
	{
	public:
		unsigned char                                              UnknownData_O991[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0308(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      MovementDeadZone;                                        // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ConvertActionToButton(EControlAction Action, class FString* ButtonName, class UTexture2D** HelpImage, EHand_EHand* DefaultHand);
		void InpActEvt_Grip_Left_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_Grip_Left_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_Grip_Right_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Grip_Right_K2Node_InputActionEvent_1(const struct FKey& Key);
		void InpActEvt_One_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void HightlightButtons(bool Activate, TArray<EControlAction> Actions);
		void OnMovement_X(float AxisValue);
		void OnMovement_Y(float AxisValue);
		void OnTurning_Y(float AxisValue);
		void ExecuteUbergraph_BP_Controls_Oculus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
