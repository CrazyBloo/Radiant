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
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.GetDamageDealerName
	 */
	struct ABP_PRPlayerController_C_GetDamageDealerName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.GetDamageDealerTag
	 */
	struct ABP_PRPlayerController_C_GetDamageDealerTag_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.GetActionButtonName
	 */
	struct ABP_PRPlayerController_C_GetActionButtonName_Params
	{
	public:
		EControlAction                                             Action;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TOGS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ButtonName;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class UTexture2D*                                          HelpImage;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHand_EHand                                                DefaultHand;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KFU2[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.GetTurning_Y
	 */
	struct ABP_PRPlayerController_C_GetTurning_Y_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.GetTurning_X
	 */
	struct ABP_PRPlayerController_C_GetTurning_X_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.GetControllerType
	 */
	struct ABP_PRPlayerController_C_GetControllerType_Params
	{
	public:
		EPRControllerType                                          ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.IsAllInputBlocked
	 */
	struct ABP_PRPlayerController_C_IsAllInputBlocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.AsString
	 */
	struct ABP_PRPlayerController_C_AsString_Params
	{
	public:
		TArray<EControlAction>                                     Actions;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              String;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.HandHaptic
	 */
	struct ABP_PRPlayerController_C_HandHaptic_Params
	{
	public:
		EHapticsCurve                                              HapticType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.bLockMovement
	 */
	struct ABP_PRPlayerController_C_bLockMovement_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.BindLeft
	 */
	struct ABP_PRPlayerController_C_BindLeft_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.BindRight
	 */
	struct ABP_PRPlayerController_C_BindRight_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.RunToggle
	 */
	struct ABP_PRPlayerController_C_RunToggle_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.FireMode
	 */
	struct ABP_PRPlayerController_C_FireMode_Params
	{
	public:
		bool                                                       Right;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.InteractLeft
	 */
	struct ABP_PRPlayerController_C_InteractLeft_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.InteractRight
	 */
	struct ABP_PRPlayerController_C_InteractRight_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.EjectMag
	 */
	struct ABP_PRPlayerController_C_EjectMag_Params
	{
	public:
		bool                                                       Right;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.Arm
	 */
	struct ABP_PRPlayerController_C_Arm_Params
	{
	public:
		bool                                                       Right;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.Backward
	 */
	struct ABP_PRPlayerController_C_Backward_Params
	{
	public:
		float                                                      Axis;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.Left
	 */
	struct ABP_PRPlayerController_C_Left_Params
	{
	public:
		float                                                      Axis;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.Sprint
	 */
	struct ABP_PRPlayerController_C_Sprint_Params
	{	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.TurnPlayerToFaceActor
	 */
	struct ABP_PRPlayerController_C_TurnPlayerToFaceActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.ShowCapTouch
	 */
	struct ABP_PRPlayerController_C_ShowCapTouch_Params
	{
	public:
		EOculusButton                                              Button;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Show;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.TurnPlayer
	 */
	struct ABP_PRPlayerController_C_TurnPlayer_Params
	{
	public:
		float                                                      Degrees;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.EjectMagDrop
	 */
	struct ABP_PRPlayerController_C_EjectMagDrop_Params
	{
	public:
		bool                                                       Right;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.UpdateControllerShifts
	 */
	struct ABP_PRPlayerController_C_UpdateControllerShifts_Params
	{	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.TriggerLeft
	 */
	struct ABP_PRPlayerController_C_TriggerLeft_Params
	{
	public:
		float                                                      AxisAngle;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.TriggerRight
	 */
	struct ABP_PRPlayerController_C_TriggerRight_Params
	{
	public:
		float                                                      AngleAxis;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.ReceiveBeginPlay
	 */
	struct ABP_PRPlayerController_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.StartPossesCheck
	 */
	struct ABP_PRPlayerController_C_StartPossesCheck_Params
	{	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.BlockInput
	 */
	struct ABP_PRPlayerController_C_BlockInput_Params
	{
	public:
		TArray<EControlAction>                                     Actions;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       AllowInput;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.HandHaptics
	 */
	struct ABP_PRPlayerController_C_HandHaptics_Params
	{
	public:
		EHapticsCurve                                              Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.ShowButtons
	 */
	struct ABP_PRPlayerController_C_ShowButtons_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LMVZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<EControlAction>                                     Actions;                                                 // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.StopHaptics
	 */
	struct ABP_PRPlayerController_C_StopHaptics_Params
	{
	public:
		EControllerHand                                            hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.BlockAll
	 */
	struct ABP_PRPlayerController_C_BlockAll_Params
	{	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.AllowAll
	 */
	struct ABP_PRPlayerController_C_AllowAll_Params
	{	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.AllowOnly
	 */
	struct ABP_PRPlayerController_C_AllowOnly_Params
	{
	public:
		TArray<EControlAction>                                     Actions;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.InitControlScheme
	 */
	struct ABP_PRPlayerController_C_InitControlScheme_Params
	{	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.WaitForVRFocus
	 */
	struct ABP_PRPlayerController_C_WaitForVRFocus_Params
	{	};

	/**
	 * Function BP_PRPlayerController.BP_PRPlayerController_C.ExecuteUbergraph_BP_PRPlayerController
	 */
	struct ABP_PRPlayerController_C_ExecuteUbergraph_BP_PRPlayerController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IKDN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
