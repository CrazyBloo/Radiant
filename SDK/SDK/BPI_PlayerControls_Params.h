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
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.TriggerRight
	 */
	struct UBPI_PlayerControls_C_TriggerRight_Params
	{
	public:
		float                                                      AngleAxis;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.TriggerLeft
	 */
	struct UBPI_PlayerControls_C_TriggerLeft_Params
	{
	public:
		float                                                      AxisAngle;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.UpdateControllerShifts
	 */
	struct UBPI_PlayerControls_C_UpdateControllerShifts_Params
	{	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.AllowOnly
	 */
	struct UBPI_PlayerControls_C_AllowOnly_Params
	{
	public:
		TArray<EControlAction>                                     Actions;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.AllowAll
	 */
	struct UBPI_PlayerControls_C_AllowAll_Params
	{	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.BlockAll
	 */
	struct UBPI_PlayerControls_C_BlockAll_Params
	{	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.EjectMagDrop
	 */
	struct UBPI_PlayerControls_C_EjectMagDrop_Params
	{
	public:
		bool                                                       Right;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.GetActionButtonName
	 */
	struct UBPI_PlayerControls_C_GetActionButtonName_Params
	{
	public:
		EControlAction                                             Action;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T1DD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ButtonName;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class UTexture2D*                                          HelpImage;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EHand_EHand                                                DefaultHand;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.HandHaptics
	 */
	struct UBPI_PlayerControls_C_HandHaptics_Params
	{
	public:
		EHapticsCurve                                              Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EControllerHand                                            hand;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.StopHaptics
	 */
	struct UBPI_PlayerControls_C_StopHaptics_Params
	{
	public:
		EControllerHand                                            hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.TurnPlayer
	 */
	struct UBPI_PlayerControls_C_TurnPlayer_Params
	{
	public:
		float                                                      Degrees;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.ShowCapTouch
	 */
	struct UBPI_PlayerControls_C_ShowCapTouch_Params
	{
	public:
		EOculusButton                                              Button;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Show;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.BlockInput
	 */
	struct UBPI_PlayerControls_C_BlockInput_Params
	{
	public:
		TArray<EControlAction>                                     Actions;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       AllowInput;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.TurnPlayerToFaceActor
	 */
	struct UBPI_PlayerControls_C_TurnPlayerToFaceActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.ShowButtons
	 */
	struct UBPI_PlayerControls_C_ShowButtons_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_20TU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<EControlAction>                                     Actions;                                                 // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.Sprint
	 */
	struct UBPI_PlayerControls_C_Sprint_Params
	{	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.Left
	 */
	struct UBPI_PlayerControls_C_Left_Params
	{
	public:
		float                                                      Axis;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.Backward
	 */
	struct UBPI_PlayerControls_C_Backward_Params
	{
	public:
		float                                                      Axis;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.Arm
	 */
	struct UBPI_PlayerControls_C_Arm_Params
	{
	public:
		bool                                                       Right;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.EjectMag
	 */
	struct UBPI_PlayerControls_C_EjectMag_Params
	{
	public:
		bool                                                       Right;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.InteractRight
	 */
	struct UBPI_PlayerControls_C_InteractRight_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.InteractLeft
	 */
	struct UBPI_PlayerControls_C_InteractLeft_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.FireMode
	 */
	struct UBPI_PlayerControls_C_FireMode_Params
	{
	public:
		bool                                                       Right;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.RunToggle
	 */
	struct UBPI_PlayerControls_C_RunToggle_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.BindRight
	 */
	struct UBPI_PlayerControls_C_BindRight_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PlayerControls.BPI_PlayerControls_C.BindLeft
	 */
	struct UBPI_PlayerControls_C_BindLeft_Params
	{
	public:
		bool                                                       Pressed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
