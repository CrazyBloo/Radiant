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
	 * BlueprintGeneratedClass BPA_Controls.BPA_Controls_C
	 * Size -> 0x006C (FullSize[0x0304] - InheritedSize[0x0298])
	 */
	class ABPA_Controls_C : public APRBasicActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVRNotificationsComponent*                           VRNotifications;                                         // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Vignetter_Transparency_79F476C84253A860CAE77980A777854D; // 0x02B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Vignetter__Direction_79F476C84253A860CAE77980A777854D;   // 0x02B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_645A[0x3];                                   // 0x02B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Vignetter;                                               // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AllowGrabLeft;                                           // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllowGrabRight;                                          // 0x02C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllowInteractLeft;                                       // 0x02C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllowInteractRight;                                      // 0x02C3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllowMove;                                               // 0x02C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllowMenu;                                               // 0x02C5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllowTurn;                                               // 0x02C6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RInputDelay;                                             // 0x02C7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APawn*                                               Player;                                                  // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AllowFirearmControl;                                     // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Smooth;                                                  // 0x02D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QNMY[0x2];                                   // 0x02D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurnYAxis;                                               // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsVive;                                                  // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllowInspect;                                            // 0x02D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllowCrouch;                                             // 0x02DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IB6W[0x1];                                   // 0x02DB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurnXAxis;                                               // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TurnVignette;                                            // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MoveVignette;                                            // 0x02E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_53VK[0x6];                                   // 0x02E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             TriggerPressedDispatcher;                                // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FVector                                             Default;                                                 // 0x02F8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CheckCanTurn(float AxisValue, bool* TurnAllowed);
		void Get_Default_Hand(EControlAction Action, EHand_EHand DefaultHand, EHand_EHand* hand);
		void Get_Formatted_Button_Name(class UDataTable* DataTable, EControlAction Action, class FString* Name, EHand_EHand* hand, class UTexture2D** HelpImage);
		void SwapAxis(const class FName& Axis_A, const class FName& Axis_B);
		void SwapActions(const class FName& Action_A, const class FName& Action_B);
		void DebugLog();
		void RebindAction();
		void Rebind_Axis(const class FName& AxisName, const struct FKey& NewKey);
		void DehighlightAllButtons();
		void HighlightButton(bool Highlight, EHand_EHand hand, EControlMaterialName Control);
		void ConvertActionToButton(EControlAction Action, class FString* ButtonName, class UTexture2D** HelpImage, EHand_EHand* DefaultHand);
		void Vignetter__FinishedFunc();
		void Vignetter__UpdateFunc();
		void InpActEvt_Inspect_Left_K2Node_InputActionEvent_19(const struct FKey& Key);
		void InpActEvt_Inspect_Right_K2Node_InputActionEvent_18(const struct FKey& Key);
		void InpActEvt_MagEject_Right_K2Node_InputActionEvent_17(const struct FKey& Key);
		void InpActEvt_MagEject_Right_K2Node_InputActionEvent_16(const struct FKey& Key);
		void InpActEvt_Firemode_Right_K2Node_InputActionEvent_15(const struct FKey& Key);
		void InpActEvt_Firemode_Right_K2Node_InputActionEvent_14(const struct FKey& Key);
		void InpActEvt_Firemode_Left_K2Node_InputActionEvent_13(const struct FKey& Key);
		void InpActEvt_Firemode_Left_K2Node_InputActionEvent_12(const struct FKey& Key);
		void InpActEvt_Menu_K2Node_InputActionEvent_11(const struct FKey& Key);
		void InpActEvt_MagEject_Left_K2Node_InputActionEvent_10(const struct FKey& Key);
		void InpActEvt_MagEject_Left_K2Node_InputActionEvent_9(const struct FKey& Key);
		void InpActEvt_Vive_Sprint_Left_K2Node_InputActionEvent_8(const struct FKey& Key);
		void InpActEvt_Vive_Sprint_Right_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_Thumbstick_Left_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_Thumbstick_Right_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_Trigger_Left_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_Trigger_Left_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_Trigger_Right_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Trigger_Right_K2Node_InputActionEvent_1(const struct FKey& Key);
		void HightlightButtons(bool Activate, TArray<EControlAction> Actions);
		void OnGameStarted();
		void InpAxisEvt_Movement_X_K2Node_InputAxisEvent_1(float AxisValue);
		void InpAxisEvt_Movement_Y_K2Node_InputAxisEvent_2(float AxisValue);
		void InpAxisEvt_Turning_X_K2Node_InputAxisEvent_3(float AxisValue);
		void InpAxisEvt_Turning_Y_K2Node_InputAxisEvent_4(float AxisValue);
		void OnMovement_X(float AxisValue);
		void OnMovement_Y(float AxisValue);
		void OnTurning_X(float AxisValue);
		void OnTurning_Y(float AxisValue);
		void OneTimeShowVignette();
		void EventInspect(bool IsLeft);
		void InpAxisEvt_TriggerAxis_Left_K2Node_InputAxisEvent_5(float AxisValue);
		void InpAxisEvt_TriggerAxis_Right_K2Node_InputAxisEvent_6(float AxisValue);
		void Crouch(float Axis);
		void DoShowVignette(bool bShow);
		void ProcessVignetteOnTurn(float AxisValue);
		void ProcessVignetteMove(float AxisValue);
		void ImmediatelyHideVignette();
		void SetVignetteValue(float Transparancy);
		void ResetRotation();
		void ExecuteUbergraph_BPA_Controls(int32_t EntryPoint);
		void TriggerPressedDispatcher__DelegateSignature(bool Left);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
