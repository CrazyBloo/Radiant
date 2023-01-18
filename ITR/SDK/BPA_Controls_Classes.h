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
	 * BlueprintGeneratedClass BPA_Controls.BPA_Controls_C
	 * Size -> 0x00C0 (FullSize[0x0358] - InheritedSize[0x0298])
	 */
	class ABPA_Controls_C : public APRBasicActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVRNotificationsComponent*                           VRNotifications;                                         // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Vignetter_Transparency_79F476C84253A860CAE77980A777854D; // 0x02B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Vignetter__Direction_79F476C84253A860CAE77980A777854D;   // 0x02B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IMCM[0x3];                                   // 0x02B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Vignetter;                                               // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RInputDelay;                                             // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ATO9[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APawn*                                               Player;                                                  // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Smooth;                                                  // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D62H[0x3];                                   // 0x02D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurnYAxis;                                               // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsVive;                                                  // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NS9T[0x3];                                   // 0x02D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurnXAxis;                                               // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TurnVignette;                                            // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MoveVignette;                                            // 0x02E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E0A0[0x6];                                   // 0x02E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             TriggerPressedDispatcher;                                // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FVector                                             Default;                                                 // 0x02F8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WYCF[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EControlAction, bool>                                 ControlAllowance;                                        // 0x0308(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void IsControlAllowed(EControlAction ControlAction, bool* bIsAllowed);
		void AsString(TArray<EControlAction>* Actions, class FString* String);
		void BlockInput(TArray<EControlAction>* Actions, bool bAllow);
		void CheckCanTurn(float AxisValue, bool* TurnAllowed);
		void GetDefaultHand(EControlAction Action, EHand_EHand DefaultHand, EHand_EHand* hand);
		void GetFormattedButtonName(class UDataTable* DataTable, EControlAction Action, class FString* Name, EHand_EHand* hand, class UTexture2D** HelpImage);
		void SwapAxis(const class FName& Axis_A, const class FName& Axis_B);
		void SwapActions(const class FName& Action_A, const class FName& Action_B);
		void DebugLog();
		void RebindAction();
		void RebindAxis(const class FName& AxisName, const struct FKey& NewKey);
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
