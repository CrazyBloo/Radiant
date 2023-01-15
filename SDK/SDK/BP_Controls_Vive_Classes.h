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
	 * BlueprintGeneratedClass BP_Controls_Vive.BP_Controls_Vive_C
	 * Size -> 0x0013 (FullSize[0x0317] - InheritedSize[0x0304])
	 */
	class ABP_Controls_Vive_C : public ABPA_Controls_C
	{
	public:
		unsigned char                                              UnknownData_6D5F[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0308(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    SprintPressed;                                           // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DpadCenterPressRight;                                    // 0x0314(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DpadCenterPressLeft;                                     // 0x0315(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CrouchDelay;                                             // 0x0316(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ConvertActionToButton(EControlAction Action, class FString* ButtonName, class UTexture2D** HelpImage, EHand_EHand* DefaultHand);
		void InpActEvt_Grip_Left_K2Node_InputActionEvent_22(const struct FKey& Key);
		void InpActEvt_Grip_Left_K2Node_InputActionEvent_21(const struct FKey& Key);
		void InpActEvt_Grip_Right_K2Node_InputActionEvent_20(const struct FKey& Key);
		void InpActEvt_Grip_Right_K2Node_InputActionEvent_19(const struct FKey& Key);
		void InpActEvt_Vive_center_Left_K2Node_InputActionEvent_18(const struct FKey& Key);
		void InpActEvt_Vive_center_Left_K2Node_InputActionEvent_17(const struct FKey& Key);
		void InpActEvt_Vive_center_Right_K2Node_InputActionEvent_16(const struct FKey& Key);
		void InpActEvt_Vive_center_Right_K2Node_InputActionEvent_15(const struct FKey& Key);
		void InpActEvt_MagEject_Left_K2Node_InputActionEvent_14(const struct FKey& Key);
		void InpActEvt_MagEject_Left_K2Node_InputActionEvent_13(const struct FKey& Key);
		void InpActEvt_MagEject_Right_K2Node_InputActionEvent_12(const struct FKey& Key);
		void InpActEvt_MagEject_Right_K2Node_InputActionEvent_11(const struct FKey& Key);
		void InpActEvt_TurnLeft_Left_K2Node_InputActionEvent_10(const struct FKey& Key);
		void InpActEvt_TurnLeft_Right_K2Node_InputActionEvent_9(const struct FKey& Key);
		void InpActEvt_TurnRight_Left_K2Node_InputActionEvent_8(const struct FKey& Key);
		void InpActEvt_TurnRight_Right_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_Menu_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_Firemode_Right_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_Firemode_Right_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_Firemode_Left_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_Firemode_Left_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Crouch_K2Node_InputActionEvent_1(const struct FKey& Key);
		void HightlightButtons(bool Activate, TArray<EControlAction> Actions);
		void ReceiveBeginPlay();
		void OnTurning_X(float AxisValue);
		void OnMovement_X(float AxisValue);
		void OnMovement_Y(float AxisValue);
		void ExecuteUbergraph_BP_Controls_Vive(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
