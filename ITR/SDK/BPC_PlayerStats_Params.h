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
	 * Function BPC_PlayerStats.BPC_PlayerStats_C.SetTimePassed
	 */
	struct UBPC_PlayerStats_C_SetTimePassed_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RealDeltaSeconds;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_PlayerStats.BPC_PlayerStats_C.BuffEnd
	 */
	struct UBPC_PlayerStats_C_BuffEnd_Params
	{	};

	/**
	 * Function BPC_PlayerStats.BPC_PlayerStats_C.BuffStart
	 */
	struct UBPC_PlayerStats_C_BuffStart_Params
	{
	public:
		float                                                      AmmountToBoost;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ActiveTimeSec;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_PlayerStats.BPC_PlayerStats_C.CalculateRest
	 */
	struct UBPC_PlayerStats_C_CalculateRest_Params
	{
	public:
		bool                                                       Resting;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C3W1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DeltaSeconds;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_PlayerStats.BPC_PlayerStats_C.ChangeThirst
	 */
	struct UBPC_PlayerStats_C_ChangeThirst_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_PlayerStats.BPC_PlayerStats_C.IsLackOfNeeds
	 */
	struct UBPC_PlayerStats_C_IsLackOfNeeds_Params
	{
	public:
		bool                                                       Lack;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z3DN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_PlayerStats.BPC_PlayerStats_C.HungerThirstDamage
	 */
	struct UBPC_PlayerStats_C_HungerThirstDamage_Params
	{	};

	/**
	 * Function BPC_PlayerStats.BPC_PlayerStats_C.CalculateStamina
	 */
	struct UBPC_PlayerStats_C_CalculateStamina_Params
	{
	public:
		bool                                                       Use;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0M3S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DeltaSeconds;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_PlayerStats.BPC_PlayerStats_C.CalculateThirst
	 */
	struct UBPC_PlayerStats_C_CalculateThirst_Params
	{	};

	/**
	 * Function BPC_PlayerStats.BPC_PlayerStats_C.CalculateNutrition
	 */
	struct UBPC_PlayerStats_C_CalculateNutrition_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IDU8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_PlayerStats.BPC_PlayerStats_C.DisplayStats
	 */
	struct UBPC_PlayerStats_C_DisplayStats_Params
	{	};

	/**
	 * Function BPC_PlayerStats.BPC_PlayerStats_C.OnGameStarted
	 */
	struct UBPC_PlayerStats_C_OnGameStarted_Params
	{	};

	/**
	 * Function BPC_PlayerStats.BPC_PlayerStats_C.UseStamina
	 */
	struct UBPC_PlayerStats_C_UseStamina_Params
	{
	public:
		bool                                                       Use;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8AVY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      StaminaUseMult;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_PlayerStats.BPC_PlayerStats_C.ReceiveTick
	 */
	struct UBPC_PlayerStats_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_PlayerStats.BPC_PlayerStats_C.ExecuteUbergraph_BPC_PlayerStats
	 */
	struct UBPC_PlayerStats_C_ExecuteUbergraph_BPC_PlayerStats_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GL3G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_PlayerStats.BPC_PlayerStats_C.ThirstEnd__DelegateSignature
	 */
	struct UBPC_PlayerStats_C_ThirstEnd__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
