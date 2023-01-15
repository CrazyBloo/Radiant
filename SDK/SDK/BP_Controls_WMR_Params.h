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
	 * Function BP_Controls_WMR.BP_Controls_WMR_C.CheckCanTurn
	 */
	struct ABP_Controls_WMR_C_CheckCanTurn_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TurnAllowed;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Controls_WMR.BP_Controls_WMR_C.ConvertActionToButton
	 */
	struct ABP_Controls_WMR_C_ConvertActionToButton_Params
	{
	public:
		EControlAction                                             Action;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_20W6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ButtonName;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class UTexture2D*                                          HelpImage;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHand_EHand                                                DefaultHand;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_WMR.BP_Controls_WMR_C.InpActEvt_Grip_Left_K2Node_InputActionEvent_4
	 */
	struct ABP_Controls_WMR_C_InpActEvt_Grip_Left_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_WMR.BP_Controls_WMR_C.InpActEvt_Grip_Left_K2Node_InputActionEvent_3
	 */
	struct ABP_Controls_WMR_C_InpActEvt_Grip_Left_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_WMR.BP_Controls_WMR_C.InpActEvt_Grip_Right_K2Node_InputActionEvent_2
	 */
	struct ABP_Controls_WMR_C_InpActEvt_Grip_Right_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_WMR.BP_Controls_WMR_C.InpActEvt_Grip_Right_K2Node_InputActionEvent_1
	 */
	struct ABP_Controls_WMR_C_InpActEvt_Grip_Right_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_WMR.BP_Controls_WMR_C.HightlightButtons
	 */
	struct ABP_Controls_WMR_C_HightlightButtons_Params
	{
	public:
		bool                                                       Activate;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2H9Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<EControlAction>                                     Actions;                                                 // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Controls_WMR.BP_Controls_WMR_C.ReceiveBeginPlay
	 */
	struct ABP_Controls_WMR_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Controls_WMR.BP_Controls_WMR_C.OnTurning_Y
	 */
	struct ABP_Controls_WMR_C_OnTurning_Y_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_WMR.BP_Controls_WMR_C.OnMovement_X
	 */
	struct ABP_Controls_WMR_C_OnMovement_X_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_WMR.BP_Controls_WMR_C.OnMovement_Y
	 */
	struct ABP_Controls_WMR_C_OnMovement_Y_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_WMR.BP_Controls_WMR_C.ExecuteUbergraph_BP_Controls_WMR
	 */
	struct ABP_Controls_WMR_C_ExecuteUbergraph_BP_Controls_WMR_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DFYG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
