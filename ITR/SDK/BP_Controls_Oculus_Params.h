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
	 * Function BP_Controls_Oculus.BP_Controls_Oculus_C.ConvertActionToButton
	 */
	struct ABP_Controls_Oculus_C_ConvertActionToButton_Params
	{
	public:
		EControlAction                                             Action;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LNAN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ButtonName;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class UTexture2D*                                          HelpImage;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHand_EHand                                                DefaultHand;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Oculus.BP_Controls_Oculus_C.InpActEvt_Grip_Left_K2Node_InputActionEvent_4
	 */
	struct ABP_Controls_Oculus_C_InpActEvt_Grip_Left_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Oculus.BP_Controls_Oculus_C.InpActEvt_Grip_Left_K2Node_InputActionEvent_3
	 */
	struct ABP_Controls_Oculus_C_InpActEvt_Grip_Left_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Oculus.BP_Controls_Oculus_C.InpActEvt_Grip_Right_K2Node_InputActionEvent_2
	 */
	struct ABP_Controls_Oculus_C_InpActEvt_Grip_Right_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Oculus.BP_Controls_Oculus_C.InpActEvt_Grip_Right_K2Node_InputActionEvent_1
	 */
	struct ABP_Controls_Oculus_C_InpActEvt_Grip_Right_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Oculus.BP_Controls_Oculus_C.InpActEvt_One_K2Node_InputKeyEvent_1
	 */
	struct ABP_Controls_Oculus_C_InpActEvt_One_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Oculus.BP_Controls_Oculus_C.HightlightButtons
	 */
	struct ABP_Controls_Oculus_C_HightlightButtons_Params
	{
	public:
		bool                                                       Activate;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BQGD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<EControlAction>                                     Actions;                                                 // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Controls_Oculus.BP_Controls_Oculus_C.OnMovement_X
	 */
	struct ABP_Controls_Oculus_C_OnMovement_X_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Oculus.BP_Controls_Oculus_C.OnMovement_Y
	 */
	struct ABP_Controls_Oculus_C_OnMovement_Y_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Oculus.BP_Controls_Oculus_C.OnTurning_Y
	 */
	struct ABP_Controls_Oculus_C_OnTurning_Y_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controls_Oculus.BP_Controls_Oculus_C.ExecuteUbergraph_BP_Controls_Oculus
	 */
	struct ABP_Controls_Oculus_C_ExecuteUbergraph_BP_Controls_Oculus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
