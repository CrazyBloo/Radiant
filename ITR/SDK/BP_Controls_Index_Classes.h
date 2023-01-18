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
	 * BlueprintGeneratedClass BP_Controls_Index.BP_Controls_Index_C
	 * Size -> 0x0048 (FullSize[0x03A0] - InheritedSize[0x0358])
	 */
	class ABP_Controls_Index_C : public ABPA_Controls_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      MovementDeadZone;                                        // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GripLeftPressed;                                         // 0x0364(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       GripRightPressed;                                        // 0x0365(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0I0D[0x2];                                   // 0x0366(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UnGripThreshold;                                         // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnY;                                                   // 0x036C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SprintToggle;                                            // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I7A3[0x3];                                   // 0x0371(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFingerCurls                                        LFingerCurls;                                            // 0x0374(0x0014) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FFingerCurls                                        RFingerCurls;                                            // 0x0388(0x0014) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		float                                                      GripThreshold;                                           // 0x039C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ConvertActionToButton(EControlAction Action, class FString* ButtonName, class UTexture2D** HelpImage, EHand_EHand* DefaultHand);
		void InpActEvt_Grip_Left_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_Grip_Left_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_Grip_Right_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Grip_Right_K2Node_InputActionEvent_1(const struct FKey& Key);
		void InpAxisEvt_GripForce_Left_K2Node_InputAxisEvent_1(float AxisValue);
		void InpAxisEvt_GripForce_Right_K2Node_InputAxisEvent_2(float AxisValue);
		void HightlightButtons(bool Activate, TArray<EControlAction> Actions);
		void OnMovement_X(float AxisValue);
		void OnMovement_Y(float AxisValue);
		void OnTurning_Y(float AxisValue);
		void ExecuteUbergraph_BP_Controls_Index(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
