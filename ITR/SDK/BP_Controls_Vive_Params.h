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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.IsAllowFirearmControl
	 */
	struct ABP_Controls_Vive_C_IsAllowFirearmControl_Params
	{
	public:
		bool                                                       bIsAllowed;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.ConvertActionToButton
	 */
	struct ABP_Controls_Vive_C_ConvertActionToButton_Params
	{
	public:
		EControlAction                                             Action;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NXLC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ButtonName;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class UTexture2D*                                          HelpImage;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHand_EHand                                                DefaultHand;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Grip_Left_K2Node_InputActionEvent_22
	 */
	struct ABP_Controls_Vive_C_InpActEvt_Grip_Left_K2Node_InputActionEvent_22_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Grip_Left_K2Node_InputActionEvent_21
	 */
	struct ABP_Controls_Vive_C_InpActEvt_Grip_Left_K2Node_InputActionEvent_21_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Grip_Right_K2Node_InputActionEvent_20
	 */
	struct ABP_Controls_Vive_C_InpActEvt_Grip_Right_K2Node_InputActionEvent_20_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Grip_Right_K2Node_InputActionEvent_19
	 */
	struct ABP_Controls_Vive_C_InpActEvt_Grip_Right_K2Node_InputActionEvent_19_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Vive_center_Left_K2Node_InputActionEvent_18
	 */
	struct ABP_Controls_Vive_C_InpActEvt_Vive_center_Left_K2Node_InputActionEvent_18_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Vive_center_Left_K2Node_InputActionEvent_17
	 */
	struct ABP_Controls_Vive_C_InpActEvt_Vive_center_Left_K2Node_InputActionEvent_17_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Vive_center_Right_K2Node_InputActionEvent_16
	 */
	struct ABP_Controls_Vive_C_InpActEvt_Vive_center_Right_K2Node_InputActionEvent_16_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Vive_center_Right_K2Node_InputActionEvent_15
	 */
	struct ABP_Controls_Vive_C_InpActEvt_Vive_center_Right_K2Node_InputActionEvent_15_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_MagEject_Left_K2Node_InputActionEvent_14
	 */
	struct ABP_Controls_Vive_C_InpActEvt_MagEject_Left_K2Node_InputActionEvent_14_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_MagEject_Left_K2Node_InputActionEvent_13
	 */
	struct ABP_Controls_Vive_C_InpActEvt_MagEject_Left_K2Node_InputActionEvent_13_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_MagEject_Right_K2Node_InputActionEvent_12
	 */
	struct ABP_Controls_Vive_C_InpActEvt_MagEject_Right_K2Node_InputActionEvent_12_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_MagEject_Right_K2Node_InputActionEvent_11
	 */
	struct ABP_Controls_Vive_C_InpActEvt_MagEject_Right_K2Node_InputActionEvent_11_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_TurnLeft_Left_K2Node_InputActionEvent_10
	 */
	struct ABP_Controls_Vive_C_InpActEvt_TurnLeft_Left_K2Node_InputActionEvent_10_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_TurnLeft_Right_K2Node_InputActionEvent_9
	 */
	struct ABP_Controls_Vive_C_InpActEvt_TurnLeft_Right_K2Node_InputActionEvent_9_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_TurnRight_Left_K2Node_InputActionEvent_8
	 */
	struct ABP_Controls_Vive_C_InpActEvt_TurnRight_Left_K2Node_InputActionEvent_8_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_TurnRight_Right_K2Node_InputActionEvent_7
	 */
	struct ABP_Controls_Vive_C_InpActEvt_TurnRight_Right_K2Node_InputActionEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Menu_K2Node_InputActionEvent_6
	 */
	struct ABP_Controls_Vive_C_InpActEvt_Menu_K2Node_InputActionEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Firemode_Right_K2Node_InputActionEvent_5
	 */
	struct ABP_Controls_Vive_C_InpActEvt_Firemode_Right_K2Node_InputActionEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Firemode_Right_K2Node_InputActionEvent_4
	 */
	struct ABP_Controls_Vive_C_InpActEvt_Firemode_Right_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Firemode_Left_K2Node_InputActionEvent_3
	 */
	struct ABP_Controls_Vive_C_InpActEvt_Firemode_Left_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Firemode_Left_K2Node_InputActionEvent_2
	 */
	struct ABP_Controls_Vive_C_InpActEvt_Firemode_Left_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.InpActEvt_Crouch_K2Node_InputActionEvent_1
	 */
	struct ABP_Controls_Vive_C_InpActEvt_Crouch_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.HightlightButtons
	 */
	struct ABP_Controls_Vive_C_HightlightButtons_Params
	{
	public:
		bool                                                       Activate;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U881[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<EControlAction>                                     Actions;                                                 // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.ReceiveBeginPlay
	 */
	struct ABP_Controls_Vive_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.OnTurning_X
	 */
	struct ABP_Controls_Vive_C_OnTurning_X_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.OnMovement_X
	 */
	struct ABP_Controls_Vive_C_OnMovement_X_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.OnMovement_Y
	 */
	struct ABP_Controls_Vive_C_OnMovement_Y_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Vive.BP_Controls_Vive_C.ExecuteUbergraph_BP_Controls_Vive
	 */
	struct ABP_Controls_Vive_C_ExecuteUbergraph_BP_Controls_Vive_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
