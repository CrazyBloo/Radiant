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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPA_Controls.BPA_Controls_C.CheckCanTurn
	 */
	struct ABPA_Controls_C_CheckCanTurn_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TurnAllowed;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.Get Default Hand
	 */
	struct ABPA_Controls_C_Get_Default_Hand_Params
	{
	public:
		EControlAction                                             Action;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHand_EHand                                                DefaultHand;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHand_EHand                                                hand;                                                    // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.Get Formatted Button Name
	 */
	struct ABPA_Controls_C_Get_Formatted_Button_Name_Params
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControlAction                                             Action;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WROG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Name;                                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		EHand_EHand                                                hand;                                                    // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_61U1[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          HelpImage;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.SwapAxis
	 */
	struct ABPA_Controls_C_SwapAxis_Params
	{
	public:
		class FName                                                Axis_A;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Axis_B;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.SwapActions
	 */
	struct ABPA_Controls_C_SwapActions_Params
	{
	public:
		class FName                                                Action_A;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Action_B;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.DebugLog
	 */
	struct ABPA_Controls_C_DebugLog_Params
	{	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.RebindAction
	 */
	struct ABPA_Controls_C_RebindAction_Params
	{	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.Rebind Axis
	 */
	struct ABPA_Controls_C_Rebind_Axis_Params
	{
	public:
		class FName                                                AxisName;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FKey                                                NewKey;                                                  // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.DehighlightAllButtons
	 */
	struct ABPA_Controls_C_DehighlightAllButtons_Params
	{	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.HighlightButton
	 */
	struct ABPA_Controls_C_HighlightButton_Params
	{
	public:
		bool                                                       Highlight;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EHand_EHand                                                hand;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControlMaterialName                                       Control;                                                 // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.ConvertActionToButton
	 */
	struct ABPA_Controls_C_ConvertActionToButton_Params
	{
	public:
		EControlAction                                             Action;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PXPR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ButtonName;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class UTexture2D*                                          HelpImage;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHand_EHand                                                DefaultHand;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.Vignetter__FinishedFunc
	 */
	struct ABPA_Controls_C_Vignetter__FinishedFunc_Params
	{	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.Vignetter__UpdateFunc
	 */
	struct ABPA_Controls_C_Vignetter__UpdateFunc_Params
	{	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpActEvt_Inspect_Left_K2Node_InputActionEvent_19
	 */
	struct ABPA_Controls_C_InpActEvt_Inspect_Left_K2Node_InputActionEvent_19_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpActEvt_Inspect_Right_K2Node_InputActionEvent_18
	 */
	struct ABPA_Controls_C_InpActEvt_Inspect_Right_K2Node_InputActionEvent_18_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpActEvt_MagEject_Right_K2Node_InputActionEvent_17
	 */
	struct ABPA_Controls_C_InpActEvt_MagEject_Right_K2Node_InputActionEvent_17_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpActEvt_MagEject_Right_K2Node_InputActionEvent_16
	 */
	struct ABPA_Controls_C_InpActEvt_MagEject_Right_K2Node_InputActionEvent_16_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpActEvt_Firemode_Right_K2Node_InputActionEvent_15
	 */
	struct ABPA_Controls_C_InpActEvt_Firemode_Right_K2Node_InputActionEvent_15_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpActEvt_Firemode_Right_K2Node_InputActionEvent_14
	 */
	struct ABPA_Controls_C_InpActEvt_Firemode_Right_K2Node_InputActionEvent_14_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpActEvt_Firemode_Left_K2Node_InputActionEvent_13
	 */
	struct ABPA_Controls_C_InpActEvt_Firemode_Left_K2Node_InputActionEvent_13_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpActEvt_Firemode_Left_K2Node_InputActionEvent_12
	 */
	struct ABPA_Controls_C_InpActEvt_Firemode_Left_K2Node_InputActionEvent_12_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpActEvt_Menu_K2Node_InputActionEvent_11
	 */
	struct ABPA_Controls_C_InpActEvt_Menu_K2Node_InputActionEvent_11_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpActEvt_MagEject_Left_K2Node_InputActionEvent_10
	 */
	struct ABPA_Controls_C_InpActEvt_MagEject_Left_K2Node_InputActionEvent_10_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpActEvt_MagEject_Left_K2Node_InputActionEvent_9
	 */
	struct ABPA_Controls_C_InpActEvt_MagEject_Left_K2Node_InputActionEvent_9_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpActEvt_Vive_Sprint_Left_K2Node_InputActionEvent_8
	 */
	struct ABPA_Controls_C_InpActEvt_Vive_Sprint_Left_K2Node_InputActionEvent_8_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpActEvt_Vive_Sprint_Right_K2Node_InputActionEvent_7
	 */
	struct ABPA_Controls_C_InpActEvt_Vive_Sprint_Right_K2Node_InputActionEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpActEvt_Thumbstick_Left_K2Node_InputActionEvent_6
	 */
	struct ABPA_Controls_C_InpActEvt_Thumbstick_Left_K2Node_InputActionEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpActEvt_Thumbstick_Right_K2Node_InputActionEvent_5
	 */
	struct ABPA_Controls_C_InpActEvt_Thumbstick_Right_K2Node_InputActionEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpActEvt_Trigger_Left_K2Node_InputActionEvent_4
	 */
	struct ABPA_Controls_C_InpActEvt_Trigger_Left_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpActEvt_Trigger_Left_K2Node_InputActionEvent_3
	 */
	struct ABPA_Controls_C_InpActEvt_Trigger_Left_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpActEvt_Trigger_Right_K2Node_InputActionEvent_2
	 */
	struct ABPA_Controls_C_InpActEvt_Trigger_Right_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpActEvt_Trigger_Right_K2Node_InputActionEvent_1
	 */
	struct ABPA_Controls_C_InpActEvt_Trigger_Right_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.HightlightButtons
	 */
	struct ABPA_Controls_C_HightlightButtons_Params
	{
	public:
		bool                                                       Activate;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QTP9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<EControlAction>                                     Actions;                                                 // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.OnGameStarted
	 */
	struct ABPA_Controls_C_OnGameStarted_Params
	{	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpAxisEvt_Movement_X_K2Node_InputAxisEvent_1
	 */
	struct ABPA_Controls_C_InpAxisEvt_Movement_X_K2Node_InputAxisEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpAxisEvt_Movement_Y_K2Node_InputAxisEvent_2
	 */
	struct ABPA_Controls_C_InpAxisEvt_Movement_Y_K2Node_InputAxisEvent_2_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpAxisEvt_Turning_X_K2Node_InputAxisEvent_3
	 */
	struct ABPA_Controls_C_InpAxisEvt_Turning_X_K2Node_InputAxisEvent_3_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpAxisEvt_Turning_Y_K2Node_InputAxisEvent_4
	 */
	struct ABPA_Controls_C_InpAxisEvt_Turning_Y_K2Node_InputAxisEvent_4_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.OnMovement_X
	 */
	struct ABPA_Controls_C_OnMovement_X_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.OnMovement_Y
	 */
	struct ABPA_Controls_C_OnMovement_Y_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.OnTurning_X
	 */
	struct ABPA_Controls_C_OnTurning_X_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.OnTurning_Y
	 */
	struct ABPA_Controls_C_OnTurning_Y_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.OneTimeShowVignette
	 */
	struct ABPA_Controls_C_OneTimeShowVignette_Params
	{	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.EventInspect
	 */
	struct ABPA_Controls_C_EventInspect_Params
	{
	public:
		bool                                                       IsLeft;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpAxisEvt_TriggerAxis_Left_K2Node_InputAxisEvent_5
	 */
	struct ABPA_Controls_C_InpAxisEvt_TriggerAxis_Left_K2Node_InputAxisEvent_5_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.InpAxisEvt_TriggerAxis_Right_K2Node_InputAxisEvent_6
	 */
	struct ABPA_Controls_C_InpAxisEvt_TriggerAxis_Right_K2Node_InputAxisEvent_6_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.Crouch
	 */
	struct ABPA_Controls_C_Crouch_Params
	{
	public:
		float                                                      Axis;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.DoShowVignette
	 */
	struct ABPA_Controls_C_DoShowVignette_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.ProcessVignetteOnTurn
	 */
	struct ABPA_Controls_C_ProcessVignetteOnTurn_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.ProcessVignetteMove
	 */
	struct ABPA_Controls_C_ProcessVignetteMove_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.ImmediatelyHideVignette
	 */
	struct ABPA_Controls_C_ImmediatelyHideVignette_Params
	{	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.SetVignetteValue
	 */
	struct ABPA_Controls_C_SetVignetteValue_Params
	{
	public:
		float                                                      Transparancy;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.ResetRotation
	 */
	struct ABPA_Controls_C_ResetRotation_Params
	{	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.ExecuteUbergraph_BPA_Controls
	 */
	struct ABPA_Controls_C_ExecuteUbergraph_BPA_Controls_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Controls.BPA_Controls_C.TriggerPressedDispatcher__DelegateSignature
	 */
	struct ABPA_Controls_C_TriggerPressedDispatcher__DelegateSignature_Params
	{
	public:
		bool                                                       Left;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
