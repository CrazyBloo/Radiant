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
	 * Function BPC_Stock.BPC_Stock_C.ReceiveBeginPlay
	 */
	struct UBPC_Stock_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_Stock.BPC_Stock_C.ReceiveLeverStateChanged
	 */
	struct UBPC_Stock_C_ReceiveLeverStateChanged_Params
	{
	public:
		bool                                                       LeverStatus;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EVRInteractibleLeverEventType                              LeverStatusType;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D4IF[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      LeverAngleAtTime;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FullLeverAngleAtTime;                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Stock.BPC_Stock_C.Setup
	 */
	struct UBPC_Stock_C_Setup_Params
	{	};

	/**
	 * Function BPC_Stock.BPC_Stock_C.ReceiveLeverFinishedLerping
	 */
	struct UBPC_Stock_C_ReceiveLeverFinishedLerping_Params
	{
	public:
		float                                                      LeverFinalAngle;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Stock.BPC_Stock_C.OnLeverAngleUpdated
	 */
	struct UBPC_Stock_C_OnLeverAngleUpdated_Params
	{	};

	/**
	 * Function BPC_Stock.BPC_Stock_C.SetBlocked
	 */
	struct UBPC_Stock_C_SetBlocked_Params
	{
	public:
		bool                                                       isBlocked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Stock.BPC_Stock_C.ExecuteUbergraph_BPC_Stock
	 */
	struct UBPC_Stock_C_ExecuteUbergraph_BPC_Stock_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
